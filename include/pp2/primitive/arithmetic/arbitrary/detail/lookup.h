/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_LOOKUP_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_LOOKUP_H

#include "pp2/primitive/basic/cat.h"

/* Index a 10-tuple by a single digit n. Used to read the single-digit
 * addition and relation tables. */

#define PP2_ARBITRARY_LOOKUP(n, tuple) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_LOOKUP_,n) tuple

#define PP2_ARBITRARY_LOOKUP_0(a, b, c, d, e, f, g, h, i, j) a
#define PP2_ARBITRARY_LOOKUP_1(a, b, c, d, e, f, g, h, i, j) b
#define PP2_ARBITRARY_LOOKUP_2(a, b, c, d, e, f, g, h, i, j) c
#define PP2_ARBITRARY_LOOKUP_3(a, b, c, d, e, f, g, h, i, j) d
#define PP2_ARBITRARY_LOOKUP_4(a, b, c, d, e, f, g, h, i, j) e
#define PP2_ARBITRARY_LOOKUP_5(a, b, c, d, e, f, g, h, i, j) f
#define PP2_ARBITRARY_LOOKUP_6(a, b, c, d, e, f, g, h, i, j) g
#define PP2_ARBITRARY_LOOKUP_7(a, b, c, d, e, f, g, h, i, j) h
#define PP2_ARBITRARY_LOOKUP_8(a, b, c, d, e, f, g, h, i, j) i
#define PP2_ARBITRARY_LOOKUP_9(a, b, c, d, e, f, g, h, i, j) j

#endif
