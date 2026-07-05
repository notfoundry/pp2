/** @file */
#ifndef PP2_PRIMITIVE_FACILITIES_INDIRECT_H
#define PP2_PRIMITIVE_FACILITIES_INDIRECT_H

#include "pp2/primitive/basic/cat.h"

/**
* Re-emits a chosen macro applied to a digit `n`, one rescan later. Used by the
* arbitrary-precision comparison walk to hand a running result to the next
* stage without it collapsing prematurely.
*/
#define PP2_INDIRECT(n) PP2_PRIMITIVE_CAT(PP2_INDIRECT_, n)

#define PP2_INDIRECT_0(m) m(0)
#define PP2_INDIRECT_1(m) m(1)
#define PP2_INDIRECT_2(m) m(2)
#define PP2_INDIRECT_3(m) m(3)
#define PP2_INDIRECT_4(m) m(4)
#define PP2_INDIRECT_5(m) m(5)
#define PP2_INDIRECT_6(m) m(6)
#define PP2_INDIRECT_7(m) m(7)
#define PP2_INDIRECT_8(m) m(8)
#define PP2_INDIRECT_9(m) m(9)

#endif
