/** @file */
#ifndef PP2_LANGUAGE_BASIC_VARIABLE_H
#define PP2_LANGUAGE_BASIC_VARIABLE_H

#include "pp2/language/basic/variable_tables.h"
#include "pp2/language/basic/return.h"

#define PP2_INSN_8PP2_LANGUAGE_VAR(P,r0,r1,r2,addr,rhs_stx,...) \
                                  (, \
                                   P##r0,P##r1,P##r2,\
                                   IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(,IP2_LANGUAGE_VAR_TEST_IF_STORE P##rhs_stx)(,P##addr,P##rhs_stx),\
                                   P##__VA_ARGS__ \
                                  )
#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(P,...) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE_I(, \
            __VA_ARGS__, \
            IP2_LANGUAGE_VAR_LOAD \
        )
#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE_I(P,_,insn,...) P##insn
#define IP2_LANGUAGE_VAR_TEST_IF_STORE(...) ,IP2_LANGUAGE_VAR_STORE,

#define IP2_LANGUAGE_VAR_STORE(P,addr,value) IP2_LANGUAGE_VAR_STORE_OPEN P##value,8PP2_STACK_STORE,P##addr
#define IP2_LANGUAGE_VAR_STORE_OPEN(value) PP2_DEF_##value
#define IP2_LANGUAGE_VAR_LOAD(P,addr,method) 8PP2_STACK_LOAD,P##addr,8PP2_LANGUAGE_RETURN,P##method

#endif