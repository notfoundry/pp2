LIVECODE_HEADER = String.raw`
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


// ******************** From: vm.h
/** @file */
#ifndef IP2_MACHINE_VM_H
#define IP2_MACHINE_VM_H


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

// ******************** From: lparen.h
/** @file */
#ifndef PP2_PRIMITIVE_PUNCTUATION_LPAREN_H
#define PP2_PRIMITIVE_PUNCTUATION_LPAREN_H

/**
*/
#define PP2_LPAREN (

#endif

/**
* The \c PP2_MACHINE macro invokes the PP2 virtual machine, executing the instruction specified by \a insn 
* with the VM registers initialized to the contents of \a acc, \a stack, and \a heap.
*
* @param acc the contents of the VM accumulator register
* @param stack the contents of the VM stack register
* @param heap the contents of the VM heap register
* @param insn the name of the first instruction to be executed by the VM
* @param ... the arguments to the first instruction, and all remaining instructions and instruction arguments to be executed
*
* @returns the \ref Sequence of tokens emitted during execution
*/
#define PP2_MACHINE(r0,r1,r2,insn,...) IP2_MACHINE_SCAN(PP2_EAT PP2_LPAREN IP2_MACHINE_UP_0(,r0,r1,r2,insn,__VA_ARGS__))

#define IP2_MACHINE_SCAN(...) __VA_ARGS__

#define IP2_MACHINE_UP_0(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_UP_1 (IP2_MACHINE_PASS_DN_0 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_1(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_UP_2 (IP2_MACHINE_PASS_DN_1 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_2(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_UP_3 (IP2_MACHINE_PASS_DN_2 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_3(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_UP_4 (IP2_MACHINE_PASS_DN_3 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_4(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_UP_5 (IP2_MACHINE_PASS_DN_4 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_5(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_UP_6 (IP2_MACHINE_PASS_DN_5 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_6(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_UP_7 (IP2_MACHINE_PASS_DN_6 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_7(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_UP_8 (IP2_MACHINE_PASS_DN_7 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_8(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_UP_9 (IP2_MACHINE_PASS_DN_8 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_9(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_UP_10(IP2_MACHINE_PASS_DN_9 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_10(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_11(IP2_MACHINE_PASS_DN_10(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_11(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_12(IP2_MACHINE_PASS_DN_11(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_12(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_13(IP2_MACHINE_PASS_DN_12(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_13(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_14(IP2_MACHINE_PASS_DN_13(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_14(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_15(IP2_MACHINE_PASS_DN_14(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_15(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_16(IP2_MACHINE_PASS_DN_15(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_16(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_17(IP2_MACHINE_PASS_DN_16(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_17(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_18(IP2_MACHINE_PASS_DN_17(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_18(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_19(IP2_MACHINE_PASS_DN_18(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_19(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_20(IP2_MACHINE_PASS_DN_19(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_20(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_21(IP2_MACHINE_PASS_DN_20(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_21(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_22(IP2_MACHINE_PASS_DN_21(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_22(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_23(IP2_MACHINE_PASS_DN_22(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_23(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_24(IP2_MACHINE_PASS_DN_23(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_24(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_25(IP2_MACHINE_PASS_DN_24(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_25(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_26(IP2_MACHINE_PASS_DN_25(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_26(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_27(IP2_MACHINE_PASS_DN_26(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_27(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_28(IP2_MACHINE_PASS_DN_27(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_28(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_29(IP2_MACHINE_PASS_DN_28(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_29(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_30(IP2_MACHINE_PASS_DN_29(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_30(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_31(IP2_MACHINE_PASS_DN_30(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_31(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_32(IP2_MACHINE_PASS_DN_31(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_32(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_33(IP2_MACHINE_PASS_DN_32(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_33(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_34(IP2_MACHINE_PASS_DN_33(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_34(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_35(IP2_MACHINE_PASS_DN_34(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_35(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_36(IP2_MACHINE_PASS_DN_35(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_36(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_37(IP2_MACHINE_PASS_DN_36(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_37(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_38(IP2_MACHINE_PASS_DN_37(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_38(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_39(IP2_MACHINE_PASS_DN_38(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_39(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_40(IP2_MACHINE_PASS_DN_39(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_40(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_41(IP2_MACHINE_PASS_DN_40(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_41(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_42(IP2_MACHINE_PASS_DN_41(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_42(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_43(IP2_MACHINE_PASS_DN_42(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_43(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_44(IP2_MACHINE_PASS_DN_43(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_44(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_45(IP2_MACHINE_PASS_DN_44(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_45(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_46(IP2_MACHINE_PASS_DN_45(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_46(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_47(IP2_MACHINE_PASS_DN_46(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_47(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_48(IP2_MACHINE_PASS_DN_47(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_48(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_49(IP2_MACHINE_PASS_DN_48(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_49(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_50(IP2_MACHINE_PASS_DN_49(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_50(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_51(IP2_MACHINE_PASS_DN_50(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_51(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_52(IP2_MACHINE_PASS_DN_51(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_52(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_53(IP2_MACHINE_PASS_DN_52(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_53(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_54(IP2_MACHINE_PASS_DN_53(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_54(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_55(IP2_MACHINE_PASS_DN_54(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_55(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_56(IP2_MACHINE_PASS_DN_55(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_56(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_57(IP2_MACHINE_PASS_DN_56(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_57(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_58(IP2_MACHINE_PASS_DN_57(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_58(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_59(IP2_MACHINE_PASS_DN_58(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_59(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_60(IP2_MACHINE_PASS_DN_59(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_60(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_61(IP2_MACHINE_PASS_DN_60(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_61(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_62(IP2_MACHINE_PASS_DN_61(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_62(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_63(IP2_MACHINE_PASS_DN_62(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_UP_63(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_UP_64(IP2_MACHINE_PASS_DN_63(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))

#define IP2_MACHINE_DN_0(P,r0,r1,r2,insn,...)  PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)
#define IP2_MACHINE_DN_1(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_DN_0 (IP2_MACHINE_PASS_DN_0 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_2(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_DN_1 (IP2_MACHINE_PASS_DN_1 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_3(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_DN_2 (IP2_MACHINE_PASS_DN_2 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_4(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_DN_3 (IP2_MACHINE_PASS_DN_3 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_5(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_DN_4 (IP2_MACHINE_PASS_DN_4 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_6(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_DN_5 (IP2_MACHINE_PASS_DN_5 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_7(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_DN_6 (IP2_MACHINE_PASS_DN_6 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_8(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_DN_7 (IP2_MACHINE_PASS_DN_7 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_9(P,r0,r1,r2,insn,...)  IP2_MACHINE_PASS_DN_8 (IP2_MACHINE_PASS_DN_8 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_10(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_9 (IP2_MACHINE_PASS_DN_9 (PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_11(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_10(IP2_MACHINE_PASS_DN_10(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_12(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_11(IP2_MACHINE_PASS_DN_11(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_13(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_12(IP2_MACHINE_PASS_DN_12(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_14(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_13(IP2_MACHINE_PASS_DN_13(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_15(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_14(IP2_MACHINE_PASS_DN_14(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_16(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_15(IP2_MACHINE_PASS_DN_15(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_17(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_16(IP2_MACHINE_PASS_DN_16(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_18(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_17(IP2_MACHINE_PASS_DN_17(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_19(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_18(IP2_MACHINE_PASS_DN_18(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_20(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_19(IP2_MACHINE_PASS_DN_19(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_21(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_20(IP2_MACHINE_PASS_DN_20(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_22(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_21(IP2_MACHINE_PASS_DN_21(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_23(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_22(IP2_MACHINE_PASS_DN_22(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_24(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_23(IP2_MACHINE_PASS_DN_23(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_25(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_24(IP2_MACHINE_PASS_DN_24(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_26(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_25(IP2_MACHINE_PASS_DN_25(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_27(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_26(IP2_MACHINE_PASS_DN_26(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_28(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_27(IP2_MACHINE_PASS_DN_27(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_29(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_28(IP2_MACHINE_PASS_DN_28(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_30(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_29(IP2_MACHINE_PASS_DN_29(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_31(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_30(IP2_MACHINE_PASS_DN_30(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_32(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_31(IP2_MACHINE_PASS_DN_31(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_33(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_32(IP2_MACHINE_PASS_DN_32(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_34(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_33(IP2_MACHINE_PASS_DN_33(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_35(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_34(IP2_MACHINE_PASS_DN_34(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_36(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_35(IP2_MACHINE_PASS_DN_35(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_37(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_36(IP2_MACHINE_PASS_DN_36(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_38(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_37(IP2_MACHINE_PASS_DN_37(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_39(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_38(IP2_MACHINE_PASS_DN_38(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_40(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_39(IP2_MACHINE_PASS_DN_39(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_41(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_40(IP2_MACHINE_PASS_DN_40(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_42(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_41(IP2_MACHINE_PASS_DN_41(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_43(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_42(IP2_MACHINE_PASS_DN_42(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_44(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_43(IP2_MACHINE_PASS_DN_43(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_45(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_44(IP2_MACHINE_PASS_DN_44(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_46(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_45(IP2_MACHINE_PASS_DN_45(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_47(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_46(IP2_MACHINE_PASS_DN_46(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_48(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_47(IP2_MACHINE_PASS_DN_47(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_49(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_48(IP2_MACHINE_PASS_DN_48(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_50(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_49(IP2_MACHINE_PASS_DN_49(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_51(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_50(IP2_MACHINE_PASS_DN_50(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_52(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_51(IP2_MACHINE_PASS_DN_51(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_53(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_52(IP2_MACHINE_PASS_DN_52(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_54(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_53(IP2_MACHINE_PASS_DN_53(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_55(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_54(IP2_MACHINE_PASS_DN_54(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_56(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_55(IP2_MACHINE_PASS_DN_55(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_57(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_56(IP2_MACHINE_PASS_DN_56(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_58(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_57(IP2_MACHINE_PASS_DN_57(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_59(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_58(IP2_MACHINE_PASS_DN_58(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_60(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_59(IP2_MACHINE_PASS_DN_59(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_61(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_60(IP2_MACHINE_PASS_DN_60(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_62(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_61(IP2_MACHINE_PASS_DN_61(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))
#define IP2_MACHINE_DN_63(P,r0,r1,r2,insn,...) IP2_MACHINE_PASS_DN_62(IP2_MACHINE_PASS_DN_62(PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)))

#define IP2_MACHINE_PASS_UP_1(c)  IP2_MACHINE_UP_1 c
#define IP2_MACHINE_PASS_UP_2(c)  IP2_MACHINE_UP_2 c
#define IP2_MACHINE_PASS_UP_3(c)  IP2_MACHINE_UP_3 c
#define IP2_MACHINE_PASS_UP_4(c)  IP2_MACHINE_UP_4 c
#define IP2_MACHINE_PASS_UP_5(c)  IP2_MACHINE_UP_5 c
#define IP2_MACHINE_PASS_UP_6(c)  IP2_MACHINE_UP_6 c
#define IP2_MACHINE_PASS_UP_7(c)  IP2_MACHINE_UP_7 c
#define IP2_MACHINE_PASS_UP_8(c)  IP2_MACHINE_UP_8 c
#define IP2_MACHINE_PASS_UP_9(c)  IP2_MACHINE_UP_9 c
#define IP2_MACHINE_PASS_UP_10(c) IP2_MACHINE_UP_10 c
#define IP2_MACHINE_PASS_UP_11(c) IP2_MACHINE_UP_11 c
#define IP2_MACHINE_PASS_UP_12(c) IP2_MACHINE_UP_12 c
#define IP2_MACHINE_PASS_UP_13(c) IP2_MACHINE_UP_13 c
#define IP2_MACHINE_PASS_UP_14(c) IP2_MACHINE_UP_14 c
#define IP2_MACHINE_PASS_UP_15(c) IP2_MACHINE_UP_15 c
#define IP2_MACHINE_PASS_UP_16(c) IP2_MACHINE_UP_16 c
#define IP2_MACHINE_PASS_UP_17(c) IP2_MACHINE_UP_17 c
#define IP2_MACHINE_PASS_UP_18(c) IP2_MACHINE_UP_18 c
#define IP2_MACHINE_PASS_UP_19(c) IP2_MACHINE_UP_19 c
#define IP2_MACHINE_PASS_UP_20(c) IP2_MACHINE_UP_20 c
#define IP2_MACHINE_PASS_UP_21(c) IP2_MACHINE_UP_21 c
#define IP2_MACHINE_PASS_UP_22(c) IP2_MACHINE_UP_22 c
#define IP2_MACHINE_PASS_UP_23(c) IP2_MACHINE_UP_23 c
#define IP2_MACHINE_PASS_UP_24(c) IP2_MACHINE_UP_24 c
#define IP2_MACHINE_PASS_UP_25(c) IP2_MACHINE_UP_25 c
#define IP2_MACHINE_PASS_UP_26(c) IP2_MACHINE_UP_26 c
#define IP2_MACHINE_PASS_UP_27(c) IP2_MACHINE_UP_27 c
#define IP2_MACHINE_PASS_UP_28(c) IP2_MACHINE_UP_28 c
#define IP2_MACHINE_PASS_UP_29(c) IP2_MACHINE_UP_29 c
#define IP2_MACHINE_PASS_UP_30(c) IP2_MACHINE_UP_30 c
#define IP2_MACHINE_PASS_UP_31(c) IP2_MACHINE_UP_31 c
#define IP2_MACHINE_PASS_UP_32(c) IP2_MACHINE_UP_32 c
#define IP2_MACHINE_PASS_UP_33(c) IP2_MACHINE_UP_33 c
#define IP2_MACHINE_PASS_UP_34(c) IP2_MACHINE_UP_34 c
#define IP2_MACHINE_PASS_UP_35(c) IP2_MACHINE_UP_35 c
#define IP2_MACHINE_PASS_UP_36(c) IP2_MACHINE_UP_36 c
#define IP2_MACHINE_PASS_UP_37(c) IP2_MACHINE_UP_37 c
#define IP2_MACHINE_PASS_UP_38(c) IP2_MACHINE_UP_38 c
#define IP2_MACHINE_PASS_UP_39(c) IP2_MACHINE_UP_39 c
#define IP2_MACHINE_PASS_UP_40(c) IP2_MACHINE_UP_40 c
#define IP2_MACHINE_PASS_UP_41(c) IP2_MACHINE_UP_41 c
#define IP2_MACHINE_PASS_UP_42(c) IP2_MACHINE_UP_42 c
#define IP2_MACHINE_PASS_UP_43(c) IP2_MACHINE_UP_43 c
#define IP2_MACHINE_PASS_UP_44(c) IP2_MACHINE_UP_44 c
#define IP2_MACHINE_PASS_UP_45(c) IP2_MACHINE_UP_45 c
#define IP2_MACHINE_PASS_UP_46(c) IP2_MACHINE_UP_46 c
#define IP2_MACHINE_PASS_UP_47(c) IP2_MACHINE_UP_47 c
#define IP2_MACHINE_PASS_UP_48(c) IP2_MACHINE_UP_48 c
#define IP2_MACHINE_PASS_UP_49(c) IP2_MACHINE_UP_49 c
#define IP2_MACHINE_PASS_UP_50(c) IP2_MACHINE_UP_50 c
#define IP2_MACHINE_PASS_UP_51(c) IP2_MACHINE_UP_51 c
#define IP2_MACHINE_PASS_UP_52(c) IP2_MACHINE_UP_52 c
#define IP2_MACHINE_PASS_UP_53(c) IP2_MACHINE_UP_53 c
#define IP2_MACHINE_PASS_UP_54(c) IP2_MACHINE_UP_54 c
#define IP2_MACHINE_PASS_UP_55(c) IP2_MACHINE_UP_55 c
#define IP2_MACHINE_PASS_UP_56(c) IP2_MACHINE_UP_56 c
#define IP2_MACHINE_PASS_UP_57(c) IP2_MACHINE_UP_57 c
#define IP2_MACHINE_PASS_UP_58(c) IP2_MACHINE_UP_58 c
#define IP2_MACHINE_PASS_UP_59(c) IP2_MACHINE_UP_59 c
#define IP2_MACHINE_PASS_UP_60(c) IP2_MACHINE_UP_60 c
#define IP2_MACHINE_PASS_UP_61(c) IP2_MACHINE_UP_61 c
#define IP2_MACHINE_PASS_UP_62(c) IP2_MACHINE_UP_62 c
#define IP2_MACHINE_PASS_UP_63(c) IP2_MACHINE_UP_63 c
#define IP2_MACHINE_PASS_UP_64(c) PP2_MACHINE_FAILURE c

#define IP2_MACHINE_PASS_DN_0(c)  IP2_MACHINE_DN_0 c
#define IP2_MACHINE_PASS_DN_1(c)  IP2_MACHINE_DN_1 c
#define IP2_MACHINE_PASS_DN_2(c)  IP2_MACHINE_DN_2 c
#define IP2_MACHINE_PASS_DN_3(c)  IP2_MACHINE_DN_3 c
#define IP2_MACHINE_PASS_DN_4(c)  IP2_MACHINE_DN_4 c
#define IP2_MACHINE_PASS_DN_5(c)  IP2_MACHINE_DN_5 c
#define IP2_MACHINE_PASS_DN_6(c)  IP2_MACHINE_DN_6 c
#define IP2_MACHINE_PASS_DN_7(c)  IP2_MACHINE_DN_7 c
#define IP2_MACHINE_PASS_DN_8(c)  IP2_MACHINE_DN_8 c
#define IP2_MACHINE_PASS_DN_9(c)  IP2_MACHINE_DN_9 c
#define IP2_MACHINE_PASS_DN_10(c) IP2_MACHINE_DN_10 c
#define IP2_MACHINE_PASS_DN_11(c) IP2_MACHINE_DN_11 c
#define IP2_MACHINE_PASS_DN_12(c) IP2_MACHINE_DN_12 c
#define IP2_MACHINE_PASS_DN_13(c) IP2_MACHINE_DN_13 c
#define IP2_MACHINE_PASS_DN_14(c) IP2_MACHINE_DN_14 c
#define IP2_MACHINE_PASS_DN_15(c) IP2_MACHINE_DN_15 c
#define IP2_MACHINE_PASS_DN_16(c) IP2_MACHINE_DN_16 c
#define IP2_MACHINE_PASS_DN_17(c) IP2_MACHINE_DN_17 c
#define IP2_MACHINE_PASS_DN_18(c) IP2_MACHINE_DN_18 c
#define IP2_MACHINE_PASS_DN_19(c) IP2_MACHINE_DN_19 c
#define IP2_MACHINE_PASS_DN_20(c) IP2_MACHINE_DN_20 c
#define IP2_MACHINE_PASS_DN_21(c) IP2_MACHINE_DN_21 c
#define IP2_MACHINE_PASS_DN_22(c) IP2_MACHINE_DN_22 c
#define IP2_MACHINE_PASS_DN_23(c) IP2_MACHINE_DN_23 c
#define IP2_MACHINE_PASS_DN_24(c) IP2_MACHINE_DN_24 c
#define IP2_MACHINE_PASS_DN_25(c) IP2_MACHINE_DN_25 c
#define IP2_MACHINE_PASS_DN_26(c) IP2_MACHINE_DN_26 c
#define IP2_MACHINE_PASS_DN_27(c) IP2_MACHINE_DN_27 c
#define IP2_MACHINE_PASS_DN_28(c) IP2_MACHINE_DN_28 c
#define IP2_MACHINE_PASS_DN_29(c) IP2_MACHINE_DN_29 c
#define IP2_MACHINE_PASS_DN_30(c) IP2_MACHINE_DN_30 c
#define IP2_MACHINE_PASS_DN_31(c) IP2_MACHINE_DN_31 c
#define IP2_MACHINE_PASS_DN_32(c) IP2_MACHINE_DN_32 c
#define IP2_MACHINE_PASS_DN_33(c) IP2_MACHINE_DN_33 c
#define IP2_MACHINE_PASS_DN_34(c) IP2_MACHINE_DN_34 c
#define IP2_MACHINE_PASS_DN_35(c) IP2_MACHINE_DN_35 c
#define IP2_MACHINE_PASS_DN_36(c) IP2_MACHINE_DN_36 c
#define IP2_MACHINE_PASS_DN_37(c) IP2_MACHINE_DN_37 c
#define IP2_MACHINE_PASS_DN_38(c) IP2_MACHINE_DN_38 c
#define IP2_MACHINE_PASS_DN_39(c) IP2_MACHINE_DN_39 c
#define IP2_MACHINE_PASS_DN_40(c) IP2_MACHINE_DN_40 c
#define IP2_MACHINE_PASS_DN_41(c) IP2_MACHINE_DN_41 c
#define IP2_MACHINE_PASS_DN_42(c) IP2_MACHINE_DN_42 c
#define IP2_MACHINE_PASS_DN_43(c) IP2_MACHINE_DN_43 c
#define IP2_MACHINE_PASS_DN_44(c) IP2_MACHINE_DN_44 c
#define IP2_MACHINE_PASS_DN_45(c) IP2_MACHINE_DN_45 c
#define IP2_MACHINE_PASS_DN_46(c) IP2_MACHINE_DN_46 c
#define IP2_MACHINE_PASS_DN_47(c) IP2_MACHINE_DN_47 c
#define IP2_MACHINE_PASS_DN_48(c) IP2_MACHINE_DN_48 c
#define IP2_MACHINE_PASS_DN_49(c) IP2_MACHINE_DN_49 c
#define IP2_MACHINE_PASS_DN_50(c) IP2_MACHINE_DN_50 c
#define IP2_MACHINE_PASS_DN_51(c) IP2_MACHINE_DN_51 c
#define IP2_MACHINE_PASS_DN_52(c) IP2_MACHINE_DN_52 c
#define IP2_MACHINE_PASS_DN_53(c) IP2_MACHINE_DN_53 c
#define IP2_MACHINE_PASS_DN_54(c) IP2_MACHINE_DN_54 c
#define IP2_MACHINE_PASS_DN_55(c) IP2_MACHINE_DN_55 c
#define IP2_MACHINE_PASS_DN_56(c) IP2_MACHINE_DN_56 c
#define IP2_MACHINE_PASS_DN_57(c) IP2_MACHINE_DN_57 c
#define IP2_MACHINE_PASS_DN_58(c) IP2_MACHINE_DN_58 c
#define IP2_MACHINE_PASS_DN_59(c) IP2_MACHINE_DN_59 c
#define IP2_MACHINE_PASS_DN_60(c) IP2_MACHINE_DN_60 c
#define IP2_MACHINE_PASS_DN_61(c) IP2_MACHINE_DN_61 c
#define IP2_MACHINE_PASS_DN_62(c) IP2_MACHINE_DN_62 c
#define IP2_MACHINE_PASS_DN_63(c) IP2_MACHINE_DN_63 c

#define PP2_MACHINE_FAILURE()

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
#define PP2_MACHINE_OUTPUT(s) \
        IP2_MACHINE_OUTPUT_SCAN( \
            IP2_FX(MACHINE_OUTPUT_EMIT_UP, \
                   PP2_MACHINE(/*r0=*/s(8HALT,),/*r1=*/,/*r2=*/,8PP2_MACHINE_OUTPUT,)(,8HALT,)) \
            PP2_RPAREN \
        )

#define IP2_MACHINE_OUTPUT_SCAN(...) __VA_ARGS__
#define IP2_MACHINE_OUTPUT_SPLIT_HEAD(P,...) P,(P,__VA_ARGS__),

#define PP2_INSN_8PP2_MACHINE_OUTPUT(P,r0,r1,r2,...) IP2_FX(MACHINE_OUTPUT_I, (,IP2_MACHINE_OUTPUT_SPLIT_HEAD P##r0,P##r1,P##r2,P##__VA_ARGS__))


#define IP2_MACHINE_OUTPUT_I(P,r0_prefix,r0_head,r0_tail,r1,r2,...) IP2_MACHINE_OUTPUT_I_##r0_prefix(,P##r0_head,P##r0_tail,P##r1,P##r2,P##__VA_ARGS__)
#define IP2_MACHINE_OUTPUT_I_(P,r0_head,r0_tail,r1,r2,...) (,P##r0_tail,P##r0_head P##r1,P##r2,8PP2_MACHINE_OUTPUT,P##__VA_ARGS__)
#define IP2_MACHINE_OUTPUT_I_8HALT(P,r0_head,r0_tail,r1,r2,...) )P##r1


#define IP2_MACHINE_OUTPUT_EMIT_UP(P,type,...)   IP2_MACHINE_OUTPUT_EMIT_##type(,__VA_ARGS__##P) IP2_MACHINE_OUTPUT_EMIT_DOWN
#define IP2_MACHINE_OUTPUT_EMIT_DOWN(P,type,...) IP2_MACHINE_OUTPUT_EMIT_##type(,__VA_ARGS__##P) IP2_MACHINE_OUTPUT_EMIT_UP

#define IP2_MACHINE_OUTPUT_EMIT_8HALT           PP2_EAT PP2_LPAREN
#define IP2_MACHINE_OUTPUT_EMIT_8LITERAL(P,...) P##__VA_ARGS__
#define IP2_MACHINE_OUTPUT_EMIT_8COMMA(P,...)   ,P##__VA_ARGS__
#define IP2_MACHINE_OUTPUT_EMIT_8LPAREN(P,...)  (P##__VA_ARGS__
#define IP2_MACHINE_OUTPUT_EMIT_8RPAREN(P,...)  )P##__VA_ARGS__

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
#define PP2(...) PP2_MACHINE_OUTPUT(PP2_MACHINE(/*r0=*/,/*r1=*/(),/*r2=*/,PP2_LANGUAGE_BLOCK(__VA_ARGS__),8PP2_TERMINATE,))

#endif
`
