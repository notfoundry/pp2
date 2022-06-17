/** @file */
#ifndef PP2_LANGUAGE_BASIC_RETURN_H
#define PP2_LANGUAGE_BASIC_RETURN_H

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/tuple/prepend_last.h"

#define PP2_INSN_8PP2_LANGUAGE_RETURN(P,r0,r1,r2,method,...) \
        IP2_LANGUAGE_RETURN_CHOOSE_CALL_OR_METHOD(, \
            P##method,IP2_LANGUAGE_RETURN_TEST_IF_CALL P##method \
        )(,P##r0,P##r1,P##r2,P##method,P##__VA_ARGS__)

#define IP2_LANGUAGE_RETURN_CHOOSE_CALL_OR_METHOD(P,method,...) \
        IP2_LANGUAGE_RETURN_TUPLE_AT_1( \
            __VA_ARGS__, \
            IP2_LANGUAGE_RETURN_CHOOSE_METHOD_OR_RETURN(, \
                IP2_LANGUAGE_RETURN_TEST_IF_NOT_METHOD P##method () \
            ) \
        )
#define IP2_LANGUAGE_RETURN_CHOOSE_METHOD_OR_RETURN(P,...) \
        IP2_LANGUAGE_RETURN_TUPLE_AT_1( \
            __VA_ARGS__, \
            IP2_LANGUAGE_RETURN_AND_METHOD \
        )

#define IP2_LANGUAGE_RETURN(P,r0,r1,r2,_,insn,...) PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_RETURN_AND_METHOD(P,r0,r1,r2,method,...) (,P##r0,P##r1,P##r2,IP2_LANGUAGE_RETURN_METHOD_CALL(,P##r0,P##method),P##__VA_ARGS__)
#define IP2_LANGUAGE_RETURN_AND_CALL(P,r0,r1,r2,method,...) (,P##r0,P##r1,P##r2,IP2_LANGUAGE_RETURN_METHOD_CALL(,P##r0,call P##method),P##__VA_ARGS__)

#define IP2_LANGUAGE_RETURN_TUPLE_AT_1(_,insn,...) insn
#define IP2_LANGUAGE_RETURN_TEST_IF_CALL(...) ,IP2_LANGUAGE_RETURN_AND_CALL,
#define IP2_LANGUAGE_RETURN_TEST_IF_NOT_METHOD(...) ,IP2_LANGUAGE_RETURN,

#define IP2_LANGUAGE_RETURN_METHOD_CALL(P,obj,method) IP2_FX(LANGUAGE_RETURN_METHOD_CALL_I, (,PP2_OPEN P##obj,P##method))
#define IP2_LANGUAGE_RETURN_METHOD_CALL_I(P,obj_addr,obj_type,obj_value,method) \
        PP2_FX( \
            TUPLE_PREPEND_LAST, \
            (,8PP2_LANGUAGE_RETURN,PP2_DEF_##obj_type##_##method) \
        )

#endif