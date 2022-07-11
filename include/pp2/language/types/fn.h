/** @file */
#ifndef PP2_LANGUAGE_TYPES_FN_H
#define PP2_LANGUAGE_TYPES_FN_H

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"

#define PP2_DEF_Fn_call 8PP2_LANGUAGE_FN_CALL,IP2_LANGUAGE_FN_CALL_ARGS

#define IP2_LANGUAGE_FN_CALL_ARGS(...) (__VA_ARGS__),


#define PP2_INSN_8PP2_LANGUAGE_FN_CALL(P,r0,r1,r2,fn_args,...) IP2_FX(LANGUAGE_FN_CALL,(,IP2_LANGUAGE_FN_CALL_OPEN P##r0,P##r1,P##r2,P##fn_args,P##__VA_ARGS__))

#define IP2_LANGUAGE_FN_CALL(P,fn_params,fn_body,r1,r2,fn_args,...) (,P##fn_args,P##r1,P##r2,PP2_OPEN P##fn_params,PP2_OPEN P##fn_body,P##__VA_ARGS__)

#define IP2_LANGUAGE_FN_CALL_OPEN(fn_addr,fn_type,fn_value) PP2_QUOTE_OPEN fn_value


#define PP2_INSN_8PP2_LANGUAGE_FN_ARG_V(P,r0,r1,r2,stack_insn,stack_addr,...) \
                                       (, \
                                        /*r0=*/,P##r1,P##r2, \
                                        IP2_LANGUAGE_FN_ARGS_HEAD P##r0, \
                                        8PP2_STACK_STORE,P##stack_addr, \
                                        8PP2_LANGUAGE_FN_ARGS_PUSH,IP2_LANGUAGE_FN_ARGS_TAIL P##r0, \
                                        P##__VA_ARGS__ \
                                       )
#define PP2_INSN_8PP2_LANGUAGE_FN_ARG_R(P,r0,r1,r2,stack_insn,stack_addr,...) ()

#define PP2_INSN_8PP2_LANGUAGE_FN_ARGS_PUSH(P,r0,r1,r2,args,K,...) PP2_INSN_##K(,P##args,P##r1,P##r2,P##__VA_ARGS__)

#define IP2_LANGUAGE_FN_ARGS_HEAD(x,...) PP2_DEF_##x
#define IP2_LANGUAGE_FN_ARGS_TAIL(x,...) (__VA_ARGS__)

#endif