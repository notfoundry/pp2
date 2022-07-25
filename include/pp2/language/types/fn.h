/** @file */
#ifndef PP2_LANGUAGE_TYPES_FN_H
#define PP2_LANGUAGE_TYPES_FN_H

#include "pp2/machine/insns/nop.h"

#include "pp2/primitive/punctuation/comma.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/seq/head.h"

#define PP2_DEF_Fn_call )PP2_COMPILE_LANGUAGE_FN_CALL(,
#define PP2_COMPILE_LANGUAGE_FN_CALL(P,args_tup) \
        IP2_COMPILE_LANGUAGE_FN_CALL_CHOOSE_PTR_OR_CALL( \
            IP2_COMPILE_LANGUAGE_FN_CALL_TEST_IF_CALL P##args_tup\
        )(,P##args_tup)

#define IP2_COMPILE_LANGUAGE_FN_CALL(P,args_tup) IP2_FX(COMPILE_LANGUAGE_FN_CALL_I,(,PP2_SEQ_SPLIT_HEAD P##args_tup))
#define IP2_COMPILE_LANGUAGE_FN_CALL_I(P,args_tup,rhs_stx) 8PP2_LANGUAGE_FN_CALL,P##args_tup,PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx)
#define IP2_COMPILE_LANGUAGE_FN_CALL_PTR(P,rhs_stx) 8PP2_LANGUAGE_FN_PTR,PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx)

#define IP2_COMPILE_LANGUAGE_FN_CALL_CHOOSE_PTR_OR_CALL(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_COMPILE_LANGUAGE_FN_CALL_PTR)
#define IP2_COMPILE_LANGUAGE_FN_CALL_TEST_IF_CALL(...) ,IP2_COMPILE_LANGUAGE_FN_CALL,


#define PP2_INSN_8PP2_LANGUAGE_FN_PTR(P,r0,r1,r2,...) \
                                     (, \
                                      /*r0=*/(,Fn,(,8PP2_LANGUAGE_FN_PTR_CALL,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1)), \
                                      /*r1=*/P##r1, \
                                      /*r2=*/P##r2, \
                                      8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
                                      P##__VA_ARGS__ \
                                     )

#define PP2_INSN_8PP2_LANGUAGE_FN_PTR_CALL(P,r0,r1,r2,ptr,...) \
                                          (, \
                                           /*r0=*/,\
                                           /*r1=*/PP2_LOCAL_CTX_PREPEND_ARGUMENTS(P##r1,P##ptr), \
                                           /*r2=*/P##r2, \
                                           8PP2_LANGUAGE_FN_CALL_IMPL, \
                                           8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
                                           P##__VA_ARGS__ \
                                          )

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL(P,r0,r1,r2,args_tup,...) \
                                      (, \
                                       /*r0=*/, \
                                       /*r1=*/P##r1, \
                                       /*r2=*/P##r2, \
                                       PP2_LANGUAGE_FN_PARSE_ARGS P##args_tup, \
                                       8PP2_LANGUAGE_FN_CALL_IMPL, \
                                       8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
                                       P##__VA_ARGS__ \
                                      )

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL_IMPL(P,r0,r1,r2,...) \
                                           (, \
                                            /*r0=*/P##r0, \
                                            /*r1=*/PP2_LOCAL_CTX_POP_ARGUMENT P##r1, \
                                            /*r2=*/P##r2, \
                                            IP2_FX(LANGUAGE_FN_CALL_OPEN,PP2_LOCAL_CTX_GET_ARGUMENTS_HEAD P##r1), \
                                            P##__VA_ARGS__ \
                                           )

#define IP2_LANGUAGE_FN_CALL_OPEN(fn_addr,fn_type,fn_value) PP2_QUOTE_OPEN fn_value

#define PP2_INSN_8PP2_LANGUAGE_FN_PARSE_ARGS(P,r0,r1,r2,args_tup,...) (,P##r0,P##r1,P##r2,PP2_LANGUAGE_FN_PARSE_ARGS P##args_tup,P##__VA_ARGS__)
#define PP2_LANGUAGE_FN_PARSE_ARGS(...) \
        IP2_LANGUAGE_FN_CALL_PARSE_ARGS_OVERLOAD( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(,__VA_ARGS__)
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_OVERLOAD(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_FN_CALL_PARSE_ARGS_,m,9_OR_MORE)

#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_0(P,_) 8PP2_NOP

#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1(P,a0) IP2_LANGUAGE_FN_CALL_PARSE_ARGS_CHOOSE_0_OR_1_ARG(IP2_LANGUAGE_FN_CALL_TEST_IF_0_ARGS P##a0 ())(,P##a0)
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1_IMPL(P,a0) PP2_COMPILE(P##a0),8PP2_LANGUAGE_FN_CALL_PUSH_ARG
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_CHOOSE_0_OR_1_ARG(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1_IMPL)
#define IP2_LANGUAGE_FN_CALL_TEST_IF_0_ARGS() ,IP2_LANGUAGE_FN_CALL_PARSE_ARGS_0,

#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_2(P,a0,a1) PP2_COMPILE(P##a0),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a1),8PP2_LANGUAGE_FN_CALL_PUSH_ARG
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_3(P,a0,a1,a2) PP2_COMPILE(P##a0),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a1),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a2),8PP2_LANGUAGE_FN_CALL_PUSH_ARG
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_4(P,a0,a1,a2,a3) PP2_COMPILE(P##a0),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a1),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a2),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a3),8PP2_LANGUAGE_FN_CALL_PUSH_ARG
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_5(P,a0,a1,a2,a3,a4) PP2_COMPILE(P##a0),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a1),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a2),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a3),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a4),8PP2_LANGUAGE_FN_CALL_PUSH_ARG
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_6(P,a0,a1,a2,a3,a4,a5) PP2_COMPILE(P##a0),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a1),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a2),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a3),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a4),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a5),8PP2_LANGUAGE_FN_CALL_PUSH_ARG
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_7(P,a0,a1,a2,a3,a4,a5,a6) PP2_COMPILE(P##a0),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a1),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a2),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a3),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a4),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a5),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a6),8PP2_LANGUAGE_FN_CALL_PUSH_ARG
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_8(P,a0,a1,a2,a3,a4,a5,a6,a7) PP2_COMPILE(P##a0),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a1),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a2),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a3),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a4),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a5),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a6),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a7),8PP2_LANGUAGE_FN_CALL_PUSH_ARG
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_9_OR_MORE(P,a0,a1,a2,a3,a4,a5,a6,a7,...) PP2_COMPILE(P##a0),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a1),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a2),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a3),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a4),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a5),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a6),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,PP2_COMPILE(P##a7),8PP2_LANGUAGE_FN_CALL_PUSH_ARG,8PP2_LANGUAGE_FN_PARSE_ARGS,(P##__VA_ARGS__)

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL_PUSH_ARG(P,r0,r1,r2,...) \
                                               (, \
                                                /*r0=*/, \
                                                /*r1=*/PP2_LOCAL_CTX_PUSH_ARGUMENT(P##r1,P##r0), \
                                                /*r2=*/P##r2, \
                                                P##__VA_ARGS__ \
                                               )

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL_POP_ARG(P,r0,r1,r2,...) \
                                              (, \
                                               /*r0=*/PP2_LOCAL_CTX_GET_ARGUMENTS_HEAD P##r1, \
                                               /*r1=*/PP2_LOCAL_CTX_POP_ARGUMENT P##r1, \
                                               /*r2=*/P##r2, \
                                               P##__VA_ARGS__ \
                                              )

#endif