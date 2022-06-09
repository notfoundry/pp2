/** @file */
#ifndef PP2_LANGUAGE_TYPES_BOOL_H
#define PP2_LANGUAGE_TYPES_BOOL_H

#include "pp2/language/definition/const.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"

#define PP2_DEF_true  PP2_CONST(Bool,1)
#define PP2_DEF_false PP2_CONST(Bool,0)

#define PP2_DEF_Bool_not 8PP2_LANGUAGE_BOOL_NOT,
#define PP2_INSN_8PP2_LANGUAGE_BOOL_NOT(P,obj,r1,r2,G,...) (,/*r0=*/IP2_LANGUAGE_BOOL_NOT P##obj,P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_NOT(addr,type,obj) IP2_LANGUAGE_BOOL_NOT_##obj
#define IP2_LANGUAGE_BOOL_NOT_0 (,Bool,1)
#define IP2_LANGUAGE_BOOL_NOT_1 (,Bool,0)

#define PP2_DEF_Bool_and 8PP2_LANGUAGE_BOOL_AND,PP2_LANGUAGE_ARGS
#define PP2_INSN_8PP2_LANGUAGE_BOOL_AND(P,lhs_obj,r1,r2,rhs_stx,...) (,/*r0=*/,P##r1,P##r2,PP2_DEF_##rhs_stx,8PP2_LANGUAGE_BOOL_AND_I,P##lhs_obj,P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_BOOL_AND_I(P,rhs_obj,r1,r2,lhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BOOL_AND, (,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_AND(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) IP2_LANGUAGE_BOOL_AND_##lhs_value##_##rhs_value
#define IP2_LANGUAGE_BOOL_AND_0_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_AND_0_1 (,Bool,0)
#define IP2_LANGUAGE_BOOL_AND_1_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_AND_1_1 (,Bool,1)

#define PP2_LANGUAGE_ARGS(...) __VA_ARGS__,

#endif