/** @file */
#ifndef PP2_LANGUAGE_BASIC_VARIABLE_H
#define PP2_LANGUAGE_BASIC_VARIABLE_H

#include "pp2/language/basic/detail/variable_tables.h"
#include "pp2/language/basic/return.h"

#define PP2_INSN_8PP2_LANGUAGE_VAR(P,r0,r1,r2,addr,rhs_stx,...) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(PP2_INSN_,IP2_LANGUAGE_VAR_TEST_IF_STORE P##rhs_stx) \
        (, \
         P##r0,P##r1,P##r2, \
         P##addr,P##value, \
         P##__VA_ARGS__ \
        )

#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(P,...) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE_I(P, \
            __VA_ARGS__, \
            8IP2_LANGUAGE_VAR_LOAD \
        )
#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE_I(P,_,insn,...) P##insn
#define IP2_LANGUAGE_VAR_TEST_IF_STORE(...) ,8IP2_LANGUAGE_VAR_STORE,


#define PP2_INSN_8IP2_LANGUAGE_VAR_STORE(P,r0,r1,r2,addr,value,...) \
                                        (, \
                                         P##r0,P##r1,P##r2, \
                                         IP2_LANGUAGE_VAR_STORE_OPEN P##value,8PP2_STACK_STORE,P##addr, \
                                         P##__VA_ARGS__ \
                                        )
#define IP2_LANGUAGE_VAR_STORE_OPEN(value) PP2_COMPILE(value)

#define PP2_INSN_8IP2_LANGUAGE_VAR_LOAD(P,r0,r1,r2,addr,method,...) \
                                       (, \\
                                        P##r0,P##r1,P##r2, \
                                        8PP2_STACK_LOAD,P##addr,PP2_COMPILE_LANGUAGE_RETURN(P##method), \
                                        P##__VA_ARGS__ \
                                       )


#define PP2_COMPILE_LANGUAGE_VAR(addr,rhs_stx) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(,IP2_LANGUAGE_VAR_TEST_IF_STORE rhs_stx),addr,rhs_stx

#endif