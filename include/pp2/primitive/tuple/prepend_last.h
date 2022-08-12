/** @file */
#ifndef PP2_PRIMITIVE_TUPLE_PREPEND_LAST_H
#define PP2_PRIMITIVE_TUPLE_PREPEND_LAST_H

#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/punctuation/comma.h"

#define PP2_TUPLE_PREPEND_LAST(P,v,...) \
        IP2_TUPLE_PREPEND_LAST_OVERLOAD(           \
            P##__VA_ARGS__,                       \
            PP2_COMMA_16,   \
            PP2_COMMA_15,   \
            PP2_COMMA_14,   \
            PP2_COMMA_13,   \
            PP2_COMMA_12,   \
            PP2_COMMA_11,   \
            PP2_COMMA_10,   \
            PP2_COMMA_9,    \
            PP2_COMMA_8,    \
            PP2_COMMA_7,    \
            PP2_COMMA_6,    \
            PP2_COMMA_5,    \
            PP2_COMMA_4,    \
            PP2_COMMA_3,    \
            PP2_COMMA_2,    \
            PP2_COMMA_1,    \
        )(,P##v,P##__VA_ARGS__)
#define IP2_TUPLE_PREPEND_LAST_OVERLOAD(x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,m,...) \
        IP2_TUPLE_PREPEND_LAST_OVERLOAD_I(IP2_TUPLE_PREPEND_LAST_,m,17_OR_MORE)
#define IP2_TUPLE_PREPEND_LAST_OVERLOAD_I(P,x0,x1,...) P##x1

#define IP2_TUPLE_PREPEND_LAST_1(P,v,x0) P##v,P##x0
#define IP2_TUPLE_PREPEND_LAST_2(P,v,x0,x1) P##x0,P##v,P##x1
#define IP2_TUPLE_PREPEND_LAST_3(P,v,x0,x1,x2) P##x0,P##x1,P##v,P##x2
#define IP2_TUPLE_PREPEND_LAST_4(P,v,x0,x1,x2,x3) P##x0,P##x1,P##x2,P##v,P##x3
#define IP2_TUPLE_PREPEND_LAST_5(P,v,x0,x1,x2,x3,x4) P##x0,P##x1,P##x2,P##x3,P##v,P##x4
#define IP2_TUPLE_PREPEND_LAST_6(P,v,x0,x1,x2,x3,x4,x5) P##x0,P##x1,P##x2,P##x3,P##x4,P##v,P##x5
#define IP2_TUPLE_PREPEND_LAST_7(P,v,x0,x1,x2,x3,x4,x5,x6) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##v,P##x6
#define IP2_TUPLE_PREPEND_LAST_8(P,v,x0,x1,x2,x3,x4,x5,x6,x7) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##v,P##x7
#define IP2_TUPLE_PREPEND_LAST_9(P,v,x0,x1,x2,x3,x4,x5,x6,x7,x8) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##v,P##x8
#define IP2_TUPLE_PREPEND_LAST_10(P,v,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##v,P##x9
#define IP2_TUPLE_PREPEND_LAST_11(P,v,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##v,P##x10
#define IP2_TUPLE_PREPEND_LAST_12(P,v,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##v,P##x11
#define IP2_TUPLE_PREPEND_LAST_13(P,v,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##v,P##x12
#define IP2_TUPLE_PREPEND_LAST_14(P,v,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##v,P##x13
#define IP2_TUPLE_PREPEND_LAST_15(P,v,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9x10,x11,x12,x13,x14) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##v,P##x14
#define IP2_TUPLE_PREPEND_LAST_16(P,v,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9x10,x11,x12,x13,x14,x15) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##v,P##x15
#define IP2_TUPLE_PREPEND_LAST_17_OR_MORE()


#endif