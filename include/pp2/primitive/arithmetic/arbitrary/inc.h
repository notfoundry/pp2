/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_INC_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_INC_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/basic/defer.h"
#include "pp2/primitive/punctuation/lparen.h"
#include "pp2/primitive/arithmetic/arbitrary/sign.h"
#include "pp2/primitive/arithmetic/arbitrary/dec.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/special.h"

/* Increment an arbitrary number. A negative x increments by decrementing its
 * magnitude; a non-negative x runs the unsigned carry walk. The walk prefixes a
 * leading (0) to absorb a possible carry-out, drives the digit sequence through
 * the alternating A/B co-routine, and applies the per-digit carry rules
 * (INC_0..INC_9) from the least significant end via SPECIAL_CLOSE. */

#define PP2_ARBITRARY_INC(x) PP2_ARBITRARY_INC_I(PP2_ARBITRARY_FIX(x))

#define PP2_ARBITRARY_INC_I(x) PP2_ARBITRARY_SIGN(x)(PP2_ARBITRARY_INC_I_,SIGNED,UNSIGNED)(x)
#define PP2_ARBITRARY_INC_I_SIGNED(x) PP2_ARBITRARY_FIX((PP2_ARBITRARY_DEC_INTERNAL(PP2_OPEN x)))
#define PP2_ARBITRARY_INC_I_UNSIGNED(x) PP2_ARBITRARY_INC_INTERNAL(x)

#define PP2_ARBITRARY_INC_INTERNAL(x) PP2_ARBITRARY_INC_INTERNAL_I(PP2_SCAN(PP2_ARBITRARY_INC_A (0)x(00), PP2_ARBITRARY_INC_IV PP2_ARBITRARY_SPECIAL_CLOSE((0)x)))
#define PP2_ARBITRARY_INC_INTERNAL_I(...) PP2_ARBITRARY_FIX_INTERNAL(PP2_TUPLE_AT_0(,__VA_ARGS__))

#define PP2_ARBITRARY_INC_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_INC_II PP2_DEFER(PP2_LPAREN_ID)() digit,PP2_ARBITRARY_INC_B)
#define PP2_ARBITRARY_INC_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_INC_II PP2_DEFER(PP2_LPAREN_ID)() digit,PP2_ARBITRARY_INC_A)
#define PP2_ARBITRARY_INC_II(...) PP2_ARBITRARY_INC_III(__VA_ARGS__)

#define PP2_ARBITRARY_INC_III(digit, res, op) op(digit)(res)
#define PP2_ARBITRARY_INC_IV(digit) PP2_ARBITRARY_INC_##digit
#define PP2_ARBITRARY_INC_V(digit) (digit)PP2_ARBITRARY_INC_VI
#define PP2_ARBITRARY_INC_VI(res) res,PP2_ARBITRARY_INC_V

#define PP2_ARBITRARY_INC_0(res) (1)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_1(res) (2)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_2(res) (3)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_3(res) (4)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_4(res) (5)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_5(res) (6)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_6(res) (7)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_7(res) (8)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_8(res) (9)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_9(res) (0)res,PP2_ARBITRARY_INC_IV

#endif
