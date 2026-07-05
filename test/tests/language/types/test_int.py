import pytest


@pytest.mark.parametrize("body,expected", [
    # bare integer literals compile and stringize to themselves
    ("print(0)", "0"),
    ("print(5)", "5"),
    ("print(42)", "42"),
    ("print(127)", "127"),
    # plus
    ("print(0 plus (0))", "0"),
    ("print(5 plus (3))", "8"),
    ("print(40 plus (2))", "42"),
    ("print(99 plus (28))", "127"),
    # plus chains left-to-right as method calls
    ("print(2 plus (3) plus (4))", "9"),
    # inc / dec
    ("print(0 inc())", "1"),
    ("print(5 inc())", "6"),
    ("print(99 inc())", "100"),
    ("print(0 inc() inc() inc())", "3"),
    ("print(5 dec())", "4"),
    ("print(0 dec())", "0"),         # clamped
    # inc and plus compose
    ("print(3 inc() plus (10))", "14"),
    # minus (clamped at 0), chained
    ("print(9 minus (4))", "5"),
    ("print(4 minus (9))", "0"),
    ("print(10 minus (3) minus (2))", "5"),
    # times / mul
    ("print(6 times (7))", "42"),
    ("print(6 mul (7))", "42"),
    ("print(0 times (5))", "0"),
    ("print(12 times (10))", "120"),
    # div / mod
    ("print(23 div (5))", "4"),
    ("print(23 mod (5))", "3"),
    ("print(7 div (10))", "0"),
    ("print(7 mod (10))", "7"),
    # left-associative method chains across operators
    ("print(2 plus (3) times (4))", "20"),
    ("print(2 times (3) times (4))", "24"),
    ("print(100 div (7) times (7))", "98"),
    ("print(14 times (7) plus (2))", "100"),
])
def test_int_arithmetic(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    ("print(5 eq (5))", "true"),
    ("print(5 eq (6))", "false"),
    ("print(3 lt (7))", "true"),
    ("print(7 lt (3))", "false"),
    ("print(7 gt (3))", "true"),
    ("print(4 leq (4))", "true"),
    ("print(4 lte (4))", "true"),    # alias
    ("print(5 geq (4))", "true"),
    ("print(5 gte (4))", "true"),    # alias
    # arithmetic result feeds a comparison
    ("print(3 plus (4) eq (7))", "true"),
    ("print(5 times (5) eq (25))", "true"),
    ("print(23 mod (5) eq (3))", "true"),
    ("print(23 div (5) lt (5))", "true"),
])
def test_int_comparisons(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_int_bound_to_variable(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (5), print(X))") == "5"


def test_int_variable_arithmetic(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (5), print(X plus (10)))") == "15"


def test_int_variable_reassignment(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (5), X (X inc()), print(X))") == "6"


def test_int_type_introspection(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(7 type))") == pp.parse("(,Type,(,Int,Any))")
