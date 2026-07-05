/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_DIVMOD_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_DIVMOD_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/basic/defer.h"
#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/punctuation/lparen.h"
#include "pp2/primitive/seq/reverse.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/special.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/qdigit.h"

/* Magnitude long division, quotient and remainder in one walk. The dividend's
 * digits drive the same sliding-window nest as MUL (most significant digit
 * innermost, so evaluated first); each level appends the incoming digit to the
 * running remainder, extracts one quotient digit with the QD chain, and threads
 * (quotient, remainder, divisor) outward. PP2_ARBITRARY_DIVMOD_INTERNAL(x, y)
 * expands to the triple q, r, y; the Q/R pickers select one component.
 * Division by zero is undefined (produces garbage, does not hang). */

/* private PP2_SCAN clone: the nest evaluates inside the driver's rescan, where
 * the driver's own name is painted, so it must not be the PP2_SCAN that the
 * inner operations (CMP, SUB_INTERNAL, FIX, SEQ_REVERSE) depend on */
#define PP2_ARBITRARY_DIVW_GO(...) __VA_ARGS__

#define PP2_ARBITRARY_DIVMOD_INTERNAL(x, y) PP2_ARBITRARY_DIVMOD_INTERNAL_I(PP2_SEQ_REVERSE(x), y)
#define PP2_ARBITRARY_DIVMOD_INTERNAL_I(rx, y) \
    PP2_ARBITRARY_DIVW_GO(PP2_ARBITRARY_DIVW_A rx(00) , (0), y PP2_ARBITRARY_SPECIAL_CLOSE(rx))

#define PP2_ARBITRARY_DIVW_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DIVW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DIVW_B)
#define PP2_ARBITRARY_DIVW_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DIVW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DIVW_A)
#define PP2_ARBITRARY_DIVW_I(...) PP2_ARBITRARY_DIVW_II(__VA_ARGS__)
#define PP2_ARBITRARY_DIVW_II(digit, q, r, y) \
        PP2_ARBITRARY_DIVW_III(q, y, PP2_ARBITRARY_QD_0(PP2_ARBITRARY_FIX_INTERNAL(r(digit)), y))
#define PP2_ARBITRARY_DIVW_III(q, y, qr) PP2_ARBITRARY_DIVW_IV(q, y, qr)
#define PP2_ARBITRARY_DIVW_IV(q, y, qd, r) q(qd), r, y

#define PP2_ARBITRARY_DIVMOD_Q(...) PP2_TUPLE_AT_0(,__VA_ARGS__)
#define PP2_ARBITRARY_DIVMOD_R(...) PP2_TUPLE_AT_1(,__VA_ARGS__)

#endif
