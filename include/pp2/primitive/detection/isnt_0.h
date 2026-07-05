/** @file */
#ifndef PP2_PRIMITIVE_DETECTION_ISNT_0_H
#define PP2_PRIMITIVE_DETECTION_ISNT_0_H

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/detection/is_edible.h"

/**
* Yields the selector \link PP2_IF_1 \endlink when the token `x` is not `0`, and
* \link PP2_IF_0 \endlink when it is `0`. Only `PP2_ISNT_0_0` is defined (to the
* edible `()`), so pasting turns a `0` into a tuple that PP2_ISNT_EDIBLE detects.
*/
#define PP2_ISNT_0(x) PP2_ISNT_0_I(PP2_PRIMITIVE_CAT(PP2_ISNT_0_,x))
#define PP2_ISNT_0_I(...) PP2_ISNT_EDIBLE(,__VA_ARGS__)

#define PP2_ISNT_0_0 ()

#endif
