#ifndef PP2_LANGUAGE_COMPILER_H
#define PP2_LANGUAGE_COMPILER_H

#include "pp2/machine/exception/throw.h"

#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/tuple/at.h"

#define PP2_COMPILE(stx) IP2_LANGUAGE_COMPILE((stx,PP2_DEF_##stx))
#define IP2_LANGUAGE_COMPILE(tup) IP2_LANGUAGE_COMPILE_I tup
#define IP2_LANGUAGE_COMPILE_I(stx,x) IP2_LANGUAGE_COMPILE_II(IP2_LANGUAGE_COMPILE_TEST_SUCCESS_##x,IP2_LANGUAGE_COMPILE_THROW,)(stx)
#define IP2_LANGUAGE_COMPILE_II(...) PP2_TUPLE_AT_1(,__VA_ARGS__)
#define IP2_LANGUAGE_COMPILE_TEST_SUCCESS_ ,PP2_EAT,
#define IP2_LANGUAGE_COMPILE_THROW(stx) 8PP2_THROW_EXCEPTION,8PP2_SYNTAX_EXCEPTION,stx

#define PP2_COMPILE_UNSAFE(stx) IP2_COMPILE_UNSAFE_I ((PP2_DEF_##stx))
#define IP2_COMPILE_UNSAFE_I(x) PP2_EAT x

#define PP2_INSN_8PP2_LANGUAGE_COMPILE(P,r0,r1,r2,stx,...) (,P##r0,P##r1,P##r2,PP2_COMPILE(P##stx),P##__VA_ARGS__)

#endif