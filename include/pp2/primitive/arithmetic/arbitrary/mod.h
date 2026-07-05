/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_MOD_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_MOD_H

#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/arithmetic/arbitrary/sign.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/divmod.h"

/* Signed remainder, C semantics: the result takes the dividend's sign and
 * satisfies x == y*(x/y) + x%y with truncated division. Division by zero is
 * undefined. */

#define PP2_ARBITRARY_MOD(x, y) PP2_ARBITRARY_MOD_I(PP2_ARBITRARY_FIX(x), PP2_ARBITRARY_FIX(y))

#define PP2_ARBITRARY_MOD_I(x, y) \
    PP2_ARBITRARY_MOD_CAT(PP2_ARBITRARY_SIGN(x)(,1,0), PP2_ARBITRARY_SIGN(y)(,1,0))( \
        PP2_ARBITRARY_SIGN(x)(,PP2_OPEN,) x, \
        PP2_ARBITRARY_SIGN(y)(,PP2_OPEN,) y \
    )
#define PP2_ARBITRARY_MOD_CAT(a, b) PP2_ARBITRARY_MOD_CAT_I(a, b)
#define PP2_ARBITRARY_MOD_CAT_I(a, b) PP2_ARBITRARY_MOD_S_##a##b

#define PP2_ARBITRARY_MOD_S_00(x, y) PP2_ARBITRARY_MOD_INTERNAL(x, y)
#define PP2_ARBITRARY_MOD_S_01(x, y) PP2_ARBITRARY_MOD_INTERNAL(x, y)
#define PP2_ARBITRARY_MOD_S_10(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_MOD_INTERNAL(x, y)))
#define PP2_ARBITRARY_MOD_S_11(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_MOD_INTERNAL(x, y)))

#define PP2_ARBITRARY_MOD_INTERNAL(x, y) \
    PP2_ARBITRARY_DIVMOD_R(PP2_ARBITRARY_DIVMOD_INTERNAL(x, y))

#endif
