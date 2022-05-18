/** @file */
#ifndef PP2_LANGUAGE_BASIC_VARIABLES_H
#define PP2_LANGUAGE_BASIC_VARIABLES_H

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"

#define PP2_DEF_a 8PP2_LANGUAGE_VAR,0,

#define PP2_INSN_8PP2_LANGUAGE_VAR(P,r0,r1,r2,addr,method,...) \
                                  (, \
                                   P##r0,P##r1,P##r2,\
                                   IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(,P##method,IP2_LANGUAGE_VAR_TEST_IF_STORE P##method)(,P##addr,P##method),\
                                   P##__VA_ARGS__ \
                                  )
#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(P,method,...) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE_I(, \
            __VA_ARGS__, \
            IP2_LANGUAGE_VAR_CHOOSE_LOAD(, \
                IP2_LANGUAGE_VAR_TEST_IF_RAW_LOAD P##method() \
            ) \
        )
#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE_I(P,_,insn,...) P##insn
#define IP2_LANGUAGE_VAR_TEST_IF_STORE(...) ,IP2_LANGUAGE_VAR_STORE,

#define IP2_LANGUAGE_VAR_CHOOSE_LOAD(P,...) IP2_LANGUAGE_VAR_CHOOSE_LOAD_I(,__VA_ARGS__,IP2_LANGUAGE_VAR_LOAD_METHOD)
#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_I(P,_,insn,...) P##insn
#define IP2_LANGUAGE_VAR_TEST_IF_RAW_LOAD() ,IP2_LANGUAGE_VAR_LOAD,

#define IP2_LANGUAGE_VAR_STORE(P,addr,value) IP2_LANGUAGE_VAR_STORE_OPEN P##value,8PP2_STACK_STORE,P##addr
#define IP2_LANGUAGE_VAR_STORE_OPEN(value) PP2_DEF_##value
#define IP2_LANGUAGE_VAR_LOAD(P,addr,_) 8PP2_STACK_LOAD,P##addr
#define IP2_LANGUAGE_VAR_LOAD_METHOD(P,addr,method) 8PP2_STACK_LOAD,P##addr,8PP2_LANGUAGE_VAR_METHOD_CALL,P##addr,P##method

#define PP2_INSN_8PP2_LANGUAGE_VAR_METHOD_CALL(P,obj,r1,r2,addr,method,...) IP2_FX(LANGUAGE_VAR_METHOD_CALL_I, (PP2_OPEN P##obj,P##r1,P##r2,P##addr,P##method,P##__VA_ARGS__))
#define IP2_LANGUAGE_VAR_METHOD_CALL_I(P,type,obj,r1,r2,addr,method,...) (,(P##addr,P##type,P##obj),P##r1,P##r2,PP2_DEF_##type##_##method,P##__VA_ARGS__)

#endif