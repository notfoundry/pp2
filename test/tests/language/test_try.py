"""try / catch.

    try (body) catch (handler)
    try (body) catch (e) (handler)

If the body throws, the rest of it is abandoned and the handler runs in its
place; if the body finishes, the handler is uninstalled and never runs. Either
way the program carries on with whatever follows the statement, so a throw no
longer has to be the end of the program.

The unwind is the interesting part. In this VM the instruction stream IS the
continuation, so a throw already discarded everything pending simply by dropping
the stream it was running in. A handler is therefore just a continuation to run
instead, kept on an exception-handler stack in r2 next to a snapshot of r1. r1 is
the whole local context -- locals, spilled arguments, and the stack of activation
frames -- so restoring the snapshot unwinds every frame the body entered at once,
with no unwind loop anywhere.
"""
import pytest


# --- the basic shape --------------------------------------------------------
def test_a_throw_in_the_body_runs_the_handler(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand(
        "PP2(try (print(1), print(nonexistent), print(2)) catch (print((caught))), print(3))"
    ) == "1 caught 3"


def test_the_rest_of_the_body_is_abandoned(pp):
    # print(2) sits after the throw and must not run
    pp.include("pp2/pp2.h")
    assert "2" not in pp.expand(
        "PP2(try (print(1), print(nonexistent), print(2)) catch (print((caught))))"
    )


def test_a_body_that_does_not_throw_never_runs_the_handler(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(try (print(1), print(2)) catch (print((no))), print(3))") == "1 2 3"


def test_execution_continues_after_the_statement(pp):
    # both paths rejoin the program at the instruction after the try
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(try (print(bad)) catch (print((h))), print((end)))") == "h end"


# --- what a throw keeps, and what it discards -------------------------------
# A throw discards the callee frames it was buried in, and nothing else. The try
# body's own assignments are things the program said, and they stand.
def test_the_try_bodys_assignments_survive_the_throw(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand(
        "PP2(X (1), try (X (2), Y (3), print(bad)) catch (print(X), print(Y)))"
    ) == "2 3"


def test_an_assignment_before_a_throwing_call_survives(pp):
    # the write happens, then a call is entered and throws from inside it: the
    # callee's frame goes, the write stays
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_boom PP2_FN (x) (x plus (nonexistent))")
    assert pp.expand("PP2(X (1), try (X (2), print(boom(1))) catch (print(X)))") == "2"


def test_a_loop_counter_keeps_its_value_when_the_loop_throws(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand(
        "PP2(i (0), try (while (i lt (5)) (i (i plus (1)), if (i eq (3)) (print(bad)))) "
        "catch (print(i)))"
    ) == "3"


def test_a_callees_locals_do_not_leak_into_the_handler(pp):
    # boom binds its parameter x; after the unwind the handler is back in its own
    # scope, where x was never bound
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_boom PP2_FN (x) (x plus (nonexistent))")
    assert pp.expand("PP2(try (print(boom(1))) catch (print(x)))") == \
        pp.parse("8PP2_LANGUAGE_UNBOUND_LOCAL_EXCEPTION((x))")


# --- unwinding --------------------------------------------------------------
def test_a_throw_unwinds_out_of_a_function_call(pp):
    # X belongs to the caller and must survive the callee's frame being discarded
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_boom PP2_FN (x) (x plus (nonexistent))")
    assert pp.expand("PP2(X (5), try (print(boom(1))) catch (print((caught))), print(X))") == \
        "caught 5"


def test_a_throw_unwinds_out_of_nested_calls(pp):
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_boom PP2_FN (x) (x plus (nonexistent))")
    pp.define("PP2_DEF_deep PP2_FN (x) (boom(x))")
    assert pp.expand("PP2(X (7), try (print(deep(2))) catch (print((caught))), print(X))") == \
        "caught 7"


def test_a_throw_unwinds_a_half_evaluated_nested_argument(pp):
    # the inner call has already spilled the outer call's operands onto the
    # register stack; restoring the r1 snapshot drops them in one move
    pp.include("pp2/pp2.h")
    assert pp.expand(
        "PP2(try (print(2 plus (3 plus (nonexistent)))) catch (print((caught))), print((end)))"
    ) == "caught end"


def test_a_throw_unwinds_out_of_a_closure(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand(
        "PP2(X (4), F (fn (y) (y plus (nonexistent))), "
        "try (print(F call (1))) catch (print((caught))), print(X))"
    ) == "caught 4"


def test_a_throw_escapes_a_loop(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand(
        "PP2(i (0), try (while (i lt (5)) (print(i), i (i plus (1)), "
        "if (i eq (3)) (print(bad)))) catch (print((caught))), print((end)))"
    ) == "0 1 2 caught end"


def test_a_try_inside_a_loop_keeps_looping(pp):
    # the loop's labels and the handler stack do not tread on one another
    pp.include("pp2/pp2.h")
    assert pp.expand(
        "PP2(i (0), while (i lt (3)) (i (i plus (1)), try (print(bad)) catch (print(i))), "
        "print((end)))"
    ) == "1 2 3 end"


# --- nesting ----------------------------------------------------------------
def test_the_innermost_handler_wins(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand(
        "PP2(try (try (print(bad)) catch (print((inner))), print((after))) "
        "catch (print((outer))), print((end)))"
    ) == "inner after end"


def test_a_throw_inside_a_handler_reaches_the_next_handler_out(pp):
    # the entry is popped on the way in, so a handler's own try cannot catch it
    pp.include("pp2/pp2.h")
    assert pp.expand(
        "PP2(try (try (print(bad)) catch (print((h1)), print(alsobad), print((never)))) "
        "catch (print((h2))), print((end)))"
    ) == "h1 h2 end"


def test_handlers_chain_out_through_three_levels(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand(
        "PP2(try (try (try (print(bad)) catch (print((h3)), print(bad))) "
        "catch (print((h2)), print(bad))) catch (print((h1))), print((end)))"
    ) == "h3 h2 h1 end"


# --- the exception value ----------------------------------------------------
def test_catch_can_name_the_exception(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(try (print(oops)) catch (e) (print(e)), print((end)))") == \
        pp.parse("8PP2_LANGUAGE_DEFINITION_EXCEPTION(oops) end")


def test_the_named_exception_is_an_ordinary_value(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(try (print(oops)) catch (e) (E (e), print(E)))") == \
        pp.parse("8PP2_LANGUAGE_DEFINITION_EXCEPTION(oops)")


def test_an_unbound_read_is_catchable_and_carries_its_address(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(try (print(var (n o p e))) catch (e) (print(e)))") == \
        pp.parse("8PP2_LANGUAGE_UNBOUND_LOCAL_EXCEPTION((n)(o)(p)(e))")


# --- an uncaught throw still ends the program, exactly as before -------------
def test_an_uncaught_throw_is_unchanged(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(1), print(nonexistent), print(2))") == \
        pp.parse("1 8PP2_LANGUAGE_DEFINITION_EXCEPTION(nonexistent)")


def test_a_throw_outside_any_try_still_ends_the_program(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(try (print(1)) catch (print((no))), print(nonexistent), print(2))") == \
        pp.parse("1 8PP2_LANGUAGE_DEFINITION_EXCEPTION(nonexistent)")


# --- a try is an expression too ---------------------------------------------
def test_a_try_in_a_function_body_can_produce_a_value(pp):
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_guard PP2_FN (x) (try (x plus (nonexistent)) catch (0 minus (1)))")
    # a negative prints as two tokens, the sign and the digit
    assert pp.expand("PP2(print(guard(1)))") == "- 1"
