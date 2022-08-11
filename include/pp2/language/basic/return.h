/** @file */
#ifndef PP2_LANGUAGE_BASIC_RETURN_H
#define PP2_LANGUAGE_BASIC_RETURN_H

#include "pp2/language/compiler.h"
#include "pp2/language/basic/object.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/tuple/prepend_last.h"

#define PP2_COMPILE_LANGUAGE_RETURN(rhs_stx) \
        IP2_LANGUAGE_RETURN_CHOOSE_CALL_OR_METHOD(,rhs_stx,IP2_LANGUAGE_RETURN_TEST_IF_CALL rhs_stx), \
        rhs_stx

#define PP2_INSN_8PP2_LANGUAGE_RETURN(P,r0,r1,r2,method,...) \
                                     (, \
                                      P##r0,P##r1,P##r2, \
                                      IP2_LANGUAGE_RETURN_CHOOSE_CALL_OR_METHOD(, \
                                          P##method,IP2_LANGUAGE_RETURN_TEST_IF_CALL P##method \
                                      ), \
                                      P##method, \
                                      P##__VA_ARGS__ \
                                     )

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
            8IP2_LANGUAGE_RETURN_AND_METHOD \
        )

#define PP2_INSN_8IP2_LANGUAGE_RETURN_NOP(P,r0,r1,r2,_,...) (,P##r0,P##r1,P##r2,P##__VA_ARGS__)
#define PP2_INSN_8IP2_LANGUAGE_RETURN_AND_METHOD(P,r0,r1,r2,method,...) (,P##r0,PP2_LOCAL_CTX_PUSH_ARGUMENT(P##r1,P##r0),P##r2,IP2_LANGUAGE_RETURN_METHOD_CALL(,P##r0,P##method),P##__VA_ARGS__)
#define PP2_INSN_8IP2_LANGUAGE_RETURN_AND_CALL(P,r0,r1,r2,method,...) (,P##r0,PP2_LOCAL_CTX_PUSH_ARGUMENT(P##r1,P##r0),P##r2,IP2_LANGUAGE_RETURN_METHOD_CALL(,P##r0,call P##method),P##__VA_ARGS__)

#define IP2_LANGUAGE_RETURN_TUPLE_AT_1(_,insn,...) insn
#define IP2_LANGUAGE_RETURN_TEST_IF_CALL(...) ,8IP2_LANGUAGE_RETURN_AND_CALL,
#define IP2_LANGUAGE_RETURN_TEST_IF_NOT_METHOD(...) ,8IP2_LANGUAGE_RETURN_NOP,


#define IP2_LANGUAGE_RETURN_METHOD_CALL(P,obj,method) IP2_FX(LANGUAGE_RETURN_METHOD_CALL_I, (,IP2_LANGUAGE_OBJECT_TYPE P##obj,P##method))
#define IP2_LANGUAGE_RETURN_METHOD_CALL_I(P,type,method) PP2_COMPILE_OR_DEFAULT(type##_##method,(8IP2_LANGUAGE_RETURN_RESOLVE_INHERITED_METHOD,P##type,P##method))

#define PP2_INSN_8IP2_LANGUAGE_RETURN_RESOLVE_INHERITED_METHOD(P,r0,r1,r2,type,method,...) \
                                                              (, \
                                                               P##r0,P##r1,P##r2, \
                                                               PP2_COMPILE_UNSAFE(P##type), \
                                                               8PP2_LANGUAGE_TYPE_SUPERTYPE_NAME, \
                                                               8IP2_LANGUAGE_RETURN_INHERITED_METHOD_CALL,P##method, \
                                                               P##__VA_ARGS__ \
                                                              )

#define PP2_INSN_8IP2_LANGUAGE_RETURN_INHERITED_METHOD_CALL(P,r0,r1,r2,method,...) \
                                                           (, \
                                                            /*r0=*/,P##r1,P##r2, \
                                                            IP2_LANGUAGE_RETURN_METHOD_CALL_I(,P##r0,P##method), \
                                                            P##__VA_ARGS__ \
                                                           )

#define PP2_INSN_8PP2_LANGUAGE_TYPE_SUPERTYPE_NAME(P,r0,r1,r2,...) (,PP2_LANGUAGE_TYPE_SUPERTYPE_NAME P##r0,P##r1,P##r2,P##__VA_ARGS__)
#define PP2_LANGUAGE_TYPE_SUPERTYPE_NAME(type_addr,type_type,type_value) IP2_LANGUAGE_TYPE_SUPERTYPE_NAME_I type_value
#define IP2_LANGUAGE_TYPE_SUPERTYPE_NAME_I(P,type_name,supertype_name) P##supertype_name

#endif