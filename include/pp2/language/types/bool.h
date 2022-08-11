/** @file */
#ifndef PP2_LANGUAGE_TYPES_BOOL_H
#define PP2_LANGUAGE_TYPES_BOOL_H

#include "pp2/language/definition/const.h"
#include "pp2/language/definition/vm_fn.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"

#define PP2_DEF_true  PP2_CONST(Bool,1)
#define PP2_DEF_false PP2_CONST(Bool,0)

#define PP2_DEF_Bool_not PP2_VM_FN(PP2_LANGUAGE_BOOL_NOT,1)
#define PP2_LANGUAGE_BOOL_NOT(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_LANGUAGE_BOOL_NOT P##obj,P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_NOT(addr,type,obj) IP2_LANGUAGE_BOOL_NOT_##obj
#define IP2_LANGUAGE_BOOL_NOT_0 (,Bool,1)
#define IP2_LANGUAGE_BOOL_NOT_1 (,Bool,0)

#define PP2_DEF_Bool_and PP2_VM_FN(PP2_LANGUAGE_BOOL_AND,2)
#define PP2_LANGUAGE_BOOL_AND(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BOOL_AND, (,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_AND(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) IP2_LANGUAGE_BOOL_AND_##lhs_value##_##rhs_value
#define IP2_LANGUAGE_BOOL_AND_0_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_AND_0_1 (,Bool,0)
#define IP2_LANGUAGE_BOOL_AND_1_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_AND_1_1 (,Bool,1)

#define PP2_DEF_Bool_or PP2_VM_FN(PP2_LANGUAGE_BOOL_OR,2)
#define PP2_LANGUAGE_BOOL_OR(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BOOL_OR, (,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_OR(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) IP2_LANGUAGE_BOOL_OR_##lhs_value##_##rhs_value
#define IP2_LANGUAGE_BOOL_OR_0_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_OR_0_1 (,Bool,1)
#define IP2_LANGUAGE_BOOL_OR_1_0 (,Bool,1)
#define IP2_LANGUAGE_BOOL_OR_1_1 (,Bool,1)

#define PP2_DEF_Bool_xor PP2_VM_FN(PP2_LANGUAGE_BOOL_XOR,2)
#define PP2_LANGUAGE_BOOL_XOR(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BOOL_XOR, (,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_XOR(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) IP2_LANGUAGE_BOOL_XOR_##lhs_value##_##rhs_value
#define IP2_LANGUAGE_BOOL_XOR_0_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_XOR_0_1 (,Bool,1)
#define IP2_LANGUAGE_BOOL_XOR_1_0 (,Bool,1)
#define IP2_LANGUAGE_BOOL_XOR_1_1 (,Bool,0)

#endif