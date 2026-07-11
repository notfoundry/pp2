/** @file */
#ifndef PP2_LANGUAGE_TYPES_TYPE_H
#define PP2_LANGUAGE_TYPES_TYPE_H

#include "pp2/language/definition/primitive.h"
#include "pp2/language/definition/vm_fn.h"
#include "pp2/language/definition/type.h"

#include "pp2/language/basic/object.h"
#include "pp2/language/basic/symbol.h"

#include "pp2/primitive/basic/cat.h"
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
                                         /* pass the type object itself as `self`, then the call args, */ \
                                         /* so <Type>_construct(self,arg0,...) binds like any method   */ \
                                         8PP2_LOCAL_CTX_PUSH_ARGUMENTS,(P##r0)PP2_LOCAL_CTX_GET_ARGUMENTS P##r1, \
                                         8PP2_LANGUAGE_FN_CALL_IMPL, \
                                         P##__VA_ARGS__ \
                                        )

#define PP2_DEF_Type_member PP2_VM_FN(8PP2_LANGUAGE_TYPE_MEMBER,2)
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


/* str(): a Type prints as its name, so `print(Bool)` gives `Bool` and
 * `print(5 type())` gives `Int`. Without this a Type fell through to Any_str,
 * which hands the object itself to the emitter, and printing a type spilled its
 * internals: `(,Type,(,Bool,Any))`. Like Bool_str this leaves a raw token in r0
 * for 8PP2_EMIT_LITERAL rather than an object. */
#define PP2_DEF_Type_str PP2_VM_FN(8PP2_LANGUAGE_TYPE_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_TYPE_STR(P,r0,r1,r2,obj,...) \
        (,PP2_FX(LANGUAGE_TYPE_NAME,PP2_LANGUAGE_OBJECT_VALUE P##obj),P##r1,P##r2,P##__VA_ARGS__)


/* eq(other): two Type objects are equal when they name the same type. Type names
 * are registered symbols, so this is one symbol comparison. A Type never equals
 * a value of any other type. */
#define PP2_DEF_Type_eq PP2_VM_FN(8PP2_LANGUAGE_TYPE_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_TYPE_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_TYPE_EQ, (,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_TYPE_EQ(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) \
        PP2_CAT(IP2_LANGUAGE_TYPE_EQ_T_,PP2_SYMBOL_EQ(Type,rhs_type))(lhs_value,rhs_value)
#define IP2_LANGUAGE_TYPE_EQ_T_0(lhs_value,rhs_value) (,Bool,0)
#define IP2_LANGUAGE_TYPE_EQ_T_1(lhs_value,rhs_value) \
        (,Bool,IP2_LANGUAGE_TYPE_EQ_NAMES(PP2_FX(LANGUAGE_TYPE_NAME,lhs_value),PP2_FX(LANGUAGE_TYPE_NAME,rhs_value)))
#define IP2_LANGUAGE_TYPE_EQ_NAMES(lhs_name,rhs_name) PP2_SYMBOL_EQ(lhs_name,rhs_name)

#endif