import pytest


# Int stays literal until it needs to be arbitrary: results that leave 0..127
# promote to Long automatically.
@pytest.mark.parametrize("body,expected", [
    ("print(120 plus (120))", "240"),
    ("print(127 inc())", "128"),
    ("print(0 dec())", "- 1"),
    ("print(5 minus (7))", "- 2"),
    ("print(120 times (120))", "14400"),
    # boundary stays literal
    ("print(126 inc())", "127"),
    ("print(63 plus (64))", "127"),
    ("print(1 times (127))", "127"),
])
def test_int_promotes_on_overflow(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_overflow_result_is_long(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(127 inc() type))") == pp.parse("(,Type,(,Long,Any))")


def test_in_range_result_stays_int(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(63 plus (64) type))") == pp.parse("(,Type,(,Int,Any))")


# Explicit construction: Long (int) promotes; Long (quoted digit-seq)
# builds directly, one extra paren wrap denoting a negative.
@pytest.mark.parametrize("body,expected", [
    ("print(Long (5))", "5"),
    ("print(Long (((1)(2)(8))))", "128"),
    ("print(Long ((((1)(2)(8)))))", "- 128"),
    ("print(Long (Long (5)))", "5"),
])
def test_long_construction(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_long_type(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Long (5) type))") == pp.parse("(,Type,(,Long,Any))")


# Long is contagious; an Int on either side promotes.
@pytest.mark.parametrize("body,expected", [
    ("print(Long (5) plus (3))", "8"),
    ("print(5 plus (Long (((2)(0)(0)))))", "205"),
    ("print(Long (((1)(2)(3)(4)(5))) div (57))", "216"),
    ("print(Long (((1)(2)(3)(4)(5))) mod (57))", "33"),
    ("print(Long (((1)(2)(3))) times (Long (((4)(5)(6)))))", "56088"),
    ("print(Long (((2)(0)(0))) minus (75))", "125"),
    ("print(Long (5) inc())", "6"),
    ("print(Long (5) dec())", "4"),
    # crossing back below the wall stays Long by design
    ("print(120 plus (120) minus (Long (((2)(0)(0)))))", "40"),
    ("print(3 minus (5) plus (10))", "8"),
])
def test_long_arithmetic(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    ("print(127 inc() gt (127))", "true"),
    ("print(5 eq (Long (5)))", "true"),
    ("print(Long (5) eq (5))", "true"),
    ("print(Long (5) lt (Long (((2)(0)(0)))))", "true"),
    ("print(0 dec() lt (0))", "true"),
    ("print(Long (((2)(0)(0))) geq (127))", "true"),
    ("print(Long (((2)(0)(0))) leq (127))", "false"),
])
def test_long_comparisons(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_long_in_variable_and_loop(pp):
    pp.include("pp2/pp2.h")
    body = ("X (125),"
            "while (X lt (Long (((1)(3)(0)))))("
            "X (X inc())"
            "),"
            "print(X)")
    assert pp.expand("PP2({})", body) == "130"
