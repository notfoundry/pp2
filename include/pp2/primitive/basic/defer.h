/** @file */
#ifndef PP2_PRIMITIVE_BASIC_DEFER_H
#define PP2_PRIMITIVE_BASIC_DEFER_H

#include "pp2/primitive/core.h"

/**
* Emits its arguments followed by a \link PP2_BLOCK \endlink, delaying any
* function-like macro named at the tail of the arguments by one rescan: the
* trailing name and a following `()` are separated by the (empty) PP2_BLOCK, so
* the call only forms after the block is eliminated on the next scan.
*
* @param ... the token sequence to defer
*/
#define PP2_DEFER(...) __VA_ARGS__ PP2_BLOCK

#endif
