/** @file */
#ifndef PP2_LANGUAGE_TYPES_FN_H
#define PP2_LANGUAGE_TYPES_FN_H

#define PP2_DEF_Fn_call 8PP2_LANGUAGE_FN_CALL,IP2_LANGUAGE_FN_ARGS

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL(P,r0,r1,r2,args,...) (,P##r0,P##r1,P##r2,P##__VA_ARGS__)

#define IP2_LANGUAGE_FN_ARGS(...) (__VA_ARGS__),

#endif