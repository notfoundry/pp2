/** @file */
#ifndef PP2_PRIMITIVE_DETECTION_IS_DIGIT_H
#define PP2_PRIMITIVE_DETECTION_IS_DIGIT_H

#include "pp2/primitive/control/if.h"
#include "pp2/primitive/tuple/at.h"

/**
* Yields \link PP2_IF_1 \endlink when `x` is exactly one of the ten decimal
* digit tokens, and \link PP2_IF_0 \endlink otherwise. Used as
* `PP2_IS_DIGIT(x)(then,else)`; both branches are substituted, so they must be
* inert tokens.
*
* Each digit is registered as a function-like macro, so the trailing `()`
* fires only when the pasted name is a whole digit and nothing follows it.
* `2` yields `,1`; `a`, `2 plus` and the empty token sequence all leave the
* pasted name unexpanded, which shifts the pick onto the trailing `0`.
*
* `x` must be a single argument. A comma in `x` pastes onto its first token
* and the result is meaningless.
*/
#define PP2_IS_DIGIT(...) IP2_IS_DIGIT_I(PP2_DIGIT_TAG_##__VA_ARGS__ ())
#define IP2_IS_DIGIT_I(...) PP2_TUPLE_AT_1(PP2_IF_,__VA_ARGS__,0)

#define PP2_DIGIT_TAG_0(...) ,1
#define PP2_DIGIT_TAG_1(...) ,1
#define PP2_DIGIT_TAG_2(...) ,1
#define PP2_DIGIT_TAG_3(...) ,1
#define PP2_DIGIT_TAG_4(...) ,1
#define PP2_DIGIT_TAG_5(...) ,1
#define PP2_DIGIT_TAG_6(...) ,1
#define PP2_DIGIT_TAG_7(...) ,1
#define PP2_DIGIT_TAG_8(...) ,1
#define PP2_DIGIT_TAG_9(...) ,1

#endif
