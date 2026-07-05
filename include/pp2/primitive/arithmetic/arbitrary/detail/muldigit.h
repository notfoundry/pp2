/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_MULDIGIT_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_MULDIGIT_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/seq/reverse.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/merge.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/plus.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/times.h"

/* Multiply an unsigned magnitude y by a single digit d -> unsigned magnitude.
 * A single RMERGE walk (least-significant first) multiplies each digit of y by d
 * with PP2_TIMES, threading the carry forward via PP2_PLUS_3RD. The multiplier
 * digit d is supplied as the merge's pad value so every column sees it. This is
 * one pass, exactly like ADD -- no scan ladder needed. */

#define PP2_ARBITRARY_MULDIGIT(y, d) \
    PP2_ARBITRARY_FIX_INTERNAL(PP2_SEQ_REVERSE(PP2_SCAN( \
        PP2_ARBITRARY_MUL_M(0) PP2_ARBITRARY_RMERGE(y, (d), PP2_ARBITRARY_MUL_M, d)() \
    )))

#define PP2_ARBITRARY_MUL_M(carry) PP2_ARBITRARY_MUL_M_ ## carry
#define PP2_ARBITRARY_MUL_M_0(x, y) PP2_PLUS_3RD(0)(PP2_TIMES(x, y))
#define PP2_ARBITRARY_MUL_M_1(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 1)
#define PP2_ARBITRARY_MUL_M_2(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 2)
#define PP2_ARBITRARY_MUL_M_3(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 3)
#define PP2_ARBITRARY_MUL_M_4(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 4)
#define PP2_ARBITRARY_MUL_M_5(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 5)
#define PP2_ARBITRARY_MUL_M_6(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 6)
#define PP2_ARBITRARY_MUL_M_7(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 7)
#define PP2_ARBITRARY_MUL_M_8(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 8)

#endif
