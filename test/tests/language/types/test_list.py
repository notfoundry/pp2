import pytest


# List is the first-class collection: its value is a tuple of compiled
# objects, so structural operations are single variadic pastes and traversals
# run chunked through the machine.
@pytest.mark.parametrize("body,expected", [
    ("print(List (1, 2, 3))", "(1, 2, 3)"),
    ("print(List ())", "()"),
    ("print(List (5))", "(5)"),
    # nested lists render as nested parenthesized tuples
    ("print(List (1, List (2, 3), 4))", "(1, (2, 3), 4)"),
    # constructor arguments are full expressions
    ("print(List (1 plus (2), 3))", "(3, 3)"),
    # crosses one schedule chunk boundary
    ("print(List (1, 2, 3, 4, 5, 6, 7, 8, 9))", "(1, 2, 3, 4, 5, 6, 7, 8, 9)"),
])
def test_list_construction_and_str(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


def test_list_type(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(List (1) type))") == pp.parse("(,Type,(,List,Any))")


def test_list_in_variable(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(X (List (1, 2)), print(X))") == pp.parse("(1, 2)")


@pytest.mark.parametrize("body,expected", [
    ("print(List (1, 2, 3) size())", "3"),
    ("print(List () size())", "0"),
    ("print(List (1, 2, 3, 4, 5, 6, 7, 8, 9, 10) size())", "10"),
    ("print(List (1, 2, 3) size() times (2))", "6"),
])
def test_list_size(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_list_size_promotes_past_the_wall(pp):
    pp.include("pp2/pp2.h")
    elems = ", ".join(["1"] * 130)
    assert pp.expand("PP2(print(List ({}) size()))", elems) == "130"


@pytest.mark.parametrize("body,expected", [
    ("print(List (1, 2, 3) at (0))", "1"),
    ("print(List (1, 2, 3) at (2))", "3"),
    ("print(List (1, 2, 3, 4, 5, 6, 7, 8, 9, 10) at (9))", "10"),
    ("print(List (10, 20, 30) at (1) plus (10))", "30"),
    ("print(List (1, 2, 3) head())", "1"),
    ("print(List (1, 2, 3) tail())", "(2, 3)"),
    ("print(List (7) tail())", "()"),
])
def test_list_access(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


@pytest.mark.parametrize("body,expected", [
    ("print(List (1, 2) push (9))", "(1, 2, 9)"),
    ("print(List () push (9))", "(9)"),
    ("print(List (1, 2) push_front (9))", "(9, 1, 2)"),
    ("print(List (1, 2) append (List (3, 4)))", "(1, 2, 3, 4)"),
    ("print(List (1, 2) append (List ()))", "(1, 2)"),
    ("print(List () append (List (3, 4)))", "(3, 4)"),
    ("print(List () append (List ()))", "()"),
    ("print(List (1, 2, 3) reverse())", "(3, 2, 1)"),
    ("print(List () reverse())", "()"),
    ("print(List (1, 2, 3, 4, 5, 6, 7, 8, 9, 10) reverse())", "(10, 9, 8, 7, 6, 5, 4, 3, 2, 1)"),
    ("print(List (1, 2) push (9) size())", "3"),
    ("print(List (1, 2, 3) reverse() at (0))", "3"),
])
def test_list_structural(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


@pytest.mark.parametrize("body,expected", [
    ("print(List () empty())", "true"),
    ("print(List (1) empty())", "false"),
    ("print(List (1, 2, 3) contains (2))", "true"),
    ("print(List (1, 2, 3) contains (9))", "false"),
    ("print(List () contains (1))", "false"),
    # eq dispatches per element, so mixed Int/Long probes work
    ("print(List (1, 127 inc(), 3) contains (Long (((1)(2)(8)))))", "true"),
])
def test_list_predicates(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    ("print(List (1, 2, 3) map (fn (x) (x times (2))))", "(2, 4, 6)"),
    ("print(List () map (fn (x) (x)))", "()"),
    ("print(List (1, 2, 3, 4, 5, 6, 7, 8, 9, 10) map (fn (x) (x times (2))))",
     "(2, 4, 6, 8, 10, 12, 14, 16, 18, 20)"),
    # a mapped result past 127 promotes element-wise
    ("print(List (60, 120) map (fn (x) (x times (2))))", "(120, 240)"),
    ("print(List (List (5), List (6, 7)) map (fn (l) (l size())))", "(1, 2)"),
])
def test_list_map(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


def test_list_map_fn_variable_and_closure(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(F (fn (x) (x times (x))), print(List (1, 2, 3) map (F)))") == pp.parse("(1, 4, 9)")
    assert pp.expand("PP2(N (10), print(List (1, 2) map (fn (x) (x plus (N)))))") == pp.parse("(11, 12)")


@pytest.mark.parametrize("body,expected", [
    ("print(List (1, 2, 3, 4) fold (fn (a, x) (a plus (x)), 0))", "10"),
    ("print(List () fold (fn (a, x) (a plus (x)), 42))", "42"),
    ("print(List (2, 3, 4) fold (fn (a, x) (a times (x)), 1))", "24"),
    ("print(List (1, 2, 3, 4, 5, 6, 7, 8, 9, 10) fold (fn (a, x) (a plus (x)), 0))", "55"),
    # 10 * 8 * 9 = 720, folding straight through the Int wall
    ("print(List (10, 8, 9) fold (fn (a, x) (a times (x)), 1))", "720"),
])
def test_list_fold(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


@pytest.mark.parametrize("body,expected", [
    ("print(List (1, 2, 3, 4, 5) filter (fn (x) (x gt (2))))", "(3, 4, 5)"),
    ("print(List (1, 2) filter (fn (x) (x gt (9))))", "()"),
    ("print(List (1, 2) filter (fn (x) (x lt (9))))", "(1, 2)"),
    ("print(List () filter (fn (x) (x)))", "()"),
])
def test_list_filter(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


def test_list_each_returns_receiver(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(List (1, 2) each (fn (x) (x))))") == pp.parse("(1, 2)")


def test_list_higher_order_composition(pp):
    pp.include("pp2/pp2.h")
    body = ("print(List (1, 2, 3, 4, 5) map (fn (x) (x times (x))) "
            "filter (fn (x) (x gt (3))) fold (fn (a, x) (a plus (x)), 6))")
    assert pp.expand("PP2({})", body) == "60"
