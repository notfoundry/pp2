#ifndef PP2_LANGUAGE_DEFINITION_VM_FN_H
#define PP2_LANGUAGE_DEFINITION_VM_FN_H

#include "pp2/language/basic/return.h"

#include "pp2/machine/context.h"

#include "pp2/primitive/basic/cat.h"

#define PP2_VM_FN(macro,nargs) )PP2_LANGUAGE_COMPILE_VM_FN(,macro,nargs,
#define PP2_LANGUAGE_COMPILE_VM_FN(P,macro,nargs,rhs_stx) 8PP2_LANGUAGE_VM_FN,P##nargs,P##macro,PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx)

#define PP2_INSN_8PP2_LANGUAGE_VM_FN(P,r0,r1,r2,nargs,macro,...) \
                                    (, \
                                     /*r0=*/(,Fn,(,8PP2_LOCAL_CTX_PUSH_ARGUMENTS,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1,8PP2_LANGUAGE_VM_FN_CALL,P##macro)), \
                                     P##r1,P##r2, \
                                     8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
                                     P##__VA_ARGS__ \
                                    )

#define PP2_INSN_8PP2_LANGUAGE_VM_FN_CALL(P,r0,r1,r2,macro,...) \
        IP2_LANGUAGE_VM_FN_CALL( \
            P##macro, \
            (, \
             /*r0=*/,P##r1,P##r2, \
             PP2_LOCAL_CTX_UNPACK_ARGS P##r1, \
             8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
             P##__VA_ARGS__ \
            ) \
        )
#define IP2_LANGUAGE_VM_FN_CALL(m,args_tup) m args_tup

#endif