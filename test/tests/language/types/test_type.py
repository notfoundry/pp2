"""The type system: the `type` operator, Type objects, and the Any root.

A Type object has the shape (,Type,(,<name>,<supertype>)). Every concrete type
has supertype Any; Any is the root and has an empty supertype. A bare type name
(`Int`, `Bool`, ...) is itself a first-class Type value, equal to the `type` of
any value of that type. The `type` of any Type is `Type`, which is its own type
(a fixpoint). Type/Fn carry no dedicated `str`, so they fall back to Any's
default stringization, which emits the object as-is.
"""
import pytest


# --- `type` of a value yields that value's Type object ---------------------
@pytest.mark.parametrize("body,type_obj", [
    ("7 type", "(,Type,(,Int,Any))"),
    ("0 type", "(,Type,(,Int,Any))"),
    ("true type", "(,Type,(,Bool,Any))"),
    ("false type", "(,Type,(,Bool,Any))"),
    ("(quoted) type", "(,Type,(,Quote,Any))"),
    ("fn (x) (x) type", "(,Type,(,Fn,Any))"),
])
def test_type_of_value(pp, body, type_obj):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print({}))", body) == pp.parse(type_obj)


# --- `type` reflects the runtime type of a variable or computed result -----
@pytest.mark.parametrize("body,type_obj", [
    ("X (5), print(X type)", "(,Type,(,Int,Any))"),
    ("B (true), print(B type)", "(,Type,(,Bool,Any))"),
    ("print(3 plus (4) type)", "(,Type,(,Int,Any))"),
    ("print(3 lt (4) type)", "(,Type,(,Bool,Any))"),
    ("print((a) cat ((b)) type)", "(,Type,(,Quote,Any))"),
    ("F (fn (x) (x)), print(F call (2) type)", "(,Type,(,Int,Any))"),
    ("X (fn (a) (a)), print(X type)", "(,Type,(,Fn,Any))"),
])
def test_type_of_variable_and_computed(pp, body, type_obj):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(type_obj)


# --- a bare type name is a first-class Type value --------------------------
@pytest.mark.parametrize("name,type_obj", [
    ("Int", "(,Type,(,Int,Any))"),
    ("Bool", "(,Type,(,Bool,Any))"),
    ("Quote", "(,Type,(,Quote,Any))"),
    ("Fn", "(,Type,(,Fn,Any))"),
    ("Type", "(,Type,(,Type,Any))"),
])
def test_bare_type_name_is_type_value(pp, name, type_obj):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print({}))", name) == pp.parse(type_obj)


def test_bare_name_equals_value_type(pp):
    # `Int` and `7 type` denote the very same Type object
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Int))") == pp.expand("PP2(print(7 type))")


# --- Any is the root: no supertype -----------------------------------------
def test_any_is_root(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Any))") == pp.parse("(,Type,(,Any,))")


# --- the type of a Type is Type, and Type is its own type (fixpoint) --------
@pytest.mark.parametrize("body", [
    "7 type type",
    "true type type",
    "7 type type type",
    "Int type",
    "Any type",
])
def test_type_of_type_is_type(pp, body):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print({}))", body) == pp.parse("(,Type,(,Type,Any))")


# --- default (Any) stringization ------------------------------------------
def test_any_str_returns_object(pp):
    # Type has no dedicated str, so an explicit str() falls back to Any_str,
    # which emits the object unchanged -- identical to printing it directly.
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(7 type str()))") == pp.expand("PP2(print(7 type))")


def test_fn_stringizes_as_fn_object(pp):
    # A Fn likewise falls back to Any_str and emits its raw object, tagged Fn.
    # Only the type tag is asserted -- the body embeds volatile machine detail.
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (fn (x) (x)), print(X))").startswith("( , Fn ,")
