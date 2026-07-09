"""Equality: `eq` is rooted on Any, so every type has it, and `neq` follows.

The preprocessor can only compare tokens that have been registered, which PP2
does for every type name via `PP2_SYM_<name>`. That splits equality in two.

Decidable, and defined here: Int and Long by arithmetic, Bool by value, Type by
name, List elementwise. Values of different types are never equal, decided at the
Any root by comparing the two type names, so `1 eq (true)` is `false` rather than
an error and `contains` can ask every element of a heterogeneous list.

Undecidable, and left to raise: two values of the same type whose values are
arbitrary token sequences. Quote, Seq and Fn are the types in that position, and
no amount of preprocessor cleverness compares `(hello world)` against a copy of
itself. Those cases hit the Any root with matching type names and throw.
"""
import pytest


# --- numbers, unchanged behaviour ------------------------------------------
@pytest.mark.parametrize("body,expected", [
    ("print(1 eq (1))", "true"),
    ("print(1 eq (2))", "false"),
    ("print(0 eq (0))", "true"),
    ("print(127 inc() eq (127 inc()))", "true"),   # Long vs Long
    ("print(127 inc() eq (127))", "false"),        # Long vs Int
    ("print(127 eq (127 inc()))", "false"),        # Int vs Long
    ("print(63 plus (64) eq (127))", "true"),      # Int result
])
def test_numeric_eq(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- bool ------------------------------------------------------------------
@pytest.mark.parametrize("body,expected", [
    ("print(true eq (true))", "true"),
    ("print(false eq (false))", "true"),
    ("print(true eq (false))", "false"),
    ("print(false eq (true))", "false"),
    ("print(true and (false) eq (false))", "true"),
])
def test_bool_eq(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- values of different types are never equal, and never an error ----------
@pytest.mark.parametrize("body", [
    "print(1 eq (true))",
    "print(true eq (1))",
    "print(0 eq (false))",          # not the same value, whatever C would say
    "print(1 eq (List (1)))",
    "print(List (1) eq (1))",
    "print((a) eq (1))",            # Quote receiver falls back to Any_eq
    "print(1 eq ((a)))",
    "print(127 inc() eq (true))",   # Long receiver
    "print(1 type eq (1))",         # Type vs Int
    "print(fn (x) (x) eq (1))",     # Fn receiver
])
def test_cross_type_eq_is_false(pp, body):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == "false"


# --- type objects compare by name ------------------------------------------
@pytest.mark.parametrize("body,expected", [
    ("print(1 type eq (Int))", "true"),
    ("print(1 type eq (Bool))", "false"),
    ("print(true type eq (Bool))", "true"),
    ("print(Int eq (Int))", "true"),
    ("print(Int eq (Long))", "false"),
    ("print(List (1) type eq (List (2) type))", "true"),
    ("print(127 inc() type eq (Long))", "true"),
    ("print(Type eq (Type))", "true"),
])
def test_type_eq(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- lists compare elementwise ---------------------------------------------
@pytest.mark.parametrize("body,expected", [
    ("print(List () eq (List ()))", "true"),
    ("print(List (1) eq (List (1)))", "true"),
    ("print(List (1, 2) eq (List (1, 2)))", "true"),
    ("print(List (1, 2) eq (List (1, 3)))", "false"),
    ("print(List (1, 2) eq (List (2, 1)))", "false"),   # order matters
    # length mismatch, both directions, and against the empty list
    ("print(List (1, 2) eq (List (1)))", "false"),
    ("print(List (1) eq (List (1, 2)))", "false"),
    ("print(List () eq (List (1)))", "false"),
    ("print(List (1) eq (List ()))", "false"),
    # heterogeneous elements
    ("print(List (1, true) eq (List (1, true)))", "true"),
    ("print(List (1, true) eq (List (1, false)))", "false"),
    ("print(List (1, true) eq (List (true, 1)))", "false"),
    # crosses the machine's 8-element chunk boundary
    ("print(List (1, 2, 3, 4, 5, 6, 7, 8, 9) eq (List (1, 2, 3, 4, 5, 6, 7, 8, 9)))", "true"),
    ("print(List (1, 2, 3, 4, 5, 6, 7, 8, 9) eq (List (1, 2, 3, 4, 5, 6, 7, 8, 0)))", "false"),
    # a list is not a non-list
    ("print(List (1) eq (1))", "false"),
])
def test_list_eq(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- a list of lists recurses into the same handler ------------------------
@pytest.mark.parametrize("body,expected", [
    ("print(List (List (1), List (2)) eq (List (List (1), List (2))))", "true"),
    ("print(List (List (1), List (2)) eq (List (List (1), List (3))))", "false"),
    ("print(List (List (1), List (2)) eq (List (List (1), List (2, 3))))", "false"),
    ("print(List (List ()) eq (List (List ())))", "true"),
    ("print(List (List (List (7))) eq (List (List (List (7)))))", "true"),
    ("print(List (List (List (7))) eq (List (List (List (8)))))", "false"),
])
def test_nested_list_eq(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- contains is total now that eq is ---------------------------------------
@pytest.mark.parametrize("body,expected", [
    ("print(List (1, true) contains (true))", "true"),
    ("print(List (1, true) contains (1))", "true"),
    ("print(List (1, 2) contains (true))", "false"),      # was a Bool_eq exception
    ("print(List (true, false) contains (false))", "true"),
    ("print(List (List (1), List (2)) contains (List (2)))", "true"),
    ("print(List (List (1), List (2)) contains (List (3)))", "false"),
    ("print(List (Int, Bool) contains (Bool))", "true"),
    ("print(List (Int, Bool) contains (Long))", "false"),
    ("print(List () contains (true))", "false"),
])
def test_contains_over_mixed_types(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- neq is the negation of whatever eq the receiver resolves to ------------
@pytest.mark.parametrize("body,expected", [
    ("print(1 neq (2))", "true"),
    ("print(1 neq (1))", "false"),
    ("print(true neq (false))", "true"),
    ("print(true neq (true))", "false"),
    ("print(1 neq (true))", "true"),                     # cross-type
    ("print(1 type neq (Bool))", "true"),
    ("print(Int neq (Int))", "false"),
    ("print(List (1, 2) neq (List (1, 3)))", "true"),
    ("print(List (1, 2) neq (List (1, 2)))", "false"),
    ("print(List (List (1)) neq (List (List (1))))", "false"),
])
def test_neq(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- eq composes with the rest of the language -----------------------------
def test_eq_in_a_condition(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(if (1 plus (1) eq (2)) (print((yes))) else (print((no))))") == "yes"


def test_eq_in_a_filter_predicate(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(List (1, 2, 1) filter (fn (x) (x eq (1)))))") == pp.parse("(1, 1)")


def test_neq_in_a_filter_predicate(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(List (1, 2, 1) filter (fn (x) (x neq (1)))))") == pp.parse("(2)")


def test_eq_of_a_variable_against_itself(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (List (1, 2)), print(X eq (X)))") == "true"


# --- eq is self-nesting, so it must not paint its own handler ---------------
# (see test_method_reentrancy.py for the mechanism)
@pytest.mark.parametrize("body,expected", [
    ("print(true eq (1 eq (1)))", "true"),
    ("print(false eq (1 eq (2)))", "true"),
    ("print(List (1) eq (List (1)) eq (List (2) eq (List (2))))", "true"),
])
def test_eq_nested_in_its_own_argument(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- undecidable: same type, arbitrary token values -------------------------
# The preprocessor cannot compare two arbitrary tokens, so rather than answer
# wrongly these raise. Different types still compare false (tested above).
@pytest.mark.parametrize("body,exception", [
    ("print((a) eq ((a)))", "Quote_eq"),
    ("print((a) eq ((b)))", "Quote_eq"),
    ("print((a) neq ((a)))", "Quote_eq"),
    ("print(fn (x) (x) eq (fn (x) (x)))", "Fn_eq"),
    ("print(Seq (((1)(2))) eq (Seq (((1)(2)))))", "Seq_eq"),
])
def test_undecidable_eq_throws(pp, body, exception):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) \
        == pp.parse("8PP2_LANGUAGE_DEFINITION_EXCEPTION({})".format(exception))
