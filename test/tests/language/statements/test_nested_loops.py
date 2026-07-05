"""Nested loops at arbitrary depth.

Loops use a shared label list for goto (label 0 = exit, label 1 = loop-back).
Before the fix a loop never popped its labels on exit, so an inner loop's
label 1 stayed at the front and masked the enclosing loop's own label 1 on
loop-back -- every nested while/for pasted-errored. Each loop now drops the two
labels it pushed when it exits, so the label list is properly scoped. `for`
desugars to `while`, so both are covered here.
"""
import pytest


@pytest.mark.parametrize("body,expected", [
    # nested while: 2 * 2 iterations
    ("S (0), I (0), while (I lt (2)) (J (0), while (J lt (2)) "
     "(S (S inc()), J (J inc())), I (I inc())), print(S)", "4"),
    # nested for: 2 * 2
    ("S (0), for (I (0), I lt (2), I (I inc())) "
     "(for (J (0), J lt (2), J (J inc())) (S (S inc()))), print(S)", "4"),
    # for inside while
    ("S (0), I (0), while (I lt (2)) (for (J (0), J lt (2), J (J inc())) "
     "(S (S inc())), I (I inc())), print(S)", "4"),
    # triple-nested for: 2 * 3 * 4
    ("S (0), for (I (0), I lt (2), I (I inc())) "
     "(for (J (0), J lt (3), J (J inc())) "
     "(for (K (0), K lt (4), K (K inc())) (S (S inc())))), print(S)", "24"),
])
def test_nested_loops(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_nested_loop_with_inner_if(pp):
    # count even J in 0..4 (3 of them) across 2 outer iterations
    pp.include("pp2/pp2.h")
    prog = ("PP2(C (0), for (I (0), I lt (2), I (I inc())) "
            "(for (J (0), J lt (5), J (J inc())) "
            "(if (J mod (2) eq (0)) (C (C inc())))), print(C))")
    assert pp.expand(prog) == "6"


def test_sequential_loops_independent(pp):
    # two loops in a row (not nested) share no state: 3 + 2
    pp.include("pp2/pp2.h")
    prog = ("PP2(A (0), for (I (0), I lt (3), I (I inc())) (A (A inc())), "
            "for (I (0), I lt (2), I (I inc())) (A (A inc())), print(A))")
    assert pp.expand(prog) == "5"


def test_nested_loop_in_function(pp):
    # a doubly-nested loop inside a fn body, called twice: 2*2 + 3*3
    pp.include("pp2/pp2.h")
    prog = ("PP2(F (fn (n) (S (0), for (I (0), I lt (n), I (I inc())) "
            "(for (J (0), J lt (n), J (J inc())) (S (S inc()))), S)), "
            "print(F call (2) plus (F call (3))))")
    assert pp.expand(prog) == "13"
