/** @file */
#ifndef PP2_PRIMITIVE_SEQ_REVERSE_H
#define PP2_PRIMITIVE_SEQ_REVERSE_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/basic/defer.h"
#include "pp2/primitive/punctuation/lparen.h"
#include "pp2/primitive/seq/binary_transform.h"
#include "pp2/primitive/seq/detail/close.h"

/* Reverse a seq: (a)(b)(c) -> (c)(b)(a). Drives the binary chain, prepending
 * each element to a running result via the deferred-open-paren idiom. */

#define PP2_SEQ_REVERSE(seq) PP2_SCAN(PP2_SEQ_REVERSE_I(PP2_SEQ_BINARY_TRANSFORM(seq,~)))

#define PP2_SEQ_REVERSE_I(bin) PP2_SEQ_REVERSE_II bin PP2_SEQ_CLOSE(bin)
#define PP2_SEQ_REVERSE_II(K,...) K(PP2_SEQ_REVERSE_III PP2_DEFER(PP2_LPAREN_ID)()(__VA_ARGS__),PP2_SEQ_REVERSE_II_ID)

#define PP2_SEQ_REVERSE_II_ID() PP2_SEQ_REVERSE_II
#define PP2_SEQ_REVERSE_III(x,res) res x

#endif
