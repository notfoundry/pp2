/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SUB_INTERNAL_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SUB_INTERNAL_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/facilities/indirect.h"
#include "pp2/primitive/logical/bitor.h"
#include "pp2/primitive/seq/reverse.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/merge.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/minus.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/plus.h"

/* Magnitude subtraction x - y, REQUIRING x >= y (both unsigned, canonical). The
 * RMERGE walks aligned digit pairs least-significant first, PP2_MINUS produces a
 * (borrow,diff) per column, and the running borrow threads forward through
 * PP2_INDIRECT (combined with PP2_BITOR). The reversed result is re-fixed. */

#define PP2_ARBITRARY_SUB_INTERNAL(x, y) \
    PP2_ARBITRARY_FIX_INTERNAL(PP2_SEQ_REVERSE(PP2_SCAN( \
        PP2_ARBITRARY_SUB_M(0) PP2_ARBITRARY_RMERGE(x, y, PP2_ARBITRARY_SUB_M, 0)() \
    )))

#define PP2_ARBITRARY_SUB_M(borrow) PP2_ARBITRARY_SUB_M_ ## borrow
#define PP2_ARBITRARY_SUB_M_0(x, y) PP2_ARBITRARY_SUB_II(PP2_MINUS(x, y), 0)
#define PP2_ARBITRARY_SUB_M_1(x, y) PP2_ARBITRARY_SUB_II(PP2_MINUS(x, y), 1)
#define PP2_ARBITRARY_SUB_II(bin, c) PP2_ARBITRARY_SUB_III(PP2_BINARY(0) bin, PP2_MINUS(PP2_BINARY(1) bin, c))
#define PP2_ARBITRARY_SUB_III(b, bin) (PP2_BINARY(1) bin) PP2_INDIRECT(PP2_BITOR(b)(PP2_BINARY(0) bin))

#endif
