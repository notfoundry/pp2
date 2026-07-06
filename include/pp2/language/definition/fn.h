/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_FN_H
#define PP2_LANGUAGE_DEFINITION_FN_H

#include "pp2/language/expressions/fn.h"

/* PP2_FN(<params>) (<body>): bind a name to a function value -- pp2's analogue
 * of order-pp's `<name> ORDER_PP_FN(8fn(...))`. Written host-side as
 *
 *   #define PP2_DEF_add PP2_FN (x, y) (x plus (y))
 *
 * after which `add` is a first-class value in every position:
 *   - direct application   : add(2, 3)               -> 5
 *   - assign then call      : F (add), F call (2, 3)  -> 5
 *   - passed as a value     : print(add), map (add), ...
 *
 * PP2_FN is the same function-like shape as the `fn` keyword (PP2_DEF_fn): it
 * consumes the parameter tuple as its arguments and leaves the `fn` compiler
 * open so the `(body)` that follows -- and the rest of the enclosing program --
 * completes it, exactly as `fn (params) (body)` does inline. So a PP2_FN
 * binding is spelled without a redundant `fn` and without wrapping parens.
 *
 * Direct application `add(a, b)` needs no special machinery: the compiler's
 * RETURN grammar already dispatches a paren group following a value through
 * 8PP2_LANGUAGE_SELF_CALL (i.e. `call`). Note this only holds for
 * value-resolving names like `add`; a single-letter variable slot `F (...)` is
 * assignment, so a stored fn is still invoked with `call`. */
#define PP2_FN(...) )PP2_COMPILE_LANGUAGE_FN(,(__VA_ARGS__),

#endif
