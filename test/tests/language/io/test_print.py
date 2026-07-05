"""print / put emission.

print evaluates each argument, stringizes it (calls `str`) and emits it; it is
overloaded across arities so it takes a variadic argument list. put emits a
single value the same way. Arguments are evaluated before emission.
"""
import pytest


@pytest.mark.parametrize("body,expected", [
    ("print(5)", "5"),
    ("print(true)", "true"),
    ("print((quoted))", "quoted"),
])
def test_print_single(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    ("print(1, 2, 3)", "1 2 3"),
    ("print(1 plus (1), 2 times (2))", "2 4"),
])
def test_print_multiple(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    ("put(5)", "5"),
    ("put(1), put(2), put(3)", "1 2 3"),
])
def test_put(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected
