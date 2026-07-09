"""A method handler dispatched again while an earlier dispatch is still in flight.

`PP2_INSN_8PP2_LANGUAGE_VM_FN` parks a pending call in r0 as an Fn holding the
handler's name, then evaluates the argument. If the argument calls the same
method, the inner handler runs while the outer handler's name is still sitting in
the register file, and every handler threads the registers through its own
replacement list. A bare identifier making that trip is painted blue inside its
own expansion and never expands again.

So handler names travel as `8`-tagged pp-numbers, which cannot be painted, and
`IP2_LANGUAGE_VM_FN_CALL` pastes the real name back with `PP2_INSN_##m` at the
point of call. These tests pin that down: the same handler reached twice, nested,
aliased, at depth, through higher-order calls, and through a user-defined method.

Painting is permanent and translation-unit wide, so a regression here does not
merely return a wrong value. It abandons a closing parenthesis that PP2_VM is
waiting on, and gcc reports an unterminated argument list for PP2_EAT.
"""
import pytest


# --- the same handler nested directly inside its own argument --------------
@pytest.mark.parametrize("body,expected", [
    ("print(3 plus (4 plus (5)))", "12"),
    ("print(3 times (4 times (5)))", "60"),
    ("print(20 minus (8 minus (3)))", "15"),
    ("print(100 div (20 div (2)))", "10"),
    ("print(17 mod (12 mod (7)))", "2"),
    ("print(true and (true and (false)))", "false"),
    ("print(false or (false or (true)))", "true"),
    ("print(true xor (true xor (true)))", "true"),
    ("print(true not() not())", "true"),
    ("print((a) cat ((b) cat ((c))))", "abc"),
])
def test_same_handler_nested(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- two surface names, one handler: the collision follows the handler -----
@pytest.mark.parametrize("body,expected", [
    ("print(3 times (4 mul (5)))", "60"),      # times and mul are INT_TIMES
    ("print(3 mul (4 times (5)))", "60"),
    ("print(3 mul (4 mul (5)))", "60"),
])
def test_handler_aliases_collide(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- depth: one handler, several dispatches, each parked inside the last ---
@pytest.mark.parametrize("body,expected", [
    ("print(1 plus (2 plus (3 plus (4))))", "10"),
    ("print(1 plus (2 plus (3 plus (4 plus (5)))))", "15"),
    ("print(1 plus (1 plus (1 plus (1 plus (1 plus (1 plus (1)))))))", "7"),
    ("print(2 times (2 times (2 times (2 times (2)))))", "32"),
    # alternating handlers at depth: plus, times, plus, times
    ("print(1 plus (2 times (3 plus (4 times (5)))))", "47"),
])
def test_same_handler_at_depth(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- sibling arguments reaching the same handler --------------------------
@pytest.mark.parametrize("body,expected", [
    ("print(fn (x, y) (x plus (y)) (1 plus (2), 3 plus (4)))", "10"),
    ("print(List (3 leq (4), 5 lte (6)))", "(true, true)"),   # leq and lte, one handler
    ("print(List (7 geq (7), 8 gte (9)))", "(true, false)"),  # geq and gte, one handler
    ("print(List (1 plus (1), 2 plus (2), 3 plus (3)))", "(2, 4, 6)"),
])
def test_sibling_arguments_share_a_handler(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- a nullary handler reached again from inside its own operand ----------
@pytest.mark.parametrize("body,expected", [
    ("print(fn (x) (x inc()) (5 inc()))", "7"),
    ("print(fn (x) (x dec()) (5 dec()))", "3"),
    # str() inside str(): the outer List's stringizer runs the inner List's
    ("print(List (1, List (2, 3)))", "(1, (2, 3))"),
    ("print(List (List (List (4))))", "(((4)))"),
])
def test_nullary_handler_reentered(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- higher-order: a handler reached again from the fn it is running ------
@pytest.mark.parametrize("body,expected", [
    # LIST_MAP dispatched from inside LIST_MAP's own mapped function
    ("print(List (List (1, 2), List (3)) map (fn (l) (l map (fn (x) (x times (10))))))",
     "((10, 20), (30))"),
    # LIST_FOLD from inside LIST_FOLD
    ("print(List (List (1, 2), List (3, 4)) fold (fn (a, l) (a plus (l fold (fn (b, x) (b plus (x)), 0))), 0))",
     "10"),
    # LIST_CONTAINS re-entered once per element, with LIST_FILTER still in flight
    ("print(List (1, 2, 3) filter (fn (x) (List (2, 3) contains (x))))", "(2, 3)"),
    # LIST_FILTER whose predicate folds, then filter again on the result
    ("print(List (1, 2, 3, 4) filter (fn (x) (x gt (1))) filter (fn (x) (x lt (4))))",
     "(2, 3)"),
])
def test_higher_order_handler_reentry(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)


# --- the same handler reached once per iteration of a loop ---------------
def test_handler_reentered_across_loop_iterations(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(S (0), for (I (1), I leq (4), I (I plus (1))) (S (S plus (I plus (I)))), print(S))") \
        == pp.parse("20")


def test_handler_reentered_inside_loop_condition_and_body(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(N (0), while (N lt (2 plus (1))) (N (N plus (1 plus (0)))), print(N))") \
        == pp.parse("3")


# --- a user-defined method, exercising the public PP2_VM_FN contract ------
# A handler is a VM instruction: its stored name is the 8-tagged pp-number, and
# the macro itself is PP2_INSN_ ## that name.
def _define_lhs_and_rhs(pp):
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_Int_lhs PP2_VM_FN(8TEST_LHS,2)")
    pp.define("PP2_INSN_8TEST_LHS(P,r0,r1,r2,a,b,...) (,P##a,P##r1,P##r2,P##__VA_ARGS__)")
    pp.define("PP2_DEF_Int_rhs PP2_VM_FN(8TEST_RHS,2)")
    pp.define("PP2_INSN_8TEST_RHS(P,r0,r1,r2,a,b,...) (,P##b,P##r1,P##r2,P##__VA_ARGS__)")


@pytest.mark.parametrize("body,expected", [
    ("print(3 lhs (4))", "3"),
    ("print(3 rhs (4))", "4"),
    # each user handler nested in itself
    ("print(3 lhs (4 lhs (5)))", "3"),
    ("print(3 rhs (4 rhs (5)))", "5"),
    # mixed, so neither handler is the only one in flight
    ("print(3 lhs (4 rhs (5)))", "3"),
    ("print(3 rhs (4 lhs (5)))", "4"),
    # a user handler nested inside a builtin's argument, and the reverse
    ("print(3 plus (4 lhs (5)))", "7"),
    ("print(3 lhs (4 plus (5)))", "3"),
    ("print(3 rhs (4 plus (5)))", "9"),
])
def test_user_defined_method_reentrancy(pp, body, expected):
    _define_lhs_and_rhs(pp)
    assert pp.expand("PP2({})", body) == pp.parse(expected)


def test_user_defined_method_at_depth(pp):
    _define_lhs_and_rhs(pp)
    assert pp.expand("PP2(print(1 rhs (2 rhs (3 rhs (4 rhs (5))))))") == pp.parse("5")
    assert pp.expand("PP2(print(1 lhs (2 lhs (3 lhs (4 lhs (5))))))") == pp.parse("1")


# --- painting is permanent, so a poisoned handler stays poisoned ----------
# The second program must still work after the first has dispatched the handler
# from inside itself. This catches a fix that merely defers the collision.
def test_handler_survives_a_prior_self_nested_program(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(3 plus (4 plus (5)))) PP2(print(1 plus (2)))") \
        == pp.parse("12 3")


def test_two_self_nested_programs_in_one_translation_unit(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(3 times (4 times (5)))) PP2(print(2 times (3 times (4))))") \
        == pp.parse("60 24")


# --- controls: distinct handlers were never at risk, and must stay working -
@pytest.mark.parametrize("body,expected", [
    ("print(3 plus (4 times (5)))", "23"),
    ("print(true and (false or (true)))", "true"),
    ("print(2 plus (3) plus (4))", "9"),          # left-assoc chain, no nesting
])
def test_distinct_handlers_control(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == pp.parse(expected)
