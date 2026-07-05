"""while loops: repeat the body while the condition holds.

Exercises the goto/label loop machinery: counters, accumulators, countdowns,
and the zero-iteration case (condition false on entry).
"""
import pytest


def test_while_counter(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (0), while (X lt (3)) (X (X inc())), print(X))") == "3"


def test_while_zero_iterations(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (0), while (X lt (0)) (X (X inc())), print(X))") == "0"


def test_while_accumulate(pp):
    pp.include("pp2/pp2.h")
    prog = "PP2(S (0), I (1), while (I leq (5)) (S (S plus (I)), I (I inc())), print(S))"
    assert pp.expand(prog) == "15"


def test_while_countdown(pp):
    pp.include("pp2/pp2.h")
    prog = "PP2(N (10), C (0), while (N gt (0)) (N (N dec()), C (C inc())), print(C))"
    assert pp.expand(prog) == "10"
