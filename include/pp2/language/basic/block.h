/** @file */
#ifndef PP2_LANGUAGE_BASIC_BLOCK_H
#define PP2_LANGUAGE_BASIC_BLOCK_H

#define PP2_LANGUAGE_BLOCK(...)                \
        IP2_LANGUAGE_BLOCK_OVERLOAD(           \
            __VA_ARGS__,                       \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL16,   \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL15,   \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL14,   \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL13,   \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL12,   \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL11,   \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL10,   \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL9,    \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL8,    \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL7,    \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL6,    \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL5,    \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL4,    \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL3,    \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL2,    \
            IP2_LANGUAGE_BLOCK_COMMA_EVAL1,    \
        )(__VA_ARGS__)

#define PP2_INSN_8PP2_LANGUAGE_BLOCK(P,r0,r1,r2,stx_tuple,...) (,P##r0,P##r1,P##r2,PP2_LANGUAGE_BLOCK P##stx_tuple,P##__VA_ARGS__)


#define IP2_LANGUAGE_BLOCK_OVERLOAD(x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,m,...) IP2_LANGUAGE_BLOCK_OVERLOAD_I(,m,IP2_LANGUAGE_BLOCK_EVAL_17_OR_MORE)
#define IP2_LANGUAGE_BLOCK_OVERLOAD_I(P,x0,x1,...) P##x1

#define IP2_LANGUAGE_BLOCK_COMMA_EVAL1 ,IP2_LANGUAGE_BLOCK_EVAL1
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL2 ,IP2_LANGUAGE_BLOCK_EVAL2
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL3 ,IP2_LANGUAGE_BLOCK_EVAL3
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL4 ,IP2_LANGUAGE_BLOCK_EVAL4
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL5 ,IP2_LANGUAGE_BLOCK_EVAL5
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL6 ,IP2_LANGUAGE_BLOCK_EVAL6
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL7 ,IP2_LANGUAGE_BLOCK_EVAL7
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL8 ,IP2_LANGUAGE_BLOCK_EVAL8
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL9 ,IP2_LANGUAGE_BLOCK_EVAL9
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL10 ,IP2_LANGUAGE_BLOCK_EVAL10
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL11 ,IP2_LANGUAGE_BLOCK_EVAL11
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL12 ,IP2_LANGUAGE_BLOCK_EVAL12
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL13 ,IP2_LANGUAGE_BLOCK_EVAL13
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL14 ,IP2_LANGUAGE_BLOCK_EVAL14
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL15 ,IP2_LANGUAGE_BLOCK_EVAL15
#define IP2_LANGUAGE_BLOCK_COMMA_EVAL16 ,IP2_LANGUAGE_BLOCK_EVAL16

#define IP2_LANGUAGE_BLOCK_EVAL1(stx0) PP2_DEF_##stx0
#define IP2_LANGUAGE_BLOCK_EVAL2(stx0,stx1) PP2_DEF_##stx0,PP2_DEF_##stx1
#define IP2_LANGUAGE_BLOCK_EVAL3(stx0,stx1,stx2) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2
#define IP2_LANGUAGE_BLOCK_EVAL4(stx0,stx1,stx2,stx3) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3
#define IP2_LANGUAGE_BLOCK_EVAL5(stx0,stx1,stx2,stx3,stx4) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4
#define IP2_LANGUAGE_BLOCK_EVAL6(stx0,stx1,stx2,stx3,stx4,stx5) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5
#define IP2_LANGUAGE_BLOCK_EVAL7(stx0,stx1,stx2,stx3,stx4,stx5,stx6) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6
#define IP2_LANGUAGE_BLOCK_EVAL8(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6,PP2_DEF_##stx7
#define IP2_LANGUAGE_BLOCK_EVAL9(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6,PP2_DEF_##stx7,PP2_DEF_##stx8     
#define IP2_LANGUAGE_BLOCK_EVAL10(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6,PP2_DEF_##stx7,PP2_DEF_##stx8,PP2_DEF_##stx9
#define IP2_LANGUAGE_BLOCK_EVAL11(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6,PP2_DEF_##stx7,PP2_DEF_##stx8,PP2_DEF_##stx9,PP2_DEF_##stx10
#define IP2_LANGUAGE_BLOCK_EVAL12(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6,PP2_DEF_##stx7,PP2_DEF_##stx8,PP2_DEF_##stx9,PP2_DEF_##stx10,PP2_DEF_##stx11
#define IP2_LANGUAGE_BLOCK_EVAL13(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6,PP2_DEF_##stx7,PP2_DEF_##stx8,PP2_DEF_##stx9,PP2_DEF_##stx10,PP2_DEF_##stx11,PP2_DEF_##stx12
#define IP2_LANGUAGE_BLOCK_EVAL14(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12,stx13) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6,PP2_DEF_##stx7,PP2_DEF_##stx8,PP2_DEF_##stx9,PP2_DEF_##stx10,PP2_DEF_##stx11,PP2_DEF_##stx12,PP2_DEF_##stx13
#define IP2_LANGUAGE_BLOCK_EVAL15(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12,stx13,stx14) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6,PP2_DEF_##stx7,PP2_DEF_##stx8,PP2_DEF_##stx9,PP2_DEF_##stx10,PP2_DEF_##stx11,PP2_DEF_##stx12,PP2_DEF_##stx13,PP2_DEF_##stx14
#define IP2_LANGUAGE_BLOCK_EVAL16(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12,stx13,stx14,stx15) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6,PP2_DEF_##stx7,PP2_DEF_##stx8,PP2_DEF_##stx9,PP2_DEF_##stx10,PP2_DEF_##stx11,PP2_DEF_##stx12,PP2_DEF_##stx13,PP2_DEF_##stx14,PP2_DEF_##stx15
#define IP2_LANGUAGE_BLOCK_EVAL_17_OR_MORE(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12,stx13,stx14,stx15,...) PP2_DEF_##stx0,PP2_DEF_##stx1,PP2_DEF_##stx2,PP2_DEF_##stx3,PP2_DEF_##stx4,PP2_DEF_##stx5,PP2_DEF_##stx6,PP2_DEF_##stx7,PP2_DEF_##stx8,PP2_DEF_##stx9,PP2_DEF_##stx10,PP2_DEF_##stx11,PP2_DEF_##stx12,PP2_DEF_##stx13,PP2_DEF_##stx14,PP2_DEF_##stx15,8PP2_LANGUAGE_BLOCK,(__VA_ARGS__)

#endif