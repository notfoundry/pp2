import pytest


# Seq is the thin representation type: a raw paren-group seq with no object
# structure inside the groups, matching PP2's own substrates (Long digit
# seqs). The empty seq is written Seq (()) -- a quote of no tokens.
@pytest.mark.parametrize("body,expected", [
    ("print(Seq (((1)(2)(3))))", "(1)(2)(3)"),
    ("S (Seq (((1)(2)(3)))), print(Seq (S))", "(1)(2)(3)"),
    # a Long exposes its digit seq
    ("print(Seq (127 inc()))", "(1)(2)(8)"),
])
def test_seq_construction_and_str(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


def test_seq_type(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(Seq (((1)(2))) type))") == pp.parse("(,Type,(,Seq,Any))")


@pytest.mark.parametrize("body,expected", [
    ("print(Seq (()) empty())", "true"),
    ("print(Seq (((1)(2))) empty())", "false"),
    # head is a Quote of the first group, printing its bare tokens
    ("print(Seq (((1)(2)(3))) head())", "1"),
    ("print(Seq (((1)(2)(3))) tail())", "(2)(3)"),
    ("print(Seq (((1)(2)(3))) tail() head())", "2"),
    ("print(Seq (((1)(2))) push ((9)))", "(1)(2)(9)"),
    ("print(Seq (()) push ((9)))", "(9)"),
    ("print(Seq (((1)(2)(3))) size())", "3"),
    ("print(Seq (()) size())", "0"),
])
def test_seq_operations(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


@pytest.mark.parametrize("body,expected", [
    ("print(Seq (((1)(2))) to_list())", "(1, 2)"),
    ("print(Seq (((1)(2))) to_list() size())", "2"),
    ("print(Seq (()) to_list())", "()"),
])
def test_seq_to_list(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


@pytest.mark.parametrize("body,expected", [
    # a Seq of digit groups builds a Long (FIX normalizes)
    ("print(Long (Seq (((1)(2)(8)))))", "128"),
    ("print(Long (Seq (127 inc())))", "128"),
    ("X (Long (((1)(0)(0)(0)))), print(Seq (X) size())", "4"),
])
def test_seq_long_interop(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected
