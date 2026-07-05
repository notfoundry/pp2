/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SWAP_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SWAP_H

/* Order a digit pair for a merge op. When the shorter operand was on the left,
 * SWAP restores original operand order to the op; NO_SWAP keeps it. */

#define PP2_ARBITRARY_SWAP(a,...) (__VA_ARGS__,a)
#define PP2_ARBITRARY_NO_SWAP(a,...) (a,__VA_ARGS__)

#endif
