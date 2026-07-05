"""Exception behavior.

PP2 signals errors by throwing: the machine halts and emits the exception as a
literal `<TYPE>(<message>)`. Compiling an unknown token throws
DEFINITION_EXCEPTION (this also covers unknown methods, resolved as
`<Type>_<method>`, and integer literals outside the supported 0..127 range);
reading a local slot that was never assigned throws UNBOUND_LOCAL_EXCEPTION with
the slot address. A throw terminates the program, so statements after it never
run.
"""
import pytest


# --- an unknown bare token throws DEFINITION_EXCEPTION ----------------------
@pytest.mark.parametrize("token", ["foo", "nonexistent"])
def test_undefined_identifier(pp, token):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print({0}))", token) == \
        pp.parse("8PP2_LANGUAGE_DEFINITION_EXCEPTION({0})", token)


# integer literals only exist for 0..127; anything larger has no definition
@pytest.mark.parametrize("n", ["128", "200"])
def test_integer_out_of_range(pp, n):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print({0}))", n) == \
        pp.parse("8PP2_LANGUAGE_DEFINITION_EXCEPTION({0})", n)


# --- calling a method a type does not have (and never inherits) -------------
@pytest.mark.parametrize("body,qualified", [
    ("print(5 bogus (3))", "Int_bogus"),
    ("print(true wat())", "Bool_wat"),
    ("print((q) nope())", "Quote_nope"),
])
def test_unknown_method(pp, body, qualified):
    pp.include("pp2/pp2.h")
    result = pp.expand("PP2({})", body)
    assert "8PP2_LANGUAGE_DEFINITION_EXCEPTION" in result
    assert qualified in result


# --- reading a local variable that was never assigned ----------------------
@pytest.mark.parametrize("var,slot", [("x", "23"), ("q", "16")])
def test_unbound_local(pp, var, slot):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print({0}))", var) == \
        pp.parse("8PP2_LANGUAGE_UNBOUND_LOCAL_EXCEPTION({0})", slot)


# --- a thrown exception halts the program ----------------------------------
def test_throw_halts_program(pp):
    # print(1) emits, print(foo) throws, print(2) must never run
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(1), print(foo), print(2))") == \
        pp.parse("1 8PP2_LANGUAGE_DEFINITION_EXCEPTION(foo)")


def test_unbound_local_halts_program(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(1), print(x), print(2))") == \
        pp.parse("1 8PP2_LANGUAGE_UNBOUND_LOCAL_EXCEPTION(23)")


# --- known-broken: explicit Type constructor -------------------------------
@pytest.mark.xfail(reason="the explicit Type constructor Int(7) spins in the "
                          "author's half-finished Type_call dispatch and dies "
                          "with EOF in PP2_EAT (see pp2-dev-frontier); bare 7 "
                          "already compiles, so this path is unused",
                   strict=True, raises=Exception)
def test_int_explicit_constructor(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Int (7)))") == "7"
