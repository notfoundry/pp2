import pytest


@pytest.mark.parametrize("x,expected", [
    ("0", "1"), ("1", "2"), ("5", "6"), ("41", "42"), ("99", "100"),
])
def test_literal_inc(pp, x, expected):
    pp.include("pp2/primitive/arithmetic/literal/inc.h")
    assert pp.expand("PP2_LITERAL_INC(,{})", x) == expected


@pytest.mark.parametrize("a,b,expected", [
    ("0", "0", "0"),
    ("0", "5", "5"),
    ("5", "0", "5"),
    ("5", "3", "8"),
    ("40", "2", "42"),
    ("99", "28", "127"),
])
def test_literal_add(pp, a, b, expected):
    pp.include("pp2/primitive/arithmetic/literal/add.h")
    assert pp.expand("PP2_LITERAL_ADD({},{})", a, b) == expected


@pytest.mark.parametrize("x,expected", [
    ("0", "0"), ("1", "0"), ("5", "4"), ("42", "41"), ("127", "126"),
])
def test_literal_dec(pp, x, expected):
    pp.include("pp2/primitive/arithmetic/literal/dec.h")
    assert pp.expand("PP2_LITERAL_DEC(,{})", x) == expected


@pytest.mark.parametrize("a,b,expected", [
    ("9", "4", "5"),
    ("4", "9", "0"),      # clamped at 0
    ("127", "0", "127"),
    ("100", "100", "0"),
    ("50", "8", "42"),
])
def test_literal_sub(pp, a, b, expected):
    pp.include("pp2/primitive/arithmetic/literal/sub.h")
    assert pp.expand("PP2_LITERAL_SUB({},{})", a, b) == expected


@pytest.mark.parametrize("a,b,expected", [
    ("0", "5", "0"), ("5", "0", "0"), ("1", "7", "7"),
    ("6", "7", "42"), ("12", "10", "120"), ("11", "11", "121"),
])
def test_literal_mul(pp, a, b, expected):
    pp.include("pp2/primitive/arithmetic/literal/mul.h")
    assert pp.expand("PP2_LITERAL_MUL({},{})", a, b) == expected


@pytest.mark.parametrize("a,b,expected", [
    ("20", "4", "5"), ("23", "5", "4"), ("7", "10", "0"),
    ("100", "7", "14"), ("42", "6", "7"), ("9", "1", "9"),
])
def test_literal_div(pp, a, b, expected):
    pp.include("pp2/primitive/arithmetic/literal/div.h")
    assert pp.expand("PP2_LITERAL_DIV({},{})", a, b) == expected


@pytest.mark.parametrize("a,b,expected", [
    ("20", "4", "0"), ("23", "5", "3"), ("7", "10", "7"),
    ("100", "7", "2"), ("42", "6", "0"), ("9", "1", "0"),
])
def test_literal_mod(pp, a, b, expected):
    pp.include("pp2/primitive/arithmetic/literal/div.h")
    assert pp.expand("PP2_LITERAL_MOD({},{})", a, b) == expected
