/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_FIX_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_FIX_H

#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/seq/head.h"
#include "pp2/primitive/detection/is_edible.h"
#include "pp2/primitive/detection/isnt_0.h"
#include "pp2/primitive/arithmetic/arbitrary/sign.h"

/* Normalise a number to canonical form: strip leading zeros so the most
 * significant digit is non-zero, collapse an all-zero magnitude to (0), and
 * drop a redundant negative sign on zero. FIX_INTERNAL handles an unsigned
 * magnitude; FIX dispatches on sign. */

#define PP2_ARBITRARY_FIX(x) PP2_ARBITRARY_SIGN(x)(PP2_ARBITRARY_FIX_,SIGNED,UNSIGNED)(x)
#define PP2_ARBITRARY_FIX_SIGNED(x) PP2_ARBITRARY_FIX_SIGNED_I(PP2_ARBITRARY_FIX_INTERNAL(PP2_OPEN x))
#define PP2_ARBITRARY_FIX_UNSIGNED(x) PP2_ARBITRARY_FIX_INTERNAL(x)

/* if the fixed magnitude is (0), drop the sign wrapper; else re-wrap negative */
#define PP2_ARBITRARY_FIX_SIGNED_I(x) PP2_SCAN(PP2_ISNT_0 (PP2_SEQ_HEAD(x))(,,PP2_OPEN)(x))

#define PP2_ARBITRARY_FIX_INTERNAL(x) PP2_ARBITRARY_FIX_II(PP2_ARBITRARY_FIX_A x)

#define PP2_ARBITRARY_FIX_II(c) PP2_IS_EDIBLE(,c)(,c,(0))
#define PP2_ARBITRARY_FIX_A(digit) PP2_ISNT_0(digit)(,(digit),PP2_ARBITRARY_FIX_B)
#define PP2_ARBITRARY_FIX_B(digit) PP2_ISNT_0(digit)(,(digit),PP2_ARBITRARY_FIX_A)

#endif
