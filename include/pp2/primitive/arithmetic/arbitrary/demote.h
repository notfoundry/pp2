/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DEMOTE_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DEMOTE_H

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/defer.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/punctuation/lparen.h"
#include "pp2/primitive/arithmetic/arbitrary/sign.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/special.h"

/* Demote a canonical number to a native token: (1)(2)(3) -> 123, ((1)(2)) -> - 12
 * (the sign is a separate token; -12 is not a valid paste). The digits drive the
 * same sliding-window nest as MUL, but in natural order: the least significant
 * digit lands innermost, so each level prepends its digit to the accumulated
 * token with one paste. No reverse, no residue. */

#define PP2_ARBITRARY_DEMOTE(x) PP2_ARBITRARY_SIGN(x)(PP2_ARBITRARY_DEMOTE_,SIGNED,UNSIGNED)(x)
#define PP2_ARBITRARY_DEMOTE_SIGNED(x) - PP2_ARBITRARY_DEMOTE_INTERNAL(PP2_OPEN x)
#define PP2_ARBITRARY_DEMOTE_UNSIGNED(x) PP2_ARBITRARY_DEMOTE_INTERNAL(x)

/* private PP2_SCAN clone, same reason as the MUL walk driver */
#define PP2_ARBITRARY_DEMW_GO(...) __VA_ARGS__

#define PP2_ARBITRARY_DEMOTE_INTERNAL(x) \
    PP2_ARBITRARY_DEMW_GO(PP2_ARBITRARY_DEMW_A x(00) PP2_ARBITRARY_SPECIAL_CLOSE(x))

#define PP2_ARBITRARY_DEMW_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DEMW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DEMW_B)
#define PP2_ARBITRARY_DEMW_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DEMW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DEMW_A)
#define PP2_ARBITRARY_DEMW_I(...) PP2_ARBITRARY_DEMW_II(__VA_ARGS__)
#define PP2_ARBITRARY_DEMW_II(digit, acc) PP2_PRIMITIVE_CAT(digit, acc)

#endif
