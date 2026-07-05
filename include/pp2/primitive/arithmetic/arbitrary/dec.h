/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DEC_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DEC_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/basic/defer.h"
#include "pp2/primitive/seq/head.h"
#include "pp2/primitive/punctuation/lparen.h"
#include "pp2/primitive/detection/isnt_0.h"
#include "pp2/primitive/arithmetic/arbitrary/sign.h"
#include "pp2/primitive/arithmetic/arbitrary/inc.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/special.h"

/* Decrement an arbitrary number. A negative x decrements by incrementing its
 * magnitude (more negative); zero decrements to -1 (i.e. ((1))); a positive x
 * runs the unsigned borrow walk (DEC_0..DEC_9), mirroring INC but borrowing. */

#define PP2_ARBITRARY_DEC(x) PP2_ARBITRARY_DEC_I(PP2_ARBITRARY_FIX(x))

#define PP2_ARBITRARY_DEC_I(x) PP2_ARBITRARY_SIGN(x)(PP2_ARBITRARY_DEC_I_,SIGNED,UNSIGNED)(x)
#define PP2_ARBITRARY_DEC_I_SIGNED(x) (PP2_ARBITRARY_INC_INTERNAL(PP2_OPEN x))
#define PP2_ARBITRARY_DEC_I_UNSIGNED(x) PP2_SCAN(PP2_ISNT_0(PP2_SEQ_HEAD(x))(PP2_ARBITRARY_DEC_I_UNSIGNED_,NONZERO,ZERO)(x))
#define PP2_ARBITRARY_DEC_I_UNSIGNED_ZERO(x) ((1))
#define PP2_ARBITRARY_DEC_I_UNSIGNED_NONZERO(x) PP2_ARBITRARY_DEC_INTERNAL(x)

#define PP2_ARBITRARY_DEC_INTERNAL(x) PP2_ARBITRARY_DEC_INTERNAL_I(PP2_SCAN(PP2_ARBITRARY_DEC_A x(00), PP2_ARBITRARY_DEC_IV PP2_ARBITRARY_SPECIAL_CLOSE(x)))
#define PP2_ARBITRARY_DEC_INTERNAL_I(...) PP2_ARBITRARY_FIX_INTERNAL(PP2_TUPLE_AT_0(,__VA_ARGS__))

#define PP2_ARBITRARY_DEC_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DEC_II PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DEC_B)
#define PP2_ARBITRARY_DEC_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DEC_II PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DEC_A)
#define PP2_ARBITRARY_DEC_II(...) PP2_ARBITRARY_DEC_III(__VA_ARGS__)

#define PP2_ARBITRARY_DEC_III(digit, res, op) op(digit)(res)
#define PP2_ARBITRARY_DEC_IV(digit) PP2_ARBITRARY_DEC_##digit
#define PP2_ARBITRARY_DEC_V(digit) (digit)PP2_ARBITRARY_DEC_VI
#define PP2_ARBITRARY_DEC_VI(res) res,PP2_ARBITRARY_DEC_V

#define PP2_ARBITRARY_DEC_0(res) (9)res,PP2_ARBITRARY_DEC_IV
#define PP2_ARBITRARY_DEC_1(res) (0)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_2(res) (1)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_3(res) (2)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_4(res) (3)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_5(res) (4)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_6(res) (5)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_7(res) (6)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_8(res) (7)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_9(res) (8)res,PP2_ARBITRARY_DEC_V

#endif
