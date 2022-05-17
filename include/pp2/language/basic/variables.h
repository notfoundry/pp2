/** @file */
#ifndef PP2_LANGUAGE_BASIC_VARIABLES_H
#define PP2_LANGUAGE_BASIC_VARIABLES_H

#include "pp2/primitive/tuple/open.h"

#define PP2_DEF_a 8PP2_LANGUAGE_VAR,0,

#define PP2_INSN_8PP2_LANGUAGE_VAR(P,r0,r1,r2,addr,method,...) \
                                  (, \
                                   P##r0,P##r1,P##r2,\
                                   IP2_LANGUAGE_VAR_TEST_OP(,IP2_LANGUAGE_VAR_TEST_OP_I P##method)(,P##addr,P##method),\
                                   P##__VA_ARGS__ \
                                  )
#define IP2_LANGUAGE_VAR_TEST_OP(...) IP2_LANGUAGE_VAR_TEST_OP_II(__VA_ARGS__,IP2_LANGUAGE_VAR_LOAD)
#define IP2_LANGUAGE_VAR_TEST_OP_I(...) ,IP2_LANGUAGE_VAR_STORE,
#define IP2_LANGUAGE_VAR_TEST_OP_II(P,_,insn,...) P##insn

#define IP2_LANGUAGE_VAR_STORE(P,addr,value) 8PP2_STACK_STORE,P##addr,PP2_OPEN P##value
#define IP2_LANGUAGE_VAR_LOAD(P,addr,method) 8PP2_STACK_LOAD,P##addr,8PP2_LANGUAGE_METHOD_CALL,P##addr,P##method

#define PP2_INSN_8PP2_LANGUAGE_METHOD_CALL(P,obj,r1,r2,addr,method,...) (,/*r0=*/,/*r1=*/P##r1,/*r2=*/P##r2,P##__VA_ARGS__)

#endif