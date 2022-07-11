/** @file */
#ifndef IP2_MACHINE_VM_H
#define IP2_MACHINE_VM_H

#include "pp2/machine/context.h"

#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/punctuation/lparen.h"

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