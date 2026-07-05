/** @file */
#ifndef PP2_PRIMITIVE_CONTROL_TEST_H
#define PP2_PRIMITIVE_CONTROL_TEST_H

#include "pp2/primitive/tuple/at.h"

/**
* Detection primitive: selects `P##c` when `x` expands to two commas (three
* fields) and `P##a` otherwise. Detection macros arrange for `x` to be `,,`
* exactly when the tested property holds, so this collapses a probe into a
* branch. See \link PP2_IS_EDIBLE \endlink.
*/
#define PP2_TEST(P,x,c,a) PP2_TUPLE_AT_3(,x,P##c,,P##a,)

#endif
