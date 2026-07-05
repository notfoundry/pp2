"""User functions and local variables across the full a-z / A-Z slot range.

Regression guard for a missing slot definition: PP2_DEF_a was absent from the
variable table (which starts at b), so the variable/parameter `a` compiled to
nothing -- breaking any fn whose parameter list or body used `a`, and any use
of `a` as a local. This masqueraded as a "3+ parameter fn" bug.
"""
import pytest


@pytest.mark.parametrize("body,expected", [
    ("print(fn (a) (a) (5))", "5"),
    ("print(fn (b) (b) (5))", "5"),
    # multi-parameter functions, including the first slot `a`
    ("print(fn (a, b) (a plus (b)) (2, 3))", "5"),
    ("print(fn (a, b, c) (a plus (b) plus (c)) (1, 2, 4))", "7"),
    ("print(fn (b, c, d) (b plus (c) plus (d)) (1, 2, 4))", "7"),
    ("print(fn (a, b, c, d) (a plus (b) plus (c) plus (d)) (1, 2, 3, 4))", "10"),
])
def test_fn_parameters(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("var", ["a", "b", "m", "z", "A", "Z"])
def test_local_variable_roundtrip(pp, var):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({0} (7), print({0}))", var) == "7"


# A function held in a variable is invoked with the explicit `call` method
# (`F (v)` is assignment). These also exercise nested/sibling stored-fn calls,
# which lean on the per-call argument and local frames.
def test_stored_fn_call(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(F (fn (x) (x plus (1))), print(F call (3)))") == "4"


def test_stored_fn_call_nested(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(F (fn (x) (x plus (1))), print(F call (F call (3))))") == "5"


def test_stored_fn_call_two_functions(pp):
    pp.include("pp2/pp2.h")
    prog = "PP2(F (fn (x) (x times (2))), G (fn (y) (y plus (1))), print(F call (G call (10))))"
    assert pp.expand(prog) == "22"


def test_stored_fn_call_siblings(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(F (fn (x) (x plus (1))), print(F call (3) plus (F call (10))))") == "15"


# A leading parenthesised group is quote syntax, not evaluation-grouping;
# expression grouping is expressed by left-associative method chains and by
# method arguments. These guard the intended semantics.
@pytest.mark.parametrize("body,expected", [
    ("print(6 times (7) plus (8))", "50"),   # left-assoc chain
    ("print(2 plus (3 times (4)))", "14"),    # grouping via a method argument
    ("print((6 times (7)))", "6 times ( 7 )"),  # leading paren stays a quote
])
def test_grouping_and_quote(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected
