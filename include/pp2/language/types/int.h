/** @file */
#ifndef PP2_LANGUAGE_TYPES_INT_H
#define PP2_LANGUAGE_TYPES_INT_H

#include "pp2/language/definition/vm_fn.h"

#define PP2_DEF_Int PP2_TYPE(Int,Any)
#define PP2_SYM_Int(...) __VA_ARGS__

#define PP2_DEF_Int_construct PP2_VM_FN(PP2_LANGUAGE_INT_CONSTRUCT,2)
#define PP2_LANGUAGE_INT_CONSTRUCT(P,r0,r1,r2,arg0,arg1,...) (,arg0,P##r1,P##r2,P##__VA_ARGS__)

#define PP2_DEF_Int_plus PP2_VM_FN(PP2_LANGUAGE_INT_PLUS,2)
#define PP2_LANGUAGE_INT_PLUS(P,r0,r1,r2,lhs,rhs,...) (,P##r0,P##r1,P##r2,P##__VA_ARGS__)


#endif