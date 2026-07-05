/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_SUB_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_SUB_H

#include "pp2/primitive/arithmetic/arbitrary/add.h"
#include "pp2/primitive/arithmetic/arbitrary/neg.h"

/* Signed subtraction, defined as x + (-y). ADD already handles every sign
 * combination, so negating y and adding covers all cases uniformly. */

#define PP2_ARBITRARY_SUB(x, y) PP2_ARBITRARY_ADD(x, PP2_ARBITRARY_NEG(y))

#endif
