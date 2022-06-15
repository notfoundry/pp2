/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_FN_H
#define PP2_LANGUAGE_DEFINITION_FN_H

#include "pp2/language/types/fn.h"
#include "pp2/language/basic/return.h"

#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/punctuation/comma.h"

#define PP2_FN(fn) PP2_LANGUAGE_FN_##fn
#define PP2_LANGUAGE_FN_fn(...) \
        8PP2_LANGUAGE_FN, \
        IP2_LANGUAGE_FN_PARSE_PARAMS( \
                __VA_ARGS__, \
                PP2_COMMA_8, \
                PP2_COMMA_7, \
                PP2_COMMA_6, \
                PP2_COMMA_5, \
                PP2_COMMA_4, \
                PP2_COMMA_3, \
                PP2_COMMA_2, \
                PP2_COMMA_1, \
        )(,__VA_ARGS__), \
        IP2_LANGUAGE_FN_PARSE_BODY

#define IP2_LANGUAGE_FN_PARSE_PARAMS(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_FN_PARSE_PARAMS_,m,9_OR_MORE)
#define IP2_LANGUAGE_FN_PARSE_PARAMS_1(P,p0) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_1, (,PP2_DEF_##p0))
#define IP2_LANGUAGE_FN_PARSE_PARAMS_2(P,p0,p1)
#define IP2_LANGUAGE_FN_PARSE_PARAMS_3(P,p0,p1,p2)
#define IP2_LANGUAGE_FN_PARSE_PARAMS_4(P,p0,p1,p2,p3)
#define IP2_LANGUAGE_FN_PARSE_PARAMS_5(P,p0,p1,p2,p3,p4)
#define IP2_LANGUAGE_FN_PARSE_PARAMS_6(P,p0,p1,p2,p3,p4,p5)
#define IP2_LANGUAGE_FN_PARSE_PARAMS_7(P,p0,p1,p2,p3,p4,p5,p6)
#define IP2_LANGUAGE_FN_PARSE_PARAMS_8(P,p0,p1,p2,p3,p4,p5,p6,p7)
#define IP2_LANGUAGE_FN_PARSE_PARAMS_9_OR_MORE(P,p0,p1,p2,p3,p4,p5,p6,p7,...)

#define IP2_LANGUAGE_FN_PARSE_PARAM_TYPES_1(P,i0,a0,t0) (IP2_LANGUAGE_FN_CHOOSE_PARAM_TYPE(IP2_LANGUAGE_FN_TEST_IF_REF P##t0 ())(,P##i0,P##a0))

#define IP2_LANGUAGE_FN_CHOOSE_PARAM_TYPE(...) PP2_TUPLE_AT_1(,__VA_ARGS__,8REFERENCE)
#define IP2_LANGUAGE_FN_TEST_IF_REF(...) ,8VALUE,

#define IP2_LANGUAGE_FN_PARSE_BODY(...) (8PP2_LANGUAGE_BLOCK,(__VA_ARGS__)),


#define PP2_INSN_8PP2_LANGUAGE_FN(P,r0,r1,r2,params,body,...) (,(,Fn,(,P##params,P##body)),P##r1,P##r2,8PP2_LANGUAGE_RETURN,P##__VA_ARGS__)

#endif