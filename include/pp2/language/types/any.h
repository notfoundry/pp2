/** @file */
#ifndef PP2_LANGUAGE_TYPES_ANY_H
#define PP2_LANGUAGE_TYPES_ANY_H

#include "pp2/language/compiler.h"
#include "pp2/language/basic/return.h"
#include "pp2/language/basic/object.h"
#include "pp2/language/types/type.h"
#include "pp2/language/definition/type.h"
#include "pp2/language/definition/vm_fn.h"
#include "pp2/language/definition/primitive.h"

#include "pp2/machine/context.h"

#include "pp2/primitive/basic/invoke.h"

#define PP2_DEF_Any PP2_TYPE(Any,)


#define PP2_DEF_Any_type )PP2_COMPILE_LANGUAGE_ANY_TYPE(
#define PP2_COMPILE_LANGUAGE_ANY_TYPE(rhs_stx) 8PP2_LANGUAGE_ANY_TYPE,PP2_COMPILE_LANGUAGE_RETURN(rhs_stx)

#define PP2_INSN_8PP2_LANGUAGE_ANY_TYPE(P,r0,r1,r2,...) (,/*r0=*/,P##r1,P##r2,IP2_FX(LANGUAGE_ANY_TYPE_RESOLVE,(,PP2_LOCAL_CTX_UNPACK_ARGS P##r1)),8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,P##__VA_ARGS__)
#define IP2_LANGUAGE_ANY_TYPE_RESOLVE(P,obj) PP2_FX(COMPILE_UNSAFE,(PP2_LANGUAGE_OBJECT_TYPE P##obj))


#define PP2_DEF_Any_str PP2_VM_FN(PP2_LANGUAGE_ANY_STR,1)
#define PP2_LANGUAGE_ANY_STR(P,r0,r1,r2,obj,...) (,P##obj,P##r1,P##r2,P##__VA_ARGS__)

#endif