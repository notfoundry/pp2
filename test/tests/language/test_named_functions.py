"""Named top-level functions via PP2_FN -- pp2's analogue of order-pp's
`#define ORDER_PP_DEF_<name> ORDER_PP_FN(8fn(...))`.

A name bound with PP2_FN resolves to a first-class Fn value, so it works in
every position: direct application `add(2, 3)`, assign-then-call
`F (add), F call (2, 3)`, and passed as a higher-order argument `map (inc1)`.
Direct application is not special-cased -- it rides the compiler's existing
SELF_CALL grammar, where a paren group following a value dispatches `call`.
"""
import pytest


def _defs(pp):
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_add PP2_FN (x, y) (x plus (y))")
    pp.define("PP2_DEF_inc1 PP2_FN (x) (x plus (1))")
    pp.define("PP2_DEF_dbl PP2_FN (x) (x times (2))")
    pp.define("PP2_DEF_sum3 PP2_FN (x, y, z) (x plus (y) plus (z))")
    pp.define("PP2_DEF_idf PP2_FN (x) (x)")


@pytest.mark.parametrize("body,expected", [
    ("print(add(2, 3))", "5"),
    ("print(inc1(9))", "10"),
    ("print(idf(7))", "7"),
    ("print(sum3(1, 2, 4))", "7"),
    # a space before the paren is the same self-call
    ("print(add (2, 3))", "5"),
])
def test_direct_application(pp, body, expected):
    _defs(pp)
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    # a method chained onto an application result
    ("print(add(2, 3) plus (1))", "6"),
    # an application nested as an argument
    ("print(add(add(1, 1), 3))", "5"),
    # an application result fed to another named fn
    ("print(inc1(dbl(10)))", "21"),
    # an application used as a method argument
    ("print(add(1, 2) times (add(1, 1)))", "6"),
])
def test_application_composition(pp, body, expected):
    _defs(pp)
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    # assigned to a variable slot, invoked with the explicit call
    ("F (add), print(F call (4, 5))", "9"),
    # nested stored-fn calls
    ("F (add), print(F call (F call (1, 1), 3))", "5"),
])
def test_value_and_call(pp, body, expected):
    _defs(pp)
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    # a named fn passed where a higher-order List method expects a Fn value
    ("print(List (1, 2, 3) map (inc1))", "(2, 3, 4)"),
    ("print(List (1, 2, 3) map (dbl))", "(2, 4, 6)"),
    ("print(List (1, 2, 3, 4) fold (add, 0))", "10"),
])
def test_named_fn_as_higher_order_arg(pp, body, expected):
    _defs(pp)
    assert pp.expand("PP2({})", body) == pp.parse(expected)


def test_pp2_fn_equivalent_to_fn_literal(pp):
    # PP2_FN (params) (body) is exactly the `fn` keyword's shape, so a PP2_FN
    # binding matches PP2_DEF over the equivalent `fn` literal.
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_viaFN PP2_FN (x) (x plus (1))")
    pp.define("PP2_DEF_viaDEF PP2_DEF(fn (x) (x plus (1)))")
    assert pp.expand("PP2(print(viaFN(41)))") == "42"
    assert pp.expand("PP2(print(viaDEF(41)))") == "42"
