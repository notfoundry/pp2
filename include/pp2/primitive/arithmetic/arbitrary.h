/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_H

/* Arbitrary-precision integer arithmetic on decimal digit-sequences.
 *
 * A number is a most-significant-digit-first sequence of single-digit tuples,
 * e.g. (1)(2)(3) == 123 and (0) == 0; a negative value wraps its magnitude in
 * one extra paren layer, e.g. ((1)(2)(3)) == -123. Every operation FIXes its
 * result to this canonical form (no leading zeros, no negative zero). There is
 * no fixed upper bound -- length is limited only by the preprocessor.
 *
 * Public operations:
 *   PP2_ARBITRARY_INC(x) / PP2_ARBITRARY_DEC(x)
 *   PP2_ARBITRARY_ADD(x,y) / PP2_ARBITRARY_SUB(x,y) / PP2_ARBITRARY_NEG(x)
 *   PP2_ARBITRARY_CMP(x,y)            -> 0 (x<y) | 1 (x==y) | 2 (x>y)
 *   PP2_ARBITRARY_LESS(x,y) / PP2_ARBITRARY_LESS_EQUAL(x,y)
 *   PP2_ARBITRARY_GREATER(x,y) / PP2_ARBITRARY_GREATER_EQUAL(x,y)
 *   PP2_ARBITRARY_EQUAL(x,y) / PP2_ARBITRARY_NOT_EQUAL(x,y)
 *   PP2_ARBITRARY_MUL(x,y)
 *   PP2_ARBITRARY_DIV(x,y) / PP2_ARBITRARY_MOD(x,y)  (C semantics, truncated)
 *   PP2_ARBITRARY_SIGN(x)             -> selector (negative? ...)
 *   PP2_ARBITRARY_FIX(x)              -> canonical form
 *   PP2_ARBITRARY_PROMOTE(n)          -> native literal 0..127 to digit-seq
 *   PP2_ARBITRARY_DEMOTE(x)           -> digit-seq to native token(s)
 */

#include "pp2/primitive/arithmetic/arbitrary/sign.h"
#include "pp2/primitive/arithmetic/arbitrary/inc.h"
#include "pp2/primitive/arithmetic/arbitrary/dec.h"
#include "pp2/primitive/arithmetic/arbitrary/neg.h"
#include "pp2/primitive/arithmetic/arbitrary/add.h"
#include "pp2/primitive/arithmetic/arbitrary/sub.h"
#include "pp2/primitive/arithmetic/arbitrary/mul.h"
#include "pp2/primitive/arithmetic/arbitrary/div.h"
#include "pp2/primitive/arithmetic/arbitrary/mod.h"
#include "pp2/primitive/arithmetic/arbitrary/compare.h"
#include "pp2/primitive/arithmetic/arbitrary/promote.h"
#include "pp2/primitive/arithmetic/arbitrary/demote.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"

#endif
