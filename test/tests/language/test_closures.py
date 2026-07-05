"""Lexical closures: a function captures the environment where it is DEFINED.

A user fn snapshots its defining stack into its value at creation; on call that
captured environment is installed as the callee's frame (parameters shadow it).
Capture is lexical (by the definition site, not the call site) and by snapshot
(a later reassignment of a captured variable does not change what the closure
sees, and a closure's own mutations do not leak back out). This is what makes
free variables and curried functions work.
"""
import pytest


@pytest.mark.parametrize("body,expected", [
    # a fn body reads a free variable from its defining scope
    ("X (5), F (fn (y) (y plus (X))), print(F call (3))", "8"),
    # captured value survives being used across a stored closure's calls
    ("B (10), A (fn (x) (x plus (B))), print(A call (1)), print(A call (2))", "11 12"),
    # a captured variable can drive a loop inside the closure
    ("N (3), F (fn (s) (for (I (0), I lt (N), I (I inc())) (s (s inc())), s)), "
     "print(F call (0))", "3"),
])
def test_free_variable_capture(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    # returned inner fn closes over the outer parameter
    ("M (fn (x) (fn (y) (x plus (y)))), print(M call (3) call (4))", "7"),
    # three-deep curry
    ("F (fn (a) (fn (b) (fn (c) (a plus (b) plus (c))))), "
     "print(F call (1) call (2) call (3))", "6"),
])
def test_curry(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_capture_is_lexical_snapshot(pp):
    # reassigning X after F is defined does not change what F captured
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (5), F (fn (y) (y plus (X))), X (99), print(F call (0)))") == "5"


def test_capture_is_definition_site_not_call_site(pp):
    # G reassigns X to 100 right before calling F, but F sees its definition-site
    # X (7), not the caller's -- proving lexical (not dynamic) scope
    pp.include("pp2/pp2.h")
    prog = ("PP2(X (7), F (fn (y) (y plus (X))), "
            "G (fn (z) (X (100), F call (z))), print(G call (0)))")
    assert pp.expand(prog) == "7"


def test_parameter_shadows_capture(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (10), F (fn (X) (X plus (1))), print(F call (5)))") == "6"


def test_closure_mutation_does_not_leak(pp):
    # the closure rebinds its parameter X locally; the outer X is unchanged
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (5), F (fn (X) (X plus (100))), "
                     "print(F call (1)), print(X))") == "101 5"
