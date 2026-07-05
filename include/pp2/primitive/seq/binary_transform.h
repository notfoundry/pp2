/** @file */
#ifndef PP2_PRIMITIVE_SEQ_BINARY_TRANSFORM_H
#define PP2_PRIMITIVE_SEQ_BINARY_TRANSFORM_H

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/tuple/open.h"

/* Turn a seq (a)(b)(c) into the "binary" chain (REM,a)()(REM,b)()(REM,c)()
 * consumed by the reversal walk. The A/B co-routines alternate to dodge
 * blue-paint; the trailing co-routine name is pasted to 0 by the enclosing CAT
 * to reach an empty terminator. */

#define PP2_SEQ_BINARY_TRANSFORM(seq,...) PP2_CAT(PP2_SEQ_BINARY_TRANSFORM_A seq,0)(PP2_EAT,__VA_ARGS__)

#define PP2_SEQ_BINARY_TRANSFORM_A(...) (PP2_OPEN,__VA_ARGS__)()PP2_SEQ_BINARY_TRANSFORM_B
#define PP2_SEQ_BINARY_TRANSFORM_B(...) (PP2_OPEN,__VA_ARGS__)()PP2_SEQ_BINARY_TRANSFORM_A

#define PP2_SEQ_BINARY_TRANSFORM_A0
#define PP2_SEQ_BINARY_TRANSFORM_B0

#endif
