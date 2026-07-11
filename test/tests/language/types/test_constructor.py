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
        assert result == "Int"
    else:
        assert result == expected


# --- Fn constructor: build a function from a params quote and a body quote --
# Unlike the value types, this is a real (non-identity) constructor: it
# assembles a callable function from its constituent data.
#
# The parameter list arrives as one Quote holding the comma-separated names or
# as an explicit List of individual name Quotes.
@pytest.mark.parametrize("body,expected", [
    ("F (Fn ((x), (x plus (1)))), print(F call (3))", "4"),
    ("F (Fn ((x, y), (x plus (y)))), print(F call (2, 3))", "5"),
    ("F (Fn (List((x), (y)), (x plus (y)))), print(F call (2, 3))", "5"),
    ("F (Fn (Quote ((x, y)), (x plus (y)))), print(F call (2, 3))", "5"),
    ("F (Fn (List((a), (b), (c)), (a plus (b) plus (c)))), print(F call (1, 2, 3))", "6"),
    ("F (Fn ((x), (x times (x)))), print(F call (5))", "25"),
    ("print(Fn ((x), (x plus (10))) call (5))", "15"),          # immediate call
])
def test_fn_constructor(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_fn_constructor_is_fn(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Fn ((x), (x)) type))") == "Fn"


def test_fn_constructor_equals_literal(pp):
    # Fn((params),(body)) builds exactly what the `fn` literal builds
    pp.include("pp2/pp2.h")
    built = pp.expand("PP2(F (Fn ((x), (x plus (1)))), print(F call (7)))")
    literal = pp.expand("PP2(G (fn (x) (x plus (1))), print(G call (7)))")
    assert built == literal == "8"


def test_fn_constructor_from_quote_variables(pp):
    # the parts can come from values held in variables -- dynamic construction
    pp.include("pp2/pp2.h")
    prog = "PP2(P ((x, y)), B ((x times (y))), F (Fn (P, B)), print(F call (6, 7)))"
    assert pp.expand(prog) == "42"


def test_fn_constructor_params_quote_matches_params_list(pp):
    # the two spellings of a parameter list build the same function
    pp.include("pp2/pp2.h")
    from_list = pp.expand("PP2(F (Fn (List((x), (y)), (x plus (y)))), print(F call (2, 3)))")
    from_quote = pp.expand("PP2(F (Fn ((x, y), (x plus (y)))), print(F call (2, 3)))")
    literal = pp.expand("PP2(G (fn (x, y) (x plus (y))), print(G call (2, 3)))")
    assert from_list == from_quote == literal == "5"


def test_fn_constructor_of_no_parameters(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(F (Fn (List(), (7))), print(F call ()))") == "7"
