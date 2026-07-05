/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SPECIAL_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SPECIAL_H

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/punctuation/rparen.h"

/* The sliding-window engine behind every arbitrary-precision walk.
 *
 * PP2_ARBITRARY_SPECIAL(digit) selects a pass-through for real digits 0-9 and an
 * eater for the sentinel 00. Walkers drive a seq (d0)(d1)... by pasting each
 * digit onto an alternating A/B co-routine (dodging blue-paint), and terminate
 * when the injected (00) is reached. PP2_ARBITRARY_SPECIAL_CLOSE emits one ')'
 * per digit so a walk opened with a deferred '(' per digit closes exactly. */

#define PP2_ARBITRARY_SPECIAL(digit) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_SPECIAL_, digit)

#define PP2_ARBITRARY_SPECIAL_00(...)
#define PP2_ARBITRARY_SPECIAL_0(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_1(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_2(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_3(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_4(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_5(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_6(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_7(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_8(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_9(...) __VA_ARGS__

#define PP2_ARBITRARY_SPECIAL_CLOSE(x) PP2_ARBITRARY_SPECIAL_CLOSE_A x(00)

#define PP2_ARBITRARY_SPECIAL_CLOSE_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_RPAREN PP2_ARBITRARY_SPECIAL_CLOSE_B)
#define PP2_ARBITRARY_SPECIAL_CLOSE_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_RPAREN PP2_ARBITRARY_SPECIAL_CLOSE_A)

#endif
