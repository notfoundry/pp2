/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_MERGE_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_MERGE_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/seq/head.h"
#include "pp2/primitive/seq/tail.h"
#include "pp2/primitive/seq/reverse.h"
#include "pp2/primitive/punctuation/lparen.h"
#include "pp2/primitive/basic/defer.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/special.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/swap.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/is_shorter.h"

/* Zip two digit seqs of possibly different length, applying op to each aligned
 * digit pair and padding the shorter with def. FMERGE aligns from the most
 * significant end (result MSD-first, used by comparison); RMERGE aligns from the
 * least significant end (result LSD-first, used by add/sub). The longer operand
 * drives the walk; the shorter is padded by appending (def) as it is consumed.
 * SWAP restores original op-argument order when the left operand was shorter. */

#define PP2_ARBITRARY_FMERGE(x, y, op, def) PP2_ARBITRARY_FMERGE_III(PP2_ARBITRARY_IS_SHORTER(x,y)(PP2_ARBITRARY_FMERGE_,LHS,RHS)(x,y,op,def))
#define PP2_ARBITRARY_FMERGE_LHS(x, y, op, def) PP2_SCAN(PP2_ARBITRARY_FMERGE_A y(00), PP2_SEQ_REVERSE(x), op, def, PP2_ARBITRARY_SWAP PP2_ARBITRARY_SPECIAL_CLOSE(y))
#define PP2_ARBITRARY_FMERGE_RHS(x, y, op, def) PP2_SCAN(PP2_ARBITRARY_FMERGE_A x(00), PP2_SEQ_REVERSE(y), op, def, PP2_ARBITRARY_SPECIAL_CLOSE(x))

#define PP2_ARBITRARY_FMERGE_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_FMERGE_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_FMERGE_B)
#define PP2_ARBITRARY_FMERGE_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_FMERGE_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_FMERGE_A)
#define PP2_ARBITRARY_FMERGE_I(...) PP2_ARBITRARY_FMERGE_II(__VA_ARGS__)
#define PP2_ARBITRARY_FMERGE_II(digit, res, y, op, def, swap) \
        (op)swap(digit, PP2_SEQ_HEAD(y))res, PP2_SEQ_TAIL(y(def)), op, def, swap

#define PP2_ARBITRARY_FMERGE_III(...) PP2_SCAN(PP2_EAT PP2_TUPLE_AT_0(,__VA_ARGS__))


#define PP2_ARBITRARY_RMERGE(x, y, op, def) PP2_ARBITRARY_RMERGE_III(PP2_ARBITRARY_IS_SHORTER(x,y)(PP2_ARBITRARY_RMERGE_,LHS,RHS)(x,y,op,def))
#define PP2_ARBITRARY_RMERGE_LHS(x, y, op, def) PP2_SCAN(PP2_ARBITRARY_RMERGE_A y(00) PP2_EAT, PP2_SEQ_REVERSE(x), op, def, PP2_ARBITRARY_SWAP PP2_ARBITRARY_SPECIAL_CLOSE(y))
#define PP2_ARBITRARY_RMERGE_RHS(x, y, op, def) PP2_SCAN(PP2_ARBITRARY_RMERGE_A x(00) PP2_EAT, PP2_SEQ_REVERSE(y), op, def, PP2_ARBITRARY_SPECIAL_CLOSE(x))

#define PP2_ARBITRARY_RMERGE_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_RMERGE_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_RMERGE_B)
#define PP2_ARBITRARY_RMERGE_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_RMERGE_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_RMERGE_A)
#define PP2_ARBITRARY_RMERGE_I(...) PP2_ARBITRARY_RMERGE_II(__VA_ARGS__)
#define PP2_ARBITRARY_RMERGE_II(digit, res, y, op, def, swap) \
        res(op)swap(digit, PP2_SEQ_HEAD(y)), PP2_SEQ_TAIL(y(def)), op, def, swap

#define PP2_ARBITRARY_RMERGE_III(...) PP2_TUPLE_AT_0(,__VA_ARGS__)

#endif
