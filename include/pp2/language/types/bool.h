/** @file */
#ifndef PP2_LANGUAGE_TYPES_BOOL_H
#define PP2_LANGUAGE_TYPES_BOOL_H

#include "pp2/language/definition/const.h"

#define PP2_DEF_true  PP2_CONST(8bool,1)
#define PP2_DEF_false PP2_CONST(8bool,0)

#define PP2_DEF_8bool_not 8PP2_LANGUAGE_BOOL_NOT
#define PP2_INSN_8PP2_LANGUAGE_BOOL_NOT(P,obj,r1,r2,...) (,/*r0=*/IP2_LANGUAGE_BOOL_NOT P##obj,P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_NOT(addr,type,value) IP2_LANGUAGE_BOOL_NOT_##value(,addr,type)
#define IP2_LANGUAGE_BOOL_NOT_0(P,addr,type) (P##addr,P##type,1)
#define IP2_LANGUAGE_BOOL_NOT_1(P,addr,type) (P##addr,P##type,0)

#endif