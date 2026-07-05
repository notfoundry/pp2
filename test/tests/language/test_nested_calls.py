"""Nested-call semantics: a call whose argument (or receiver-in-turn) is itself
a call must evaluate correctly at arbitrary depth and arity.

This exercises the machine calling convention. The single global argument stack
(local-context `arguments`) is shared across every call depth, so before real
activation frames a nested call scoops up the outer call's in-flight operands
(the parked callee and already-evaluated sibling arguments). Left-associative
chains and atom arguments are unaffected, which is why the flat regressions at
the bottom already pass.

Target: proper CALL/RETURN frames so each call gets a private argument scope
(and private local-variable scope), exactly like a real machine.
"""
import pytest


# --- flat forms that already work: regression guards -----------------------
@pytest.mark.parametrize("body,expected", [
    ("print(2 plus (3) plus (4))", "9"),          # left-assoc method chain
    ("print(fn (x, y) (x plus (y)) (2, 3))", "5"), # multi-arg, atom args
    ("print(true and (false))", "false"),
    ("print(fn (x) (x plus (1)) (3))", "4"),       # immediate fn, method body
])
def test_flat_calls_regression(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


# --- method call with a nested-call argument (arithmetic) ------------------
@pytest.mark.parametrize("body,expected", [
    ("print(3 plus (4 plus (5)))", "12"),
    ("print(2 plus (3 plus (4 plus (5))))", "14"),
    ("print(2 times (3 plus (4)))", "14"),
    ("print(10 plus (2 times (3)))", "16"),
    ("print(2 times (3 plus (4 times (5))))", "46"),
    ("print(20 minus (2 times (5)))", "10"),
    ("print(100 div (2 plus (3)))", "20"),
])
def test_nested_arg_arithmetic(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


# --- method call with a nested-call argument (bool) ------------------------
@pytest.mark.parametrize("body,expected", [
    ("print(true and (false or (true)))", "true"),
    ("print(false or (true and (true)))", "true"),
    ("print(true and (true and (false)))", "false"),
])
def test_nested_arg_bool(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


# --- multi-arg fn where a later sibling argument is a nested call ----------
@pytest.mark.parametrize("body,expected", [
    ("print(fn (x, y) (x plus (y)) (2, 3 plus (4)))", "9"),
    ("print(fn (x, y) (x plus (y)) (1 plus (1), 3 plus (4)))", "9"),
    ("print(fn (x, y) (x plus (y)) (2 times (3), 4 times (5)))", "26"),
    ("print(fn (x, y) (x or (y)) (false, true and (true)))", "true"),
])
def test_multiarg_sibling_nesting(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


# --- an argument that is itself a full fn call -----------------------------
@pytest.mark.parametrize("body,expected", [
    ("print(fn (x) (x) (fn (y) (y plus (1)) (5)))", "6"),
    ("print(fn (x) (x plus (1)) (fn (y) (y times (2)) (3)))", "7"),
])
def test_nested_fn_call_argument(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


# --- nested fn with a shadowing same-named parameter (locals scope) --------
# The inner `x` must not clobber the outer `x`; needs a per-call local frame.
@pytest.mark.parametrize("body,expected", [
    ("print(fn (x) (x plus (fn (x) (x) (10))) (5))", "15"),
    ("print(fn (x) (x plus (fn (x) (x times (2)) (10))) (5))", "25"),
    # the outer x is read AFTER the inner same-named call rebinds its slot, so
    # a missing local-variable frame is observable (clobber -> wrong value)
    ("print(fn (x) (fn (x) (x) (10) plus (x)) (5))", "15"),
    ("print(fn (x) (fn (x) (x times (2)) (10) plus (x)) (5))", "25"),
    # a control: distinct parameter names must be unaffected either way
    ("print(fn (x) (fn (y) (y) (10) plus (x)) (5))", "15"),
    # combined: nested-call argument, a shadowing same-named inner call, and a
    # method chain that reads the outer local again afterwards -> 5+99+5
    ("print(fn (x) (x plus (fn (x) (x) (99)) plus (x)) (5))", "109"),
])
def test_nested_local_shadowing(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected
