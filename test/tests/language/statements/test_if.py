"""if / else / else-if control flow.

The condition compiles to a Bool and selects a branch; only the taken branch's
statements run. Branches nest, and the condition may be any Bool-valued
expression (comparison, variable, computed).
"""
import pytest


@pytest.mark.parametrize("body,expected", [
    ("if (true) (print(1))", "1"),
    ("if (true) (print(1)) else (print(0))", "1"),
    ("if (false) (print(1)) else (print(0))", "0"),
    # else-if chain
    ("if (false) (print(1)) else if (true) (print(2)) else (print(3))", "2"),
    ("if (false) (print(1)) else if (false) (print(2)) else (print(3))", "3"),
])
def test_if_literal_condition(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    ("X (5), if (X gt (3)) (print(1)) else (print(0))", "1"),
    ("X (2), if (X gt (3)) (print(1)) else (print(0))", "0"),
    ("if (3 lt (5)) (print(1)) else (print(0))", "1"),
    ("if (5 eq (5)) (print(5 plus (5)))", "10"),
    ("if (true) (print((yes))) else (print((no)))", "yes"),
])
def test_if_computed_condition(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_if_nested(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(if (true) (if (true) (print(9))))") == "9"


@pytest.mark.parametrize("body,expected", [
    # a false if with no else clause is a clean no-op in any trailing context
    ("if (false) (print(1))", ""),
    ("if (false) (print(1)), print(2)", "2"),
    ("print(0), if (false) (print(1)), print(2)", "0 2"),
    ("if (true) (print(1))", "1"),
    ("if (true) (print(1)), print(2)", "1 2"),
])
def test_if_no_else(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected
