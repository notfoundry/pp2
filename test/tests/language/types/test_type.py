"""The type system: the `type` operator, Type objects, and the Any root.

A Type object has the shape (,Type,(,<name>,<supertype>)). Every concrete type
has supertype Any; Any is the root and has an empty supertype. A bare type name
(`Int`, `Bool`, ...) is itself a first-class Type value, equal to the `type` of
any value of that type. The `type` of any Type is `Type`, which is its own type
(a fixpoint).

A Type prints as its name. Identity is asserted with `eq` rather than by matching
a printed form, so these tests say what a program can observe about a type rather
than how the object happens to be laid out.
"""
import pytest


# --- `type` of a value yields that value's Type object ---------------------
@pytest.mark.parametrize("body,name", [
    ("7 type", "Int"),
    ("0 type", "Int"),
    ("true type", "Bool"),
    ("false type", "Bool"),
    ("(quoted) type", "Quote"),
    ("fn (x) (x) type", "Fn"),
    ("nil type", "Nil"),
])
def test_type_of_value(pp, body, name):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print({}))", body) == name


# --- `type` reflects the runtime type of a variable or computed result -----
@pytest.mark.parametrize("body,name", [
    ("X (5), print(X type)", "Int"),
    ("B (true), print(B type)", "Bool"),
    ("print(3 plus (4) type)", "Int"),
    ("print(3 lt (4) type)", "Bool"),
    ("print((a) cat ((b)) type)", "Quote"),
    ("F (fn (x) (x)), print(F call (2) type)", "Int"),
    ("X (fn (a) (a)), print(X type)", "Fn"),
])
def test_type_of_variable_and_computed(pp, body, name):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == name


# --- a bare type name is a first-class Type value --------------------------
@pytest.mark.parametrize("name", ["Int", "Bool", "Quote", "Fn", "Type", "Nil", "Any"])
def test_bare_type_name_is_type_value(pp, name):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print({}))", name) == name


@pytest.mark.parametrize("value,name", [
    ("7", "Int"),
    ("true", "Bool"),
    ("(q)", "Quote"),
    ("nil", "Nil"),
])
def test_bare_name_is_the_same_type_object_as_the_values_type(pp, value, name):
    # `Int` and `7 type` denote the very same Type object
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print({0} type eq ({1})))", value, name) == "true"


def test_a_type_does_not_equal_a_different_type(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(7 type eq (Bool)))") == "false"


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
    assert pp.expand("PP2(print({}))", body) == "Type"


def test_type_of_type_is_type_by_identity(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Int type eq (Type)))") == "true"


# --- stringization ---------------------------------------------------------
def test_a_type_prints_as_its_name(pp):
    # Type has its own str, so printing a type gives its name rather than
    # spilling the object's internals the way Any's default stringization did
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Bool))") == "Bool"
    assert pp.expand("PP2(print(7 type))") == "Int"


def test_fn_stringizes_as_fn_object(pp):
    # A Fn carries no dedicated str, so it still falls back to Any_str and emits
    # its raw object, tagged Fn. Only the type tag is asserted -- the body embeds
    # volatile machine detail.
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (fn (x) (x)), print(X))").startswith("( , Fn ,")
