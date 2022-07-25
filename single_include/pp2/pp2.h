
// ******************** From: pp2.h
/** @file */
#ifndef PP2_H
#define PP2_H


// ******************** From: block.h
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
#define IP2_LANGUAGE_BLOCK_EVAL_17_OR_MORE(stx0,stx1,stx2,stx3,stx4,stx5,stx6,stx7,stx8,stx9,stx10,stx11,stx12,stx13,stx14,stx15,...) PP2_COMPILE(stx0),PP2_COMPILE(stx1),PP2_COMPILE(stx2),PP2_COMPILE(stx3),PP2_COMPILE(stx4),PP2_COMPILE(stx5),PP2_COMPILE(stx6),PP2_COMPILE(stx7),PP2_COMPILE(stx8),PP2_COMPILE(stx9),PP2_COMPILE(stx10),PP2_COMPILE(stx11),PP2_COMPILE(stx12),PP2_COMPILE(stx13),PP2_COMPILE(stx14),PP2_COMPILE(stx15),8PP2_LANGUAGE_BLOCK,(__VA_ARGS__)

#endif


// ******************** From: vm.h
/** @file */
#ifndef IP2_MACHINE_VM_H
#define IP2_MACHINE_VM_H


// ******************** From: context.h
/** @file */
#ifndef PP2_MACHINE_CONTEXT_H
#define PP2_MACHINE_CONTEXT_H


// ******************** From: eat.h
/** @file */
#ifndef PP2_PRIMITIVE_TUPLE_EAT_H
#define PP2_PRIMITIVE_TUPLE_EAT_H

/**
* Substitutes none of the provided macro arguments into the macro replacment list,
* causing all tokens in those arguments to be erased.
*
* @param ... the token sequence to erase
* @returns a \ref Placemarker token
*/
#define PP2_EAT(...)

#endif

// ******************** From: at.h
/** @file */
#ifndef PP2_PRIMITIVE_TUPLE_AT_H
#define PP2_PRIMITIVE_TUPLE_AT_H

#define PP2_TUPLE_AT_0(P,x0,...) P##x0
#define PP2_TUPLE_AT_1(P,x0,x1,...) P##x1
#define PP2_TUPLE_AT_2(P,x0,x1,x2,...) P##x2
#define PP2_TUPLE_AT_3(P,x0,x1,x2,x3,...) P##x3
#define PP2_TUPLE_AT_4(P,x0,x1,x2,x3,x4,...) P##x4
#define PP2_TUPLE_AT_5(P,x0,x1,x2,x3,x4,x5,...) P##x5
#define PP2_TUPLE_AT_6(P,x0,x1,x2,x3,x4,x5,x6,...) P##x6
#define PP2_TUPLE_AT_7(P,x0,x1,x2,x3,x4,x5,x6,x7,...) P##x7
#define PP2_TUPLE_AT_8(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,...) P##x8
#define PP2_TUPLE_AT_9(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,...) P##x9
#define PP2_TUPLE_AT_10(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,...) P##x10
#define PP2_TUPLE_AT_11(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,...) P##x11
#define PP2_TUPLE_AT_12(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,...) P##x12
#define PP2_TUPLE_AT_13(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,...) P##x13
#define PP2_TUPLE_AT_14(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,...) P##x14
#define PP2_TUPLE_AT_15(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,...) P##x15
#define PP2_TUPLE_AT_16(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,...) P##x16
#define PP2_TUPLE_AT_17(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,...) P##x17
#define PP2_TUPLE_AT_18(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,...) P##x18
#define PP2_TUPLE_AT_19(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,...) P##x19
#define PP2_TUPLE_AT_20(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,...) P##x20
#define PP2_TUPLE_AT_21(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,...) P##x21
#define PP2_TUPLE_AT_22(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,...) P##x22
#define PP2_TUPLE_AT_23(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,...) P##x23
#define PP2_TUPLE_AT_24(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,...) P##x24
#define PP2_TUPLE_AT_25(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,...) P##x25
#define PP2_TUPLE_AT_26(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,...) P##x26
#define PP2_TUPLE_AT_27(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,...) P##x27
#define PP2_TUPLE_AT_28(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,...) P##x28
#define PP2_TUPLE_AT_29(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,...) P##x29
#define PP2_TUPLE_AT_30(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,...) P##x30
#define PP2_TUPLE_AT_31(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,...) P##x31
#define PP2_TUPLE_AT_32(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,...) P##x32
#define PP2_TUPLE_AT_33(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,...) P##x33
#define PP2_TUPLE_AT_34(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,...) P##x34
#define PP2_TUPLE_AT_35(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,...) P##x35
#define PP2_TUPLE_AT_36(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,...) P##x36
#define PP2_TUPLE_AT_37(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,...) P##x37
#define PP2_TUPLE_AT_38(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,...) P##x38
#define PP2_TUPLE_AT_39(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,...) P##x39
#define PP2_TUPLE_AT_40(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,...) P##x40
#define PP2_TUPLE_AT_41(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,...) P##x41
#define PP2_TUPLE_AT_42(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,...) P##x42
#define PP2_TUPLE_AT_43(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,...) P##x43
#define PP2_TUPLE_AT_44(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,...) P##x44
#define PP2_TUPLE_AT_45(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,...) P##x45
#define PP2_TUPLE_AT_46(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,...) P##x46
#define PP2_TUPLE_AT_47(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,...) P##x47
#define PP2_TUPLE_AT_48(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,...) P##x48
#define PP2_TUPLE_AT_49(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,...) P##x49
#define PP2_TUPLE_AT_50(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,...) P##x50
#define PP2_TUPLE_AT_51(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,...) P##x51
#define PP2_TUPLE_AT_52(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,...) P##x52
#define PP2_TUPLE_AT_53(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,...) P##x53
#define PP2_TUPLE_AT_54(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,...) P##x54
#define PP2_TUPLE_AT_55(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,...) P##x55
#define PP2_TUPLE_AT_56(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,...) P##x56
#define PP2_TUPLE_AT_57(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,...) P##x57
#define PP2_TUPLE_AT_58(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,...) P##x58
#define PP2_TUPLE_AT_59(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,...) P##x59
#define PP2_TUPLE_AT_60(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,...) P##x60
#define PP2_TUPLE_AT_61(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,...) P##x61
#define PP2_TUPLE_AT_62(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,...) P##x62
#define PP2_TUPLE_AT_63(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,...) P##x63
#define PP2_TUPLE_AT_64(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,...) P##x64
#define PP2_TUPLE_AT_65(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,...) P##x65
#define PP2_TUPLE_AT_66(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,...) P##x66
#define PP2_TUPLE_AT_67(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,...) P##x67
#define PP2_TUPLE_AT_68(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,...) P##x68
#define PP2_TUPLE_AT_69(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,...) P##x69
#define PP2_TUPLE_AT_70(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,...) P##x70
#define PP2_TUPLE_AT_71(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,...) P##x71
#define PP2_TUPLE_AT_72(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,...) P##x72
#define PP2_TUPLE_AT_73(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,...) P##x73
#define PP2_TUPLE_AT_74(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,...) P##x74
#define PP2_TUPLE_AT_75(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,...) P##x75
#define PP2_TUPLE_AT_76(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,...) P##x76
#define PP2_TUPLE_AT_77(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,...) P##x77
#define PP2_TUPLE_AT_78(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,...) P##x78
#define PP2_TUPLE_AT_79(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,...) P##x79
#define PP2_TUPLE_AT_80(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,...) P##x80
#define PP2_TUPLE_AT_81(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,...) P##x81
#define PP2_TUPLE_AT_82(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,...) P##x82
#define PP2_TUPLE_AT_83(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,...) P##x83
#define PP2_TUPLE_AT_84(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,...) P##x84
#define PP2_TUPLE_AT_85(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,...) P##x85
#define PP2_TUPLE_AT_86(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,...) P##x86
#define PP2_TUPLE_AT_87(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,...) P##x87
#define PP2_TUPLE_AT_88(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,...) P##x88
#define PP2_TUPLE_AT_89(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,...) P##x89
#define PP2_TUPLE_AT_90(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,...) P##x90
#define PP2_TUPLE_AT_91(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,...) P##x91
#define PP2_TUPLE_AT_92(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,...) P##x92
#define PP2_TUPLE_AT_93(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,...) P##x93
#define PP2_TUPLE_AT_94(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,...) P##x94
#define PP2_TUPLE_AT_95(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,...) P##x95      
#define PP2_TUPLE_AT_96(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,...) P##x96  
#define PP2_TUPLE_AT_97(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,...) P##x97
#define PP2_TUPLE_AT_98(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,...) P##x98
#define PP2_TUPLE_AT_99(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,...) P##x99

#endif

// ******************** From: open.h
/** @file */
#ifndef PP2_PRIMITIVE_TUPLE_OPEN_H
#define PP2_PRIMITIVE_TUPLE_OPEN_H

/**
* Removes the parentheses surrounding the provided macro arguments, and substitutes the tokens contained
* between those parentheses into the macro replacement list without changing them.
*
* See \link PP2_SCAN \endlink for a comparison between these two macros.
*
* @param ... the token sequence to have the outermost parentheses stripped from
*/
#define PP2_OPEN(...) __VA_ARGS__

/**
* @param P
* @param ...
*/
#define PP2_QUOTE_OPEN(P,...) P##__VA_ARGS__

#endif

/**
*
*/
#define PP2_DEFAULT_LOCAL_CTX \
        (, \
         /*stack=*/(), \
         /*labels=*/, \
         /*arguments=*/, \
         /*registers=*/(), \
        )

#define PP2_LOCAL_CTX_GET_STACK PP2_TUPLE_AT_0
#define PP2_LOCAL_CTX_GET_LABELS PP2_TUPLE_AT_1
#define PP2_LOCAL_CTX_GET_ARGUMENTS PP2_TUPLE_AT_2
#define PP2_LOCAL_CTX_GET_REGISTERS PP2_TUPLE_AT_3

#define PP2_LOCAL_CTX_SET_STACK(ctx,v) IP2_LOCAL_CTX_SET_STACK ctx,v)
#define IP2_LOCAL_CTX_SET_STACK(P,...) IP2_LOCAL_CTX_SET_STACK_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_SET_STACK_I(P,stack,labels,arguments,registers,_,v) (,P##v,P##labels,P##arguments,P##registers,)

#define PP2_LOCAL_CTX_SET_LABELS(ctx,v) IP2_LOCAL_CTX_SET_LABELS ctx,v)
#define IP2_LOCAL_CTX_SET_LABELS(P,...) IP2_LOCAL_CTX_SET_LABELS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_SET_LABELS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##v,P##arguments,P##registers,)

#define PP2_LOCAL_CTX_SET_ARGUMENTS(ctx,v) IP2_LOCAL_CTX_SET_ARGUMENTS ctx,v)
#define IP2_LOCAL_CTX_SET_ARGUMENTS(P,...) IP2_LOCAL_CTX_SET_ARGUMENTS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_SET_ARGUMENTS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##v,P##registers,)

#define PP2_LOCAL_CTX_SET_REGISTERS(ctx,v) IP2_LOCAL_CTX_SET_REGISTERS ctx,v)
#define IP2_LOCAL_CTX_SET_REGISTERS(P,...) IP2_LOCAL_CTX_SET_REGISTERS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_SET_REGISTERS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##arguments,P##v,)


#define PP2_LOCAL_CTX_GET_ARGUMENTS_HEAD(P,stack,labels,arguments,registers,_) PP2_SEQ_HEAD(P##arguments)

#define PP2_LOCAL_CTX_PUSH_ARGUMENT(ctx,v) IP2_LOCAL_CTX_PUSH_ARGUMENT ctx,v)
#define IP2_LOCAL_CTX_PUSH_ARGUMENT(P,... ) IP2_LOCAL_CTX_PUSH_ARGUMENT_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PUSH_ARGUMENT_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##arguments(P##v),P##registers,)

#define PP2_LOCAL_CTX_PUSH_ARGUMENTS(ctx,v) IP2_LOCAL_CTX_PUSH_ARGUMENTS ctx,v)
#define IP2_LOCAL_CTX_PUSH_ARGUMENTS(P,... ) IP2_LOCAL_CTX_PUSH_ARGUMENTS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PUSH_ARGUMENTS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##arguments P##v,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_PUSH_ARGUMENTS(P,r0,r1,r2,v,...) (,P##r0,PP2_LOCAL_CTX_PUSH_ARGUMENTS(P##r1,P##v),P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_POP_ARGUMENT(P,stack,labels,arguments,registers,_) (,P##stack,P##labels,PP2_EAT P##arguments,P##registers,)

#define PP2_LOCAL_CTX_CLEAR_ARGUMENTS(P,stack,labels,arguments,registers,_) (,P##stack,P##labels,/*arguments=*/,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_CLEAR_ARGUMENTS(P,r0,r1,r2,...) (,P##r0,PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2,P##__VA_ARGS__)

/**
*
*/
#define PP2_DEFAULT_VM_STATE \
        (, \
         /*heap=*/, \
         /*eh_stack=*/, \
        )


#define IP2_VM_STATE_SET(idx,val,P,...) PP2_TUPLE_REPLACE_##idx(,P##val,P##__VA_ARGS__)

#endif


// ******************** From: lparen.h
/** @file */
#ifndef PP2_PRIMITIVE_PUNCTUATION_LPAREN_H
#define PP2_PRIMITIVE_PUNCTUATION_LPAREN_H

/**
*/
#define PP2_LPAREN (

#endif

/**
* The \c PP2_VM macro invokes the PP2 virtual machine, executing the instruction specified by \a insn 
* with the VM registers initialized to the contents of \a acc, \a stack, and \a heap.
*
* @param r0 the contents of the VM accumulator register
* @param r1 the contents of the VM local context register
* @param r2 the contents of the VM global context register
* @param insn the name of the first instruction to be executed by the VM
* @param ... the arguments to the first instruction, and all remaining instructions and instruction arguments to be executed
*
* @returns the \ref Sequence of tokens emitted during execution
*/
#define PP2_VM(r0,r1,r2,insn,...) IP2_VM_SCAN(PP2_EAT PP2_LPAREN IP2_VM_EXECUTE_UP_0(,r0,r1,r2,insn,__VA_ARGS__))

#define IP2_VM_SCAN(...) __VA_ARGS__

#define IP2_VM_EXECUTE_UP_0(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_UP_1 (IP2_VM_DECODE_DN_0 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_1(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_UP_2 (IP2_VM_DECODE_DN_1 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_2(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_UP_3 (IP2_VM_DECODE_DN_2 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_3(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_UP_4 (IP2_VM_DECODE_DN_3 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_4(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_UP_5 (IP2_VM_DECODE_DN_4 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_5(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_UP_6 (IP2_VM_DECODE_DN_5 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_6(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_UP_7 (IP2_VM_DECODE_DN_6 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_7(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_UP_8 (IP2_VM_DECODE_DN_7 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_8(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_UP_9 (IP2_VM_DECODE_DN_8 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_9(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_UP_10(IP2_VM_DECODE_DN_9 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_10(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_11(IP2_VM_DECODE_DN_10(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_11(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_12(IP2_VM_DECODE_DN_11(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_12(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_13(IP2_VM_DECODE_DN_12(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_13(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_14(IP2_VM_DECODE_DN_13(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_14(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_15(IP2_VM_DECODE_DN_14(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_15(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_16(IP2_VM_DECODE_DN_15(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_16(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_17(IP2_VM_DECODE_DN_16(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_17(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_18(IP2_VM_DECODE_DN_17(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_18(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_19(IP2_VM_DECODE_DN_18(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_19(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_20(IP2_VM_DECODE_DN_19(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_20(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_21(IP2_VM_DECODE_DN_20(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_21(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_22(IP2_VM_DECODE_DN_21(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_22(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_23(IP2_VM_DECODE_DN_22(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_23(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_24(IP2_VM_DECODE_DN_23(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_24(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_25(IP2_VM_DECODE_DN_24(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_25(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_26(IP2_VM_DECODE_DN_25(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_26(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_27(IP2_VM_DECODE_DN_26(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_27(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_28(IP2_VM_DECODE_DN_27(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_28(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_29(IP2_VM_DECODE_DN_28(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_29(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_30(IP2_VM_DECODE_DN_29(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_30(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_31(IP2_VM_DECODE_DN_30(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_31(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_32(IP2_VM_DECODE_DN_31(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_32(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_33(IP2_VM_DECODE_DN_32(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_33(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_34(IP2_VM_DECODE_DN_33(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_34(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_35(IP2_VM_DECODE_DN_34(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_35(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_36(IP2_VM_DECODE_DN_35(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_36(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_37(IP2_VM_DECODE_DN_36(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_37(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_38(IP2_VM_DECODE_DN_37(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_38(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_39(IP2_VM_DECODE_DN_38(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_39(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_40(IP2_VM_DECODE_DN_39(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_40(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_41(IP2_VM_DECODE_DN_40(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_41(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_42(IP2_VM_DECODE_DN_41(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_42(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_43(IP2_VM_DECODE_DN_42(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_43(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_44(IP2_VM_DECODE_DN_43(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_44(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_45(IP2_VM_DECODE_DN_44(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_45(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_46(IP2_VM_DECODE_DN_45(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_46(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_47(IP2_VM_DECODE_DN_46(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_47(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_48(IP2_VM_DECODE_DN_47(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_48(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_49(IP2_VM_DECODE_DN_48(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_49(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_50(IP2_VM_DECODE_DN_49(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_50(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_51(IP2_VM_DECODE_DN_50(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_51(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_52(IP2_VM_DECODE_DN_51(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_52(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_53(IP2_VM_DECODE_DN_52(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_53(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_54(IP2_VM_DECODE_DN_53(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_54(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_55(IP2_VM_DECODE_DN_54(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_55(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_56(IP2_VM_DECODE_DN_55(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_56(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_57(IP2_VM_DECODE_DN_56(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_57(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_58(IP2_VM_DECODE_DN_57(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_58(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_59(IP2_VM_DECODE_DN_58(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_59(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_60(IP2_VM_DECODE_DN_59(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_60(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_61(IP2_VM_DECODE_DN_60(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_61(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_62(IP2_VM_DECODE_DN_61(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_62(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_63(IP2_VM_DECODE_DN_62(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_UP_63(P,r0,r1,r2,insn,...) IP2_VM_DECODE_UP_64(IP2_VM_DECODE_DN_63(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))

#define IP2_VM_EXECUTE_DN_0(P,r0,r1,r2,insn,...)  PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)
#define IP2_VM_EXECUTE_DN_1(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_DN_0 (IP2_VM_DECODE_DN_0 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_2(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_DN_1 (IP2_VM_DECODE_DN_1 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_3(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_DN_2 (IP2_VM_DECODE_DN_2 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_4(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_DN_3 (IP2_VM_DECODE_DN_3 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_5(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_DN_4 (IP2_VM_DECODE_DN_4 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_6(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_DN_5 (IP2_VM_DECODE_DN_5 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_7(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_DN_6 (IP2_VM_DECODE_DN_6 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_8(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_DN_7 (IP2_VM_DECODE_DN_7 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_9(P,r0,r1,r2,insn,...)  IP2_VM_DECODE_DN_8 (IP2_VM_DECODE_DN_8 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_10(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_9 (IP2_VM_DECODE_DN_9 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_11(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_10(IP2_VM_DECODE_DN_10(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_12(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_11(IP2_VM_DECODE_DN_11(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_13(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_12(IP2_VM_DECODE_DN_12(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_14(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_13(IP2_VM_DECODE_DN_13(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_15(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_14(IP2_VM_DECODE_DN_14(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_16(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_15(IP2_VM_DECODE_DN_15(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_17(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_16(IP2_VM_DECODE_DN_16(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_18(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_17(IP2_VM_DECODE_DN_17(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_19(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_18(IP2_VM_DECODE_DN_18(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_20(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_19(IP2_VM_DECODE_DN_19(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_21(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_20(IP2_VM_DECODE_DN_20(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_22(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_21(IP2_VM_DECODE_DN_21(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_23(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_22(IP2_VM_DECODE_DN_22(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_24(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_23(IP2_VM_DECODE_DN_23(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_25(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_24(IP2_VM_DECODE_DN_24(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_26(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_25(IP2_VM_DECODE_DN_25(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_27(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_26(IP2_VM_DECODE_DN_26(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_28(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_27(IP2_VM_DECODE_DN_27(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_29(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_28(IP2_VM_DECODE_DN_28(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_30(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_29(IP2_VM_DECODE_DN_29(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_31(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_30(IP2_VM_DECODE_DN_30(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_32(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_31(IP2_VM_DECODE_DN_31(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_33(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_32(IP2_VM_DECODE_DN_32(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_34(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_33(IP2_VM_DECODE_DN_33(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_35(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_34(IP2_VM_DECODE_DN_34(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_36(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_35(IP2_VM_DECODE_DN_35(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_37(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_36(IP2_VM_DECODE_DN_36(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_38(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_37(IP2_VM_DECODE_DN_37(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_39(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_38(IP2_VM_DECODE_DN_38(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_40(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_39(IP2_VM_DECODE_DN_39(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_41(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_40(IP2_VM_DECODE_DN_40(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_42(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_41(IP2_VM_DECODE_DN_41(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_43(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_42(IP2_VM_DECODE_DN_42(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_44(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_43(IP2_VM_DECODE_DN_43(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_45(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_44(IP2_VM_DECODE_DN_44(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_46(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_45(IP2_VM_DECODE_DN_45(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_47(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_46(IP2_VM_DECODE_DN_46(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_48(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_47(IP2_VM_DECODE_DN_47(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_49(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_48(IP2_VM_DECODE_DN_48(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_50(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_49(IP2_VM_DECODE_DN_49(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_51(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_50(IP2_VM_DECODE_DN_50(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_52(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_51(IP2_VM_DECODE_DN_51(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_53(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_52(IP2_VM_DECODE_DN_52(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_54(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_53(IP2_VM_DECODE_DN_53(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_55(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_54(IP2_VM_DECODE_DN_54(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_56(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_55(IP2_VM_DECODE_DN_55(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_57(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_56(IP2_VM_DECODE_DN_56(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_58(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_57(IP2_VM_DECODE_DN_57(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_59(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_58(IP2_VM_DECODE_DN_58(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_60(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_59(IP2_VM_DECODE_DN_59(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_61(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_60(IP2_VM_DECODE_DN_60(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_62(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_61(IP2_VM_DECODE_DN_61(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_VM_EXECUTE_DN_63(P,r0,r1,r2,insn,...) IP2_VM_DECODE_DN_62(IP2_VM_DECODE_DN_62(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))

#define IP2_VM_DECODE_UP_1(c)  IP2_VM_EXECUTE_UP_1 c
#define IP2_VM_DECODE_UP_2(c)  IP2_VM_EXECUTE_UP_2 c
#define IP2_VM_DECODE_UP_3(c)  IP2_VM_EXECUTE_UP_3 c
#define IP2_VM_DECODE_UP_4(c)  IP2_VM_EXECUTE_UP_4 c
#define IP2_VM_DECODE_UP_5(c)  IP2_VM_EXECUTE_UP_5 c
#define IP2_VM_DECODE_UP_6(c)  IP2_VM_EXECUTE_UP_6 c
#define IP2_VM_DECODE_UP_7(c)  IP2_VM_EXECUTE_UP_7 c
#define IP2_VM_DECODE_UP_8(c)  IP2_VM_EXECUTE_UP_8 c
#define IP2_VM_DECODE_UP_9(c)  IP2_VM_EXECUTE_UP_9 c
#define IP2_VM_DECODE_UP_10(c) IP2_VM_EXECUTE_UP_10 c
#define IP2_VM_DECODE_UP_11(c) IP2_VM_EXECUTE_UP_11 c
#define IP2_VM_DECODE_UP_12(c) IP2_VM_EXECUTE_UP_12 c
#define IP2_VM_DECODE_UP_13(c) IP2_VM_EXECUTE_UP_13 c
#define IP2_VM_DECODE_UP_14(c) IP2_VM_EXECUTE_UP_14 c
#define IP2_VM_DECODE_UP_15(c) IP2_VM_EXECUTE_UP_15 c
#define IP2_VM_DECODE_UP_16(c) IP2_VM_EXECUTE_UP_16 c
#define IP2_VM_DECODE_UP_17(c) IP2_VM_EXECUTE_UP_17 c
#define IP2_VM_DECODE_UP_18(c) IP2_VM_EXECUTE_UP_18 c
#define IP2_VM_DECODE_UP_19(c) IP2_VM_EXECUTE_UP_19 c
#define IP2_VM_DECODE_UP_20(c) IP2_VM_EXECUTE_UP_20 c
#define IP2_VM_DECODE_UP_21(c) IP2_VM_EXECUTE_UP_21 c
#define IP2_VM_DECODE_UP_22(c) IP2_VM_EXECUTE_UP_22 c
#define IP2_VM_DECODE_UP_23(c) IP2_VM_EXECUTE_UP_23 c
#define IP2_VM_DECODE_UP_24(c) IP2_VM_EXECUTE_UP_24 c
#define IP2_VM_DECODE_UP_25(c) IP2_VM_EXECUTE_UP_25 c
#define IP2_VM_DECODE_UP_26(c) IP2_VM_EXECUTE_UP_26 c
#define IP2_VM_DECODE_UP_27(c) IP2_VM_EXECUTE_UP_27 c
#define IP2_VM_DECODE_UP_28(c) IP2_VM_EXECUTE_UP_28 c
#define IP2_VM_DECODE_UP_29(c) IP2_VM_EXECUTE_UP_29 c
#define IP2_VM_DECODE_UP_30(c) IP2_VM_EXECUTE_UP_30 c
#define IP2_VM_DECODE_UP_31(c) IP2_VM_EXECUTE_UP_31 c
#define IP2_VM_DECODE_UP_32(c) IP2_VM_EXECUTE_UP_32 c
#define IP2_VM_DECODE_UP_33(c) IP2_VM_EXECUTE_UP_33 c
#define IP2_VM_DECODE_UP_34(c) IP2_VM_EXECUTE_UP_34 c
#define IP2_VM_DECODE_UP_35(c) IP2_VM_EXECUTE_UP_35 c
#define IP2_VM_DECODE_UP_36(c) IP2_VM_EXECUTE_UP_36 c
#define IP2_VM_DECODE_UP_37(c) IP2_VM_EXECUTE_UP_37 c
#define IP2_VM_DECODE_UP_38(c) IP2_VM_EXECUTE_UP_38 c
#define IP2_VM_DECODE_UP_39(c) IP2_VM_EXECUTE_UP_39 c
#define IP2_VM_DECODE_UP_40(c) IP2_VM_EXECUTE_UP_40 c
#define IP2_VM_DECODE_UP_41(c) IP2_VM_EXECUTE_UP_41 c
#define IP2_VM_DECODE_UP_42(c) IP2_VM_EXECUTE_UP_42 c
#define IP2_VM_DECODE_UP_43(c) IP2_VM_EXECUTE_UP_43 c
#define IP2_VM_DECODE_UP_44(c) IP2_VM_EXECUTE_UP_44 c
#define IP2_VM_DECODE_UP_45(c) IP2_VM_EXECUTE_UP_45 c
#define IP2_VM_DECODE_UP_46(c) IP2_VM_EXECUTE_UP_46 c
#define IP2_VM_DECODE_UP_47(c) IP2_VM_EXECUTE_UP_47 c
#define IP2_VM_DECODE_UP_48(c) IP2_VM_EXECUTE_UP_48 c
#define IP2_VM_DECODE_UP_49(c) IP2_VM_EXECUTE_UP_49 c
#define IP2_VM_DECODE_UP_50(c) IP2_VM_EXECUTE_UP_50 c
#define IP2_VM_DECODE_UP_51(c) IP2_VM_EXECUTE_UP_51 c
#define IP2_VM_DECODE_UP_52(c) IP2_VM_EXECUTE_UP_52 c
#define IP2_VM_DECODE_UP_53(c) IP2_VM_EXECUTE_UP_53 c
#define IP2_VM_DECODE_UP_54(c) IP2_VM_EXECUTE_UP_54 c
#define IP2_VM_DECODE_UP_55(c) IP2_VM_EXECUTE_UP_55 c
#define IP2_VM_DECODE_UP_56(c) IP2_VM_EXECUTE_UP_56 c
#define IP2_VM_DECODE_UP_57(c) IP2_VM_EXECUTE_UP_57 c
#define IP2_VM_DECODE_UP_58(c) IP2_VM_EXECUTE_UP_58 c
#define IP2_VM_DECODE_UP_59(c) IP2_VM_EXECUTE_UP_59 c
#define IP2_VM_DECODE_UP_60(c) IP2_VM_EXECUTE_UP_60 c
#define IP2_VM_DECODE_UP_61(c) IP2_VM_EXECUTE_UP_61 c
#define IP2_VM_DECODE_UP_62(c) IP2_VM_EXECUTE_UP_62 c
#define IP2_VM_DECODE_UP_63(c) IP2_VM_EXECUTE_UP_63 c
#define IP2_VM_DECODE_UP_64(c) PP2_VM_FAILURE c

#define IP2_VM_DECODE_DN_0(c)  IP2_VM_EXECUTE_DN_0 c
#define IP2_VM_DECODE_DN_1(c)  IP2_VM_EXECUTE_DN_1 c
#define IP2_VM_DECODE_DN_2(c)  IP2_VM_EXECUTE_DN_2 c
#define IP2_VM_DECODE_DN_3(c)  IP2_VM_EXECUTE_DN_3 c
#define IP2_VM_DECODE_DN_4(c)  IP2_VM_EXECUTE_DN_4 c
#define IP2_VM_DECODE_DN_5(c)  IP2_VM_EXECUTE_DN_5 c
#define IP2_VM_DECODE_DN_6(c)  IP2_VM_EXECUTE_DN_6 c
#define IP2_VM_DECODE_DN_7(c)  IP2_VM_EXECUTE_DN_7 c
#define IP2_VM_DECODE_DN_8(c)  IP2_VM_EXECUTE_DN_8 c
#define IP2_VM_DECODE_DN_9(c)  IP2_VM_EXECUTE_DN_9 c
#define IP2_VM_DECODE_DN_10(c) IP2_VM_EXECUTE_DN_10 c
#define IP2_VM_DECODE_DN_11(c) IP2_VM_EXECUTE_DN_11 c
#define IP2_VM_DECODE_DN_12(c) IP2_VM_EXECUTE_DN_12 c
#define IP2_VM_DECODE_DN_13(c) IP2_VM_EXECUTE_DN_13 c
#define IP2_VM_DECODE_DN_14(c) IP2_VM_EXECUTE_DN_14 c
#define IP2_VM_DECODE_DN_15(c) IP2_VM_EXECUTE_DN_15 c
#define IP2_VM_DECODE_DN_16(c) IP2_VM_EXECUTE_DN_16 c
#define IP2_VM_DECODE_DN_17(c) IP2_VM_EXECUTE_DN_17 c
#define IP2_VM_DECODE_DN_18(c) IP2_VM_EXECUTE_DN_18 c
#define IP2_VM_DECODE_DN_19(c) IP2_VM_EXECUTE_DN_19 c
#define IP2_VM_DECODE_DN_20(c) IP2_VM_EXECUTE_DN_20 c
#define IP2_VM_DECODE_DN_21(c) IP2_VM_EXECUTE_DN_21 c
#define IP2_VM_DECODE_DN_22(c) IP2_VM_EXECUTE_DN_22 c
#define IP2_VM_DECODE_DN_23(c) IP2_VM_EXECUTE_DN_23 c
#define IP2_VM_DECODE_DN_24(c) IP2_VM_EXECUTE_DN_24 c
#define IP2_VM_DECODE_DN_25(c) IP2_VM_EXECUTE_DN_25 c
#define IP2_VM_DECODE_DN_26(c) IP2_VM_EXECUTE_DN_26 c
#define IP2_VM_DECODE_DN_27(c) IP2_VM_EXECUTE_DN_27 c
#define IP2_VM_DECODE_DN_28(c) IP2_VM_EXECUTE_DN_28 c
#define IP2_VM_DECODE_DN_29(c) IP2_VM_EXECUTE_DN_29 c
#define IP2_VM_DECODE_DN_30(c) IP2_VM_EXECUTE_DN_30 c
#define IP2_VM_DECODE_DN_31(c) IP2_VM_EXECUTE_DN_31 c
#define IP2_VM_DECODE_DN_32(c) IP2_VM_EXECUTE_DN_32 c
#define IP2_VM_DECODE_DN_33(c) IP2_VM_EXECUTE_DN_33 c
#define IP2_VM_DECODE_DN_34(c) IP2_VM_EXECUTE_DN_34 c
#define IP2_VM_DECODE_DN_35(c) IP2_VM_EXECUTE_DN_35 c
#define IP2_VM_DECODE_DN_36(c) IP2_VM_EXECUTE_DN_36 c
#define IP2_VM_DECODE_DN_37(c) IP2_VM_EXECUTE_DN_37 c
#define IP2_VM_DECODE_DN_38(c) IP2_VM_EXECUTE_DN_38 c
#define IP2_VM_DECODE_DN_39(c) IP2_VM_EXECUTE_DN_39 c
#define IP2_VM_DECODE_DN_40(c) IP2_VM_EXECUTE_DN_40 c
#define IP2_VM_DECODE_DN_41(c) IP2_VM_EXECUTE_DN_41 c
#define IP2_VM_DECODE_DN_42(c) IP2_VM_EXECUTE_DN_42 c
#define IP2_VM_DECODE_DN_43(c) IP2_VM_EXECUTE_DN_43 c
#define IP2_VM_DECODE_DN_44(c) IP2_VM_EXECUTE_DN_44 c
#define IP2_VM_DECODE_DN_45(c) IP2_VM_EXECUTE_DN_45 c
#define IP2_VM_DECODE_DN_46(c) IP2_VM_EXECUTE_DN_46 c
#define IP2_VM_DECODE_DN_47(c) IP2_VM_EXECUTE_DN_47 c
#define IP2_VM_DECODE_DN_48(c) IP2_VM_EXECUTE_DN_48 c
#define IP2_VM_DECODE_DN_49(c) IP2_VM_EXECUTE_DN_49 c
#define IP2_VM_DECODE_DN_50(c) IP2_VM_EXECUTE_DN_50 c
#define IP2_VM_DECODE_DN_51(c) IP2_VM_EXECUTE_DN_51 c
#define IP2_VM_DECODE_DN_52(c) IP2_VM_EXECUTE_DN_52 c
#define IP2_VM_DECODE_DN_53(c) IP2_VM_EXECUTE_DN_53 c
#define IP2_VM_DECODE_DN_54(c) IP2_VM_EXECUTE_DN_54 c
#define IP2_VM_DECODE_DN_55(c) IP2_VM_EXECUTE_DN_55 c
#define IP2_VM_DECODE_DN_56(c) IP2_VM_EXECUTE_DN_56 c
#define IP2_VM_DECODE_DN_57(c) IP2_VM_EXECUTE_DN_57 c
#define IP2_VM_DECODE_DN_58(c) IP2_VM_EXECUTE_DN_58 c
#define IP2_VM_DECODE_DN_59(c) IP2_VM_EXECUTE_DN_59 c
#define IP2_VM_DECODE_DN_60(c) IP2_VM_EXECUTE_DN_60 c
#define IP2_VM_DECODE_DN_61(c) IP2_VM_EXECUTE_DN_61 c
#define IP2_VM_DECODE_DN_62(c) IP2_VM_EXECUTE_DN_62 c
#define IP2_VM_DECODE_DN_63(c) IP2_VM_EXECUTE_DN_63 c

#define PP2_VM_FAILURE()

#endif

// ******************** From: output.h
/** @file */

#ifndef PP2_MACHINE_OUTPUT_H
#define PP2_MACHINE_OUTPUT_H



// ******************** From: invoke.h
/** @file */
#ifndef PP2_PRIMITIVE_BASIC_INVOKE_H
#define PP2_PRIMITIVE_BASIC_INVOKE_H


/**
*
*/
#define PP2_FX(f,x) PP2_##f x
/**
*
*/
#define PP2_FY(f,y) PP2_##f y
/**
*
*/
#define PP2_FZ(f,z) PP2_##f z
/**
*
*/
#define PP2_FW(f,w) PP2_##f w


/**
*
*/
#define IP2_FX(f,x) IP2_##f x
/**
*
*/
#define IP2_FY(f,y) IP2_##f y
/**
*
*/
#define IP2_FZ(f,z) IP2_##f z
/**
*
*/
#define IP2_FW(f,w) IP2_##f w


/**
*
*/
#define PP2_INVOKE(K,...) PP2_##K(,__VA_ARGS__

/**
*
*/
#define IP2_INVOKE(K,...) IP2_##K(,__VA_ARGS__

#endif

// ******************** From: rparen.h
/** @file */
#ifndef PP2_PRIMITIVE_PUNCTUATION_RPAREN_H
#define PP2_PRIMITIVE_PUNCTUATION_RPAREN_H

/**
*/
#define PP2_RPAREN )

#endif

/**
*
*/
#define PP2_VM_OUTPUT(s) \
        IP2_VM_OUTPUT_SCAN( \
            IP2_FX(VM_OUTPUT_EMIT_UP, \
                   PP2_VM(/*r0=*/s(8HALT,),/*r1=*/,/*r2=*/,8PP2_VM_OUTPUT,)(,8HALT,)) \
            PP2_RPAREN \
        )

#define IP2_VM_OUTPUT_SCAN(...) __VA_ARGS__
#define IP2_VM_OUTPUT_SPLIT_HEAD(P,...) P,(P,__VA_ARGS__),

#define PP2_INSN_8PP2_VM_OUTPUT(P,r0,r1,r2,...) IP2_FX(VM_OUTPUT_I, (,IP2_VM_OUTPUT_SPLIT_HEAD P##r0,P##r1,P##r2,P##__VA_ARGS__))


#define IP2_VM_OUTPUT_I(P,r0_prefix,r0_head,r0_tail,r1,r2,...) IP2_VM_OUTPUT_I_##r0_prefix(,P##r0_head,P##r0_tail,P##r1,P##r2,P##__VA_ARGS__)
#define IP2_VM_OUTPUT_I_(P,r0_head,r0_tail,r1,r2,...) (,P##r0_tail,P##r0_head P##r1,P##r2,8PP2_VM_OUTPUT,P##__VA_ARGS__)
#define IP2_VM_OUTPUT_I_8HALT(P,r0_head,r0_tail,r1,r2,...) )P##r1


#define IP2_VM_OUTPUT_EMIT_UP(P,type,...)   IP2_VM_OUTPUT_EMIT_##type(,__VA_ARGS__##P) IP2_VM_OUTPUT_EMIT_DOWN
#define IP2_VM_OUTPUT_EMIT_DOWN(P,type,...) IP2_VM_OUTPUT_EMIT_##type(,__VA_ARGS__##P) IP2_VM_OUTPUT_EMIT_UP

#define IP2_VM_OUTPUT_EMIT_8HALT           PP2_EAT PP2_LPAREN
#define IP2_VM_OUTPUT_EMIT_8LITERAL(P,...) P##__VA_ARGS__
#define IP2_VM_OUTPUT_EMIT_8COMMA(P,...)   ,P##__VA_ARGS__
#define IP2_VM_OUTPUT_EMIT_8LPAREN(P,...)  (P##__VA_ARGS__
#define IP2_VM_OUTPUT_EMIT_8RPAREN(P,...)  )P##__VA_ARGS__

#endif

// ******************** From: terminate.h
/** @file */
#ifndef PP2_MACHINE_INSNS_TERMINATE_H
#define PP2_MACHINE_INSNS_TERMINATE_H

/**
*
*/
#define PP2_INSN_8PP2_TERMINATE(P,r0,r1,r2,...) )

#define PP2_INSN_8PP2_DEBUG_TERMINATE(P,r0_,r1_,r2_,...) )(r0=P##r0_, r1=P##r1_, r2=P##r2_, ...=[P##__VA_ARGS__])

#endif

/**
*
*/
#define PP2(...) \
        PP2_VM_OUTPUT( \
                      PP2_VM( \
                             /*r0=*/, \
                             /*r1=*/PP2_DEFAULT_LOCAL_CTX, \
                             /*r2=*/PP2_DEFAULT_VM_STATE, \
                             /*insn=*/ \
                                PP2_LANGUAGE_BLOCK(__VA_ARGS__), \
                                8PP2_TERMINATE,\
                      ) \
        )

#endif
