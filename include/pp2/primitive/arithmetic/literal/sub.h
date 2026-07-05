/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_LITERAL_SUB_H
#define PP2_PRIMITIVE_ARITHMETIC_LITERAL_SUB_H

#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/tuple/take.h"
#include "pp2/primitive/basic/invoke.h"

/* PP2_LITERAL_SUB(a,b) -> a-b, clamped at 0. Index a into [b zero-clamps] ++ (0,1,2,...).
 * The indirection prescans a,b to literals so SUB composes. Fixed precision: a,b <= 127. */
#define PP2_LITERAL_SUB(a,b) IP2_LITERAL_SUB_EVAL(a,b)
#define IP2_LITERAL_SUB_EVAL(a,b)               \
        PP2_FX(                                 \
            TUPLE_AT_##a,                       \
            (,PP2_TUPLE_TAKE_##b(,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)       \
              0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,                            \
              (overflow)                        \
            )                                   \
        )

#endif
