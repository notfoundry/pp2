/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_ADD_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_ADD_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/seq/reverse.h"
#include "pp2/primitive/arithmetic/arbitrary/sign.h"
#include "pp2/primitive/arithmetic/arbitrary/compare.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/merge.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/plus.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/sub_internal.h"

/* Signed addition. Dispatches on the sign pair: same-sign adds magnitudes
 * (ADD_INTERNAL) and keeps/negates the sign; opposite-sign subtracts the smaller
 * magnitude from the larger and takes the larger's sign (via ADD_INTERNAL's
 * mixed helper, which compares then routes to SUB_INTERNAL). */

#define PP2_ARBITRARY_ADD(x, y) PP2_ARBITRARY_ADD_I(PP2_ARBITRARY_FIX(x), PP2_ARBITRARY_FIX(y))

#define PP2_ARBITRARY_ADD_I(x, y) \
    PP2_ARBITRARY_ADD_CAT(PP2_ARBITRARY_SIGN(x)(,1,0), PP2_ARBITRARY_SIGN(y)(,1,0))( \
        PP2_ARBITRARY_SIGN(x)(,PP2_OPEN,) x, \
        PP2_ARBITRARY_SIGN(y)(,PP2_OPEN,) y \
    )
#define PP2_ARBITRARY_ADD_CAT(a, b) PP2_ARBITRARY_ADD_CAT_I(a, b)
#define PP2_ARBITRARY_ADD_CAT_I(a, b) PP2_ARBITRARY_ADD_S_##a##b

#define PP2_ARBITRARY_ADD_S_00(x, y) PP2_ARBITRARY_ADD_INTERNAL(x, y)
#define PP2_ARBITRARY_ADD_S_11(x, y) (PP2_ARBITRARY_ADD_INTERNAL(x, y))
#define PP2_ARBITRARY_ADD_S_01(x, y) PP2_ARBITRARY_ADD_S_10(y, x)
#define PP2_ARBITRARY_ADD_S_10(x, y) PP2_ARBITRARY_FIX(PP2_ARBITRARY_ADD_MIX(PP2_ARBITRARY_CMP_INTERNAL(x, y))(x, y))

/* x is the (positive) magnitude of the negative operand, y the non-negative
 * operand: result is y - x, signed by which magnitude is larger. The extra
 * indirection expands the CMP result to a 0/1/2 token before it is pasted. */
#define PP2_ARBITRARY_ADD_MIX(c) PP2_ARBITRARY_ADD_MIX_EVAL(c)
#define PP2_ARBITRARY_ADD_MIX_EVAL(c) PP2_ARBITRARY_ADD_MIX_##c
#define PP2_ARBITRARY_ADD_MIX_0(x, y) PP2_ARBITRARY_SUB_INTERNAL(y, x)
#define PP2_ARBITRARY_ADD_MIX_1(x, y) (0)
#define PP2_ARBITRARY_ADD_MIX_2(x, y) (PP2_ARBITRARY_SUB_INTERNAL(x, y))

#define PP2_ARBITRARY_ADD_INTERNAL(x, y) \
    PP2_ARBITRARY_FIX_INTERNAL(PP2_SEQ_REVERSE(PP2_SCAN( \
        PP2_ARBITRARY_ADD_M(0) PP2_ARBITRARY_RMERGE(x, y, PP2_ARBITRARY_ADD_M, 0)() \
    )))

#define PP2_ARBITRARY_ADD_M(carry) PP2_ARBITRARY_ADD_ ## carry
#define PP2_ARBITRARY_ADD_0(x, y) PP2_PLUS_3RD(0)(PP2_PLUS(x, y))
#define PP2_ARBITRARY_ADD_1(x, y) PP2_PLUS_3RD(1)(PP2_PLUS(x, y), 1)

#endif
