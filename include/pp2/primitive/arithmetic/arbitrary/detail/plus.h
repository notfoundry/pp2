/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_PLUS_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_PLUS_H

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/facilities/indirect.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/lookup.h"

/* Single-digit addition: PP2_PLUS(a,b) -> a (carry,sum) pair via the 10x10
 * table. PP2_PLUS_3RD threads the running carry across a column, deferring the
 * carry-out through PP2_INDIRECT so the merge walk stays a single scan. */

#define PP2_PLUS(a, b) \
    PP2_ARBITRARY_LOOKUP(b, PP2_ARBITRARY_LOOKUP(a, ( \
        ((0, 0), (0, 1), (0, 2), (0, 3), (0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9)), \
        ((0, 1), (0, 2), (0, 3), (0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9), (1, 0)), \
        ((0, 2), (0, 3), (0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9), (1, 0), (1, 1)), \
        ((0, 3), (0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9), (1, 0), (1, 1), (1, 2)), \
        ((0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9), (1, 0), (1, 1), (1, 2), (1, 3)), \
        ((0, 5), (0, 6), (0, 7), (0, 8), (0, 9), (1, 0), (1, 1), (1, 2), (1, 3), (1, 4)), \
        ((0, 6), (0, 7), (0, 8), (0, 9), (1, 0), (1, 1), (1, 2), (1, 3), (1, 4), (1, 5)), \
        ((0, 7), (0, 8), (0, 9), (1, 0), (1, 1), (1, 2), (1, 3), (1, 4), (1, 5), (1, 6)), \
        ((0, 8), (0, 9), (1, 0), (1, 1), (1, 2), (1, 3), (1, 4), (1, 5), (1, 6), (1, 7)), \
        ((0, 9), (1, 0), (1, 1), (1, 2), (1, 3), (1, 4), (1, 5), (1, 6), (1, 7), (1, 8)) \
    )))

#define PP2_PLUS_3RD(mode) PP2_PRIMITIVE_CAT(PP2_PLUS_3RD_, mode)

#define PP2_PLUS_3RD_0(bin) (PP2_BINARY(1) bin) PP2_INDIRECT(PP2_BINARY(0) bin)
#define PP2_PLUS_3RD_1(bin, n) PP2_PLUS_3RD_2(PP2_BINARY(0) bin, PP2_PLUS(PP2_BINARY(1) bin, n))
#define PP2_PLUS_3RD_2(a, bin) (PP2_BINARY(1) bin) PP2_INDIRECT(PP2_BINARY_CTOR(1, PP2_PLUS(a, PP2_BINARY(0) bin)))

#define PP2_BINARY(i) PP2_PRIMITIVE_CAT(PP2_BINARY_, i)
#define PP2_BINARY_0(a, ...) a
#define PP2_BINARY_1(a, ...) __VA_ARGS__

#define PP2_BINARY_CTOR(i, bin) PP2_BINARY(i) bin

#endif
