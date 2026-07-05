/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_SIGN_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_SIGN_H

#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/detection/is_edible.h"

/* Sign of an arbitrary number: yields PP2_IF_1 when x is negative (its magnitude
 * seq is wrapped in an extra paren layer, so stripping one leaves a tuple) and
 * PP2_IF_0 when non-negative. Use as PP2_ARBITRARY_SIGN(x)(neg,nonneg). */

#define PP2_ARBITRARY_SIGN(x) PP2_ARBITRARY_SIGN_I(PP2_OPEN x)
#define PP2_ARBITRARY_SIGN_I(...) PP2_IS_EDIBLE(,__VA_ARGS__)

#endif
