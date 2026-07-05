/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_REL_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_REL_H

#include "pp2/primitive/arithmetic/arbitrary/detail/lookup.h"

/* Single-digit relation: PP2_ARBITRARY_REL(a,b) -> 0 if a<b, 1 if a==b, 2 if
 * a>b. Two nested lookups index the 10x10 table. */

#define PP2_ARBITRARY_REL(a, b) \
    PP2_ARBITRARY_LOOKUP(a, PP2_ARBITRARY_LOOKUP(b, ( \
        (1, 2, 2, 2, 2, 2, 2, 2, 2, 2), \
        (0, 1, 2, 2, 2, 2, 2, 2, 2, 2), \
        (0, 0, 1, 2, 2, 2, 2, 2, 2, 2), \
        (0, 0, 0, 1, 2, 2, 2, 2, 2, 2), \
        (0, 0, 0, 0, 1, 2, 2, 2, 2, 2), \
        (0, 0, 0, 0, 0, 1, 2, 2, 2, 2), \
        (0, 0, 0, 0, 0, 0, 1, 2, 2, 2), \
        (0, 0, 0, 0, 0, 0, 0, 1, 2, 2), \
        (0, 0, 0, 0, 0, 0, 0, 0, 1, 2), \
        (0, 0, 0, 0, 0, 0, 0, 0, 0, 1) \
    )))

#endif
