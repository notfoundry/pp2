"""Quote type: a parenthesised group is a literal holding unevaluated tokens.

`cat` concatenates two quotes by token-pasting the boundary (the last token of
the left quote fuses with the first token of the right), matching PP2_CAT.
"""
import pytest


@pytest.mark.parametrize("body,expected", [
    ("print((hello))", "hello"),
    ("print((hello world))", "hello world"),
    # nested method syntax survives as inert tokens inside a quote
    ("print((6 times (7)))", "6 times ( 7 )"),
])
def test_quote_literal(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    # single-token boundary: clean concatenation
    ("print((foo) cat ((bar)))", "foobar"),
    ("print((ab) cat ((cd)))", "abcd"),
    ("print((a) cat ((b)) cat ((c)))", "abc"),
    # multi-token quotes: only the boundary tokens fuse
    ("print((a b) cat ((c d)))", "a bc d"),
])
def test_quote_cat(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_quote_bound_to_variable(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(Q ((abc)), print(Q))") == "abc"


def test_quote_type_introspection(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print((x) type))") == pp.parse("(,Type,(,Quote,Any))")
