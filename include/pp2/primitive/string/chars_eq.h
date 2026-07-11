/** @file */
#ifndef PP2_PRIMITIVE_STRING_CHARS_EQ_H
#define PP2_PRIMITIVE_STRING_CHARS_EQ_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/facilities/indirect.h"
#include "pp2/primitive/detection/is_edible.h"
#include "pp2/primitive/string/char.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/is_shorter.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/merge.h"

/* Equality of two character sequences, yielding 1 or 0. A character sequence is
 * a paren-per-character seq, (t)(o)(t)(a)(l), and the empty sequence is no
 * tokens at all. Two sequences are equal when they have the same length and
 * equal characters pairwise.
 *
 * This rides the same sliding-window engine as the arbitrary-precision layer.
 * Length is settled first with IS_SHORTER in both directions: unequal length is
 * unequal, with no content walk. When the lengths match, FMERGE zips the two
 * seqs column by column exactly as CMP does, threading a verdict: the walk
 * starts equal (state 1) and each column stays equal only while the two
 * characters match, so the first differing column drops the verdict to 0 and it
 * never recovers. The pad element FMERGE would append to a shorter operand is
 * never reached, since the walk runs only on equal-length operands. */

#define PP2_CHARS_EQ(x,y) IP2_CHARS_EQ_DISP(PP2_ARBITRARY_IS_SHORTER(x,y)(,1,0),PP2_ARBITRARY_IS_SHORTER(y,x)(,1,0),x,y)
#define IP2_CHARS_EQ_DISP(sx,sy,x,y) IP2_CHARS_EQ_DISP_I(sx,sy,x,y)
#define IP2_CHARS_EQ_DISP_I(sx,sy,x,y) IP2_CHARS_EQ_LEN_##sx##sy(x,y)
/* equal length: two empty seqs are equal; otherwise zip the characters */
#define IP2_CHARS_EQ_LEN_00(x,y) PP2_IS_EDIBLE(,x)(,IP2_CHARS_EQ_CONTENT,IP2_CHARS_EQ_BOTH_EMPTY)(x,y)
#define IP2_CHARS_EQ_BOTH_EMPTY(x,y) 1
#define IP2_CHARS_EQ_LEN_01(x,y) 0
#define IP2_CHARS_EQ_LEN_10(x,y) 0
#define IP2_CHARS_EQ_LEN_11(x,y) 0

#define IP2_CHARS_EQ_CONTENT(x,y) \
        PP2_SCAN(IP2_CHARS_EQ_M(1) PP2_ARBITRARY_FMERGE(x,y,IP2_CHARS_EQ_M,00)(IP2_CHARS_EQ_FIN))

#define IP2_CHARS_EQ_M(s) IP2_CHARS_EQ_M_##s
#define IP2_CHARS_EQ_M_0(a,b) PP2_INDIRECT(0)
#define IP2_CHARS_EQ_M_1(a,b) PP2_INDIRECT(PP2_CHAR_EQ(a,b))
#define IP2_CHARS_EQ_FIN(s) s

#endif
