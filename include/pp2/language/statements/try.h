/** @file */
#ifndef PP2_LANGUAGE_STATEMENTS_TRY_H
#define PP2_LANGUAGE_STATEMENTS_TRY_H

#include "pp2/language/basic/block.h"
#include "pp2/language/basic/detail/name.h"
#include "pp2/language/compiler.h"

#include "pp2/machine/exception/pop_eh.h"
#include "pp2/machine/exception/push_eh.h"
#include "pp2/machine/exception/throw.h"
#include "pp2/machine/stack/store.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/introspection/is_tuple.h"
#include "pp2/primitive/seq/head.h"
#include "pp2/primitive/tuple/open.h"

/* `try (body) catch (handler)` runs the body with a handler installed. If the body
 * throws, the rest of it is abandoned and the handler runs instead; if it finishes,
 * the handler is uninstalled and never runs. Either way execution carries on with
 * whatever follows the statement.
 *
 *   try (
 *       print(1),
 *       print(nonexistent),
 *       print(2)
 *   ) catch (
 *       print((caught!))
 *   )
 *
 * prints `1 caught!`. The `print(2)` is skipped, and the program does not die.
 *
 * `catch (e) (handler)` names the exception, binding it in the handler as a Quote
 * of the thrown `TYPE(message)`. The name is spelled out character by character
 * like any `var` name, so `catch (e r r) (...)` binds `err`.
 *
 * A throw inside the handler is not caught by its own try, since the entry is
 * popped on the way in, so it reaches the next handler out or ends the program. */
/* Object-like, so the body group arrives still parenthesised as an argument of
 * PP2_COMPILE_LANGUAGE_TRY. A function-like PP2_DEF_try would collect the body
 * group as its own argument list and be torn apart on the commas between the
 * body's statements. The whole tail `(body) catch (handler)` holds no top-level
 * comma, so it arrives as a single argument and is taken apart here instead. */
#define PP2_DEF_try )PP2_COMPILE_LANGUAGE_TRY(

#define PP2_COMPILE_LANGUAGE_TRY(...) \
        IP2_FX(LANGUAGE_TRY_SPLIT,(,PP2_SEQ_SPLIT_HEAD __VA_ARGS__))

/* The tokens after the body group are the whole catch clause, so pasting the peel
 * prefix onto them both checks for the `catch` keyword and strips it, leaving the
 * clause as a seq of one or two groups. A clause that did not open with `catch`
 * leaves the unresolved paste behind, which is not a group, and that is what tells
 * a malformed try from a well-formed one. */
#define IP2_LANGUAGE_TRY_SPLIT(P,body_stx,catch_clause) \
        IP2_LANGUAGE_TRY_CHECK(P##body_stx,IP2_LANGUAGE_TRY_PEEL_##catch_clause)

#define IP2_LANGUAGE_TRY_PEEL_catch

#define IP2_LANGUAGE_TRY_CHECK(body_stx,clause) \
        PP2_IS_TUPLE(clause)(IP2_LANGUAGE_TRY_SHAPE,IP2_LANGUAGE_TRY_MALFORMED)(body_stx,clause)

#define IP2_LANGUAGE_TRY_MALFORMED(body_stx,clause) \
        8PP2_THROW_EXCEPTION,8PP2_LANGUAGE_DEFINITION_EXCEPTION,try

/* One group is a bare handler, two are a name and a handler. A bound name compiles
 * to a store of r0, which the throw has already loaded with the exception, into a
 * local of that name; the store runs first thing in the handler's continuation. */
/* IP2_FY, not IP2_FX: this runs inside the IP2_FX that PP2_COMPILE_LANGUAGE_TRY
 * opened, and a hop reused inside its own expansion is blue-painted and stops
 * firing. Nested hops need distinct names. */
#define IP2_LANGUAGE_TRY_SHAPE(body_stx,clause) \
        IP2_FY(LANGUAGE_TRY_SHAPE_I,(body_stx,PP2_SEQ_SPLIT_HEAD clause))

#define IP2_LANGUAGE_TRY_SHAPE_I(body_stx,first,rest) \
        PP2_IS_TUPLE(rest)(IP2_LANGUAGE_TRY_BOUND,IP2_LANGUAGE_TRY_PLAIN)(body_stx,first,rest)

#define IP2_LANGUAGE_TRY_PLAIN(body_stx,handler_stx,rest) \
        8PP2_LANGUAGE_TRY,body_stx,(),handler_stx

#define IP2_LANGUAGE_TRY_BOUND(body_stx,name,handler_stx) \
        8PP2_LANGUAGE_TRY,body_stx,(8PP2_STACK_STORE,PP2_SPACED name,),handler_stx


/* The instruction stream trailing a try IS its continuation, so both the normal
 * path and the throw path have to end up in it. The normal path just falls through:
 * body, pop the handler, carry on. The throw path cannot fall through to anything,
 * because a throw abandons the stream it was running in, so the handler is installed
 * as a continuation that already has that same trailing stream appended to it. The
 * two paths meet again at the instruction after the try, whichever one ran. */
#define PP2_INSN_8PP2_LANGUAGE_TRY(P,r0,r1,r2,body_stx,bind,handler_stx,...) \
                                  (, \
                                   P##r0,P##r1,P##r2, \
                                   8PP2_PUSH_EXCEPTION_HANDLER, \
                                       (PP2_OPEN P##bind 8PP2_LANGUAGE_BLOCK,P##handler_stx,P##__VA_ARGS__), \
                                   8PP2_LANGUAGE_BLOCK,P##body_stx, \
                                   8PP2_POP_EXCEPTION_HANDLER, \
                                   P##__VA_ARGS__ \
                                  )

#endif
