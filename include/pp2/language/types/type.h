/** @file */
#ifndef PP2_LANGUAGE_TYPES_TYPE_H
#define PP2_LANGUAGE_TYPES_TYPE_H

#include "pp2/language/definition/primitive.h"
#include "pp2/language/definition/vm_fn.h"
#include "pp2/language/definition/type.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"

#define PP2_DEF_Type PP2_TYPE(Type,Any)
#define PP2_SYM_Type(...) __VA_ARGS__

#define PP2_DEF_Type_call PP2_PRIMITIVE(8PP2_LANGUAGE_TYPE_CALL_PTR,)
#define PP2_INSN_8PP2_LANGUAGE_TYPE_CALL_PTR(P,r0,r1,r2,rhs_stx,...) \
                                            (, \
                                             /*r0=*/(,Fn,(,8PP2_LOCAL_CTX_PREPEND_ARGUMENTS,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_LANGUAGE_TYPE_CALL)), \
                                             /*r1=*/PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1, \
                                             /*r2=*/P##r2, \
                                             PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx), \
                                             P##__VA_ARGS__ \
                                            )
#define PP2_INSN_8PP2_LANGUAGE_TYPE_CALL(P,r0,r1,r2,...) \
                                        (, \
                                         /*r0=*/,P##r1,P##r2, \
                                         8PP2_LANGUAGE_TYPE_MEMBER,P##r0,(,Quote,(construct)), \
                                         8PP2_LOCAL_CTX_PUSH_ARGUMENTS,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1, \
                                         8PP2_LANGUAGE_FN_CALL_IMPL, \
                                         P##__VA_ARGS__ \
                                        )

#define PP2_DEF_Type_member PP2_VM_FN(PP2_INSN_8PP2_LANGUAGE_TYPE_MEMBER,2)
#define PP2_INSN_8PP2_LANGUAGE_TYPE_MEMBER(P,r0,r1,r2,type,member,...) \
                                          (, \
                                           P##r0,PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2, \
                                           IP2_FX ( \
                                               LANGUAGE_TYPE_MEMBER_COMPILE, \
                                               ( \
                                                   PP2_FX(LANGUAGE_TYPE_NAME,PP2_LANGUAGE_OBJECT_VALUE P##type), \
                                                   PP2_FX(OPEN,PP2_LANGUAGE_OBJECT_VALUE P##member) \
                                               ) \
                                           ), \
                                           P##__VA_ARGS__ \
                                          )
#define IP2_LANGUAGE_TYPE_MEMBER_COMPILE(type_name,member_name) IP2_LANGUAGE_COMPILE(type_name##_##member_name)

#define PP2_LANGUAGE_TYPE_NAME(P,type_name,supertype_name) P##type_name
#define PP2_LANGUAGE_SUPERTYPE_NAME(P,type_name,supertype_name) P##supertype_name

#endif