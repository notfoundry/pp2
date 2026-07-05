/** @file */
#ifndef PP2_PRIMITIVE_CONTROL_IFP_H
#define PP2_PRIMITIVE_CONTROL_IFP_H

#include "pp2/primitive/basic/cat.h"

/* Three-argument "if with paste prefix": the selectors returned by the
 * detection primitives take a paste-prefix P, a true-branch c, and an else
 * branch, yielding P##c or P##else. This is the convention the arbitrary
 * arithmetic walks rely on to emit either a kept digit (P##(digit)) or a
 * continuation co-routine (P##next) from a single predicate call. It is
 * deliberately separate from the two-argument \link PP2_IF \endlink used
 * elsewhere in the primitive library. */

#define PP2_IFP(c) PP2_PRIMITIVE_CAT(PP2_IFP_,c)
#define PP2_IFP_(P,c,...) P##c
#define PP2_IFP_0(P,c,...) P##__VA_ARGS__
#define PP2_IFP_1(P,c,...) P##c

#define PP2_IFP_NOT(c) PP2_PRIMITIVE_CAT(PP2_IFP_NOT_,c)
#define PP2_IFP_NOT_(P,c,...) P##__VA_ARGS__
#define PP2_IFP_NOT_0(P,c,...) P##c
#define PP2_IFP_NOT_1(P,c,...) P##__VA_ARGS__

#endif
