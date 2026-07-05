/** @file */
#ifndef PP2_PRIMITIVE_DETECTION_IS_EDIBLE_H
#define PP2_PRIMITIVE_DETECTION_IS_EDIBLE_H

#include "pp2/primitive/control/test.h"
#include "pp2/primitive/control/ifp.h"

/**
* Yields a 3-arg paste-selector (see \link PP2_IFP \endlink): the true selector
* when `x##P` is "edible" (a parenthesised group, so that PP2_IS_EDIBLE_TEST
* placed before it fires and expands to `,,`), and the false selector otherwise.
* Used as `PP2_IS_EDIBLE(,x)(P,then,else)`.
*/
#define PP2_IS_EDIBLE(P,x) PP2_TEST(PP2_IFP_,PP2_IS_EDIBLE_TEST x##P,,0)
#define PP2_ISNT_EDIBLE(P,x) PP2_TEST(PP2_IFP_,PP2_IS_EDIBLE_TEST x##P,0,)

#define PP2_IS_EDIBLE_TEST(...) ,,

#endif
