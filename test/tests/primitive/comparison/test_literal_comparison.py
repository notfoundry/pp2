import pytest


@pytest.mark.parametrize("x,expected", [("0", "1"), ("1", "0"), ("7", "0")])
def test_is_zero(pp, x, expected):
    pp.include("pp2/primitive/comparison/literal.h")
    assert pp.expand("PP2_LITERAL_IS_ZERO({})", x) == expected


# One test drives all five relations for a pair; each pp.expand() is independent
# (see conftest.Preprocessor.expand). (a, b, eq, lt, gt, leq, geq)
@pytest.mark.parametrize("a,b,eq,lt,gt,leq,geq", [
    ("5", "5", "1", "0", "0", "1", "1"),
    ("3", "7", "0", "1", "0", "1", "0"),
    ("7", "3", "0", "0", "1", "0", "1"),
    ("0", "0", "1", "0", "0", "1", "1"),
    ("0", "9", "0", "1", "0", "1", "0"),
])
def test_relations(pp, a, b, eq, lt, gt, leq, geq):
    pp.include("pp2/primitive/comparison/literal.h")
    assert pp.expand("PP2_LITERAL_EQ({},{})", a, b) == eq
    assert pp.expand("PP2_LITERAL_LT({},{})", a, b) == lt
    assert pp.expand("PP2_LITERAL_GT({},{})", a, b) == gt
    assert pp.expand("PP2_LITERAL_LEQ({},{})", a, b) == leq
    assert pp.expand("PP2_LITERAL_GEQ({},{})", a, b) == geq
