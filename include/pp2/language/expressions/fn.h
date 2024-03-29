#ifndef PP2_LANGUAGE_EXPRESSIONS_FN_H
#define PP2_LANGUAGE_EXPRESSIONS_FN_H

#include "pp2/language/compiler.h"
#include "pp2/language/types/fn.h"
#include "pp2/language/basic/return.h"
#include "pp2/language/basic/block.h"

#include "pp2/machine/stack/store.h"

#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/seq/head.h"
#include "pp2/primitive/basic/invoke.h"

#define PP2_DEF_fn(...) )PP2_COMPILE_LANGUAGE_FN(,(__VA_ARGS__),
#define PP2_COMPILE_LANGUAGE_FN(P,params,body) 8PP2_LANGUAGE_FN,P##params,IP2_FX(COMPILE_LANGUAGE_FN_I, (,PP2_SEQ_SPLIT_HEAD P##body))
#define IP2_COMPILE_LANGUAGE_FN_I(P,body,rhs_stx) P##body,PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx)

#define PP2_INSN_8PP2_LANGUAGE_FN(P,r0,r1,r2,params,body,...) \
                                 (, \
                                  /*r0=*/(,Fn,(,IP2_LANGUAGE_FN_PARSE_PARAMS P##params,8PP2_LANGUAGE_BLOCK,P##body)), \
                                  P##r1,P##r2, \
                                  P##__VA_ARGS__ \
                                 )

#define PP2_INSN_8PP2_LANGUAGE_FN_PARSE_PARAMS(P,r0,r1,r2,params,...) (,P##r0,P##r1,P##r2,IP2_LANGUAGE_FN_PARSE_PARAMS P##params,P##__VA_ARGS__)
#define IP2_LANGUAGE_FN_PARSE_PARAMS(...) \
        IP2_LANGUAGE_FN_PARSE_PARAMS_OVERLOAD( \
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
#define IP2_LANGUAGE_FN_PARSE_PARAMS_OVERLOAD(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_FN_PARSE_PARAMS_,m,9_OR_MORE)

#define IP2_LANGUAGE_FN_PARSE_PARAMS_1(P,p0) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_1,(,PP2_COMPILE_UNSAFE(P##p0())))
#define IP2_LANGUAGE_FN_PARSE_PARAMS_2(P,p0,p1) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_2,(,PP2_COMPILE_UNSAFE(P##p0()),PP2_COMPILE_UNSAFE(P##p1())))
#define IP2_LANGUAGE_FN_PARSE_PARAMS_3(P,p0,p1,p2) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_3,(,PP2_COMPILE_UNSAFE(P##p0()),PP2_COMPILE_UNSAFE(P##p1()),PP2_COMPILE_UNSAFE(P##p2())))
#define IP2_LANGUAGE_FN_PARSE_PARAMS_4(P,p0,p1,p2,p3) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_4,(,PP2_COMPILE_UNSAFE(P##p0()),PP2_COMPILE_UNSAFE(P##p1()),PP2_COMPILE_UNSAFE(P##p2()),PP2_COMPILE_UNSAFE(P##p3())))
#define IP2_LANGUAGE_FN_PARSE_PARAMS_5(P,p0,p1,p2,p3,p4) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_5,(,PP2_COMPILE_UNSAFE(P##p0()),PP2_COMPILE_UNSAFE(P##p1()),PP2_COMPILE_UNSAFE(P##p2()),PP2_COMPILE_UNSAFE(P##p3()),PP2_COMPILE_UNSAFE(P##p4())))
#define IP2_LANGUAGE_FN_PARSE_PARAMS_6(P,p0,p1,p2,p3,p4,p5) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_6,(,PP2_COMPILE_UNSAFE(P##p0()),PP2_COMPILE_UNSAFE(P##p1()),PP2_COMPILE_UNSAFE(P##p2()),PP2_COMPILE_UNSAFE(P##p3()),PP2_COMPILE_UNSAFE(P##p4()),PP2_COMPILE_UNSAFE(P##p5())))
#define IP2_LANGUAGE_FN_PARSE_PARAMS_7(P,p0,p1,p2,p3,p4,p5,p6) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_7,(,PP2_COMPILE_UNSAFE(P##p0()),PP2_COMPILE_UNSAFE(P##p1()),PP2_COMPILE_UNSAFE(P##p2()),PP2_COMPILE_UNSAFE(P##p3()),PP2_COMPILE_UNSAFE(P##p4()),PP2_COMPILE_UNSAFE(P##p5()),PP2_COMPILE_UNSAFE(P##p6())))
#define IP2_LANGUAGE_FN_PARSE_PARAMS_8(P,p0,p1,p2,p3,p4,p5,p6,p7) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_8,(,PP2_COMPILE_UNSAFE(P##p0()),PP2_COMPILE_UNSAFE(P##p1()),PP2_COMPILE_UNSAFE(P##p2()),PP2_COMPILE_UNSAFE(P##p3()),PP2_COMPILE_UNSAFE(P##p4()),PP2_COMPILE_UNSAFE(P##p5()),PP2_COMPILE_UNSAFE(P##p6()),PP2_COMPILE_UNSAFE(P##p7())))
#define IP2_LANGUAGE_FN_PARSE_PARAMS_9_OR_MORE(P,p0,p1,p2,p3,p4,p5,p6,p7,...) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_8,(,PP2_COMPILE_UNSAFE(P##p0()),PP2_COMPILE_UNSAFE(P##p1()),PP2_COMPILE_UNSAFE(P##p2()),PP2_COMPILE_UNSAFE(P##p3()),PP2_COMPILE_UNSAFE(P##p4()),PP2_COMPILE_UNSAFE(P##p5()),PP2_COMPILE_UNSAFE(P##p6()),PP2_COMPILE_UNSAFE(P##p7()))),8PP2_LANGUAGE_FN_PARSE_PARAMS,(P##__VA_ARGS__)

#define IP2_LANGUAGE_FN_PARSE_PARAM_TYPES_1(P,i0,a0,x0) 8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a0
#define IP2_LANGUAGE_FN_PARSE_PARAM_TYPES_2(P,i0,a0,x0,i1,a1,x1) 8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a0,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a1
#define IP2_LANGUAGE_FN_PARSE_PARAM_TYPES_3(P,i0,a0,x0,i1,a1,x1,i2,a2,x2) 8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a0,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a1,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a2
#define IP2_LANGUAGE_FN_PARSE_PARAM_TYPES_4(P,i0,a0,x0,i1,a1,x1,i2,a2,x2,i3,a3,x3) 8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a0,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a1,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a2,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a3
#define IP2_LANGUAGE_FN_PARSE_PARAM_TYPES_5(P,i0,a0,x0,i1,a1,x1,i2,a2,x2,i3,a3,x3,i4,a4,x4) 8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a0,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a1,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a2,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a3,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a4
#define IP2_LANGUAGE_FN_PARSE_PARAM_TYPES_6(P,i0,a0,x0,i1,a1,x1,i2,a2,x2,i3,a3,x3,i4,a4,x4,i5,a5,x5) 8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a0,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a1,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a2,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a3,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a4,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a5
#define IP2_LANGUAGE_FN_PARSE_PARAM_TYPES_7(P,i0,a0,x0,i1,a1,x1,i2,a2,x2,i3,a3,x3,i4,a4,x4,i5,a5,x5,i6,a6,x6) 8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a0,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a1,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a2,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a3,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a4,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a5,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a6
#define IP2_LANGUAGE_FN_PARSE_PARAM_TYPES_8(P,i0,a0,x0,i1,a1,x1,i2,a2,x2,i3,a3,x3,i4,a4,x4,i5,a5,x5,i6,a6,x6,i7,a7,x7) 8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a0,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a1,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a2,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a3,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a4,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a5,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a6,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_STACK_STORE,P##a7

#endif