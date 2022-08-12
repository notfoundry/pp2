import pytest


@pytest.mark.parametrize("args", [
    "()", "(a)", "(a,b,c)"
])
def test_eat(pp, args):
    pp.include("pp2/primitive/core.h")
    assert pp.expand("PP2_EAT {}", args) == ''


def test_blocking_expansion(pp):
    pp.include("pp2/primitive/core.h")

    name, defn = "TEST", "123"
    pp.define("{}() {}", name, defn)
    assert pp.expand("{} PP2_BLOCK ()", name) == pp.parse('{}()', name)


def test_scanning_blocked_expansion(pp):
    pp.include("pp2/primitive/core.h")

    name, defn = "TEST", "123"
    pp.define("{}() {}", name, defn)
    assert pp.expand("PP2_SCAN({} PP2_BLOCK ())", name) == defn


@pytest.mark.parametrize("args", [
    "", "a", "a,b,c"
])
def test_removing_parentheses(pp, args):
    pp.include("pp2/primitive/core.h")
    assert pp.expand("PP2_OPEN ({})", args) == pp.parse(args)