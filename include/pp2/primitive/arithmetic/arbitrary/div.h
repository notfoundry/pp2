/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DIV_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DIV_H

#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/arithmetic/arbitrary/sign.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/divmod.h"

/* Signed division, truncated toward zero (C semantics): the magnitude quotient
 * takes the XOR of the operand signs. Division by zero is undefined. */

#define PP2_ARBITRARY_DIV(x, y) PP2_ARBITRARY_DIV_I(PP2_ARBITRARY_FIX(x), PP2_ARBITRARY_FIX(y))

#define PP2_ARBITRARY_DIV_I(x, y) \
    PP2_ARBITRARY_DIV_CAT(PP2_ARBITRARY_SIGN(x)(,1,0), PP2_ARBITRARY_SIGN(y)(,1,0))( \
        PP2_ARBITRARY_SIGN(x)(,PP2_OPEN,) x, \
        PP2_ARBITRARY_SIGN(y)(,PP2_OPEN,) y \
    )
#define PP2_ARBITRARY_DIV_CAT(a, b) PP2_ARBITRARY_DIV_CAT_I(a, b)
#define PP2_ARBITRARY_DIV_CAT_I(a, b) PP2_ARBITRARY_DIV_S_##a##b

#define PP2_ARBITRARY_DIV_S_00(x, y) PP2_ARBITRARY_DIV_INTERNAL(x, y)
#define PP2_ARBITRARY_DIV_S_11(x, y) PP2_ARBITRARY_DIV_INTERNAL(x, y)
#define PP2_ARBITRARY_DIV_S_01(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_DIV_INTERNAL(x, y)))
#define PP2_ARBITRARY_DIV_S_10(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_DIV_INTERNAL(x, y)))

#define PP2_ARBITRARY_DIV_INTERNAL(x, y) \
    PP2_ARBITRARY_FIX_INTERNAL(PP2_ARBITRARY_DIVMOD_Q(PP2_ARBITRARY_DIVMOD_INTERNAL(x, y)))

#endif
