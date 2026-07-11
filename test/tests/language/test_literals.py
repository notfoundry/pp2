"""Long literal syntax and the boundary between literals and constructors.

A parenthesised group is a Quote unless it contains exactly one decimal digit.
That one shape begins a Long literal, whose remaining digits are adjacent
single-digit groups:

    (2)(5)(6)       a Long, 256
    (a, b, c)       a Quote, including its commas
    List(a, b, c)   an explicitly constructed List

A Long's value is already a most-significant-digit-first sequence of digit
groups, so its literal is also its representation and costs no arithmetic.
"""
import pytest


LONG_CASES = [
    # the literal is the internal digit-seq, written out
    ("print((2)(5)(6))", "256"),
    ("print((1)(2)(8))", "128"),
    ("print((7))", "7"),
    ("print((0))", "0"),
    # leading zeros are stripped, as FIX does everywhere else
    ("print((0)(0)(7))", "7"),
    ("print((0)(1)(0))", "10"),
    ("print((0)(0)(0))", "0"),
    # past the Int wall at 127, which is the point of the notation
    ("print((9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9))",
     "99999999999999999999"),
    # syntax after the digits compiles as an ordinary continuation
    ("print((2)(5)(6) plus (1))", "257"),
    ("print((2)(5)(6) minus (6))", "250"),
    ("print((1)(2)(8) times (2))", "256"),
    ("print((2)(5)(6) div (4))", "64"),
    ("print((2)(5)(6) mod (7))", "4"),
    ("print((1)(0) gt (9))", "true"),
    ("print((1)(0) lt (9))", "false"),
    # a method claims the next group as its argument list, so a Long literal
    # operand is itself nested inside that argument group
    ("print((1)(2)(8) plus ((1)(2)(8)))", "256"),
    ("print((1)(0)(0) times ((1)(0)(0)))", "10000"),
    # without nesting: (128 plus 1), then append 2 and 8 to the returned Long
    ("print((1)(2)(8) plus (1)(2)(8))", "12928"),
    # Long literals retain their meaning in argument position
    ("print((2)(5)(6) eq ((2)(5)(6)))", "true"),
    ("print((2)(5)(6) eq ((2)(5)(7)))", "false"),
    ("print(Long ((2)(5)(6)))", "256"),
    # Int and Long compare and calculate across the representation boundary
    ("print((1)(0) eq (10))", "true"),
    ("print((9) eq (9))", "true"),
    ("print(10 eq ((1)(0)))", "true"),
    ("print((1)(0)(0) plus (27))", "127"),
    ("print(127 plus ((1)))", "128"),
    # Long.call is the digit appender used by the literal
    ("print(Long (1) (2) (8))", "128"),
    # variables and functions see an ordinary Long value
    ("x ((2)(5)(6)), print(x)", "256"),
    ("x ((2)(5)(6)), print(x plus (x))", "512"),
    ("f (fn (n) (n times ((1)(0)(0)))), print(f call (5))", "500"),
    ("print((1)(2)(8) eq (Long (((1)(2)(8)))))", "true"),
]


@pytest.mark.parametrize("body,expected", LONG_CASES)
def test_long_literal(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_long_literal_is_long(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print((7) type))") == "Long"


def test_bare_digit_is_still_int(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(7 type))") == "Int"


@pytest.mark.parametrize("body", ["print((2)(x))", "print((2)(1,2))"])
def test_calling_a_long_on_a_non_digit_group_is_undefined(pp, body):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(
        "8PP2_LANGUAGE_DEFINITION_EXCEPTION(Long_call)")


QUOTE_CASES = [
    ("print((a))", "a"),
    ("print((a b c))", "a b c"),
    ("print((hello, world))", "hello, world"),
    ("print((,))", ","),
    ("print((1,2,3))", "1,2,3"),
    ("print((hello world) type)", "Quote"),
    ("print((a,b) type)", "Quote"),
    # a group holding a group remains a Quote of that group
    ("print(((1)(2)))", "(1)(2)"),
    ("print(((1)(2)) type)", "Quote"),
    ("print(((a)))", "(a)"),
    # a digit followed by anything inside the same group is a Quote
    ("print((2 plus))", "2 plus"),
    ("print((2 plus) type)", "Quote"),
    ("print(() type)", "Quote"),
]


@pytest.mark.parametrize("body,expected", QUOTE_CASES)
def test_parenthesised_group_quotes(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


def test_comma_quote_in_variable(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(Q ((a,b)), print(Q))") == pp.parse("a,b")


def test_put_emits_comma_quote(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(put((,)))") == pp.parse(",")


def test_comma_quote_has_same_meaning_across_call_arities(pp):
    pp.include("pp2/pp2.h")
    one_arg = "print(fn (x) (x) ((a,b)))"
    two_args = "print(fn (x, y) (x) ((a,b), 0))"
    assert pp.expand("PP2({})", one_arg) == pp.parse("a,b")
    assert pp.expand("PP2({})", two_args) == pp.parse("a,b")


def test_explicit_list_constructor_owns_list_syntax(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(List() type))") == "List"
    assert pp.expand("PP2(print(List(1) size()))") == "1"
    assert pp.expand("PP2(print(List(1,2,3)))") == pp.parse("(1,2,3)")


def test_explicit_list_can_contain_a_comma_quote(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(List((a,b), 3) head()))") == pp.parse("a,b")


def test_fn_built_from_a_parameter_quote(pp):
    pp.include("pp2/pp2.h")
    prog = "PP2(P ((x, y)), B ((x times (y))), F (Fn (P, B)), print(F call (6, 7)))"
    assert pp.expand(prog) == "42"


def test_long_literal_in_a_loop(pp):
    pp.include("pp2/pp2.h")
    prog = "PP2(t (0), for (i (0), i lt (3), i (i inc())) (t (t plus ((1)(0)(0)))), print(t))"
    assert pp.expand(prog) == "300"


def test_long_literals_nested_in_explicit_list(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(List((1)(2), (3)(4)) at (1)))") == "34"
    assert pp.expand("PP2(print((1)(2)(8) plus ((1)(2)(8) plus ((1)(2)(8)))))") == "384"
