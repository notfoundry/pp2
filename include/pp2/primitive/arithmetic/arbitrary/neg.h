/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_NEG_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_NEG_H

#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/arithmetic/arbitrary/sign.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"

/* Negate: toggle the sign wrapper. A negative x loses its extra paren layer; a
 * non-negative x gains one. FIX collapses negative zero back to (0). */

#define PP2_ARBITRARY_NEG(x) PP2_ARBITRARY_NEG_I(PP2_ARBITRARY_FIX(x))
#define PP2_ARBITRARY_NEG_I(x) PP2_ARBITRARY_FIX(PP2_ARBITRARY_SIGN(x)(,PP2_OPEN x,(x)))

#endif
