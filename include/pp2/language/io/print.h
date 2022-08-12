/** @file */
#ifndef PP2_LANGUAGE_IO_PRINT_H
#define PP2_LANGUAGE_IO_PRINT_H

#include "pp2/language/compiler.h"
#include "pp2/language/basic/return.h"
#include "pp2/language/definition/primitive.h"

#include "pp2/machine/insns/emit.h"

#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/introspection/is_tuple.h"
#include "pp2/primitive/punctuation/comma.h"

#define PP2_DEF_print PP2_PRIMITIVE(IP2_LANGUAGE_PRINT_OVERLOAD)

#define IP2_LANGUAGE_PRINT_OVERLOAD(...)       \
        IP2_LANGUAGE_PRINT_OVERLOAD_SELECT(    \
            __VA_ARGS__,                       \
            PP2_COMMA_8,                       \
            PP2_COMMA_7,                       \
            PP2_COMMA_6,                       \
            PP2_COMMA_5,                       \
            PP2_COMMA_4,                       \
            PP2_COMMA_3,                       \
            PP2_COMMA_2,                       \
            PP2_COMMA_1,                       \
        )(,__VA_ARGS__)

#define IP2_LANGUAGE_PRINT_OVERLOAD_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_PRINT_EVAL,m,9_OR_MORE)

#define IP2_LANGUAGE_PRINT_EVAL1(P,stx0) 8IP2_LANGUAGE_PRINT_OBJ,P##stx0
#define IP2_LANGUAGE_PRINT_EVAL2(P,stx0,stx1) 8IP2_LANGUAGE_PRINT_OBJ,P##stx0,8IP2_LANGUAGE_PRINT_OBJ,P##stx1
#define IP2_LANGUAGE_PRINT_EVAL3(P,stx0,stx1,stx2) 8IP2_LANGUAGE_PRINT_OBJ,P##stx0,8IP2_LANGUAGE_PRINT_OBJ,P##stx1,8IP2_LANGUAGE_PRINT_OBJ,P##stx2
#define IP2_LANGUAGE_PRINT_EVAL4(P,stx0,stx1,stx2,stx3) 8IP2_LANGUAGE_PRINT_OBJ,P##stx0,8IP2_LANGUAGE_PRINT_OBJ,P##stx1,8IP2_LANGUAGE_PRINT_OBJ,P##stx2,8IP2_LANGUAGE_PRINT_OBJ,P##stx3
#define IP2_LANGUAGE_PRINT_EVAL5(P,stx0,stx1,stx2,stx3,stx4) 8IP2_LANGUAGE_PRINT_OBJ,P##stx0,8IP2_LANGUAGE_PRINT_OBJ,P##stx1,8IP2_LANGUAGE_PRINT_OBJ,P##stx2,8IP2_LANGUAGE_PRINT_OBJ,P##stx3,8IP2_LANGUAGE_PRINT_OBJ,P##stx4
#define IP2_LANGUAGE_PRINT_EVAL6(P,stx0,stx1,stx2,stx3,stx4,stx5) 8IP2_LANGUAGE_PRINT_OBJ,P##stx0,8IP2_LANGUAGE_PRINT_OBJ,P##stx1,8IP2_LANGUAGE_PRINT_OBJ,P##stx2,8IP2_LANGUAGE_PRINT_OBJ,P##stx3,8IP2_LANGUAGE_PRINT_OBJ,P##stx4,8IP2_LANGUAGE_PRINT_OBJ,P##stx5
#define IP2_LANGUAGE_PRINT_EVAL7(P,stx0,stx1,stx2,stx3,stx4,stx5,stx6) 8IP2_LANGUAGE_PRINT_OBJ,P##stx0,8IP2_LANGUAGE_PRINT_OBJ,P##stx1,8IP2_LANGUAGE_PRINT_OBJ,P##stx2,8IP2_LANGUAGE_PRINT_OBJ,P##stx3,8IP2_LANGUAGE_PRINT_OBJ,P##stx4,8IP2_LANGUAGE_PRINT_OBJ,P##stx5,8IP2_LANGUAGE_PRINT_OBJ,P##stx6
#define IP2_LANGUAGE_PRINT_EVAL8(P,stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7) 8IP2_LANGUAGE_PRINT_OBJ,P##stx0,8IP2_LANGUAGE_PRINT_OBJ,P##stx1,8IP2_LANGUAGE_PRINT_OBJ,P##stx2,8IP2_LANGUAGE_PRINT_OBJ,P##stx3,8IP2_LANGUAGE_PRINT_OBJ,P##stx4,8IP2_LANGUAGE_PRINT_OBJ,P##stx5,8IP2_LANGUAGE_PRINT_OBJ,P##stx6,8IP2_LANGUAGE_PRINT_OBJ,P##stx7
#define IP2_LANGUAGE_PRINT_EVAL9_OR_MORE(P,stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,...) 8IP2_LANGUAGE_PRINT_OBJ,P##stx0,8IP2_LANGUAGE_PRINT_OBJ,P##stx1,8IP2_LANGUAGE_PRINT_OBJ,P##stx2,8IP2_LANGUAGE_PRINT_OBJ,P##stx3,8IP2_LANGUAGE_PRINT_OBJ,P##stx4,8IP2_LANGUAGE_PRINT_OBJ,P##stx5,8IP2_LANGUAGE_PRINT_OBJ,P##stx6,8IP2_LANGUAGE_PRINT_OBJ,P##stx7,8PP2_LANGUAGE_PRINT,(P##__VA_ARGS__)

#define PP2_INSN_8PP2_LANGUAGE_PRINT(P,r0,r1,r2,stx_tup,...)  (,P##r0,P##r1,P##r2,IP2_LANGUAGE_PRINT_OVERLOAD P##stx_tup,P##__VA_ARGS__)
#define PP2_INSN_8IP2_LANGUAGE_PRINT_OBJ(P,r0,r1,r2,stx,...)  (,/*r0=*/,P##r1,P##r2,PP2_COMPILE(P##stx),8PP2_LANGUAGE_METHOD_CALL,str(),8PP2_EMIT_LITERAL,P##__VA_ARGS__)

#endif