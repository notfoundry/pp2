/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_IS_SHORTER_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_IS_SHORTER_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/basic/defer.h"
#include "pp2/primitive/punctuation/lparen.h"
#include "pp2/primitive/detection/is_edible.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/special.h"

/* Yields a selector: true when seq x is strictly shorter than seq y. Walks both
 * in lockstep (x drives, y is consumed) and detects whether y still has digits
 * left when x runs out. Use as PP2_ARBITRARY_IS_SHORTER(x,y)(P,then,else). */

#define PP2_ARBITRARY_IS_SHORTER(x, y) PP2_ARBITRARY_IS_SHORTER_II(PP2_SCAN(PP2_ARBITRARY_IS_SHORTER_A x(00) y ~ PP2_ARBITRARY_SPECIAL_CLOSE(x)))
#define PP2_ARBITRARY_IS_SHORTER_II(...) PP2_IS_EDIBLE(,__VA_ARGS__)

#define PP2_ARBITRARY_IS_SHORTER_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_IS_SHORTER_I PP2_DEFER(PP2_LPAREN_ID)() PP2_ARBITRARY_IS_SHORTER_B)
#define PP2_ARBITRARY_IS_SHORTER_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_IS_SHORTER_I PP2_DEFER(PP2_LPAREN_ID)() PP2_ARBITRARY_IS_SHORTER_A)
#define PP2_ARBITRARY_IS_SHORTER_I(y) PP2_EAT y

#endif
