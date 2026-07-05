"""for loops: init / condition / update, desugared onto while.

Each clause may be omitted. `put` inside the body emits each iteration's value,
so an emitting loop produces the sequence and an accumulating loop the total.
"""
import pytest


def test_for_emit_sequence(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(for (I (0), I lt (3), I (I inc())) (put(I)))") == "0 1 2"


def test_for_accumulate(pp):
    pp.include("pp2/pp2.h")
    prog = "PP2(S (0), for (I (1), I leq (4), I (I inc())) (S (S plus (I))), print(S))"
    assert pp.expand(prog) == "10"


def test_for_omitted_init(pp):
    pp.include("pp2/pp2.h")
    prog = "PP2(S (0), I (0), for (, I lt (3), I (I inc())) (S (S plus (I))), print(S))"
    assert pp.expand(prog) == "3"
