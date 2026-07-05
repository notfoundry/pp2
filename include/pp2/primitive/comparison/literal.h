/** @file */
#ifndef PP2_PRIMITIVE_COMPARISON_LITERAL_H
#define PP2_PRIMITIVE_COMPARISON_LITERAL_H

#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/arithmetic/literal/sub.h"

/* All relations reduce to clamped subtraction + is-zero (a<=b iff a-b clamped == 0). */

/* is-zero: x==0 -> 1 else 0. The `probe,` a defined IP2_LITERAL_IS_ZERO_0 injects
 * must splice into AT_1's argument list, so expand the tuple (FX) before AT_1 scans. */
#define PP2_LITERAL_IS_ZERO(x) IP2_LITERAL_IS_ZERO_I(x)
#define IP2_LITERAL_IS_ZERO_I(x) PP2_FX(TUPLE_AT_1,(,IP2_LITERAL_IS_ZERO_TAG_##x 1,0,))
#define IP2_LITERAL_IS_ZERO_TAG_0 probe,

/* boolean helpers on {0,1}. AND takes one indirection so its (comparison-result)
 * arguments are prescanned to 0/1 before the ## paste. */
#define PP2_LITERAL_NOT(x) PP2_LITERAL_IS_ZERO(x)
#define PP2_LITERAL_AND(x,y) IP2_LITERAL_AND_CAT(x,y)
#define IP2_LITERAL_AND_CAT(x,y) IP2_LITERAL_AND_##x##y
#define IP2_LITERAL_AND_00 0
#define IP2_LITERAL_AND_01 0
#define IP2_LITERAL_AND_10 0
#define IP2_LITERAL_AND_11 1

#define PP2_LITERAL_LEQ(a,b) PP2_LITERAL_IS_ZERO(PP2_LITERAL_SUB(a,b))
#define PP2_LITERAL_GEQ(a,b) PP2_LITERAL_LEQ(b,a)
#define PP2_LITERAL_LT(a,b)  PP2_LITERAL_NOT(PP2_LITERAL_GEQ(a,b))
#define PP2_LITERAL_GT(a,b)  PP2_LITERAL_NOT(PP2_LITERAL_LEQ(a,b))
#define PP2_LITERAL_EQ(a,b)  PP2_LITERAL_AND(PP2_LITERAL_LEQ(a,b),PP2_LITERAL_LEQ(b,a))

#endif
