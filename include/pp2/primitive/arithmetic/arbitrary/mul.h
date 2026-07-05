/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_MUL_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_MUL_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/basic/defer.h"
#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/punctuation/lparen.h"
#include "pp2/primitive/seq/reverse.h"
#include "pp2/primitive/arithmetic/arbitrary/sign.h"
#include "pp2/primitive/arithmetic/arbitrary/add.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/special.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/muldigit.h"

/* Signed multiplication.
 *
 * The magnitude product is a Horner walk over the multiplier: for each digit d
 * of x, most significant first, acc = acc*10 + y*d. The walk is the same
 * sliding-window engine as RMERGE: each digit of the reversed multiplier opens
 * one deferred paren, nesting the next step inside, so the digits themselves
 * fuel the construction and the nest evaluates inside out (most significant
 * digit innermost, hence first) through ordinary argument expansion. One digit,
 * one nesting level -- no rescan ladder.
 *
 * The sign of the result is the XOR of the operand signs. */

#define PP2_ARBITRARY_MUL(x, y) PP2_ARBITRARY_MUL_I(PP2_ARBITRARY_FIX(x), PP2_ARBITRARY_FIX(y))

#define PP2_ARBITRARY_MUL_I(x, y) \
    PP2_ARBITRARY_MUL_CAT(PP2_ARBITRARY_SIGN(x)(,1,0), PP2_ARBITRARY_SIGN(y)(,1,0))( \
        PP2_ARBITRARY_SIGN(x)(,PP2_OPEN,) x, \
        PP2_ARBITRARY_SIGN(y)(,PP2_OPEN,) y \
    )
#define PP2_ARBITRARY_MUL_CAT(a, b) PP2_ARBITRARY_MUL_CAT_I(a, b)
#define PP2_ARBITRARY_MUL_CAT_I(a, b) PP2_ARBITRARY_MUL_S_##a##b

#define PP2_ARBITRARY_MUL_S_00(x, y) PP2_ARBITRARY_MUL_INTERNAL(x, y)
#define PP2_ARBITRARY_MUL_S_11(x, y) PP2_ARBITRARY_MUL_INTERNAL(x, y)
#define PP2_ARBITRARY_MUL_S_01(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_MUL_INTERNAL(x, y)))
#define PP2_ARBITRARY_MUL_S_10(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_MUL_INTERNAL(x, y)))

/* magnitude product: Horner walk over the reversed multiplier. The walk driver
 * is a private PP2_SCAN clone: the nest evaluates inside the driver's rescan,
 * where the driver's own name is painted, so it must not be the PP2_SCAN that
 * every inner operation (ADD_INTERNAL, MULDIGIT, SEQ_REVERSE) depends on. */
#define PP2_ARBITRARY_MULW_GO(...) __VA_ARGS__

#define PP2_ARBITRARY_MUL_INTERNAL(x, y) PP2_ARBITRARY_MUL_INTERNAL_I(PP2_SEQ_REVERSE(x), y)
#define PP2_ARBITRARY_MUL_INTERNAL_I(rx, y) \
    PP2_ARBITRARY_MULW_III(PP2_ARBITRARY_MULW_GO( \
        PP2_ARBITRARY_MULW_A rx(00) (0), y PP2_ARBITRARY_SPECIAL_CLOSE(rx)))

#define PP2_ARBITRARY_MULW_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_MULW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_MULW_B)
#define PP2_ARBITRARY_MULW_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_MULW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_MULW_A)
#define PP2_ARBITRARY_MULW_I(...) PP2_ARBITRARY_MULW_II(__VA_ARGS__)
#define PP2_ARBITRARY_MULW_II(digit, acc, y) \
        PP2_ARBITRARY_ADD_INTERNAL(PP2_ARBITRARY_MULDIGIT(y, digit), acc(0)), y
#define PP2_ARBITRARY_MULW_III(...) PP2_TUPLE_AT_0(,__VA_ARGS__)

#endif
