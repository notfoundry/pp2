/** @file */
#ifndef PP2_LANGUAGE_BASIC_BLOCK_H
#define PP2_LANGUAGE_BASIC_BLOCK_H

#include "pp2/language/compiler.h"

#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/punctuation/comma.h"

#define PP2_LANGUAGE_BLOCK(...)                \
        IP2_LANGUAGE_BLOCK_OVERLOAD(           \
            __VA_ARGS__,                       \
            PP2_COMMA_16,                      \
            PP2_COMMA_15,                      \
            PP2_COMMA_14,                      \
            PP2_COMMA_13,                      \
            PP2_COMMA_12,                      \
            PP2_COMMA_11,                      \
            PP2_COMMA_10,                      \
            PP2_COMMA_9,                       \
            PP2_COMMA_8,                       \
            PP2_COMMA_7,                       \
            PP2_COMMA_6,                       \
            PP2_COMMA_5,                       \
            PP2_COMMA_4,                       \
            PP2_COMMA_3,                       \
            PP2_COMMA_2,                       \
            PP2_COMMA_1,                       \
        )(__VA_ARGS__)

#define IP2_LANGUAGE_BLOCK_OVERLOAD(x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_BLOCK_EVAL,m,17_OR_MORE)

#define IP2_LANGUAGE_BLOCK_EVAL1(stx0) PP2_COMPILE(stx0)
#define IP2_LANGUAGE_BLOCK_EVAL2(stx0,stx1) PP2_COMPILE(stx0),PP2_COMPILE(stx1)
#define IP2_LANGUAGE_BLOCK_EVAL3(stx0,stx1,stx2) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2)
#define IP2_LANGUAGE_BLOCK_EVAL4(stx0,stx1,stx2,stx3) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3)
#define IP2_LANGUAGE_BLOCK_EVAL5(stx0,stx1,stx2,stx3,stx4) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4)
#define IP2_LANGUAGE_BLOCK_EVAL6(stx0,stx1,stx2,stx3,stx4,stx5) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5)
#define IP2_LANGUAGE_BLOCK_EVAL7(stx0,stx1,stx2,stx3,stx4,stx5,stx6) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6)
#define IP2_LANGUAGE_BLOCK_EVAL8(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7)
#define IP2_LANGUAGE_BLOCK_EVAL9(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7),PP2_COMPILE(stx8)
#define IP2_LANGUAGE_BLOCK_EVAL10(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7),PP2_COMPILE(stx8),PP2_COMPILE(stx9)
#define IP2_LANGUAGE_BLOCK_EVAL11(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7),PP2_COMPILE(stx8),PP2_COMPILE(stx9),PP2_COMPILE(stx10)
#define IP2_LANGUAGE_BLOCK_EVAL12(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7),PP2_COMPILE(stx8),PP2_COMPILE(stx9),PP2_COMPILE(stx10),PP2_COMPILE(stx11)
#define IP2_LANGUAGE_BLOCK_EVAL13(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7),PP2_COMPILE(stx8),PP2_COMPILE(stx9),PP2_COMPILE(stx10),PP2_COMPILE(stx11),PP2_COMPILE(stx12)
#define IP2_LANGUAGE_BLOCK_EVAL14(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12,stx13) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7),PP2_COMPILE(stx8),PP2_COMPILE(stx9),PP2_COMPILE(stx10),PP2_COMPILE(stx11),PP2_COMPILE(stx12),PP2_COMPILE(stx13)
#define IP2_LANGUAGE_BLOCK_EVAL15(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12,stx13,stx14) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7),PP2_COMPILE(stx8),PP2_COMPILE(stx9),PP2_COMPILE(stx10),PP2_COMPILE(stx11),PP2_COMPILE(stx12),PP2_COMPILE(stx13),PP2_COMPILE(stx14)
#define IP2_LANGUAGE_BLOCK_EVAL16(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12,stx13,stx14,stx15) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7),PP2_COMPILE(stx8),PP2_COMPILE(stx9),PP2_COMPILE(stx10),PP2_COMPILE(stx11),PP2_COMPILE(stx12),PP2_COMPILE(stx13),PP2_COMPILE(stx14),PP2_COMPILE(stx15)
#define IP2_LANGUAGE_BLOCK_EVAL17_OR_MORE(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12,stx13,stx14,stx15,...) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7),PP2_COMPILE(stx8),PP2_COMPILE(stx9),PP2_COMPILE(stx10),PP2_COMPILE(stx11),PP2_COMPILE(stx12),PP2_COMPILE(stx13),PP2_COMPILE(stx14),PP2_COMPILE(stx15),8PP2_LANGUAGE_BLOCK,(__VA_ARGS__)

#define PP2_INSN_8PP2_LANGUAGE_BLOCK(P,r0,r1,r2,stx_tuple,...) (,P##r0,P##r1,P##r2,PP2_LANGUAGE_BLOCK P##stx_tuple,P##__VA_ARGS__)

#endif