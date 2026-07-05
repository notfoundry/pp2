/** @file */
#ifndef PP2_PRIMITIVE_LOGICAL_BITOR_H
#define PP2_PRIMITIVE_LOGICAL_BITOR_H

#include "pp2/primitive/basic/cat.h"

/* Boolean or on {0,1}, curried: PP2_BITOR(b)(c). Used to combine borrows in
 * arbitrary-precision subtraction. */

#define PP2_BITOR(b) PP2_PRIMITIVE_CAT(PP2_BITOR_, b)
#define PP2_BITOR_0(c) c
#define PP2_BITOR_1(c) 1

#endif
