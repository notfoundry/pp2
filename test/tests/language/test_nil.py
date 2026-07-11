"""Nil: the value of everything done for its effect rather than for an answer.

A print, an assignment, a loop, an if that was not taken, an empty body, and a
function whose last statement is a statement all answer with `nil`.

Before Nil these left the accumulator empty, which is not an object at all, so
anything that went on to read the result reached for the object's fields, found
no triple to take apart, and spilled the accessor's own macro name into the
output. Nil closes that hole.

Nil prints as nothing at all, exactly like a quote holding no tokens: a
procedure has nothing to say, so printing its result adds no word to the output.
"""
import pytest


# --- nil prints as nothing, just like an empty quote ------------------------
def test_nil_prints_as_nothing(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print((a)), print(nil), print((b)))") == "a b"


def test_nil_prints_exactly_like_the_empty_quote(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print((a)), print(nil), print((b)))") == \
           pp.expand("PP2(print((a)), print(()), print((b)))")


# --- the statements that answer with nil ------------------------------------
PROCEDURE_CASES = [
    # a print is done for its effect
    ("print(print(7))", "7"),
    # an assignment is a statement, not an expression
    ("print(X (5))", ""),
    # an if that was not taken, with no else clause
    ("print(if (false) (print(1)))", ""),
    # a loop
    ("i (0), print(while (i lt (2)) (i (i plus (1))))", ""),
    # an empty body
    ("print(fn () () ())", ""),
]


@pytest.mark.parametrize("body,expected", PROCEDURE_CASES)
def test_procedures_answer_with_nil(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


# the regression this type was introduced for: a function whose body ends in a
# statement returned an empty accumulator, and printing that leaked the internal
# accessor macro's own name into the output
def test_function_ending_in_a_statement_returns_nil(pp):
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_justprint PP2_FN (x) (print((hi)))")
    assert pp.expand("PP2(print(justprint(1)), print((end)))") == "hi end"


def test_function_with_an_empty_body_returns_nil(pp):
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_nothing PP2_FN (x) ()")
    assert pp.expand("PP2(print(nothing(1)), print((end)))") == "end"


# --- nil is an ordinary value ----------------------------------------------
EQ_CASES = [
    ("print(nil eq (nil))", "true"),
    ("print(nil neq (nil))", "false"),
    # nil is equal to nothing else, and nothing else is equal to nil
    ("print(nil eq (1))", "false"),
    ("print(1 eq (nil))", "false"),
    ("print(nil eq (false))", "false"),
    ("print(nil eq ((q)))", "false"),
]


@pytest.mark.parametrize("body,expected", EQ_CASES)
def test_nil_equality(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_nil_can_be_stored_and_read_back(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(Y (nil), print(Y eq (nil)))") == "true"


def test_a_statements_result_is_nil(pp):
    # the value an assignment leaves behind really is nil, not merely nothing
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(Y (X (5)), print(Y eq (nil)))") == "true"


def test_nil_construct_discards_a_value(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Nil(42) eq (nil)))") == "true"


# --- Type gained a str at the same time, so a type prints as its name -------
TYPE_STR_CASES = [
    ("print(Nil)", "Nil"),
    ("print(Bool)", "Bool"),
    ("print(Int)", "Int"),
    ("print(Quote)", "Quote"),
]


@pytest.mark.parametrize("body,expected", TYPE_STR_CASES)
def test_a_type_prints_as_its_name(pp, body, expected):
    # without Type_str a type fell through to Any_str and printing one spilled
    # its internals: (,Type,(,Bool,Any))
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected
