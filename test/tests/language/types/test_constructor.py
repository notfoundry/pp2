"""Explicit type constructors via Type_call: `Int (7)`, `Bool (true)`, etc.

A bare type name is a first-class Type value; applying it to arguments invokes
its `call` method (Type_call), which resolves `<Type>_construct` and calls it.
The juxtaposition form `Int (7)` and the explicit `Int call (7)` are equivalent.
For the built-in value types the constructor is the identity on an
already-compiled object, so `Int (7)` yields the same object as the literal `7`.
"""
import pytest


@pytest.mark.parametrize("body,expected", [
    ("Int (7)", "7"),
    ("Int (0)", "0"),
    ("Int (127)", "127"),
    ("Int call (7)", "7"),           # explicit call method
    ("Bool (true)", "true"),
    ("Bool (false)", "false"),
    ("Bool call (true)", "true"),
    ("Quote ((hi))", "hi"),
    ("Quote ((a b c))", "a b c"),
])
def test_constructor(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print({}))", body) == expected


def test_juxtaposition_equals_explicit_call(pp):
    # `Int (7)` desugars to `Int call (7)` -- same result
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Int (7)))") == pp.expand("PP2(print(Int call (7)))")


def test_constructed_int_equals_literal(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Int (7)))") == pp.expand("PP2(print(7))")


@pytest.mark.parametrize("body,expected", [
    ("print(Int (7) plus (3))", "10"),     # constructed value is a usable Int
    ("print(Int (7) type)", None),          # ... and reports type Int
    ("X (Int (5)), print(X inc())", "6"),  # ... and binds to a variable
])
def test_constructed_value_behaves(pp, body, expected):
    pp.include("pp2/pp2.h")
    result = pp.expand("PP2({})", body)
    if expected is None:
        assert result == pp.parse("(,Type,(,Int,Any))")
    else:
        assert result == expected
