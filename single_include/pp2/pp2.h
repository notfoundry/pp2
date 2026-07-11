
// ******************** From: pp2.h
/** @file */
#ifndef PP2_H
#define PP2_H


// ******************** From: language.h
#ifndef PP2_LANGUAGE_H
#define PP2_LANGUAGE_H


// ******************** From: block.h
/** @file */
#ifndef PP2_LANGUAGE_BASIC_BLOCK_H
#define PP2_LANGUAGE_BASIC_BLOCK_H


// ******************** From: compiler.h
#ifndef PP2_LANGUAGE_COMPILER_H
#define PP2_LANGUAGE_COMPILER_H


// ******************** From: throw.h
/** @file */
#ifndef PP2_MACHINE_EXCEPTION_THROW_H
#define PP2_MACHINE_EXCEPTION_THROW_H


// ******************** From: unwind.h
/** @file */
#ifndef PP2_MACHINE_EXCEPTION_UNWIND_H
#define PP2_MACHINE_EXCEPTION_UNWIND_H


// ******************** From: context.h
/** @file */
#ifndef PP2_MACHINE_CONTEXT_H
#define PP2_MACHINE_CONTEXT_H


// ******************** From: cat.h
/** @file */
#ifndef PP2_PRIMITIVE_BASIC_CAT_H
#define PP2_PRIMITIVE_BASIC_CAT_H

#define PP2_PRIMITIVE_CAT(a,...) a##__VA_ARGS__

#define PP2_CAT(a,...) PP2_PRIMITIVE_CAT(a,__VA_ARGS__)


#define PP2_PRIMITIVE_REVERSE_CAT(a,...) __VA_ARGS__##a

#define PP2_REVERSE_CAT(a,...) PP2_PRIMITIVE_REVERSE_CAT(a,__VA_ARGS__)

#endif

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

#define PP2_TUPLE_AT_100(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,...) P##x100
#define PP2_TUPLE_AT_101(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,...) P##x101
#define PP2_TUPLE_AT_102(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,...) P##x102
#define PP2_TUPLE_AT_103(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,...) P##x103
#define PP2_TUPLE_AT_104(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,...) P##x104
#define PP2_TUPLE_AT_105(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,...) P##x105
#define PP2_TUPLE_AT_106(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,...) P##x106
#define PP2_TUPLE_AT_107(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,...) P##x107
#define PP2_TUPLE_AT_108(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,...) P##x108
#define PP2_TUPLE_AT_109(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,...) P##x109
#define PP2_TUPLE_AT_110(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,...) P##x110
#define PP2_TUPLE_AT_111(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,...) P##x111
#define PP2_TUPLE_AT_112(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,...) P##x112
#define PP2_TUPLE_AT_113(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,...) P##x113
#define PP2_TUPLE_AT_114(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,...) P##x114
#define PP2_TUPLE_AT_115(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,...) P##x115
#define PP2_TUPLE_AT_116(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,...) P##x116
#define PP2_TUPLE_AT_117(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,...) P##x117
#define PP2_TUPLE_AT_118(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,...) P##x118
#define PP2_TUPLE_AT_119(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,...) P##x119
#define PP2_TUPLE_AT_120(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,...) P##x120
#define PP2_TUPLE_AT_121(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,...) P##x121
#define PP2_TUPLE_AT_122(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,...) P##x122
#define PP2_TUPLE_AT_123(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,...) P##x123
#define PP2_TUPLE_AT_124(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,...) P##x124
#define PP2_TUPLE_AT_125(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,...) P##x125
#define PP2_TUPLE_AT_126(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,...) P##x126
#define PP2_TUPLE_AT_127(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,...) P##x127
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

// ******************** From: head.h
#ifndef PP2_PRIMITIVE_SEQ_HEAD_H
#define PP2_PRIMITIVE_SEQ_HEAD_H


#define PP2_SEQ_HEAD(seq) IP2_SEQ_HEAD_I(,PP2_SEQ_OPEN_SPLIT_HEAD seq)
#define IP2_SEQ_HEAD_I(P,x) PP2_TUPLE_AT_0(,x)

#define PP2_SEQ_SPLIT_HEAD(...) (__VA_ARGS__),

#define PP2_SEQ_OPEN_SPLIT_HEAD(...) __VA_ARGS__,

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
#define PP2_INSN_8PP2_LOCAL_CTX_PUSH_ARGUMENT(P,r0,r1,r2,v,...) (,P##r0,PP2_LOCAL_CTX_PUSH_ARGUMENT(P##r1,P##v),P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_PUSH_ARGUMENTS(ctx,v) IP2_LOCAL_CTX_PUSH_ARGUMENTS ctx,v)
#define IP2_LOCAL_CTX_PUSH_ARGUMENTS(P,... ) IP2_LOCAL_CTX_PUSH_ARGUMENTS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PUSH_ARGUMENTS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##arguments P##v,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_PUSH_ARGUMENTS(P,r0,r1,r2,v,...) (,P##r0,PP2_LOCAL_CTX_PUSH_ARGUMENTS(P##r1,P##v),P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_PREPEND_ARGUMENT(ctx,v) IP2_LOCAL_CTX_PREPEND_ARGUMENT ctx,v)
#define IP2_LOCAL_CTX_PREPEND_ARGUMENT(P,... ) IP2_LOCAL_CTX_PREPEND_ARGUMENT_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PREPEND_ARGUMENT_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,(P##v)P##arguments,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_PREPEND_ARGUMENT(P,r0,r1,r2,v,...) (,P##r0,PP2_LOCAL_CTX_PREPEND_ARGUMENT(P##r1,P##v),P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_PREPEND_ARGUMENTS(ctx,v) IP2_LOCAL_CTX_PREPEND_ARGUMENTS ctx,v)
#define IP2_LOCAL_CTX_PREPEND_ARGUMENTS(P,... ) IP2_LOCAL_CTX_PREPEND_ARGUMENTS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PREPEND_ARGUMENTS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##v P##arguments,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_PREPEND_ARGUMENTS(P,r0,r1,r2,v,...) (,P##r0,PP2_LOCAL_CTX_PREPEND_ARGUMENTS(P##r1,P##v),P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_POP_ARGUMENT(P,stack,labels,arguments,registers,_) (,P##stack,P##labels,PP2_EAT P##arguments,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_POP_ARGUMENT(P,r0,r1,r2,...) (,PP2_LOCAL_CTX_GET_ARGUMENTS_HEAD P##r1,PP2_LOCAL_CTX_POP_ARGUMENT P##r1,P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_CLEAR_ARGUMENTS(P,stack,labels,arguments,registers,_) (,P##stack,P##labels,/*arguments=*/,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_CLEAR_ARGUMENTS(P,r0,r1,r2,...) (,P##r0,PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2,P##__VA_ARGS__)

/* Argument-stack spilling for nested calls. The argument list is a single
 * shared stack, so evaluating a call argument that is itself a call would
 * scoop up the enclosing call's in-flight operands (its parked callee and any
 * already-evaluated sibling arguments). SPILL saves the whole current argument
 * list as one frame on the register spill-stack (a LIFO) and empties the
 * argument list, so the argument evaluates on a private, empty stack; nested
 * calls spill further, giving each call depth its own frame. UNSPILL_PUSH
 * restores the saved frame and pushes the just-evaluated argument (r0) onto it.
 * Spills are strictly LIFO and balanced (one SPILL + one UNSPILL_PUSH bracket
 * each argument), so the register field behaves as a proper call-frame stack. */
/* Every entry on the spill stack carries a tag saying what kind of thing it is:
 * 8A for a saved argument list, 8F for a saved local stack, 8E for an installed
 * exception handler. A throw unwinds by walking this stack and undoing each entry
 * in turn, which it can only do if it knows which is which -- the two kinds are
 * both seqs of groups and are otherwise indistinguishable.
 *
 * The tag is deliberately cheap: it adds two tokens to a pushed entry and NO extra
 * macro expansion anywhere, because the pop side swaps PP2_OPEN for IP2_UNTAG,
 * which is the same one expansion doing the same one job. */
#define IP2_UNTAG(tag,...) __VA_ARGS__

#define PP2_LOCAL_CTX_SPILL_ARGUMENTS(P,stack,labels,arguments,registers,_) (,P##stack,P##labels,/*arguments=*/,/*registers=*/(8A,P##arguments)P##registers,)
#define PP2_INSN_8PP2_ARGS_SPILL(P,r0,r1,r2,...) (,P##r0,PP2_LOCAL_CTX_SPILL_ARGUMENTS P##r1,P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT(ctx,v) IP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT ctx,v)
#define IP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT(P,...) IP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT_I(P,stack,labels,arguments,registers,_,v) IP2_FX(LOCAL_CTX_UNSPILL_PUSH_ARGUMENT_II,(,P##stack,P##labels,(P##v),PP2_SEQ_SPLIT_HEAD P##registers))
#define IP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT_II(P,stack,labels,elem,frame,rest) (,P##stack,P##labels,/*arguments=*/IP2_UNTAG P##frame P##elem,/*registers=*/P##rest,)
#define PP2_INSN_8PP2_ARGS_UNSPILL_PUSH(P,r0,r1,r2,...) (,/*r0=*/,PP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT(P##r1,P##r0),P##r2,P##__VA_ARGS__)

/* Local-variable frames for calls. A user function's parameters are bound into
 * name-addressed slots on the local stack, so a nested call whose callee reuses
 * a slot name would clobber the caller's live local. FRAME_ENTER saves the
 * whole local stack onto the same register spill-stack (as one frame) and hands
 * the callee an empty stack; FRAME_LEAVE restores the caller's stack by direct
 * assignment, leaving r0 (the call's result) untouched. FRAME_ENTER/LEAVE and
 * the argument SPILL/UNSPILL_PUSH are each balanced and strictly nested, so the
 * shared register stack stays a well-formed LIFO of activation frames. Only
 * user fns are bracketed (builtin VM_FN methods bind no locals). */
#define PP2_LOCAL_CTX_FRAME_ENTER(P,stack,labels,arguments,registers,_) (,/*stack=*/(),P##labels,P##arguments,/*registers=*/(8F,P##stack)P##registers,)
#define PP2_INSN_8PP2_FRAME_ENTER(P,r0,r1,r2,...) (,P##r0,PP2_LOCAL_CTX_FRAME_ENTER P##r1,P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_FRAME_LEAVE(P,stack,labels,arguments,registers,_) IP2_FX(LOCAL_CTX_FRAME_LEAVE_I,(,P##labels,P##arguments,PP2_SEQ_SPLIT_HEAD P##registers))
#define IP2_LOCAL_CTX_FRAME_LEAVE_I(P,labels,arguments,frame,rest) (,/*stack=*/IP2_UNTAG P##frame,P##labels,P##arguments,/*registers=*/P##rest,)
#define PP2_INSN_8PP2_FRAME_LEAVE(P,r0,r1,r2,...) (,P##r0,PP2_LOCAL_CTX_FRAME_LEAVE P##r1,P##r2,P##__VA_ARGS__)

/* Closure variant of FRAME_ENTER. A lexical closure captures the environment
 * visible where the function is DEFINED; since loads only ever see the top
 * frame, that top frame is the whole visible environment, so a user fn snapshots
 * its defining stack into its value at creation. On call this installs that
 * captured stack (instead of the empty frame FRAME_ENTER gives) after spilling
 * the caller's stack, so the body sees the closed-over bindings; parameters are
 * then STACK_STOREd on top and shadow any captured binding of the same name.
 * FRAME_LEAVE restores the caller unchanged, so captures are by snapshot. A fn
 * defined with an empty environment captures (), i.e. behaves exactly as before. */
#define PP2_INSN_8PP2_FRAME_ENTER_CLOSURE(P,r0,r1,r2,captured,...) (,P##r0,IP2_FX(LOCAL_CTX_FRAME_ENTER_CLOSURE,(P##captured,PP2_OPEN P##r1)),P##r2,P##__VA_ARGS__)
#define IP2_LOCAL_CTX_FRAME_ENTER_CLOSURE(captured,P,stack,labels,arguments,registers,_) (,/*stack=*/PP2_OPEN captured,P##labels,P##arguments,/*registers=*/(8F,P##stack)P##registers,)

#define PP2_LOCAL_CTX_UNPACK_ARGS(P,stack,labels,arguments,registers,_) PP2_REVERSE_CAT(0,IP2_LOCAL_CTX_UNPACK_ARGS P##arguments)
#define IP2_LOCAL_CTX_UNPACK_ARGS(x) x IP2_LOCAL_CTX_UNPACK_ARGS_UP
#define IP2_LOCAL_CTX_UNPACK_ARGS_UP(x) ,x IP2_LOCAL_CTX_UNPACK_ARGS_DN
#define IP2_LOCAL_CTX_UNPACK_ARGS_DN(x) ,x IP2_LOCAL_CTX_UNPACK_ARGS_UP
#define IP2_LOCAL_CTX_UNPACK_ARGS_UP0
#define IP2_LOCAL_CTX_UNPACK_ARGS_DN0

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


/* Unwinding, one spill-stack entry at a time.
 *
 * A throw abandons the instruction stream it was running in, which discards all the
 * pending WORK for free, but the local context is a value in a register and does not
 * unwind by itself. So a throw hands over to this, which walks the spill stack from
 * the top and undoes each entry until it reaches an installed handler:
 *
 *   (8F,stack)  a callee's activation frame. Give the caller's stack back.
 *   (8A,args)   an argument list spilled to evaluate a nested call. Restore it.
 *   (8E,labels,handler)  a handler. Take its labels back and run its continuation.
 *   ()          the bottom. Nobody was catching, so the program ends.
 *
 * Restoring rather than snapshotting is what keeps the try scope's own writes. Each
 * 8F we pass hands back the stack as it stood when that call was made, so the LAST
 * one we reach -- the first frame entered after the try -- leaves us holding exactly
 * the try scope's locals, including everything it assigned before it threw. A throw
 * with no call in flight passes no 8F at all and simply keeps the live stack. Only
 * the callee frames are discarded, which is the whole point.
 *
 * This is a loop in the VM, not in the macro expander: each step re-issues
 * 8PP2_UNWIND_STEP into the instruction stream and the trampoline decodes it afresh.
 * So the depth it can unwind is unbounded and nothing here can be blue-painted.
 * It runs only on a throw, and only for as deep as the throw actually was. */
#define PP2_INSN_8PP2_UNWIND_STEP(P,r0,r1,r2,type,msg,...) \
        IP2_FX(UNWIND_OPEN,(,P##r0,P##r2,P##type,P##msg,PP2_OPEN P##r1))

/* r1 opens to `,stack,labels,arguments,registers,`, which hands this hop a fresh
 * empty P of its own. */
#define IP2_UNWIND_OPEN(P,r0,r2,type,msg,Q,stack,labels,arguments,registers,_) \
        IP2_FY(UNWIND_SPLIT,(,P##r0,P##r2,P##type,P##msg,P##stack,P##labels,P##arguments,PP2_SEQ_SPLIT_HEAD P##registers))

#define IP2_UNWIND_SPLIT(P,r0,r2,type,msg,stack,labels,arguments,entry,rest) \
        PP2_CAT(IP2_UNWIND_,IP2_UNWIND_TAG_OF P##entry) \
            (,P##r0,P##r2,P##type,P##msg,P##stack,P##labels,P##arguments,P##entry,P##rest)

/* The tag is the entry's first element. The bottom sentinel () has none, and an
 * empty tag pastes to IP2_UNWIND_, the uncaught case. */
#define IP2_UNWIND_TAG_OF(...) IP2_UNWIND_TAG_OF_I(__VA_ARGS__,)
#define IP2_UNWIND_TAG_OF_I(tag,...) tag


#define IP2_UNWIND_8F(P,r0,r2,type,msg,stack,labels,arguments,entry,rest) \
        (, \
         P##r0, \
         /*r1=*/(,IP2_UNTAG P##entry,P##labels,P##arguments,P##rest,), \
         P##r2, \
         8PP2_UNWIND_STEP,P##type,P##msg \
        )

/* A spilled argument list. Just drop it. The pending arguments are not restored from
 * these on the way past, because a throw catches the machine mid-expression and every
 * argument list between here and the handler belongs to a call that is now abandoned.
 * The handler's own entry carries the only argument list that still means anything. */
#define IP2_UNWIND_8A(P,r0,r2,type,msg,stack,labels,arguments,entry,rest) \
        (, \
         P##r0, \
         /*r1=*/(,P##stack,P##labels,P##arguments,P##rest,), \
         P##r2, \
         8PP2_UNWIND_STEP,P##type,P##msg \
        )

/* The handler. Labels and pending arguments come back from its snapshot, so a throw out
 * of a loop leaves no loop labels behind and a throw out of a half-built call leaves no
 * parked callee sitting in the argument list. The local stack is whatever the walk has
 * left us holding, which is the try scope's own -- assignments and all. The exception
 * lands in r0 as a Quote of the thrown TYPE(message) so a `catch (e)` can name it. The
 * entry is dropped on the way through, so a throw raised inside this handler walks past
 * it to the next handler out. */
#define IP2_UNWIND_8E(P,r0,r2,type,msg,stack,labels,arguments,entry,rest) \
        IP2_FZ(UNWIND_HANDLER,(,P##r2,P##type,P##msg,P##stack,P##rest,PP2_OPEN P##entry))

#define IP2_UNWIND_HANDLER(P,r2,type,msg,stack,rest,Q,eh_labels,eh_arguments,handler) \
        (, \
         /*r0=*/(,Quote,(P##type(P##msg))), \
         /*r1=*/(,P##stack,P##eh_labels,PP2_OPEN P##eh_arguments,P##rest,), \
         P##r2, \
         PP2_OPEN P##handler \
        )

/* Bottom of the spill stack: nothing was catching. End the program exactly as an
 * uncaught throw always has -- the `)` closes the VM's own paren so the machine trace
 * stops being eaten, and the exception leaves as one emitted literal. */
#define IP2_UNWIND_(P,r0,r2,type,msg,stack,labels,arguments,entry,rest) \
        )(,8LITERAL,P##type(P##msg))

#endif

/* Throw. An exception is a type token and a message.
 *
 * The whole of the throw is here: drop the instruction stream and start unwinding.
 * Dropping the stream (not forwarding `...`) is what abandons the rest of the try
 * body and everything that was pending after it -- in this VM the instruction stream
 * IS the continuation, so discarding the work costs nothing and needs no bookkeeping.
 * What is left is the local context, which is a value in a register and has to be
 * walked back down to the handler; 8PP2_UNWIND_STEP does that, and ends the program
 * if it finds no handler. See unwind.h. */
#define PP2_INSN_8PP2_THROW_EXCEPTION(P,r0,r1,r2,type,msg,...) \
        (,P##r0,P##r1,P##r2,8PP2_UNWIND_STEP,P##type,P##msg)

#endif


// ******************** From: if.h
/** @file */
#ifndef PP2_PRIMITIVE_CONTROL_IF_H
#define PP2_PRIMITIVE_CONTROL_IF_H


#define PP2_IF(...) PP2_PRIMITIVE_CAT(PP2_IF_,__VA_ARGS__)
#define PP2_IF_0(t,...) __VA_ARGS__
#define PP2_IF_1(t,...) t

#endif

// ******************** From: is_digit.h
/** @file */
#ifndef PP2_PRIMITIVE_DETECTION_IS_DIGIT_H
#define PP2_PRIMITIVE_DETECTION_IS_DIGIT_H


/**
* Yields \link PP2_IF_1 \endlink when `x` is exactly one of the ten decimal
* digit tokens, and \link PP2_IF_0 \endlink otherwise. Used as
* `PP2_IS_DIGIT(x)(then,else)`; both branches are substituted, so they must be
* inert tokens.
*
* Each digit is registered as a function-like macro, so the trailing `()`
* fires only when the pasted name is a whole digit and nothing follows it.
* `2` yields `,1`; `a`, `2 plus` and the empty token sequence all leave the
* pasted name unexpanded, which shifts the pick onto the trailing `0`.
*
* `x` must be a single argument. A comma in `x` pastes onto its first token
* and the result is meaningless.
*/
#define PP2_IS_DIGIT(...) IP2_IS_DIGIT_I(PP2_DIGIT_TAG_##__VA_ARGS__ ())
#define IP2_IS_DIGIT_I(...) PP2_TUPLE_AT_1(PP2_IF_,__VA_ARGS__,0)

#define PP2_DIGIT_TAG_0(...) ,1
#define PP2_DIGIT_TAG_1(...) ,1
#define PP2_DIGIT_TAG_2(...) ,1
#define PP2_DIGIT_TAG_3(...) ,1
#define PP2_DIGIT_TAG_4(...) ,1
#define PP2_DIGIT_TAG_5(...) ,1
#define PP2_DIGIT_TAG_6(...) ,1
#define PP2_DIGIT_TAG_7(...) ,1
#define PP2_DIGIT_TAG_8(...) ,1
#define PP2_DIGIT_TAG_9(...) ,1

#endif

// ******************** From: is_tuple.h
/** @file */
#ifndef PP2_PRIMITIVE_INTROSPECTION_IS_TUPLE_H
#define PP2_PRIMITIVE_INTROSPECTION_IS_TUPLE_H


#define PP2_IS_TUPLE(x) IP2_IS_TUPLE_TEST_I(IP2_IS_TUPLE_TEST_DETECT_TUPLE x,1,0)
#define IP2_IS_TUPLE_TEST_I(...) PP2_TUPLE_AT_2(PP2_IF_,__VA_ARGS__)
#define IP2_IS_TUPLE_TEST_DETECT_TUPLE(...) ,

#endif

// ******************** From: comma.h
/** @file */
#ifndef PP2_PRIMITIVE_PUNCTUATION_COMMA_H
#define PP2_PRIMITIVE_PUNCTUATION_COMMA_H

/**
*/
#define PP2_COMMA ,

#define PP2_COMMA_0  ,0
#define PP2_COMMA_1  ,1
#define PP2_COMMA_2  ,2
#define PP2_COMMA_3  ,3
#define PP2_COMMA_4  ,4
#define PP2_COMMA_5  ,5
#define PP2_COMMA_6  ,6
#define PP2_COMMA_7  ,7
#define PP2_COMMA_8  ,8
#define PP2_COMMA_9  ,9
#define PP2_COMMA_10 ,10
#define PP2_COMMA_11 ,11
#define PP2_COMMA_12 ,12
#define PP2_COMMA_13 ,13
#define PP2_COMMA_14 ,14
#define PP2_COMMA_15 ,15
#define PP2_COMMA_16 ,16

#endif

#define PP2_COMPILE(stx) IP2_LANGUAGE_COMPILE_CHOOSE_EVAL_OR_LITERAL(IP2_LANGUAGE_COMPILE_TEST_IF_LITERAL stx)(stx)
#define IP2_LANGUAGE_COMPILE_CHOOSE_EVAL_OR_LITERAL(x) PP2_TUPLE_AT_2(IP2_LANGUAGE_COMPILE,x,_LITERAL,)
#define IP2_LANGUAGE_COMPILE_TEST_IF_LITERAL(...) ,

#define IP2_LANGUAGE_COMPILE(stx) IP2_LANGUAGE_COMPILE_I(((8PP2_THROW_EXCEPTION,8PP2_LANGUAGE_DEFINITION_EXCEPTION,stx),PP2_DEF_##stx))
#define IP2_LANGUAGE_COMPILE_I(tup) IP2_LANGUAGE_COMPILE_II tup
#define IP2_LANGUAGE_COMPILE_II(fail_cont,x) IP2_LANGUAGE_COMPILE_III(IP2_LANGUAGE_COMPILE_TEST_SUCCESS_##x,IP2_LANGUAGE_COMPILE_FAIL,) fail_cont
#define IP2_LANGUAGE_COMPILE_III(...) PP2_TUPLE_AT_1(,__VA_ARGS__)
#define IP2_LANGUAGE_COMPILE_TEST_SUCCESS_ ,PP2_EAT,
#define IP2_LANGUAGE_COMPILE_FAIL(...) __VA_ARGS__


/* An expression that opens with a parenthesised group is a literal, and the
 * shape of that leading group says which one. Split it off the syntax with
 * PP2_SEQ_SPLIT_HEAD, ask its shape, and hand the group and everything after
 * it to the matching builder. */
#define IP2_LANGUAGE_COMPILE_LITERAL(stx) IP2_FX(LANGUAGE_COMPILE_LITERAL_I,(,PP2_SEQ_SPLIT_HEAD stx))
#define IP2_LANGUAGE_COMPILE_LITERAL_I(P,lead,...) PP2_CAT(IP2_LANGUAGE_COMPILE_LIT_,IP2_LANGUAGE_LITERAL_KIND lead)(lead,__VA_ARGS__)

/* LONG when the group holds one decimal digit, QUOTE otherwise. Commas remain
 * quoted tokens: Lists use the ordinary explicit constructor `List(a,b,c)`.
 * A group holding a group is also a quote of that group, so `((1)(2))` stays a
 * Quote: the arbitrary layer spells a negative that way, but the literal
 * syntax does not claim it. */
#define IP2_LANGUAGE_LITERAL_KIND(...) IP2_LANGUAGE_LITERAL_KIND_SELECT(__VA_ARGS__,PP2_COMMA_1,)(__VA_ARGS__)
#define IP2_LANGUAGE_LITERAL_KIND_SELECT(x0,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_LITERAL_KIND_,m,MANY)
#define IP2_LANGUAGE_LITERAL_KIND_MANY(...) QUOTE
#define IP2_LANGUAGE_LITERAL_KIND_1(x) PP2_IS_TUPLE(x)(IP2_LANGUAGE_LITERAL_KIND_GROUP,IP2_LANGUAGE_LITERAL_KIND_TOKEN)(x)
#define IP2_LANGUAGE_LITERAL_KIND_GROUP(x) QUOTE
#define IP2_LANGUAGE_LITERAL_KIND_TOKEN(x) PP2_IS_DIGIT(x)(LONG,QUOTE)

#define IP2_LANGUAGE_COMPILE_LIT_QUOTE(lead,...) 8PP2_LOAD_CONST,(,Quote,lead),PP2_COMPILE_LANGUAGE_RETURN(__VA_ARGS__)

/* `(2)(5)(6)` is 256. A Long's value already IS a most-significant-first
 * sequence of single-digit groups, so the leading digit loads a Long directly
 * and each further group arrives as a call on it (see Long_call in long.h).
 * The literal costs one constant load plus one instruction per digit; nothing
 * is computed. */
#define IP2_LANGUAGE_COMPILE_LIT_LONG(lead,...) 8PP2_LOAD_CONST,(,Long,lead),PP2_COMPILE_LANGUAGE_RETURN(__VA_ARGS__)


#define PP2_COMPILE_UNSAFE(stx) IP2_LANGUAGE_COMPILE_UNSAFE((PP2_DEF_##stx))
#define IP2_LANGUAGE_COMPILE_UNSAFE(x) PP2_EAT x


#define PP2_COMPILE_OR_DEFAULT(stx,default) IP2_LANGUAGE_COMPILE_I((default,PP2_DEF_##stx))


#define PP2_INSN_8PP2_LANGUAGE_COMPILE(P,r0,r1,r2,stx,...) (,P##r0,P##r1,P##r2,PP2_COMPILE(P##stx),P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_COMPILE_UNSAFE(P,r0,r1,r2,stx,...) (,P##r0,P##r1,P##r2,PP2_COMPILE_UNSAFE(P##stx),P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_COMPILE_OR_DEFAULT(P,r0,r1,r2,stx,default,...) (,P##r0,P##r1,P##r2,PP2_COMPILE_OR_DEFAULT(P##stx,P##default),P##__VA_ARGS__)

#endif


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

// ******************** From: object.h
/** @file */
#ifndef PP2_LANGUAGE_BASIC_OBJECT_H
#define PP2_LANGUAGE_BASIC_OBJECT_H

#define PP2_INSN_8PP2_LANGUAGE_OBJECT_ADDR(P,r0,r1,r2,...) (,/*r0=*/PP2_LANGUAGE_OBJECT_ADDR P##r0,P##r1,P##r2,P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_OBJECT_TYPE(P,r0,r1,r2,...) (,/*r0=*/PP2_LANGUAGE_OBJECT_TYPE P##r0,P##r1,P##r2,P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_OBJECT_VALUE(P,r0,r1,r2,...) (,/*r0=*/PP2_LANGUAGE_OBJECT_VALUE P##r0,P##r1,P##r2,P##__VA_ARGS__)

#define PP2_LANGUAGE_OBJECT_ADDR(addr,type,value) addr
#define PP2_LANGUAGE_OBJECT_TYPE(addr,type,value) type
#define PP2_LANGUAGE_OBJECT_VALUE(addr,type,value) value

#endif

// ******************** From: return.h
/** @file */
#ifndef PP2_LANGUAGE_BASIC_RETURN_H
#define PP2_LANGUAGE_BASIC_RETURN_H



// ******************** From: nop.h
#ifndef PP2_MACHINE_INSNS_NOP_H
#define PP2_MACHINE_INSNS_NOP_H

#define PP2_INSN_8PP2_NOP(P,r0,r1,r2,...) (,P##r0,P##r1,P##r2,P##__VA_ARGS__)

#define PP2_INSN_8PP2_NOP_UNSAFE(P,r0,r1,r2,insn,...) PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)


#endif


// ******************** From: is_nil.h
/** @file */
#ifndef PP2_PRIMITIVE_INTROSPECTION_IS_NIL_H
#define PP2_PRIMITIVE_INTROSPECTION_IS_NIL_H


#define PP2_IS_NIL(x) PP2_IS_TUPLE(x)(PP2_IF_0,PP2_IS_TUPLE(x()))

#define PP2_IS_NIL_NON_TUPLE(x) PP2_IS_TUPLE(x())

#endif

#define PP2_COMPILE_LANGUAGE_RETURN(rhs_stx) \
        IP2_LANGUAGE_RETURN_CHOOSE_CALL_OR_METHOD(,rhs_stx,IP2_LANGUAGE_RETURN_TEST_IF_CALL rhs_stx), \
        rhs_stx

#define PP2_INSN_8PP2_LANGUAGE_RETURN(P,r0,r1,r2,method,...) \
                                     (, \
                                      P##r0,P##r1,P##r2, \
                                      IP2_LANGUAGE_RETURN_CHOOSE_CALL_OR_METHOD(, \
                                          P##method,IP2_LANGUAGE_RETURN_TEST_IF_CALL P##method \
                                      ), \
                                      P##method, \
                                      P##__VA_ARGS__ \
                                     )

#define IP2_LANGUAGE_RETURN_CHOOSE_CALL_OR_METHOD(P,method,...) \
        IP2_LANGUAGE_RETURN_TUPLE_AT_1( \
            __VA_ARGS__, \
            IP2_LANGUAGE_RETURN_CHOOSE_METHOD_OR_RETURN(, \
                IP2_LANGUAGE_RETURN_TEST_IF_NOT_METHOD P##method () \
            ) \
        )
#define IP2_LANGUAGE_RETURN_CHOOSE_METHOD_OR_RETURN(P,...) \
        IP2_LANGUAGE_RETURN_TUPLE_AT_1( \
            __VA_ARGS__, \
            8PP2_LANGUAGE_METHOD_CALL \
        )

#define PP2_INSN_8IP2_LANGUAGE_RETURN_NOP(P,r0,r1,r2,_,...) (,P##r0,P##r1,P##r2,P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_METHOD_CALL(P,r0,r1,r2,method,...) (,P##r0,PP2_LOCAL_CTX_PUSH_ARGUMENT(P##r1,P##r0),P##r2,IP2_LANGUAGE_RETURN_METHOD_CALL(,P##r0,P##method),P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_SELF_CALL(P,r0,r1,r2,args_tup,...) (,P##r0,PP2_LOCAL_CTX_PUSH_ARGUMENT(P##r1,P##r0),P##r2,IP2_LANGUAGE_RETURN_METHOD_CALL(,P##r0,call P##args_tup),P##__VA_ARGS__)

#define IP2_LANGUAGE_RETURN_TUPLE_AT_1(_,insn,...) insn
#define IP2_LANGUAGE_RETURN_TEST_IF_CALL(...) ,8PP2_LANGUAGE_SELF_CALL,
#define IP2_LANGUAGE_RETURN_TEST_IF_NOT_METHOD(...) ,8IP2_LANGUAGE_RETURN_NOP,


#define IP2_LANGUAGE_RETURN_METHOD_CALL(P,obj,method) IP2_FX(LANGUAGE_RETURN_METHOD_CALL_STATIC, (,PP2_LANGUAGE_OBJECT_TYPE P##obj,P##method))
#define IP2_LANGUAGE_RETURN_METHOD_CALL_STATIC(P,type,method) PP2_COMPILE_OR_DEFAULT(type##_##method,(8IP2_LANGUAGE_RETURN_RESOLVE_INHERITED_METHOD,P##type,P##type,P##method))
#define IP2_LANGUAGE_RETURN_METHOD_CALL_INHERITED(P,base_type,type,method) PP2_COMPILE_OR_DEFAULT(type##_##method,(8IP2_LANGUAGE_RETURN_RESOLVE_INHERITED_METHOD,P##base_type,P##type,P##method))

#define PP2_INSN_8IP2_LANGUAGE_RETURN_RESOLVE_INHERITED_METHOD(P,r0,r1,r2,base_type,type,method,...) \
                                                              (, \
                                                               P##r0,P##r1,P##r2, \
                                                               PP2_COMPILE_UNSAFE(P##type), \
                                                               8IP2_LANGUAGE_RETURN_INHERITED_METHOD_CALL,P##base_type,P##method, \
                                                               P##__VA_ARGS__ \
                                                              )

#define PP2_INSN_8IP2_LANGUAGE_RETURN_INHERITED_METHOD_CALL(P,r0,r1,r2,base_type,method,...) \
                                                           (, \
                                                            /*r0=*/,P##r1,P##r2, \
                                                            IP2_FX ( \
                                                                LANGUAGE_RETURN_INHERITED_METHOD_CALL_INVOKE, \
                                                                (,P##base_type,PP2_LANGUAGE_TYPE_SUPERTYPE_NAME P##r0,P##method) \
                                                            ), \
                                                            P##__VA_ARGS__ \
                                                           )
#define IP2_LANGUAGE_RETURN_INHERITED_METHOD_CALL_INVOKE(P,type_name,supertype_name,method) \
        PP2_IS_NIL_NON_TUPLE (P##supertype_name) ( \
            IP2_LANGUAGE_RETURN_INHERITED_METHOD_CALL_FAIL(type_name##_##method), \
            IP2_LANGUAGE_RETURN_METHOD_CALL_INHERITED(,P##type_name,P##supertype_name,P##method) \
        )
#define IP2_LANGUAGE_RETURN_INHERITED_METHOD_CALL_FAIL(stx) 8PP2_THROW_EXCEPTION,8PP2_LANGUAGE_DEFINITION_EXCEPTION,stx

#define PP2_LANGUAGE_TYPE_SUPERTYPE_NAME(type_addr,type_type,type_value) IP2_LANGUAGE_TYPE_SUPERTYPE_NAME_I type_value
#define IP2_LANGUAGE_TYPE_SUPERTYPE_NAME_I(P,type_name,supertype_name) P##supertype_name

#endif

// ******************** From: variable.h
/** @file */
#ifndef PP2_LANGUAGE_BASIC_VARIABLE_H
#define PP2_LANGUAGE_BASIC_VARIABLE_H


// ******************** From: variable_tables.h
/** @file */
#ifndef PP2_LANGUAGE_BASIC_DETAIL_VARIABLE_TABLES_H
#define PP2_LANGUAGE_BASIC_DETAIL_VARIABLE_TABLES_H

/* The built-in single-letter variables. A variable's address is now a char-seq
 * (the same paren-per-character shape used elsewhere), so `x` addresses slot
 * (x) and the reserved `this` addresses (t)(h)(i)(s). Multi-character names are
 * declared host-side with PP2_VAR (see variable.h); there is no longer a fixed
 * slot table, only these convenience bindings for the letters. */

#define PP2_DEF_a )PP2_COMPILE_LANGUAGE_VAR((a),
#define PP2_DEF_b )PP2_COMPILE_LANGUAGE_VAR((b),
#define PP2_DEF_c )PP2_COMPILE_LANGUAGE_VAR((c),
#define PP2_DEF_d )PP2_COMPILE_LANGUAGE_VAR((d),
#define PP2_DEF_e )PP2_COMPILE_LANGUAGE_VAR((e),
#define PP2_DEF_f )PP2_COMPILE_LANGUAGE_VAR((f),
#define PP2_DEF_g )PP2_COMPILE_LANGUAGE_VAR((g),
#define PP2_DEF_h )PP2_COMPILE_LANGUAGE_VAR((h),
#define PP2_DEF_i )PP2_COMPILE_LANGUAGE_VAR((i),
#define PP2_DEF_j )PP2_COMPILE_LANGUAGE_VAR((j),
#define PP2_DEF_k )PP2_COMPILE_LANGUAGE_VAR((k),
#define PP2_DEF_l )PP2_COMPILE_LANGUAGE_VAR((l),
#define PP2_DEF_m )PP2_COMPILE_LANGUAGE_VAR((m),
#define PP2_DEF_n )PP2_COMPILE_LANGUAGE_VAR((n),
#define PP2_DEF_o )PP2_COMPILE_LANGUAGE_VAR((o),
#define PP2_DEF_p )PP2_COMPILE_LANGUAGE_VAR((p),
#define PP2_DEF_q )PP2_COMPILE_LANGUAGE_VAR((q),
#define PP2_DEF_r )PP2_COMPILE_LANGUAGE_VAR((r),
#define PP2_DEF_s )PP2_COMPILE_LANGUAGE_VAR((s),
#define PP2_DEF_t )PP2_COMPILE_LANGUAGE_VAR((t),
#define PP2_DEF_u )PP2_COMPILE_LANGUAGE_VAR((u),
#define PP2_DEF_v )PP2_COMPILE_LANGUAGE_VAR((v),
#define PP2_DEF_w )PP2_COMPILE_LANGUAGE_VAR((w),
#define PP2_DEF_x )PP2_COMPILE_LANGUAGE_VAR((x),
#define PP2_DEF_y )PP2_COMPILE_LANGUAGE_VAR((y),
#define PP2_DEF_z )PP2_COMPILE_LANGUAGE_VAR((z),
#define PP2_DEF_A )PP2_COMPILE_LANGUAGE_VAR((A),
#define PP2_DEF_B )PP2_COMPILE_LANGUAGE_VAR((B),
#define PP2_DEF_C )PP2_COMPILE_LANGUAGE_VAR((C),
#define PP2_DEF_D )PP2_COMPILE_LANGUAGE_VAR((D),
#define PP2_DEF_E )PP2_COMPILE_LANGUAGE_VAR((E),
#define PP2_DEF_F )PP2_COMPILE_LANGUAGE_VAR((F),
#define PP2_DEF_G )PP2_COMPILE_LANGUAGE_VAR((G),
#define PP2_DEF_H )PP2_COMPILE_LANGUAGE_VAR((H),
#define PP2_DEF_I )PP2_COMPILE_LANGUAGE_VAR((I),
#define PP2_DEF_J )PP2_COMPILE_LANGUAGE_VAR((J),
#define PP2_DEF_K )PP2_COMPILE_LANGUAGE_VAR((K),
#define PP2_DEF_L )PP2_COMPILE_LANGUAGE_VAR((L),
#define PP2_DEF_M )PP2_COMPILE_LANGUAGE_VAR((M),
#define PP2_DEF_N )PP2_COMPILE_LANGUAGE_VAR((N),
#define PP2_DEF_O )PP2_COMPILE_LANGUAGE_VAR((O),
#define PP2_DEF_P )PP2_COMPILE_LANGUAGE_VAR((P),
#define PP2_DEF_Q )PP2_COMPILE_LANGUAGE_VAR((Q),
#define PP2_DEF_R )PP2_COMPILE_LANGUAGE_VAR((R),
#define PP2_DEF_S )PP2_COMPILE_LANGUAGE_VAR((S),
#define PP2_DEF_T )PP2_COMPILE_LANGUAGE_VAR((T),
#define PP2_DEF_U )PP2_COMPILE_LANGUAGE_VAR((U),
#define PP2_DEF_V )PP2_COMPILE_LANGUAGE_VAR((V),
#define PP2_DEF_W )PP2_COMPILE_LANGUAGE_VAR((W),
#define PP2_DEF_X )PP2_COMPILE_LANGUAGE_VAR((X),
#define PP2_DEF_Y )PP2_COMPILE_LANGUAGE_VAR((Y),
#define PP2_DEF_Z )PP2_COMPILE_LANGUAGE_VAR((Z),

#define PP2_DEF_this )PP2_COMPILE_LANGUAGE_VAR((t)(h)(i)(s),

#endif

// ******************** From: name.h
/** @file */
#ifndef PP2_LANGUAGE_BASIC_DETAIL_NAME_H
#define PP2_LANGUAGE_BASIC_DETAIL_NAME_H


/* Build a char-seq address from comma-separated characters:
 * PP2_CHARSEQ(t,o,t,a,l) -> (t)(o)(t)(a)(l). Used by PP2_VAR to declare a
 * multi-character variable name host-side. Bounded at 40 characters. */
#define PP2_CHARSEQ(...) IP2_CHARSEQ_OVL(__VA_ARGS__,PP2_COMMA_40, PP2_COMMA_39, PP2_COMMA_38, PP2_COMMA_37, PP2_COMMA_36, PP2_COMMA_35, PP2_COMMA_34, PP2_COMMA_33, PP2_COMMA_32, PP2_COMMA_31, PP2_COMMA_30, PP2_COMMA_29, PP2_COMMA_28, PP2_COMMA_27, PP2_COMMA_26, PP2_COMMA_25, PP2_COMMA_24, PP2_COMMA_23, PP2_COMMA_22, PP2_COMMA_21, PP2_COMMA_20, PP2_COMMA_19, PP2_COMMA_18, PP2_COMMA_17, PP2_COMMA_16, PP2_COMMA_15, PP2_COMMA_14, PP2_COMMA_13, PP2_COMMA_12, PP2_COMMA_11, PP2_COMMA_10, PP2_COMMA_9, PP2_COMMA_8, PP2_COMMA_7, PP2_COMMA_6, PP2_COMMA_5, PP2_COMMA_4, PP2_COMMA_3, PP2_COMMA_2, PP2_COMMA_1,)(__VA_ARGS__)

#define IP2_CHARSEQ_OVL(x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,m,...) PP2_TUPLE_AT_1(IP2_CHARSEQ_,m,41_OR_MORE)
#define IP2_CHARSEQ_1(c0) (c0)
#define IP2_CHARSEQ_2(c0,c1) (c0)(c1)
#define IP2_CHARSEQ_3(c0,c1,c2) (c0)(c1)(c2)
#define IP2_CHARSEQ_4(c0,c1,c2,c3) (c0)(c1)(c2)(c3)
#define IP2_CHARSEQ_5(c0,c1,c2,c3,c4) (c0)(c1)(c2)(c3)(c4)
#define IP2_CHARSEQ_6(c0,c1,c2,c3,c4,c5) (c0)(c1)(c2)(c3)(c4)(c5)
#define IP2_CHARSEQ_7(c0,c1,c2,c3,c4,c5,c6) (c0)(c1)(c2)(c3)(c4)(c5)(c6)
#define IP2_CHARSEQ_8(c0,c1,c2,c3,c4,c5,c6,c7) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)
#define IP2_CHARSEQ_9(c0,c1,c2,c3,c4,c5,c6,c7,c8) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)
#define IP2_CHARSEQ_10(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)
#define IP2_CHARSEQ_11(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)
#define IP2_CHARSEQ_12(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)
#define IP2_CHARSEQ_13(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)
#define IP2_CHARSEQ_14(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)
#define IP2_CHARSEQ_15(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)
#define IP2_CHARSEQ_16(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)
#define IP2_CHARSEQ_17(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)
#define IP2_CHARSEQ_18(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)
#define IP2_CHARSEQ_19(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)
#define IP2_CHARSEQ_20(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)
#define IP2_CHARSEQ_21(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)
#define IP2_CHARSEQ_22(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)
#define IP2_CHARSEQ_23(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)
#define IP2_CHARSEQ_24(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)
#define IP2_CHARSEQ_25(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)
#define IP2_CHARSEQ_26(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)
#define IP2_CHARSEQ_27(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)
#define IP2_CHARSEQ_28(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)
#define IP2_CHARSEQ_29(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)
#define IP2_CHARSEQ_30(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)
#define IP2_CHARSEQ_31(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)
#define IP2_CHARSEQ_32(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)
#define IP2_CHARSEQ_33(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)
#define IP2_CHARSEQ_34(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)
#define IP2_CHARSEQ_35(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)
#define IP2_CHARSEQ_36(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)
#define IP2_CHARSEQ_37(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)(c36)
#define IP2_CHARSEQ_38(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36,c37) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)(c36)(c37)
#define IP2_CHARSEQ_39(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36,c37,c38) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)(c36)(c37)(c38)
#define IP2_CHARSEQ_40(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36,c37,c38,c39) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)(c36)(c37)(c38)(c39)
#define IP2_CHARSEQ_41_OR_MORE(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36,c37,c38,c39,...) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)(c36)(c37)(c38)(c39) PP2_NAME_TOO_LONG

/* ---- PP2_SPACED: a space-separated name -> a char-seq, at compile time ----
 * PP2_SPACED(t e s t) -> (t)(e)(s)(t). Backs the in-language `var (...)` keyword
 * (see variable.h). A whitespace-separated run is the one thing a macro cannot
 * split -- there is no comma to break on -- so each character is pasted onto
 * IP2_SPACED_WRAP_, which rewrites it as `(c),CONT,`. Argument pre-expansion in the
 * re-split step turns that injected comma into a real argument boundary, handing
 * the character off as a group and leaving the tail bare for the next peel. No
 * reach-forward, no paren balancing. The sentinel IP2_SPACED_END wraps to `,STOP,`.
 *
 * A CAT-peel nests each step inside the last, so hide-sets accumulate down the
 * chain and ANY macro shared between steps is blue-painted on re-entry (the 2-name
 * A/B alternation the arbitrary engine uses only survives a flat sibling walk over
 * a pre-grouped seq, which a bare run is not). So every macro on the path is
 * distinct per depth: IP2_SPACED_<k> re-splits, _C_<k> dispatches on the marker,
 * _CONT_<k> peels the next character, _STOP_<k> returns the finished seq. The hot
 * path is three expansions per character. Characters must come from the registered
 * alphabet (a-z A-Z 0-9 _); past 40 characters yields PP2_NAME_TOO_LONG. */
#define PP2_SPACED(...) IP2_SPACED_1(,IP2_SPACED_WRAP_##__VA_ARGS__ IP2_SPACED_END)

#define IP2_SPACED_1(acc,rest) IP2_SPACED_C_1(acc,rest)
#define IP2_SPACED_C_1(acc,head,marker,...) IP2_SPACED_##marker##_1(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_1(acc,head,...) acc
#define IP2_SPACED_CONT_1(acc,head,...) IP2_SPACED_2(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_2(acc,rest) IP2_SPACED_C_2(acc,rest)
#define IP2_SPACED_C_2(acc,head,marker,...) IP2_SPACED_##marker##_2(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_2(acc,head,...) acc
#define IP2_SPACED_CONT_2(acc,head,...) IP2_SPACED_3(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_3(acc,rest) IP2_SPACED_C_3(acc,rest)
#define IP2_SPACED_C_3(acc,head,marker,...) IP2_SPACED_##marker##_3(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_3(acc,head,...) acc
#define IP2_SPACED_CONT_3(acc,head,...) IP2_SPACED_4(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_4(acc,rest) IP2_SPACED_C_4(acc,rest)
#define IP2_SPACED_C_4(acc,head,marker,...) IP2_SPACED_##marker##_4(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_4(acc,head,...) acc
#define IP2_SPACED_CONT_4(acc,head,...) IP2_SPACED_5(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_5(acc,rest) IP2_SPACED_C_5(acc,rest)
#define IP2_SPACED_C_5(acc,head,marker,...) IP2_SPACED_##marker##_5(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_5(acc,head,...) acc
#define IP2_SPACED_CONT_5(acc,head,...) IP2_SPACED_6(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_6(acc,rest) IP2_SPACED_C_6(acc,rest)
#define IP2_SPACED_C_6(acc,head,marker,...) IP2_SPACED_##marker##_6(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_6(acc,head,...) acc
#define IP2_SPACED_CONT_6(acc,head,...) IP2_SPACED_7(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_7(acc,rest) IP2_SPACED_C_7(acc,rest)
#define IP2_SPACED_C_7(acc,head,marker,...) IP2_SPACED_##marker##_7(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_7(acc,head,...) acc
#define IP2_SPACED_CONT_7(acc,head,...) IP2_SPACED_8(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_8(acc,rest) IP2_SPACED_C_8(acc,rest)
#define IP2_SPACED_C_8(acc,head,marker,...) IP2_SPACED_##marker##_8(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_8(acc,head,...) acc
#define IP2_SPACED_CONT_8(acc,head,...) IP2_SPACED_9(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_9(acc,rest) IP2_SPACED_C_9(acc,rest)
#define IP2_SPACED_C_9(acc,head,marker,...) IP2_SPACED_##marker##_9(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_9(acc,head,...) acc
#define IP2_SPACED_CONT_9(acc,head,...) IP2_SPACED_10(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_10(acc,rest) IP2_SPACED_C_10(acc,rest)
#define IP2_SPACED_C_10(acc,head,marker,...) IP2_SPACED_##marker##_10(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_10(acc,head,...) acc
#define IP2_SPACED_CONT_10(acc,head,...) IP2_SPACED_11(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_11(acc,rest) IP2_SPACED_C_11(acc,rest)
#define IP2_SPACED_C_11(acc,head,marker,...) IP2_SPACED_##marker##_11(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_11(acc,head,...) acc
#define IP2_SPACED_CONT_11(acc,head,...) IP2_SPACED_12(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_12(acc,rest) IP2_SPACED_C_12(acc,rest)
#define IP2_SPACED_C_12(acc,head,marker,...) IP2_SPACED_##marker##_12(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_12(acc,head,...) acc
#define IP2_SPACED_CONT_12(acc,head,...) IP2_SPACED_13(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_13(acc,rest) IP2_SPACED_C_13(acc,rest)
#define IP2_SPACED_C_13(acc,head,marker,...) IP2_SPACED_##marker##_13(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_13(acc,head,...) acc
#define IP2_SPACED_CONT_13(acc,head,...) IP2_SPACED_14(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_14(acc,rest) IP2_SPACED_C_14(acc,rest)
#define IP2_SPACED_C_14(acc,head,marker,...) IP2_SPACED_##marker##_14(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_14(acc,head,...) acc
#define IP2_SPACED_CONT_14(acc,head,...) IP2_SPACED_15(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_15(acc,rest) IP2_SPACED_C_15(acc,rest)
#define IP2_SPACED_C_15(acc,head,marker,...) IP2_SPACED_##marker##_15(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_15(acc,head,...) acc
#define IP2_SPACED_CONT_15(acc,head,...) IP2_SPACED_16(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_16(acc,rest) IP2_SPACED_C_16(acc,rest)
#define IP2_SPACED_C_16(acc,head,marker,...) IP2_SPACED_##marker##_16(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_16(acc,head,...) acc
#define IP2_SPACED_CONT_16(acc,head,...) IP2_SPACED_17(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_17(acc,rest) IP2_SPACED_C_17(acc,rest)
#define IP2_SPACED_C_17(acc,head,marker,...) IP2_SPACED_##marker##_17(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_17(acc,head,...) acc
#define IP2_SPACED_CONT_17(acc,head,...) IP2_SPACED_18(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_18(acc,rest) IP2_SPACED_C_18(acc,rest)
#define IP2_SPACED_C_18(acc,head,marker,...) IP2_SPACED_##marker##_18(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_18(acc,head,...) acc
#define IP2_SPACED_CONT_18(acc,head,...) IP2_SPACED_19(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_19(acc,rest) IP2_SPACED_C_19(acc,rest)
#define IP2_SPACED_C_19(acc,head,marker,...) IP2_SPACED_##marker##_19(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_19(acc,head,...) acc
#define IP2_SPACED_CONT_19(acc,head,...) IP2_SPACED_20(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_20(acc,rest) IP2_SPACED_C_20(acc,rest)
#define IP2_SPACED_C_20(acc,head,marker,...) IP2_SPACED_##marker##_20(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_20(acc,head,...) acc
#define IP2_SPACED_CONT_20(acc,head,...) IP2_SPACED_21(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_21(acc,rest) IP2_SPACED_C_21(acc,rest)
#define IP2_SPACED_C_21(acc,head,marker,...) IP2_SPACED_##marker##_21(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_21(acc,head,...) acc
#define IP2_SPACED_CONT_21(acc,head,...) IP2_SPACED_22(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_22(acc,rest) IP2_SPACED_C_22(acc,rest)
#define IP2_SPACED_C_22(acc,head,marker,...) IP2_SPACED_##marker##_22(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_22(acc,head,...) acc
#define IP2_SPACED_CONT_22(acc,head,...) IP2_SPACED_23(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_23(acc,rest) IP2_SPACED_C_23(acc,rest)
#define IP2_SPACED_C_23(acc,head,marker,...) IP2_SPACED_##marker##_23(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_23(acc,head,...) acc
#define IP2_SPACED_CONT_23(acc,head,...) IP2_SPACED_24(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_24(acc,rest) IP2_SPACED_C_24(acc,rest)
#define IP2_SPACED_C_24(acc,head,marker,...) IP2_SPACED_##marker##_24(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_24(acc,head,...) acc
#define IP2_SPACED_CONT_24(acc,head,...) IP2_SPACED_25(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_25(acc,rest) IP2_SPACED_C_25(acc,rest)
#define IP2_SPACED_C_25(acc,head,marker,...) IP2_SPACED_##marker##_25(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_25(acc,head,...) acc
#define IP2_SPACED_CONT_25(acc,head,...) IP2_SPACED_26(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_26(acc,rest) IP2_SPACED_C_26(acc,rest)
#define IP2_SPACED_C_26(acc,head,marker,...) IP2_SPACED_##marker##_26(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_26(acc,head,...) acc
#define IP2_SPACED_CONT_26(acc,head,...) IP2_SPACED_27(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_27(acc,rest) IP2_SPACED_C_27(acc,rest)
#define IP2_SPACED_C_27(acc,head,marker,...) IP2_SPACED_##marker##_27(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_27(acc,head,...) acc
#define IP2_SPACED_CONT_27(acc,head,...) IP2_SPACED_28(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_28(acc,rest) IP2_SPACED_C_28(acc,rest)
#define IP2_SPACED_C_28(acc,head,marker,...) IP2_SPACED_##marker##_28(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_28(acc,head,...) acc
#define IP2_SPACED_CONT_28(acc,head,...) IP2_SPACED_29(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_29(acc,rest) IP2_SPACED_C_29(acc,rest)
#define IP2_SPACED_C_29(acc,head,marker,...) IP2_SPACED_##marker##_29(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_29(acc,head,...) acc
#define IP2_SPACED_CONT_29(acc,head,...) IP2_SPACED_30(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_30(acc,rest) IP2_SPACED_C_30(acc,rest)
#define IP2_SPACED_C_30(acc,head,marker,...) IP2_SPACED_##marker##_30(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_30(acc,head,...) acc
#define IP2_SPACED_CONT_30(acc,head,...) IP2_SPACED_31(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_31(acc,rest) IP2_SPACED_C_31(acc,rest)
#define IP2_SPACED_C_31(acc,head,marker,...) IP2_SPACED_##marker##_31(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_31(acc,head,...) acc
#define IP2_SPACED_CONT_31(acc,head,...) IP2_SPACED_32(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_32(acc,rest) IP2_SPACED_C_32(acc,rest)
#define IP2_SPACED_C_32(acc,head,marker,...) IP2_SPACED_##marker##_32(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_32(acc,head,...) acc
#define IP2_SPACED_CONT_32(acc,head,...) IP2_SPACED_33(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_33(acc,rest) IP2_SPACED_C_33(acc,rest)
#define IP2_SPACED_C_33(acc,head,marker,...) IP2_SPACED_##marker##_33(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_33(acc,head,...) acc
#define IP2_SPACED_CONT_33(acc,head,...) IP2_SPACED_34(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_34(acc,rest) IP2_SPACED_C_34(acc,rest)
#define IP2_SPACED_C_34(acc,head,marker,...) IP2_SPACED_##marker##_34(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_34(acc,head,...) acc
#define IP2_SPACED_CONT_34(acc,head,...) IP2_SPACED_35(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_35(acc,rest) IP2_SPACED_C_35(acc,rest)
#define IP2_SPACED_C_35(acc,head,marker,...) IP2_SPACED_##marker##_35(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_35(acc,head,...) acc
#define IP2_SPACED_CONT_35(acc,head,...) IP2_SPACED_36(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_36(acc,rest) IP2_SPACED_C_36(acc,rest)
#define IP2_SPACED_C_36(acc,head,marker,...) IP2_SPACED_##marker##_36(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_36(acc,head,...) acc
#define IP2_SPACED_CONT_36(acc,head,...) IP2_SPACED_37(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_37(acc,rest) IP2_SPACED_C_37(acc,rest)
#define IP2_SPACED_C_37(acc,head,marker,...) IP2_SPACED_##marker##_37(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_37(acc,head,...) acc
#define IP2_SPACED_CONT_37(acc,head,...) IP2_SPACED_38(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_38(acc,rest) IP2_SPACED_C_38(acc,rest)
#define IP2_SPACED_C_38(acc,head,marker,...) IP2_SPACED_##marker##_38(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_38(acc,head,...) acc
#define IP2_SPACED_CONT_38(acc,head,...) IP2_SPACED_39(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_39(acc,rest) IP2_SPACED_C_39(acc,rest)
#define IP2_SPACED_C_39(acc,head,marker,...) IP2_SPACED_##marker##_39(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_39(acc,head,...) acc
#define IP2_SPACED_CONT_39(acc,head,...) IP2_SPACED_40(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_40(acc,rest) IP2_SPACED_C_40(acc,rest)
#define IP2_SPACED_C_40(acc,head,marker,...) IP2_SPACED_##marker##_40(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_40(acc,head,...) acc
#define IP2_SPACED_CONT_40(acc,head,...) IP2_SPACED_41(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_41(acc,rest) IP2_SPACED_C_41(acc,rest)
#define IP2_SPACED_C_41(acc,head,marker,...) IP2_SPACED_##marker##_41(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_41(acc,head,...) acc
#define IP2_SPACED_CONT_41(acc,head,...) PP2_NAME_TOO_LONG

#define IP2_SPACED_WRAP_a (a),CONT,
#define IP2_SPACED_WRAP_b (b),CONT,
#define IP2_SPACED_WRAP_c (c),CONT,
#define IP2_SPACED_WRAP_d (d),CONT,
#define IP2_SPACED_WRAP_e (e),CONT,
#define IP2_SPACED_WRAP_f (f),CONT,
#define IP2_SPACED_WRAP_g (g),CONT,
#define IP2_SPACED_WRAP_h (h),CONT,
#define IP2_SPACED_WRAP_i (i),CONT,
#define IP2_SPACED_WRAP_j (j),CONT,
#define IP2_SPACED_WRAP_k (k),CONT,
#define IP2_SPACED_WRAP_l (l),CONT,
#define IP2_SPACED_WRAP_m (m),CONT,
#define IP2_SPACED_WRAP_n (n),CONT,
#define IP2_SPACED_WRAP_o (o),CONT,
#define IP2_SPACED_WRAP_p (p),CONT,
#define IP2_SPACED_WRAP_q (q),CONT,
#define IP2_SPACED_WRAP_r (r),CONT,
#define IP2_SPACED_WRAP_s (s),CONT,
#define IP2_SPACED_WRAP_t (t),CONT,
#define IP2_SPACED_WRAP_u (u),CONT,
#define IP2_SPACED_WRAP_v (v),CONT,
#define IP2_SPACED_WRAP_w (w),CONT,
#define IP2_SPACED_WRAP_x (x),CONT,
#define IP2_SPACED_WRAP_y (y),CONT,
#define IP2_SPACED_WRAP_z (z),CONT,
#define IP2_SPACED_WRAP_A (A),CONT,
#define IP2_SPACED_WRAP_B (B),CONT,
#define IP2_SPACED_WRAP_C (C),CONT,
#define IP2_SPACED_WRAP_D (D),CONT,
#define IP2_SPACED_WRAP_E (E),CONT,
#define IP2_SPACED_WRAP_F (F),CONT,
#define IP2_SPACED_WRAP_G (G),CONT,
#define IP2_SPACED_WRAP_H (H),CONT,
#define IP2_SPACED_WRAP_I (I),CONT,
#define IP2_SPACED_WRAP_J (J),CONT,
#define IP2_SPACED_WRAP_K (K),CONT,
#define IP2_SPACED_WRAP_L (L),CONT,
#define IP2_SPACED_WRAP_M (M),CONT,
#define IP2_SPACED_WRAP_N (N),CONT,
#define IP2_SPACED_WRAP_O (O),CONT,
#define IP2_SPACED_WRAP_P (P),CONT,
#define IP2_SPACED_WRAP_Q (Q),CONT,
#define IP2_SPACED_WRAP_R (R),CONT,
#define IP2_SPACED_WRAP_S (S),CONT,
#define IP2_SPACED_WRAP_T (T),CONT,
#define IP2_SPACED_WRAP_U (U),CONT,
#define IP2_SPACED_WRAP_V (V),CONT,
#define IP2_SPACED_WRAP_W (W),CONT,
#define IP2_SPACED_WRAP_X (X),CONT,
#define IP2_SPACED_WRAP_Y (Y),CONT,
#define IP2_SPACED_WRAP_Z (Z),CONT,
#define IP2_SPACED_WRAP_0 (0),CONT,
#define IP2_SPACED_WRAP_1 (1),CONT,
#define IP2_SPACED_WRAP_2 (2),CONT,
#define IP2_SPACED_WRAP_3 (3),CONT,
#define IP2_SPACED_WRAP_4 (4),CONT,
#define IP2_SPACED_WRAP_5 (5),CONT,
#define IP2_SPACED_WRAP_6 (6),CONT,
#define IP2_SPACED_WRAP_7 (7),CONT,
#define IP2_SPACED_WRAP_8 (8),CONT,
#define IP2_SPACED_WRAP_9 (9),CONT,
#define IP2_SPACED_WRAP__ (_),CONT,
#define IP2_SPACED_WRAP_IP2_SPACED_END ,STOP,


#endif

// ******************** From: nil.h
/** @file */
#ifndef PP2_LANGUAGE_BASIC_NIL_H
#define PP2_LANGUAGE_BASIC_NIL_H

/* The Nil object and the instruction that loads it, with no dependencies, so the
 * statements that answer with Nil (print, assignment, if, loops) can reach it
 * without dragging in the whole type. The type itself, its methods, and the `nil`
 * literal live in language/types/nil.h. */

#define PP2_LANGUAGE_NIL (,Nil,)

/* Set r0 to nil and carry on. Unlike 8PP2_LOAD_CONST this eats no operand and
 * names no following instruction, so it is safe to append after an instruction
 * that has already consumed the rest of its stream (8PP2_EMIT_LITERAL). */
#define PP2_INSN_8PP2_LANGUAGE_LOAD_NIL(P,r0,r1,r2,...) \
        (,/*r0=*/PP2_LANGUAGE_NIL,P##r1,P##r2,P##__VA_ARGS__)

#endif


// ******************** From: load.h
/** @file */
#ifndef PP2_MACHINE_STACK_LOAD_H
#define PP2_MACHINE_STACK_LOAD_H


// ******************** From: frame_walk.h
/** @file */
#ifndef PP2_MACHINE_STACK_DETAIL_FRAME_WALK_H
#define PP2_MACHINE_STACK_DETAIL_FRAME_WALK_H


// ******************** From: is_edible.h
/** @file */
#ifndef PP2_PRIMITIVE_DETECTION_IS_EDIBLE_H
#define PP2_PRIMITIVE_DETECTION_IS_EDIBLE_H


// ******************** From: test.h
/** @file */
#ifndef PP2_PRIMITIVE_CONTROL_TEST_H
#define PP2_PRIMITIVE_CONTROL_TEST_H


/**
* Detection primitive: selects `P##c` when `x` expands to two commas (three
* fields) and `P##a` otherwise. Detection macros arrange for `x` to be `,,`
* exactly when the tested property holds, so this collapses a probe into a
* branch. See \link PP2_IS_EDIBLE \endlink.
*/
#define PP2_TEST(P,x,c,a) PP2_TUPLE_AT_3(,x,P##c,,P##a,)

#endif

// ******************** From: ifp.h
/** @file */
#ifndef PP2_PRIMITIVE_CONTROL_IFP_H
#define PP2_PRIMITIVE_CONTROL_IFP_H


/* Three-argument "if with paste prefix": the selectors returned by the
 * detection primitives take a paste-prefix P, a true-branch c, and an else
 * branch, yielding P##c or P##else. This is the convention the arbitrary
 * arithmetic walks rely on to emit either a kept digit (P##(digit)) or a
 * continuation co-routine (P##next) from a single predicate call. It is
 * deliberately separate from the two-argument \link PP2_IF \endlink used
 * elsewhere in the primitive library. */

#define PP2_IFP(c) PP2_PRIMITIVE_CAT(PP2_IFP_,c)
#define PP2_IFP_(P,c,...) P##c
#define PP2_IFP_0(P,c,...) P##__VA_ARGS__
#define PP2_IFP_1(P,c,...) P##c

#define PP2_IFP_NOT(c) PP2_PRIMITIVE_CAT(PP2_IFP_NOT_,c)
#define PP2_IFP_NOT_(P,c,...) P##__VA_ARGS__
#define PP2_IFP_NOT_0(P,c,...) P##c
#define PP2_IFP_NOT_1(P,c,...) P##__VA_ARGS__

#endif

/**
* Yields a 3-arg paste-selector (see \link PP2_IFP \endlink): the true selector
* when `x##P` is "edible" (a parenthesised group, so that PP2_IS_EDIBLE_TEST
* placed before it fires and expands to `,,`), and the false selector otherwise.
* Used as `PP2_IS_EDIBLE(,x)(P,then,else)`.
*/
#define PP2_IS_EDIBLE(P,x) PP2_TEST(PP2_IFP_,PP2_IS_EDIBLE_TEST x##P,,0)
#define PP2_ISNT_EDIBLE(P,x) PP2_TEST(PP2_IFP_,PP2_IS_EDIBLE_TEST x##P,0,)

#define PP2_IS_EDIBLE_TEST(...) ,,

#endif

// ******************** From: chars_eq.h
/** @file */
#ifndef PP2_PRIMITIVE_STRING_CHARS_EQ_H
#define PP2_PRIMITIVE_STRING_CHARS_EQ_H


// ******************** From: core.h
/** @file */ 
#ifndef PP2_PRIMITIVE_CORE_H
#define PP2_PRIMITIVE_CORE_H

/**
* Substitutes all of the provided macro arguments into the macro replacement list without changing them.
*
* This is typically used to force an additional scan over the tokens in the macro arguments,
* allowing additional macro expansions to take place if any are legal to perform.
* This only differs from \link PP2_OPEN \endlink in its intended use, as demonstrated:
* \code{.c}
* #define FOO(x) PP2_SCAN(x)
* #define BAR 123
* FOO(BAR PP2_BLOCK ()) // 123
*
* // compared to...
*
* #define FOO(x) PP2_OPEN x
* FOO((1,2,3)) // 1,2,3
* \endcode
*
* @param ... the token sequence to scan
*/
#define PP2_SCAN(...) __VA_ARGS__

/**
* Substitutes no tokens into the macro replacmeent list, effectively advancing the macro evaluator ahead
* by one token and performing a no-op.
*/
#define PP2_BLOCK

#endif

// ******************** From: indirect.h
/** @file */
#ifndef PP2_PRIMITIVE_FACILITIES_INDIRECT_H
#define PP2_PRIMITIVE_FACILITIES_INDIRECT_H


/**
* Re-emits a chosen macro applied to a digit `n`, one rescan later. Used by the
* arbitrary-precision comparison walk to hand a running result to the next
* stage without it collapsing prematurely.
*/
#define PP2_INDIRECT(n) PP2_PRIMITIVE_CAT(PP2_INDIRECT_, n)

#define PP2_INDIRECT_0(m) m(0)
#define PP2_INDIRECT_1(m) m(1)
#define PP2_INDIRECT_2(m) m(2)
#define PP2_INDIRECT_3(m) m(3)
#define PP2_INDIRECT_4(m) m(4)
#define PP2_INDIRECT_5(m) m(5)
#define PP2_INDIRECT_6(m) m(6)
#define PP2_INDIRECT_7(m) m(7)
#define PP2_INDIRECT_8(m) m(8)
#define PP2_INDIRECT_9(m) m(9)

#endif

// ******************** From: char.h
/** @file */
#ifndef PP2_PRIMITIVE_STRING_CHAR_H
#define PP2_PRIMITIVE_STRING_CHAR_H


/**
* Equality of two single character tokens, yielding 1 or 0.
*
* This is \link PP2_SYMBOL_EQ \endlink specialised to a private character
* alphabet: each admissible character is registered once as
* `PP2_CHAR_TAG_<c>(...) __VA_ARGS__`, and equality is the same blue-paint
* identity test. `ta (tb) (0,1)` yields `tb` painted (arity 1) when the two
* characters match and the trailing `(0,1)` otherwise, so the arity of the
* result is the answer.
*
* Both characters must be drawn from the registered alphabet (the ASCII
* identifier characters: `a`-`z`, `A`-`Z`, `0`-`9` and `_`). An unregistered
* character expands to nothing, which reads as equal, so only ever call this on
* alphabet characters.
*/
#define PP2_CHAR_EQ(a,b) IP2_CHAR_EQ_I(PP2_CHAR_TAG_##a,PP2_CHAR_TAG_##b)
#define IP2_CHAR_EQ_I(ta,tb) IP2_CHAR_EQ_II(ta (tb) (0,1))
#define IP2_CHAR_EQ_II(...) IP2_CHAR_EQ_PICK(__VA_ARGS__,0,1)
#define IP2_CHAR_EQ_PICK(_1,_2,_3,...) _3

#define PP2_CHAR_TAG_a(...) __VA_ARGS__
#define PP2_CHAR_TAG_b(...) __VA_ARGS__
#define PP2_CHAR_TAG_c(...) __VA_ARGS__
#define PP2_CHAR_TAG_d(...) __VA_ARGS__
#define PP2_CHAR_TAG_e(...) __VA_ARGS__
#define PP2_CHAR_TAG_f(...) __VA_ARGS__
#define PP2_CHAR_TAG_g(...) __VA_ARGS__
#define PP2_CHAR_TAG_h(...) __VA_ARGS__
#define PP2_CHAR_TAG_i(...) __VA_ARGS__
#define PP2_CHAR_TAG_j(...) __VA_ARGS__
#define PP2_CHAR_TAG_k(...) __VA_ARGS__
#define PP2_CHAR_TAG_l(...) __VA_ARGS__
#define PP2_CHAR_TAG_m(...) __VA_ARGS__
#define PP2_CHAR_TAG_n(...) __VA_ARGS__
#define PP2_CHAR_TAG_o(...) __VA_ARGS__
#define PP2_CHAR_TAG_p(...) __VA_ARGS__
#define PP2_CHAR_TAG_q(...) __VA_ARGS__
#define PP2_CHAR_TAG_r(...) __VA_ARGS__
#define PP2_CHAR_TAG_s(...) __VA_ARGS__
#define PP2_CHAR_TAG_t(...) __VA_ARGS__
#define PP2_CHAR_TAG_u(...) __VA_ARGS__
#define PP2_CHAR_TAG_v(...) __VA_ARGS__
#define PP2_CHAR_TAG_w(...) __VA_ARGS__
#define PP2_CHAR_TAG_x(...) __VA_ARGS__
#define PP2_CHAR_TAG_y(...) __VA_ARGS__
#define PP2_CHAR_TAG_z(...) __VA_ARGS__

#define PP2_CHAR_TAG_A(...) __VA_ARGS__
#define PP2_CHAR_TAG_B(...) __VA_ARGS__
#define PP2_CHAR_TAG_C(...) __VA_ARGS__
#define PP2_CHAR_TAG_D(...) __VA_ARGS__
#define PP2_CHAR_TAG_E(...) __VA_ARGS__
#define PP2_CHAR_TAG_F(...) __VA_ARGS__
#define PP2_CHAR_TAG_G(...) __VA_ARGS__
#define PP2_CHAR_TAG_H(...) __VA_ARGS__
#define PP2_CHAR_TAG_I(...) __VA_ARGS__
#define PP2_CHAR_TAG_J(...) __VA_ARGS__
#define PP2_CHAR_TAG_K(...) __VA_ARGS__
#define PP2_CHAR_TAG_L(...) __VA_ARGS__
#define PP2_CHAR_TAG_M(...) __VA_ARGS__
#define PP2_CHAR_TAG_N(...) __VA_ARGS__
#define PP2_CHAR_TAG_O(...) __VA_ARGS__
#define PP2_CHAR_TAG_P(...) __VA_ARGS__
#define PP2_CHAR_TAG_Q(...) __VA_ARGS__
#define PP2_CHAR_TAG_R(...) __VA_ARGS__
#define PP2_CHAR_TAG_S(...) __VA_ARGS__
#define PP2_CHAR_TAG_T(...) __VA_ARGS__
#define PP2_CHAR_TAG_U(...) __VA_ARGS__
#define PP2_CHAR_TAG_V(...) __VA_ARGS__
#define PP2_CHAR_TAG_W(...) __VA_ARGS__
#define PP2_CHAR_TAG_X(...) __VA_ARGS__
#define PP2_CHAR_TAG_Y(...) __VA_ARGS__
#define PP2_CHAR_TAG_Z(...) __VA_ARGS__

#define PP2_CHAR_TAG_0(...) __VA_ARGS__
#define PP2_CHAR_TAG_1(...) __VA_ARGS__
#define PP2_CHAR_TAG_2(...) __VA_ARGS__
#define PP2_CHAR_TAG_3(...) __VA_ARGS__
#define PP2_CHAR_TAG_4(...) __VA_ARGS__
#define PP2_CHAR_TAG_5(...) __VA_ARGS__
#define PP2_CHAR_TAG_6(...) __VA_ARGS__
#define PP2_CHAR_TAG_7(...) __VA_ARGS__
#define PP2_CHAR_TAG_8(...) __VA_ARGS__
#define PP2_CHAR_TAG_9(...) __VA_ARGS__

#define PP2_CHAR_TAG__(...) __VA_ARGS__

#endif

// ******************** From: is_shorter.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_IS_SHORTER_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_IS_SHORTER_H


// ******************** From: defer.h
/** @file */
#ifndef PP2_PRIMITIVE_BASIC_DEFER_H
#define PP2_PRIMITIVE_BASIC_DEFER_H


/**
* Emits its arguments followed by a \link PP2_BLOCK \endlink, delaying any
* function-like macro named at the tail of the arguments by one rescan: the
* trailing name and a following `()` are separated by the (empty) PP2_BLOCK, so
* the call only forms after the block is eliminated on the next scan.
*
* @param ... the token sequence to defer
*/
#define PP2_DEFER(...) __VA_ARGS__ PP2_BLOCK

#endif

// ******************** From: lparen.h
/** @file */
#ifndef PP2_PRIMITIVE_PUNCTUATION_LPAREN_H
#define PP2_PRIMITIVE_PUNCTUATION_LPAREN_H

/**
*/
#define PP2_LPAREN (

/**
* Yields an unmatched left parenthesis when called, but only after a rescan.
* Used with \link PP2_DEFER \endlink to place a `(` that must not pair eagerly
* during the sliding-window walks in the arbitrary-precision arithmetic.
*/
#define PP2_LPAREN_ID() PP2_LPAREN

#endif

// ******************** From: special.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SPECIAL_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SPECIAL_H


// ******************** From: rparen.h
/** @file */
#ifndef PP2_PRIMITIVE_PUNCTUATION_RPAREN_H
#define PP2_PRIMITIVE_PUNCTUATION_RPAREN_H

/**
*/
#define PP2_RPAREN )

#endif

/* The sliding-window engine behind every arbitrary-precision walk.
 *
 * PP2_ARBITRARY_SPECIAL(elem) selects a pass-through for a real element and an
 * eater for the sentinel 00. Walkers drive a seq (e0)(e1)... by pasting each
 * element onto an alternating A/B co-routine (dodging blue-paint), and terminate
 * when the injected (00) is reached. PP2_ARBITRARY_SPECIAL_CLOSE emits one ')'
 * per element so a walk opened with a deferred '(' per element closes exactly.
 *
 * The elements are the decimal digits for the arithmetic layer, but the engine
 * itself is value-agnostic: only the 00 sentinel is distinguished. The string
 * layer drives char seqs (t)(o)(t)(a)(l) through the same walks (FMERGE,
 * IS_SHORTER), so the identifier characters -- letters and underscore -- are
 * registered here as pass-throughs alongside the digits. A single character is
 * never the two-character token 00, so the sentinel stays unambiguous. */

#define PP2_ARBITRARY_SPECIAL(digit) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_SPECIAL_, digit)

#define PP2_ARBITRARY_SPECIAL_00(...)
#define PP2_ARBITRARY_SPECIAL_0(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_1(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_2(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_3(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_4(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_5(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_6(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_7(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_8(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_9(...) __VA_ARGS__

#define PP2_ARBITRARY_SPECIAL_a(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_b(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_c(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_d(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_e(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_f(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_g(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_h(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_i(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_j(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_k(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_l(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_m(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_n(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_o(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_p(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_q(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_r(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_s(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_t(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_u(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_v(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_w(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_x(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_y(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_z(...) __VA_ARGS__

#define PP2_ARBITRARY_SPECIAL_A(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_B(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_C(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_D(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_E(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_F(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_G(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_H(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_I(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_J(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_K(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_L(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_M(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_N(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_O(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_P(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_Q(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_R(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_S(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_T(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_U(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_V(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_W(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_X(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_Y(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_Z(...) __VA_ARGS__

#define PP2_ARBITRARY_SPECIAL__(...) __VA_ARGS__

#define PP2_ARBITRARY_SPECIAL_CLOSE(x) PP2_ARBITRARY_SPECIAL_CLOSE_A x(00)

#define PP2_ARBITRARY_SPECIAL_CLOSE_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_RPAREN PP2_ARBITRARY_SPECIAL_CLOSE_B)
#define PP2_ARBITRARY_SPECIAL_CLOSE_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_RPAREN PP2_ARBITRARY_SPECIAL_CLOSE_A)

#endif

/* Yields a selector: true when seq x is strictly shorter than seq y. Walks both
 * in lockstep (x drives, y is consumed) and detects whether y still has digits
 * left when x runs out. Use as PP2_ARBITRARY_IS_SHORTER(x,y)(P,then,else). */

#define PP2_ARBITRARY_IS_SHORTER(x, y) PP2_ARBITRARY_IS_SHORTER_II(PP2_SCAN(PP2_ARBITRARY_IS_SHORTER_A x(00) y ~ PP2_ARBITRARY_SPECIAL_CLOSE(x)))
#define PP2_ARBITRARY_IS_SHORTER_II(...) PP2_IS_EDIBLE(,__VA_ARGS__)

#define PP2_ARBITRARY_IS_SHORTER_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_IS_SHORTER_I PP2_DEFER(PP2_LPAREN_ID)() PP2_ARBITRARY_IS_SHORTER_B)
#define PP2_ARBITRARY_IS_SHORTER_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_IS_SHORTER_I PP2_DEFER(PP2_LPAREN_ID)() PP2_ARBITRARY_IS_SHORTER_A)
#define PP2_ARBITRARY_IS_SHORTER_I(y) PP2_EAT y

#endif

// ******************** From: merge.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_MERGE_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_MERGE_H


// ******************** From: tail.h
#ifndef PP2_PRIMITIVE_SEQ_TAIL_H
#define PP2_PRIMITIVE_SEQ_TAIL_H


#define PP2_SEQ_TAIL(seq) IP2_SEQ_TAIL_I(PP2_SEQ_SPLIT_HEAD seq)
#define IP2_SEQ_TAIL_I(x) PP2_TUPLE_AT_1(,x)

#endif

// ******************** From: reverse.h
/** @file */
#ifndef PP2_PRIMITIVE_SEQ_REVERSE_H
#define PP2_PRIMITIVE_SEQ_REVERSE_H


// ******************** From: binary_transform.h
/** @file */
#ifndef PP2_PRIMITIVE_SEQ_BINARY_TRANSFORM_H
#define PP2_PRIMITIVE_SEQ_BINARY_TRANSFORM_H


/* Turn a seq (a)(b)(c) into the "binary" chain (REM,a)()(REM,b)()(REM,c)()
 * consumed by the reversal walk. The A/B co-routines alternate to dodge
 * blue-paint; the trailing co-routine name is pasted to 0 by the enclosing CAT
 * to reach an empty terminator. */

#define PP2_SEQ_BINARY_TRANSFORM(seq,...) PP2_CAT(PP2_SEQ_BINARY_TRANSFORM_A seq,0)(PP2_EAT,__VA_ARGS__)

#define PP2_SEQ_BINARY_TRANSFORM_A(...) (PP2_OPEN,__VA_ARGS__)()PP2_SEQ_BINARY_TRANSFORM_B
#define PP2_SEQ_BINARY_TRANSFORM_B(...) (PP2_OPEN,__VA_ARGS__)()PP2_SEQ_BINARY_TRANSFORM_A

#define PP2_SEQ_BINARY_TRANSFORM_A0
#define PP2_SEQ_BINARY_TRANSFORM_B0

#endif

// ******************** From: close.h
/** @file */
#ifndef PP2_PRIMITIVE_SEQ_DETAIL_CLOSE_H
#define PP2_PRIMITIVE_SEQ_DETAIL_CLOSE_H


/* Emits the trailing ')' that closes a binary-chain walk (one per element,
 * driven by the chain itself). */

#define PP2_SEQ_CLOSE(bin) PP2_SEQ_CLOSE_I bin

#define PP2_SEQ_CLOSE_I_ID() PP2_SEQ_CLOSE_I

#define PP2_SEQ_CLOSE_I(K,...) K(PP2_RPAREN PP2_SEQ_CLOSE_I_ID)

#endif

/* Reverse a seq: (a)(b)(c) -> (c)(b)(a). Drives the binary chain, prepending
 * each element to a running result via the deferred-open-paren idiom. */

#define PP2_SEQ_REVERSE(seq) PP2_SCAN(PP2_SEQ_REVERSE_I(PP2_SEQ_BINARY_TRANSFORM(seq,~)))

#define PP2_SEQ_REVERSE_I(bin) PP2_SEQ_REVERSE_II bin PP2_SEQ_CLOSE(bin)
#define PP2_SEQ_REVERSE_II(K,...) K(PP2_SEQ_REVERSE_III PP2_DEFER(PP2_LPAREN_ID)()(__VA_ARGS__),PP2_SEQ_REVERSE_II_ID)

#define PP2_SEQ_REVERSE_II_ID() PP2_SEQ_REVERSE_II
#define PP2_SEQ_REVERSE_III(x,res) res x

#endif

// ******************** From: swap.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SWAP_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SWAP_H

/* Order a digit pair for a merge op. When the shorter operand was on the left,
 * SWAP restores original operand order to the op; NO_SWAP keeps it. */

#define PP2_ARBITRARY_SWAP(a,...) (__VA_ARGS__,a)
#define PP2_ARBITRARY_NO_SWAP(a,...) (a,__VA_ARGS__)

#endif

/* Zip two digit seqs of possibly different length, applying op to each aligned
 * digit pair and padding the shorter with def. FMERGE aligns from the most
 * significant end (result MSD-first, used by comparison); RMERGE aligns from the
 * least significant end (result LSD-first, used by add/sub). The longer operand
 * drives the walk; the shorter is padded by appending (def) as it is consumed.
 * SWAP restores original op-argument order when the left operand was shorter. */

#define PP2_ARBITRARY_FMERGE(x, y, op, def) PP2_ARBITRARY_FMERGE_III(PP2_ARBITRARY_IS_SHORTER(x,y)(PP2_ARBITRARY_FMERGE_,LHS,RHS)(x,y,op,def))
#define PP2_ARBITRARY_FMERGE_LHS(x, y, op, def) PP2_SCAN(PP2_ARBITRARY_FMERGE_A y(00), PP2_SEQ_REVERSE(x), op, def, PP2_ARBITRARY_SWAP PP2_ARBITRARY_SPECIAL_CLOSE(y))
#define PP2_ARBITRARY_FMERGE_RHS(x, y, op, def) PP2_SCAN(PP2_ARBITRARY_FMERGE_A x(00), PP2_SEQ_REVERSE(y), op, def, PP2_ARBITRARY_SPECIAL_CLOSE(x))

#define PP2_ARBITRARY_FMERGE_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_FMERGE_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_FMERGE_B)
#define PP2_ARBITRARY_FMERGE_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_FMERGE_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_FMERGE_A)
#define PP2_ARBITRARY_FMERGE_I(...) PP2_ARBITRARY_FMERGE_II(__VA_ARGS__)
#define PP2_ARBITRARY_FMERGE_II(digit, res, y, op, def, swap) \
        (op)swap(digit, PP2_SEQ_HEAD(y))res, PP2_SEQ_TAIL(y(def)), op, def, swap

#define PP2_ARBITRARY_FMERGE_III(...) PP2_SCAN(PP2_EAT PP2_TUPLE_AT_0(,__VA_ARGS__))


#define PP2_ARBITRARY_RMERGE(x, y, op, def) PP2_ARBITRARY_RMERGE_III(PP2_ARBITRARY_IS_SHORTER(x,y)(PP2_ARBITRARY_RMERGE_,LHS,RHS)(x,y,op,def))
#define PP2_ARBITRARY_RMERGE_LHS(x, y, op, def) PP2_SCAN(PP2_ARBITRARY_RMERGE_A y(00) PP2_EAT, PP2_SEQ_REVERSE(x), op, def, PP2_ARBITRARY_SWAP PP2_ARBITRARY_SPECIAL_CLOSE(y))
#define PP2_ARBITRARY_RMERGE_RHS(x, y, op, def) PP2_SCAN(PP2_ARBITRARY_RMERGE_A x(00) PP2_EAT, PP2_SEQ_REVERSE(y), op, def, PP2_ARBITRARY_SPECIAL_CLOSE(x))

#define PP2_ARBITRARY_RMERGE_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_RMERGE_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_RMERGE_B)
#define PP2_ARBITRARY_RMERGE_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_RMERGE_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_RMERGE_A)
#define PP2_ARBITRARY_RMERGE_I(...) PP2_ARBITRARY_RMERGE_II(__VA_ARGS__)
#define PP2_ARBITRARY_RMERGE_II(digit, res, y, op, def, swap) \
        res(op)swap(digit, PP2_SEQ_HEAD(y)), PP2_SEQ_TAIL(y(def)), op, def, swap

#define PP2_ARBITRARY_RMERGE_III(...) PP2_TUPLE_AT_0(,__VA_ARGS__)

#endif

/* Equality of two character sequences, yielding 1 or 0. A character sequence is
 * a paren-per-character seq, (t)(o)(t)(a)(l), and the empty sequence is no
 * tokens at all. Two sequences are equal when they have the same length and
 * equal characters pairwise.
 *
 * This rides the same sliding-window engine as the arbitrary-precision layer.
 * Length is settled first with IS_SHORTER in both directions: unequal length is
 * unequal, with no content walk. When the lengths match, FMERGE zips the two
 * seqs column by column exactly as CMP does, threading a verdict: the walk
 * starts equal (state 1) and each column stays equal only while the two
 * characters match, so the first differing column drops the verdict to 0 and it
 * never recovers. The pad element FMERGE would append to a shorter operand is
 * never reached, since the walk runs only on equal-length operands. */

#define PP2_CHARS_EQ(x,y) IP2_CHARS_EQ_DISP(PP2_ARBITRARY_IS_SHORTER(x,y)(,1,0),PP2_ARBITRARY_IS_SHORTER(y,x)(,1,0),x,y)
#define IP2_CHARS_EQ_DISP(sx,sy,x,y) IP2_CHARS_EQ_DISP_I(sx,sy,x,y)
#define IP2_CHARS_EQ_DISP_I(sx,sy,x,y) IP2_CHARS_EQ_LEN_##sx##sy(x,y)
/* equal length: two empty seqs are equal; otherwise zip the characters */
#define IP2_CHARS_EQ_LEN_00(x,y) PP2_IS_EDIBLE(,x)(,IP2_CHARS_EQ_CONTENT,IP2_CHARS_EQ_BOTH_EMPTY)(x,y)
#define IP2_CHARS_EQ_BOTH_EMPTY(x,y) 1
#define IP2_CHARS_EQ_LEN_01(x,y) 0
#define IP2_CHARS_EQ_LEN_10(x,y) 0
#define IP2_CHARS_EQ_LEN_11(x,y) 0

#define IP2_CHARS_EQ_CONTENT(x,y) \
        PP2_SCAN(IP2_CHARS_EQ_M(1) PP2_ARBITRARY_FMERGE(x,y,IP2_CHARS_EQ_M,00)(IP2_CHARS_EQ_FIN))

#define IP2_CHARS_EQ_M(s) IP2_CHARS_EQ_M_##s
#define IP2_CHARS_EQ_M_0(a,b) PP2_INDIRECT(0)
#define IP2_CHARS_EQ_M_1(a,b) PP2_INDIRECT(PP2_CHAR_EQ(a,b))
#define IP2_CHARS_EQ_FIN(s) s

#endif

/* Association-list frame walks keyed by char-seq addresses.
 *
 * A frame is a seq of binding groups (,addr,tag,value)(,addr,tag,value)...,
 * newest first, where addr is a char-seq like (t)(o)(t)(a)(l). The three walks
 * -- FIND (read), FOUND (membership), STORE (update-or-prepend) -- each compare
 * the target against every binding's addr with PP2_CHARS_EQ.
 *
 * The comparison is a PP2_SCAN-driven walk (it rides the arbitrary-precision
 * sliding-window engine), and a SCAN walk cannot run inside another SCAN walk
 * without blue-painting the inner one. So the frame is NOT walked by a SCAN
 * trampoline; it is unrolled by arity, exactly as PP2_LANGUAGE_BLOCK unrolls a
 * statement block, and each per-binding PP2_CHARS_EQ is emitted as a sibling.
 * That bounds a single frame at 52 distinct locals (one scope), which is the
 * count of distinct names a scope binds, not a program-wide limit. Beyond it a
 * PP2_FRAME_TOO_MANY_LOCALS token reaches the output the way PP2_VM_FAILURE
 * does. */

#define PP2_SEQ_COMMAS(seq) PP2_REVERSE_CAT(0,IP2_SEQ_COMMAS_A seq)
#define IP2_SEQ_COMMAS_A(...) (__VA_ARGS__) IP2_SEQ_COMMAS_B
#define IP2_SEQ_COMMAS_B(...) ,(__VA_ARGS__) IP2_SEQ_COMMAS_C
#define IP2_SEQ_COMMAS_C(...) ,(__VA_ARGS__) IP2_SEQ_COMMAS_B
#define IP2_SEQ_COMMAS_A0
#define IP2_SEQ_COMMAS_B0
#define IP2_SEQ_COMMAS_C0
#define IP2_FRAME_EMPTY(...)

/* A private force-expand hop. The walks run inside load/store, which call them
 * through IP2_FX, so a shared IP2_FX here would be blue-painted and the
 * per-binding comparison would silently drop. This distinct name is never the
 * one an enclosing instruction is already expanding. */
#define IP2_FRAME_FX(f,x) IP2_##f x

/* FIND(target,frame): the value bound to target, or (8MISS) */
#define PP2_FRAME_FIND(target,frame) IP2_FRAME_FIND_PICK(IP2_FRAME_FIND_DISPATCH(target,frame))
#define IP2_FRAME_FIND_PICK(...) PP2_TUPLE_AT_1(,__VA_ARGS__,(8MISS))
#define IP2_FRAME_FIND_DISPATCH(target,frame) PP2_IS_EDIBLE(,frame)(,IP2_FRAME_FIND_SOME,IP2_FRAME_EMPTY)(target,frame)
#define IP2_FRAME_FIND_SOME(target,frame) IP2_FRAME_FIND_SEL(target,PP2_SEQ_COMMAS(frame))
#define PP2_FRAME_ONE(target,binding) IP2_FRAME_FX(FRAME_ONE_I,(,target,PP2_OPEN binding))
#define IP2_FRAME_ONE_I(P,target,e,addr,tag,value) IP2_FRAME_SELECT(PP2_CHARS_EQ(target,addr),value)
#define IP2_FRAME_SELECT(eq,value) IP2_FRAME_SELECT_I(eq,value)
#define IP2_FRAME_SELECT_I(eq,value) IP2_FRAME_SELECT_##eq(value)
#define IP2_FRAME_SELECT_1(value) ,value,
#define IP2_FRAME_SELECT_0(value)

/* FOUND(target,frame): 1 if target is bound, else 0 */
#define PP2_FRAME_FOUND(target,frame) IP2_FRAME_FOUND_TEST(IP2_FRAME_FOUND_DISPATCH(target,frame))
#define IP2_FRAME_FOUND_TEST(...) PP2_IS_EDIBLE(,__VA_ARGS__)(,1,0)
#define IP2_FRAME_FOUND_DISPATCH(target,frame) PP2_IS_EDIBLE(,frame)(,IP2_FRAME_FOUND_SOME,IP2_FRAME_EMPTY)(target,frame)
#define IP2_FRAME_FOUND_SOME(target,frame) IP2_FRAME_FOUND_SEL(target,PP2_SEQ_COMMAS(frame))
#define PP2_FRAME_FLAG(target,binding) IP2_FRAME_FX(FRAME_FLAG_I,(,target,PP2_OPEN binding))
#define IP2_FRAME_FLAG_I(P,target,e,addr,tag,value) IP2_FRAME_FLAGSEL(PP2_CHARS_EQ(target,addr))
#define IP2_FRAME_FLAGSEL(eq) IP2_FRAME_FLAGSEL_I(eq)
#define IP2_FRAME_FLAGSEL_I(eq) IP2_FRAME_FLAGSEL_##eq
#define IP2_FRAME_FLAGSEL_1 (1)
#define IP2_FRAME_FLAGSEL_0

/* STORE(target,value,frame): frame with target's value replaced in place, or the
 * new binding prepended when target is absent */
#define PP2_FRAME_STORE(target,value,frame) IP2_FRAME_STORE_DISP(PP2_FRAME_FOUND(target,frame),target,value,frame)
#define IP2_FRAME_STORE_DISP(found,target,value,frame) IP2_FRAME_STORE_DISP_I(found,target,value,frame)
#define IP2_FRAME_STORE_DISP_I(found,target,value,frame) IP2_FRAME_STORE_##found(target,value,frame)
#define IP2_FRAME_STORE_0(target,value,frame) (,target,8LOCAL,value)frame
#define IP2_FRAME_STORE_1(target,value,frame) IP2_FRAME_REWRITE_DISPATCH(target,value,frame)
#define IP2_FRAME_REWRITE_DISPATCH(target,value,frame) PP2_IS_EDIBLE(,frame)(,IP2_FRAME_REWRITE_SOME,IP2_FRAME_EMPTY)(target,value,frame)
#define IP2_FRAME_REWRITE_SOME(target,value,frame) IP2_FRAME_REWRITE_SEL(target,value,PP2_SEQ_COMMAS(frame))
#define PP2_FRAME_REW(target,value,binding) IP2_FRAME_FX(FRAME_REW_I,(,target,value,PP2_OPEN binding))
#define IP2_FRAME_REW_I(P,target,value,e,addr,tag,vv) IP2_FRAME_REW_PICK(PP2_CHARS_EQ(target,addr),value,addr,tag,vv)
#define IP2_FRAME_REW_PICK(eq,value,addr,tag,vv) IP2_FRAME_REW_PICK_I(eq,value,addr,tag,vv)
#define IP2_FRAME_REW_PICK_I(eq,value,addr,tag,vv) IP2_FRAME_REW_##eq(value,addr,tag,vv)
#define IP2_FRAME_REW_1(value,addr,tag,vv) (,addr,tag,value)
#define IP2_FRAME_REW_0(value,addr,tag,vv) (,addr,tag,vv)

#define IP2_FRAME_FIND_SEL(target,...) IP2_FRAME_FIND_OVL(target,__VA_ARGS__,PP2_COMMA_52, PP2_COMMA_51, PP2_COMMA_50, PP2_COMMA_49, PP2_COMMA_48, PP2_COMMA_47, PP2_COMMA_46, PP2_COMMA_45, PP2_COMMA_44, PP2_COMMA_43, PP2_COMMA_42, PP2_COMMA_41, PP2_COMMA_40, PP2_COMMA_39, PP2_COMMA_38, PP2_COMMA_37, PP2_COMMA_36, PP2_COMMA_35, PP2_COMMA_34, PP2_COMMA_33, PP2_COMMA_32, PP2_COMMA_31, PP2_COMMA_30, PP2_COMMA_29, PP2_COMMA_28, PP2_COMMA_27, PP2_COMMA_26, PP2_COMMA_25, PP2_COMMA_24, PP2_COMMA_23, PP2_COMMA_22, PP2_COMMA_21, PP2_COMMA_20, PP2_COMMA_19, PP2_COMMA_18, PP2_COMMA_17, PP2_COMMA_16, PP2_COMMA_15, PP2_COMMA_14, PP2_COMMA_13, PP2_COMMA_12, PP2_COMMA_11, PP2_COMMA_10, PP2_COMMA_9, PP2_COMMA_8, PP2_COMMA_7, PP2_COMMA_6, PP2_COMMA_5, PP2_COMMA_4, PP2_COMMA_3, PP2_COMMA_2, PP2_COMMA_1,)(target,__VA_ARGS__)
#define IP2_FRAME_FIND_OVL(target,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,m,...) PP2_TUPLE_AT_1(IP2_FRAME_FIND_,m,53_OR_MORE)
#define IP2_FRAME_FIND_1(target,b0) PP2_FRAME_ONE(target,b0)
#define IP2_FRAME_FIND_2(target,b0,b1) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1)
#define IP2_FRAME_FIND_3(target,b0,b1,b2) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2)
#define IP2_FRAME_FIND_4(target,b0,b1,b2,b3) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3)
#define IP2_FRAME_FIND_5(target,b0,b1,b2,b3,b4) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4)
#define IP2_FRAME_FIND_6(target,b0,b1,b2,b3,b4,b5) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5)
#define IP2_FRAME_FIND_7(target,b0,b1,b2,b3,b4,b5,b6) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6)
#define IP2_FRAME_FIND_8(target,b0,b1,b2,b3,b4,b5,b6,b7) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7)
#define IP2_FRAME_FIND_9(target,b0,b1,b2,b3,b4,b5,b6,b7,b8) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8)
#define IP2_FRAME_FIND_10(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9)
#define IP2_FRAME_FIND_11(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10)
#define IP2_FRAME_FIND_12(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11)
#define IP2_FRAME_FIND_13(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12)
#define IP2_FRAME_FIND_14(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13)
#define IP2_FRAME_FIND_15(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14)
#define IP2_FRAME_FIND_16(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15)
#define IP2_FRAME_FIND_17(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16)
#define IP2_FRAME_FIND_18(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17)
#define IP2_FRAME_FIND_19(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18)
#define IP2_FRAME_FIND_20(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19)
#define IP2_FRAME_FIND_21(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20)
#define IP2_FRAME_FIND_22(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21)
#define IP2_FRAME_FIND_23(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22)
#define IP2_FRAME_FIND_24(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23)
#define IP2_FRAME_FIND_25(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24)
#define IP2_FRAME_FIND_26(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25)
#define IP2_FRAME_FIND_27(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26)
#define IP2_FRAME_FIND_28(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27)
#define IP2_FRAME_FIND_29(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28)
#define IP2_FRAME_FIND_30(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29)
#define IP2_FRAME_FIND_31(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30)
#define IP2_FRAME_FIND_32(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31)
#define IP2_FRAME_FIND_33(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32)
#define IP2_FRAME_FIND_34(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33)
#define IP2_FRAME_FIND_35(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34)
#define IP2_FRAME_FIND_36(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35)
#define IP2_FRAME_FIND_37(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36)
#define IP2_FRAME_FIND_38(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37)
#define IP2_FRAME_FIND_39(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38)
#define IP2_FRAME_FIND_40(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39)
#define IP2_FRAME_FIND_41(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40)
#define IP2_FRAME_FIND_42(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41)
#define IP2_FRAME_FIND_43(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42)
#define IP2_FRAME_FIND_44(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42) PP2_FRAME_ONE(target,b43)
#define IP2_FRAME_FIND_45(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42) PP2_FRAME_ONE(target,b43) PP2_FRAME_ONE(target,b44)
#define IP2_FRAME_FIND_46(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42) PP2_FRAME_ONE(target,b43) PP2_FRAME_ONE(target,b44) PP2_FRAME_ONE(target,b45)
#define IP2_FRAME_FIND_47(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42) PP2_FRAME_ONE(target,b43) PP2_FRAME_ONE(target,b44) PP2_FRAME_ONE(target,b45) PP2_FRAME_ONE(target,b46)
#define IP2_FRAME_FIND_48(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42) PP2_FRAME_ONE(target,b43) PP2_FRAME_ONE(target,b44) PP2_FRAME_ONE(target,b45) PP2_FRAME_ONE(target,b46) PP2_FRAME_ONE(target,b47)
#define IP2_FRAME_FIND_49(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42) PP2_FRAME_ONE(target,b43) PP2_FRAME_ONE(target,b44) PP2_FRAME_ONE(target,b45) PP2_FRAME_ONE(target,b46) PP2_FRAME_ONE(target,b47) PP2_FRAME_ONE(target,b48)
#define IP2_FRAME_FIND_50(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42) PP2_FRAME_ONE(target,b43) PP2_FRAME_ONE(target,b44) PP2_FRAME_ONE(target,b45) PP2_FRAME_ONE(target,b46) PP2_FRAME_ONE(target,b47) PP2_FRAME_ONE(target,b48) PP2_FRAME_ONE(target,b49)
#define IP2_FRAME_FIND_51(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42) PP2_FRAME_ONE(target,b43) PP2_FRAME_ONE(target,b44) PP2_FRAME_ONE(target,b45) PP2_FRAME_ONE(target,b46) PP2_FRAME_ONE(target,b47) PP2_FRAME_ONE(target,b48) PP2_FRAME_ONE(target,b49) PP2_FRAME_ONE(target,b50)
#define IP2_FRAME_FIND_52(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42) PP2_FRAME_ONE(target,b43) PP2_FRAME_ONE(target,b44) PP2_FRAME_ONE(target,b45) PP2_FRAME_ONE(target,b46) PP2_FRAME_ONE(target,b47) PP2_FRAME_ONE(target,b48) PP2_FRAME_ONE(target,b49) PP2_FRAME_ONE(target,b50) PP2_FRAME_ONE(target,b51)
#define IP2_FRAME_FIND_53_OR_MORE(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,...) PP2_FRAME_ONE(target,b0) PP2_FRAME_ONE(target,b1) PP2_FRAME_ONE(target,b2) PP2_FRAME_ONE(target,b3) PP2_FRAME_ONE(target,b4) PP2_FRAME_ONE(target,b5) PP2_FRAME_ONE(target,b6) PP2_FRAME_ONE(target,b7) PP2_FRAME_ONE(target,b8) PP2_FRAME_ONE(target,b9) PP2_FRAME_ONE(target,b10) PP2_FRAME_ONE(target,b11) PP2_FRAME_ONE(target,b12) PP2_FRAME_ONE(target,b13) PP2_FRAME_ONE(target,b14) PP2_FRAME_ONE(target,b15) PP2_FRAME_ONE(target,b16) PP2_FRAME_ONE(target,b17) PP2_FRAME_ONE(target,b18) PP2_FRAME_ONE(target,b19) PP2_FRAME_ONE(target,b20) PP2_FRAME_ONE(target,b21) PP2_FRAME_ONE(target,b22) PP2_FRAME_ONE(target,b23) PP2_FRAME_ONE(target,b24) PP2_FRAME_ONE(target,b25) PP2_FRAME_ONE(target,b26) PP2_FRAME_ONE(target,b27) PP2_FRAME_ONE(target,b28) PP2_FRAME_ONE(target,b29) PP2_FRAME_ONE(target,b30) PP2_FRAME_ONE(target,b31) PP2_FRAME_ONE(target,b32) PP2_FRAME_ONE(target,b33) PP2_FRAME_ONE(target,b34) PP2_FRAME_ONE(target,b35) PP2_FRAME_ONE(target,b36) PP2_FRAME_ONE(target,b37) PP2_FRAME_ONE(target,b38) PP2_FRAME_ONE(target,b39) PP2_FRAME_ONE(target,b40) PP2_FRAME_ONE(target,b41) PP2_FRAME_ONE(target,b42) PP2_FRAME_ONE(target,b43) PP2_FRAME_ONE(target,b44) PP2_FRAME_ONE(target,b45) PP2_FRAME_ONE(target,b46) PP2_FRAME_ONE(target,b47) PP2_FRAME_ONE(target,b48) PP2_FRAME_ONE(target,b49) PP2_FRAME_ONE(target,b50) PP2_FRAME_ONE(target,b51) PP2_FRAME_TOO_MANY_LOCALS
#define IP2_FRAME_FOUND_SEL(target,...) IP2_FRAME_FOUND_OVL(target,__VA_ARGS__,PP2_COMMA_52, PP2_COMMA_51, PP2_COMMA_50, PP2_COMMA_49, PP2_COMMA_48, PP2_COMMA_47, PP2_COMMA_46, PP2_COMMA_45, PP2_COMMA_44, PP2_COMMA_43, PP2_COMMA_42, PP2_COMMA_41, PP2_COMMA_40, PP2_COMMA_39, PP2_COMMA_38, PP2_COMMA_37, PP2_COMMA_36, PP2_COMMA_35, PP2_COMMA_34, PP2_COMMA_33, PP2_COMMA_32, PP2_COMMA_31, PP2_COMMA_30, PP2_COMMA_29, PP2_COMMA_28, PP2_COMMA_27, PP2_COMMA_26, PP2_COMMA_25, PP2_COMMA_24, PP2_COMMA_23, PP2_COMMA_22, PP2_COMMA_21, PP2_COMMA_20, PP2_COMMA_19, PP2_COMMA_18, PP2_COMMA_17, PP2_COMMA_16, PP2_COMMA_15, PP2_COMMA_14, PP2_COMMA_13, PP2_COMMA_12, PP2_COMMA_11, PP2_COMMA_10, PP2_COMMA_9, PP2_COMMA_8, PP2_COMMA_7, PP2_COMMA_6, PP2_COMMA_5, PP2_COMMA_4, PP2_COMMA_3, PP2_COMMA_2, PP2_COMMA_1,)(target,__VA_ARGS__)
#define IP2_FRAME_FOUND_OVL(target,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,m,...) PP2_TUPLE_AT_1(IP2_FRAME_FOUND_,m,53_OR_MORE)
#define IP2_FRAME_FOUND_1(target,b0) PP2_FRAME_FLAG(target,b0)
#define IP2_FRAME_FOUND_2(target,b0,b1) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1)
#define IP2_FRAME_FOUND_3(target,b0,b1,b2) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2)
#define IP2_FRAME_FOUND_4(target,b0,b1,b2,b3) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3)
#define IP2_FRAME_FOUND_5(target,b0,b1,b2,b3,b4) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4)
#define IP2_FRAME_FOUND_6(target,b0,b1,b2,b3,b4,b5) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5)
#define IP2_FRAME_FOUND_7(target,b0,b1,b2,b3,b4,b5,b6) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6)
#define IP2_FRAME_FOUND_8(target,b0,b1,b2,b3,b4,b5,b6,b7) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7)
#define IP2_FRAME_FOUND_9(target,b0,b1,b2,b3,b4,b5,b6,b7,b8) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8)
#define IP2_FRAME_FOUND_10(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9)
#define IP2_FRAME_FOUND_11(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10)
#define IP2_FRAME_FOUND_12(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11)
#define IP2_FRAME_FOUND_13(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12)
#define IP2_FRAME_FOUND_14(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13)
#define IP2_FRAME_FOUND_15(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14)
#define IP2_FRAME_FOUND_16(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15)
#define IP2_FRAME_FOUND_17(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16)
#define IP2_FRAME_FOUND_18(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17)
#define IP2_FRAME_FOUND_19(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18)
#define IP2_FRAME_FOUND_20(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19)
#define IP2_FRAME_FOUND_21(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20)
#define IP2_FRAME_FOUND_22(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21)
#define IP2_FRAME_FOUND_23(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22)
#define IP2_FRAME_FOUND_24(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23)
#define IP2_FRAME_FOUND_25(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24)
#define IP2_FRAME_FOUND_26(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25)
#define IP2_FRAME_FOUND_27(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26)
#define IP2_FRAME_FOUND_28(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27)
#define IP2_FRAME_FOUND_29(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28)
#define IP2_FRAME_FOUND_30(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29)
#define IP2_FRAME_FOUND_31(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30)
#define IP2_FRAME_FOUND_32(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31)
#define IP2_FRAME_FOUND_33(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32)
#define IP2_FRAME_FOUND_34(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33)
#define IP2_FRAME_FOUND_35(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34)
#define IP2_FRAME_FOUND_36(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35)
#define IP2_FRAME_FOUND_37(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36)
#define IP2_FRAME_FOUND_38(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37)
#define IP2_FRAME_FOUND_39(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38)
#define IP2_FRAME_FOUND_40(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39)
#define IP2_FRAME_FOUND_41(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40)
#define IP2_FRAME_FOUND_42(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41)
#define IP2_FRAME_FOUND_43(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42)
#define IP2_FRAME_FOUND_44(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42) PP2_FRAME_FLAG(target,b43)
#define IP2_FRAME_FOUND_45(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42) PP2_FRAME_FLAG(target,b43) PP2_FRAME_FLAG(target,b44)
#define IP2_FRAME_FOUND_46(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42) PP2_FRAME_FLAG(target,b43) PP2_FRAME_FLAG(target,b44) PP2_FRAME_FLAG(target,b45)
#define IP2_FRAME_FOUND_47(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42) PP2_FRAME_FLAG(target,b43) PP2_FRAME_FLAG(target,b44) PP2_FRAME_FLAG(target,b45) PP2_FRAME_FLAG(target,b46)
#define IP2_FRAME_FOUND_48(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42) PP2_FRAME_FLAG(target,b43) PP2_FRAME_FLAG(target,b44) PP2_FRAME_FLAG(target,b45) PP2_FRAME_FLAG(target,b46) PP2_FRAME_FLAG(target,b47)
#define IP2_FRAME_FOUND_49(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42) PP2_FRAME_FLAG(target,b43) PP2_FRAME_FLAG(target,b44) PP2_FRAME_FLAG(target,b45) PP2_FRAME_FLAG(target,b46) PP2_FRAME_FLAG(target,b47) PP2_FRAME_FLAG(target,b48)
#define IP2_FRAME_FOUND_50(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42) PP2_FRAME_FLAG(target,b43) PP2_FRAME_FLAG(target,b44) PP2_FRAME_FLAG(target,b45) PP2_FRAME_FLAG(target,b46) PP2_FRAME_FLAG(target,b47) PP2_FRAME_FLAG(target,b48) PP2_FRAME_FLAG(target,b49)
#define IP2_FRAME_FOUND_51(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42) PP2_FRAME_FLAG(target,b43) PP2_FRAME_FLAG(target,b44) PP2_FRAME_FLAG(target,b45) PP2_FRAME_FLAG(target,b46) PP2_FRAME_FLAG(target,b47) PP2_FRAME_FLAG(target,b48) PP2_FRAME_FLAG(target,b49) PP2_FRAME_FLAG(target,b50)
#define IP2_FRAME_FOUND_52(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42) PP2_FRAME_FLAG(target,b43) PP2_FRAME_FLAG(target,b44) PP2_FRAME_FLAG(target,b45) PP2_FRAME_FLAG(target,b46) PP2_FRAME_FLAG(target,b47) PP2_FRAME_FLAG(target,b48) PP2_FRAME_FLAG(target,b49) PP2_FRAME_FLAG(target,b50) PP2_FRAME_FLAG(target,b51)
#define IP2_FRAME_FOUND_53_OR_MORE(target,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,...) PP2_FRAME_FLAG(target,b0) PP2_FRAME_FLAG(target,b1) PP2_FRAME_FLAG(target,b2) PP2_FRAME_FLAG(target,b3) PP2_FRAME_FLAG(target,b4) PP2_FRAME_FLAG(target,b5) PP2_FRAME_FLAG(target,b6) PP2_FRAME_FLAG(target,b7) PP2_FRAME_FLAG(target,b8) PP2_FRAME_FLAG(target,b9) PP2_FRAME_FLAG(target,b10) PP2_FRAME_FLAG(target,b11) PP2_FRAME_FLAG(target,b12) PP2_FRAME_FLAG(target,b13) PP2_FRAME_FLAG(target,b14) PP2_FRAME_FLAG(target,b15) PP2_FRAME_FLAG(target,b16) PP2_FRAME_FLAG(target,b17) PP2_FRAME_FLAG(target,b18) PP2_FRAME_FLAG(target,b19) PP2_FRAME_FLAG(target,b20) PP2_FRAME_FLAG(target,b21) PP2_FRAME_FLAG(target,b22) PP2_FRAME_FLAG(target,b23) PP2_FRAME_FLAG(target,b24) PP2_FRAME_FLAG(target,b25) PP2_FRAME_FLAG(target,b26) PP2_FRAME_FLAG(target,b27) PP2_FRAME_FLAG(target,b28) PP2_FRAME_FLAG(target,b29) PP2_FRAME_FLAG(target,b30) PP2_FRAME_FLAG(target,b31) PP2_FRAME_FLAG(target,b32) PP2_FRAME_FLAG(target,b33) PP2_FRAME_FLAG(target,b34) PP2_FRAME_FLAG(target,b35) PP2_FRAME_FLAG(target,b36) PP2_FRAME_FLAG(target,b37) PP2_FRAME_FLAG(target,b38) PP2_FRAME_FLAG(target,b39) PP2_FRAME_FLAG(target,b40) PP2_FRAME_FLAG(target,b41) PP2_FRAME_FLAG(target,b42) PP2_FRAME_FLAG(target,b43) PP2_FRAME_FLAG(target,b44) PP2_FRAME_FLAG(target,b45) PP2_FRAME_FLAG(target,b46) PP2_FRAME_FLAG(target,b47) PP2_FRAME_FLAG(target,b48) PP2_FRAME_FLAG(target,b49) PP2_FRAME_FLAG(target,b50) PP2_FRAME_FLAG(target,b51) PP2_FRAME_TOO_MANY_LOCALS
#define IP2_FRAME_REWRITE_SEL(target,value,...) IP2_FRAME_REWRITE_OVL(target,value,__VA_ARGS__,PP2_COMMA_52, PP2_COMMA_51, PP2_COMMA_50, PP2_COMMA_49, PP2_COMMA_48, PP2_COMMA_47, PP2_COMMA_46, PP2_COMMA_45, PP2_COMMA_44, PP2_COMMA_43, PP2_COMMA_42, PP2_COMMA_41, PP2_COMMA_40, PP2_COMMA_39, PP2_COMMA_38, PP2_COMMA_37, PP2_COMMA_36, PP2_COMMA_35, PP2_COMMA_34, PP2_COMMA_33, PP2_COMMA_32, PP2_COMMA_31, PP2_COMMA_30, PP2_COMMA_29, PP2_COMMA_28, PP2_COMMA_27, PP2_COMMA_26, PP2_COMMA_25, PP2_COMMA_24, PP2_COMMA_23, PP2_COMMA_22, PP2_COMMA_21, PP2_COMMA_20, PP2_COMMA_19, PP2_COMMA_18, PP2_COMMA_17, PP2_COMMA_16, PP2_COMMA_15, PP2_COMMA_14, PP2_COMMA_13, PP2_COMMA_12, PP2_COMMA_11, PP2_COMMA_10, PP2_COMMA_9, PP2_COMMA_8, PP2_COMMA_7, PP2_COMMA_6, PP2_COMMA_5, PP2_COMMA_4, PP2_COMMA_3, PP2_COMMA_2, PP2_COMMA_1,)(target,value,__VA_ARGS__)
#define IP2_FRAME_REWRITE_OVL(target,value,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,m,...) PP2_TUPLE_AT_1(IP2_FRAME_REWRITE_,m,53_OR_MORE)
#define IP2_FRAME_REWRITE_1(target,value,b0) PP2_FRAME_REW(target,value,b0)
#define IP2_FRAME_REWRITE_2(target,value,b0,b1) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1)
#define IP2_FRAME_REWRITE_3(target,value,b0,b1,b2) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2)
#define IP2_FRAME_REWRITE_4(target,value,b0,b1,b2,b3) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3)
#define IP2_FRAME_REWRITE_5(target,value,b0,b1,b2,b3,b4) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4)
#define IP2_FRAME_REWRITE_6(target,value,b0,b1,b2,b3,b4,b5) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5)
#define IP2_FRAME_REWRITE_7(target,value,b0,b1,b2,b3,b4,b5,b6) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6)
#define IP2_FRAME_REWRITE_8(target,value,b0,b1,b2,b3,b4,b5,b6,b7) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7)
#define IP2_FRAME_REWRITE_9(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8)
#define IP2_FRAME_REWRITE_10(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9)
#define IP2_FRAME_REWRITE_11(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10)
#define IP2_FRAME_REWRITE_12(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11)
#define IP2_FRAME_REWRITE_13(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12)
#define IP2_FRAME_REWRITE_14(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13)
#define IP2_FRAME_REWRITE_15(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14)
#define IP2_FRAME_REWRITE_16(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15)
#define IP2_FRAME_REWRITE_17(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16)
#define IP2_FRAME_REWRITE_18(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17)
#define IP2_FRAME_REWRITE_19(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18)
#define IP2_FRAME_REWRITE_20(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19)
#define IP2_FRAME_REWRITE_21(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20)
#define IP2_FRAME_REWRITE_22(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21)
#define IP2_FRAME_REWRITE_23(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22)
#define IP2_FRAME_REWRITE_24(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23)
#define IP2_FRAME_REWRITE_25(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24)
#define IP2_FRAME_REWRITE_26(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25)
#define IP2_FRAME_REWRITE_27(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26)
#define IP2_FRAME_REWRITE_28(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27)
#define IP2_FRAME_REWRITE_29(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28)
#define IP2_FRAME_REWRITE_30(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29)
#define IP2_FRAME_REWRITE_31(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30)
#define IP2_FRAME_REWRITE_32(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31)
#define IP2_FRAME_REWRITE_33(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32)
#define IP2_FRAME_REWRITE_34(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33)
#define IP2_FRAME_REWRITE_35(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34)
#define IP2_FRAME_REWRITE_36(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35)
#define IP2_FRAME_REWRITE_37(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36)
#define IP2_FRAME_REWRITE_38(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37)
#define IP2_FRAME_REWRITE_39(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38)
#define IP2_FRAME_REWRITE_40(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39)
#define IP2_FRAME_REWRITE_41(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40)
#define IP2_FRAME_REWRITE_42(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41)
#define IP2_FRAME_REWRITE_43(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42)
#define IP2_FRAME_REWRITE_44(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42) PP2_FRAME_REW(target,value,b43)
#define IP2_FRAME_REWRITE_45(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42) PP2_FRAME_REW(target,value,b43) PP2_FRAME_REW(target,value,b44)
#define IP2_FRAME_REWRITE_46(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42) PP2_FRAME_REW(target,value,b43) PP2_FRAME_REW(target,value,b44) PP2_FRAME_REW(target,value,b45)
#define IP2_FRAME_REWRITE_47(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42) PP2_FRAME_REW(target,value,b43) PP2_FRAME_REW(target,value,b44) PP2_FRAME_REW(target,value,b45) PP2_FRAME_REW(target,value,b46)
#define IP2_FRAME_REWRITE_48(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42) PP2_FRAME_REW(target,value,b43) PP2_FRAME_REW(target,value,b44) PP2_FRAME_REW(target,value,b45) PP2_FRAME_REW(target,value,b46) PP2_FRAME_REW(target,value,b47)
#define IP2_FRAME_REWRITE_49(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42) PP2_FRAME_REW(target,value,b43) PP2_FRAME_REW(target,value,b44) PP2_FRAME_REW(target,value,b45) PP2_FRAME_REW(target,value,b46) PP2_FRAME_REW(target,value,b47) PP2_FRAME_REW(target,value,b48)
#define IP2_FRAME_REWRITE_50(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42) PP2_FRAME_REW(target,value,b43) PP2_FRAME_REW(target,value,b44) PP2_FRAME_REW(target,value,b45) PP2_FRAME_REW(target,value,b46) PP2_FRAME_REW(target,value,b47) PP2_FRAME_REW(target,value,b48) PP2_FRAME_REW(target,value,b49)
#define IP2_FRAME_REWRITE_51(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42) PP2_FRAME_REW(target,value,b43) PP2_FRAME_REW(target,value,b44) PP2_FRAME_REW(target,value,b45) PP2_FRAME_REW(target,value,b46) PP2_FRAME_REW(target,value,b47) PP2_FRAME_REW(target,value,b48) PP2_FRAME_REW(target,value,b49) PP2_FRAME_REW(target,value,b50)
#define IP2_FRAME_REWRITE_52(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42) PP2_FRAME_REW(target,value,b43) PP2_FRAME_REW(target,value,b44) PP2_FRAME_REW(target,value,b45) PP2_FRAME_REW(target,value,b46) PP2_FRAME_REW(target,value,b47) PP2_FRAME_REW(target,value,b48) PP2_FRAME_REW(target,value,b49) PP2_FRAME_REW(target,value,b50) PP2_FRAME_REW(target,value,b51)
#define IP2_FRAME_REWRITE_53_OR_MORE(target,value,b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,...) PP2_FRAME_REW(target,value,b0) PP2_FRAME_REW(target,value,b1) PP2_FRAME_REW(target,value,b2) PP2_FRAME_REW(target,value,b3) PP2_FRAME_REW(target,value,b4) PP2_FRAME_REW(target,value,b5) PP2_FRAME_REW(target,value,b6) PP2_FRAME_REW(target,value,b7) PP2_FRAME_REW(target,value,b8) PP2_FRAME_REW(target,value,b9) PP2_FRAME_REW(target,value,b10) PP2_FRAME_REW(target,value,b11) PP2_FRAME_REW(target,value,b12) PP2_FRAME_REW(target,value,b13) PP2_FRAME_REW(target,value,b14) PP2_FRAME_REW(target,value,b15) PP2_FRAME_REW(target,value,b16) PP2_FRAME_REW(target,value,b17) PP2_FRAME_REW(target,value,b18) PP2_FRAME_REW(target,value,b19) PP2_FRAME_REW(target,value,b20) PP2_FRAME_REW(target,value,b21) PP2_FRAME_REW(target,value,b22) PP2_FRAME_REW(target,value,b23) PP2_FRAME_REW(target,value,b24) PP2_FRAME_REW(target,value,b25) PP2_FRAME_REW(target,value,b26) PP2_FRAME_REW(target,value,b27) PP2_FRAME_REW(target,value,b28) PP2_FRAME_REW(target,value,b29) PP2_FRAME_REW(target,value,b30) PP2_FRAME_REW(target,value,b31) PP2_FRAME_REW(target,value,b32) PP2_FRAME_REW(target,value,b33) PP2_FRAME_REW(target,value,b34) PP2_FRAME_REW(target,value,b35) PP2_FRAME_REW(target,value,b36) PP2_FRAME_REW(target,value,b37) PP2_FRAME_REW(target,value,b38) PP2_FRAME_REW(target,value,b39) PP2_FRAME_REW(target,value,b40) PP2_FRAME_REW(target,value,b41) PP2_FRAME_REW(target,value,b42) PP2_FRAME_REW(target,value,b43) PP2_FRAME_REW(target,value,b44) PP2_FRAME_REW(target,value,b45) PP2_FRAME_REW(target,value,b46) PP2_FRAME_REW(target,value,b47) PP2_FRAME_REW(target,value,b48) PP2_FRAME_REW(target,value,b49) PP2_FRAME_REW(target,value,b50) PP2_FRAME_REW(target,value,b51) PP2_FRAME_TOO_MANY_LOCALS
#endif


/* Load the value bound to a char-seq address in the current (top) frame. The
 * frame is the first group of the local stack; PP2_FRAME_FIND walks its
 * bindings and returns the value, or (8MISS) when the address is unbound, which
 * routes to the UNBOUND_LOCAL exception carrying the address. */
#define PP2_INSN_8PP2_STACK_LOAD(P,r0,r1,r2,addr,...) \
        IP2_STACK_LOAD_DISPATCH( \
            IP2_FX(STACK_LOAD_FIND,(,P##addr,IP2_STACK_LOAD_SPLIT_FRAME P##r1)), \
            P##addr,P##r1,P##r2,P##__VA_ARGS__ \
        )

#define IP2_STACK_LOAD_FIND(P,addr,frame,...) PP2_FRAME_FIND(addr,frame)

#define IP2_STACK_LOAD_SPLIT_FRAME(P,stack,...) IP2_STACK_LOAD_SPLIT_FRAME_I P##stack
#define IP2_STACK_LOAD_SPLIT_FRAME_I(...) __VA_ARGS__,

/* Branch on whether the find hit. A compiled object opens to `,Type,...` (its
 * first field is empty), so the probe token is empty; a miss opens to the bare
 * `8MISS` token. */
#define IP2_STACK_LOAD_DISPATCH(res,addr,r1,r2,...) \
        IP2_STACK_LOAD_DISPATCH_I(IP2_STACK_LOAD_ISMISS(res),res,addr,r1,r2,__VA_ARGS__)
#define IP2_STACK_LOAD_DISPATCH_I(miss,res,addr,r1,r2,...) IP2_STACK_LOAD_DISPATCH_II(miss,res,addr,r1,r2,__VA_ARGS__)
#define IP2_STACK_LOAD_DISPATCH_II(miss,res,addr,r1,r2,...) IP2_STACK_LOAD_##miss(res,addr,r1,r2,__VA_ARGS__)

#define IP2_STACK_LOAD_ISMISS(res) IP2_FX(STACK_LOAD_ISMISS_I,(,PP2_OPEN res))
#define IP2_STACK_LOAD_ISMISS_I(P,x,...) IP2_STACK_LOAD_ISMISS_II(x)
#define IP2_STACK_LOAD_ISMISS_II(x) IP2_STACK_LOAD_ISMISS_TAG_##x
#define IP2_STACK_LOAD_ISMISS_TAG_ 0
#define IP2_STACK_LOAD_ISMISS_TAG_8MISS 1

#define IP2_STACK_LOAD_0(res,addr,r1,r2,...) (,/*r0=*/res,r1,r2,__VA_ARGS__)
#define IP2_STACK_LOAD_1(res,addr,r1,r2,...) \
        (,/*r0=*/,r1,r2,8PP2_THROW_EXCEPTION,8PP2_LANGUAGE_UNBOUND_LOCAL_EXCEPTION,addr,__VA_ARGS__)

#endif

// ******************** From: store.h
/** @file */
#ifndef PP2_MACHINE_STACK_STORE_H
#define PP2_MACHINE_STACK_STORE_H



/* Store the value in r0 to a char-seq address in the current (top) frame.
 * PP2_FRAME_STORE rewrites the frame's bindings -- replacing the target's value
 * in place, or prepending a new binding when the address is unbound -- and the
 * rebuilt frame is set back as the first group of the local stack. r0 is
 * cleared; the store is a statement, not an expression. */
#define PP2_INSN_8PP2_STACK_STORE(P,value,r1,r2,addr,...) \
        (, \
         /*r0=*/, \
         IP2_FX(STACK_STORE_NEWCTX,(,P##r1,P##addr,P##value,IP2_STACK_STORE_SPLIT_FRAME(PP2_LOCAL_CTX_GET_STACK P##r1))), \
         P##r2, \
         P##__VA_ARGS__ \
        )

#define IP2_STACK_STORE_NEWCTX(P,ctx,addr,value,frame,frame_stack) \
        PP2_LOCAL_CTX_SET_STACK(ctx,(PP2_FRAME_STORE(addr,value,frame))frame_stack)

#define IP2_STACK_STORE_SPLIT_FRAME(stack) IP2_STACK_STORE_SPLIT_FRAME_I stack
#define IP2_STACK_STORE_SPLIT_FRAME_I(...) __VA_ARGS__,

#endif

/* Declare a multi-character variable name host-side. The name is spelled as its
 * characters, since a single token cannot be taken apart:
 *
 *   #define PP2_DEF_total PP2_VAR(t,o,t,a,l)
 *
 * after which bare `total` is a variable in every position, exactly like the
 * built-in single letters. The address is the char-seq (t)(o)(t)(a)(l); load
 * and store compare addresses character by character (see frame_walk.h), so
 * there is no slot table and no limit on distinct names. */
#define PP2_VAR(...) )PP2_COMPILE_LANGUAGE_VAR(PP2_CHARSEQ(__VA_ARGS__),

/* The in-language `var (...)` keyword: a variable whose name is written inline as
 * a run of space-separated characters, no host-side declaration needed.
 *
 *   var (t o t a l) (5)         assigns 5 to total
 *   print(var (t o t a l))      reads it back
 *
 * `var` is compiled like any other bare token, so PP2_DEF_var is pasted with the
 * name group trailing it (see IP2_LANGUAGE_COMPILE); being function-like, it takes
 * that group as its argument and leaves whatever follows as the right-hand side,
 * exactly as the single-letter PP2_DEF_<c> entries do. PP2_SPACED turns the run
 * into the char-seq address (t)(o)(t)(a)(l) at compile time, so `var (...)` costs
 * no more at run time than a built-in letter. Names draw from the alphabet
 * a-z A-Z 0-9 _ and run to 40 characters (see name.h). */
#define PP2_DEF_var(name) )PP2_COMPILE_LANGUAGE_VAR(PP2_SPACED(name),

#define PP2_INSN_8PP2_LANGUAGE_VAR(P,r0,r1,r2,addr,rhs_stx,...) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(PP2_INSN_,IP2_LANGUAGE_VAR_TEST_IF_STORE P##rhs_stx) \
        (, \
         P##r0,P##r1,P##r2, \
         P##addr,P##value, \
         P##__VA_ARGS__ \
        )

#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(P,...) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE_I(P, \
            __VA_ARGS__, \
            8IP2_LANGUAGE_VAR_LOAD \
        )
#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE_I(P,_,insn,...) P##insn
#define IP2_LANGUAGE_VAR_TEST_IF_STORE(...) ,8IP2_LANGUAGE_VAR_STORE,


/* An assignment is done for its effect, so it answers with nil. 8PP2_STACK_STORE
 * clears r0 once the value is in the frame, and the nil goes in after it. */
#define PP2_INSN_8IP2_LANGUAGE_VAR_STORE(P,r0,r1,r2,addr,value,...) \
                                        (, \
                                         P##r0,P##r1,P##r2, \
                                         IP2_LANGUAGE_VAR_STORE_OPEN P##value,8PP2_STACK_STORE,P##addr, \
                                         8PP2_LANGUAGE_LOAD_NIL, \
                                         P##__VA_ARGS__ \
                                        )
#define IP2_LANGUAGE_VAR_STORE_OPEN(value) PP2_COMPILE(value)

#define PP2_INSN_8IP2_LANGUAGE_VAR_LOAD(P,r0,r1,r2,addr,method,...) \
                                       (, \\
                                        P##r0,P##r1,P##r2, \
                                        8PP2_STACK_LOAD,P##addr,PP2_COMPILE_LANGUAGE_RETURN(P##method), \
                                        P##__VA_ARGS__ \
                                       )


#define PP2_COMPILE_LANGUAGE_VAR(addr,rhs_stx) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(,IP2_LANGUAGE_VAR_TEST_IF_STORE rhs_stx),addr,rhs_stx

#endif


// ******************** From: const.h
/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_CONST_H
#define PP2_LANGUAGE_DEFINITION_CONST_H



// ******************** From: load.h
/** @file */
#ifndef PP2_MACHINE_INSNS_LOAD_H
#define PP2_MACHINE_INSNS_LOAD_H

#define PP2_INSN_8PP2_LOAD_CONST(P,r0,r1,r2,value,insn,...) PP2_INSN_##insn(,P##value,P##r1,P##r2,P##__VA_ARGS__)

#endif

#define PP2_CONST(type,value) )PP2_COMPILE_CONST(type,value,

#define PP2_COMPILE_CONST(type,value,rhs_stx) 8PP2_LOAD_CONST,(,type,value),PP2_COMPILE_LANGUAGE_RETURN(rhs_stx)

#endif

// ******************** From: def.h
/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_DEF_H
#define PP2_LANGUAGE_DEFINITION_DEF_H


#define PP2_DEF(stx) )PP2_COMPILE_DEF(stx,
#define PP2_COMPILE_DEF(stx,rhs_stx) 8PP2_LANGUAGE_COMPILE,stx,PP2_COMPILE_LANGUAGE_RETURN(rhs_stx)

#endif

// ******************** From: fn.h
/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_FN_H
#define PP2_LANGUAGE_DEFINITION_FN_H


// ******************** From: fn.h
#ifndef PP2_LANGUAGE_EXPRESSIONS_FN_H
#define PP2_LANGUAGE_EXPRESSIONS_FN_H


// ******************** From: fn.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_FN_H
#define PP2_LANGUAGE_TYPES_FN_H


// ******************** From: type.h
/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_TYPE_H
#define PP2_LANGUAGE_DEFINITION_TYPE_H


#define PP2_TYPE(name,super) )PP2_COMPILE_CONST(Type,(,name,super),

#endif

// ******************** From: vm_fn.h
#ifndef PP2_LANGUAGE_DEFINITION_VM_FN_H
#define PP2_LANGUAGE_DEFINITION_VM_FN_H




#define PP2_VM_FN(macro,nargs) )PP2_LANGUAGE_COMPILE_VM_FN(,macro,nargs,
#define PP2_LANGUAGE_COMPILE_VM_FN(P,macro,nargs,rhs_stx) 8PP2_LANGUAGE_VM_FN,P##nargs,P##macro,PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx)

#define PP2_INSN_8PP2_LANGUAGE_VM_FN(P,r0,r1,r2,nargs,macro,...) \
                                    (, \
                                     /*r0=*/(,Fn,(,8PP2_LOCAL_CTX_PREPEND_ARGUMENTS,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1,8PP2_LANGUAGE_VM_FN_CALL,P##macro)), \
                                     P##r1,P##r2, \
                                     8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
                                     P##__VA_ARGS__ \
                                    )

#define PP2_INSN_8PP2_LANGUAGE_VM_FN_CALL(P,r0,r1,r2,macro,...) \
        IP2_LANGUAGE_VM_FN_CALL( \
            P##macro, \
            (, \
             /*r0=*/,P##r1,P##r2, \
             PP2_LOCAL_CTX_UNPACK_ARGS P##r1, \
             8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
             P##__VA_ARGS__ \
            ) \
        )
/* The handler travels through the VM registers as the pp-number `8NAME`, never as
 * an identifier. An identifier that passes through its own expansion is painted
 * blue for the rest of the translation unit, which is exactly what happens when a
 * method appears in its own argument (`3 plus (4 plus (5))`): the outer handler's
 * name rides the register file through the inner handler's expansion, comes out
 * painted, and never expands again. A pp-number cannot be painted, so the real
 * name is pasted back on here, at the last instant before the call. */
#define IP2_LANGUAGE_VM_FN_CALL(m,args_tup) PP2_INSN_##m args_tup

#endif



#define PP2_DEF_Fn PP2_TYPE(Fn,Any)
#define PP2_SYM_Fn(...) __VA_ARGS__

/* Fn(params, body): build a function from its constituent data -- a parameter
 * list and a quote holding the body -- exactly as the `fn (params) (body)`
 * literal would. This VM's functions capture no lexical environment, so params
 * + body are the whole of a Fn; there is no closure to pass. The body is
 * unwrapped to its raw token tuple and handed, with the parameter names, to the
 * same 8PP2_LANGUAGE_FN builder the fn keyword uses, so parameter binding,
 * framing and the body block all go through one path.
 *
 * The parameter list comes either way round:
 *
 *     Fn ((x, y), (x plus (y)))               one quote holding both names
 *     Fn (List ((x), (y)), (x plus (y)))      a List of quoted names
 *
 * The quote form is direct and carries any number of names. The explicit List
 * form is useful when parameter names are already first-class Quote values. */
#define PP2_DEF_Fn_construct PP2_VM_FN(8PP2_LANGUAGE_FN_CONSTRUCT,3)
#define PP2_INSN_8PP2_LANGUAGE_FN_CONSTRUCT(P,r0,r1,r2,self,params_q,body_q,...) \
        (, \
         /*r0=*/, \
         P##r1,P##r2, \
         8PP2_LANGUAGE_FN, \
         IP2_FX(LANGUAGE_FN_CONSTRUCT_PARAMS,(,PP2_LANGUAGE_OBJECT_TYPE P##params_q,P##params_q)), \
         PP2_LANGUAGE_OBJECT_VALUE P##body_q, \
         P##__VA_ARGS__ \
        )

/* one paste on the parameter object's type: a Quote already holds the raw
 * parameter tokens, a List holds one Quote per name */
#define IP2_LANGUAGE_FN_CONSTRUCT_PARAMS(P,type,obj) IP2_LANGUAGE_FN_CONSTRUCT_PARAMS_##type(P##obj)
#define IP2_LANGUAGE_FN_CONSTRUCT_PARAMS_Quote(obj) PP2_LANGUAGE_OBJECT_VALUE obj
#define IP2_LANGUAGE_FN_CONSTRUCT_PARAMS_List(obj) IP2_LANGUAGE_FN_PARAMS_JOIN(PP2_LANGUAGE_OBJECT_VALUE obj)

/* join the element quotes back into the bare, comma-separated parameter list
 * the fn builder expects. An empty List is a function of no parameters. */
#define IP2_LANGUAGE_FN_PARAMS_JOIN(elems) IP2_LANGUAGE_FN_PARAMS_JOIN_I(IP2_LANGUAGE_FN_PARAMS_PROBE elems,elems)
#define IP2_LANGUAGE_FN_PARAMS_PROBE(x0,...) x0
#define IP2_LANGUAGE_FN_PARAMS_JOIN_I(head,elems) PP2_IS_TUPLE(head)(IP2_LANGUAGE_FN_PARAMS_SOME,IP2_LANGUAGE_FN_PARAMS_NONE)(elems)
#define IP2_LANGUAGE_FN_PARAMS_NONE(elems) ()
#define IP2_LANGUAGE_FN_PARAMS_SOME(elems) (IP2_LANGUAGE_FN_PARAMS_OVERLOAD elems)

#define IP2_LANGUAGE_FN_PARAMS_OVERLOAD(...) \
        IP2_LANGUAGE_FN_PARAMS_SELECT( \
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
#define IP2_LANGUAGE_FN_PARAMS_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_FN_PARAMS_,m,9_OR_MORE)

/* a quote's value keeps its wrapping parens, so the name needs one OPEN */
#define IP2_LANGUAGE_FN_PARAMS_NAME(e) PP2_FX(OPEN,PP2_LANGUAGE_OBJECT_VALUE e)

#define IP2_LANGUAGE_FN_PARAMS_1(P,e0) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0)
#define IP2_LANGUAGE_FN_PARAMS_2(P,e0,e1) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1)
#define IP2_LANGUAGE_FN_PARAMS_3(P,e0,e1,e2) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2)
#define IP2_LANGUAGE_FN_PARAMS_4(P,e0,e1,e2,e3) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2),IP2_LANGUAGE_FN_PARAMS_NAME(P##e3)
#define IP2_LANGUAGE_FN_PARAMS_5(P,e0,e1,e2,e3,e4) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2),IP2_LANGUAGE_FN_PARAMS_NAME(P##e3),IP2_LANGUAGE_FN_PARAMS_NAME(P##e4)
#define IP2_LANGUAGE_FN_PARAMS_6(P,e0,e1,e2,e3,e4,e5) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2),IP2_LANGUAGE_FN_PARAMS_NAME(P##e3),IP2_LANGUAGE_FN_PARAMS_NAME(P##e4),IP2_LANGUAGE_FN_PARAMS_NAME(P##e5)
#define IP2_LANGUAGE_FN_PARAMS_7(P,e0,e1,e2,e3,e4,e5,e6) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2),IP2_LANGUAGE_FN_PARAMS_NAME(P##e3),IP2_LANGUAGE_FN_PARAMS_NAME(P##e4),IP2_LANGUAGE_FN_PARAMS_NAME(P##e5),IP2_LANGUAGE_FN_PARAMS_NAME(P##e6)
#define IP2_LANGUAGE_FN_PARAMS_8(P,e0,e1,e2,e3,e4,e5,e6,e7) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2),IP2_LANGUAGE_FN_PARAMS_NAME(P##e3),IP2_LANGUAGE_FN_PARAMS_NAME(P##e4),IP2_LANGUAGE_FN_PARAMS_NAME(P##e5),IP2_LANGUAGE_FN_PARAMS_NAME(P##e6),IP2_LANGUAGE_FN_PARAMS_NAME(P##e7)
/* Rejoining more than eight names would need a second overload family, and the
 * quote form already carries any number, so this stops rather than truncating.
 * The failure token reaches the output the way PP2_VM_FAILURE does. */
#define IP2_LANGUAGE_FN_PARAMS_9_OR_MORE(P,...) PP2_LANGUAGE_FN_PARAMS_FAILURE

#define PP2_DEF_Fn_call )PP2_COMPILE_LANGUAGE_FN_CALL(,
#define PP2_COMPILE_LANGUAGE_FN_CALL(P,args_tup) \
        IP2_COMPILE_LANGUAGE_FN_CALL_CHOOSE_PTR_OR_CALL( \
            IP2_COMPILE_LANGUAGE_FN_CALL_TEST_IF_CALL P##args_tup\
        )(,P##args_tup)

#define IP2_COMPILE_LANGUAGE_FN_CALL(P,args_tup) IP2_FW(COMPILE_LANGUAGE_FN_CALL_I,(,PP2_SEQ_SPLIT_HEAD P##args_tup))
#define IP2_COMPILE_LANGUAGE_FN_CALL_I(P,args_tup,rhs_stx) 8PP2_LANGUAGE_FN_CALL,P##args_tup,PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx)
#define IP2_COMPILE_LANGUAGE_FN_CALL_PTR(P,rhs_stx) 8PP2_LANGUAGE_FN_PTR,PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx)

#define IP2_COMPILE_LANGUAGE_FN_CALL_CHOOSE_PTR_OR_CALL(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_COMPILE_LANGUAGE_FN_CALL_PTR)
#define IP2_COMPILE_LANGUAGE_FN_CALL_TEST_IF_CALL(...) ,IP2_COMPILE_LANGUAGE_FN_CALL,


#define PP2_INSN_8PP2_LANGUAGE_FN_PTR(P,r0,r1,r2,...) \
                                     (, \
                                      /*r0=*/(,Fn,(,8PP2_LANGUAGE_FN_PTR_CALL,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1)), \
                                      /*r1=*/P##r1, \
                                      /*r2=*/P##r2, \
                                      8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
                                      P##__VA_ARGS__ \
                                     )

#define PP2_INSN_8PP2_LANGUAGE_FN_PTR_CALL(P,r0,r1,r2,ptr,...) \
                                          (, \
                                           /*r0=*/P##ptr,\
                                           /*r1=*/P##r1, \
                                           /*r2=*/P##r2, \
                                           8PP2_LANGUAGE_FN_CALL_IMPL, \
                                           P##__VA_ARGS__ \
                                          )

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL(P,r0,r1,r2,args_tup,...) \
                                      (, \
                                       /*r0=*/, \
                                       /*r1=*/P##r1, \
                                       /*r2=*/P##r2, \
                                       PP2_LANGUAGE_FN_PARSE_ARGS P##args_tup, \
                                       8IP2_LANGUAGE_FN_CALL, \
                                       P##__VA_ARGS__ \
                                      )

#define PP2_INSN_8IP2_LANGUAGE_FN_CALL(P,r0,r1,r2,...) \
                                      (, \
                                       /*r0=*/PP2_LOCAL_CTX_GET_ARGUMENTS_HEAD P##r1, \
                                       /*r1=*/PP2_LOCAL_CTX_POP_ARGUMENT P##r1, \
                                       /*r2=*/P##r2, \
                                       8PP2_LANGUAGE_FN_CALL_IMPL, \
                                       P##__VA_ARGS__ \
                                      )

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL_IMPL(P,r0,r1,r2,...) \
                                           (, \
                                            /*r0=*/, \
                                            /*r1=*/P##r1, \
                                            /*r2=*/P##r2, \
                                            IP2_LANGUAGE_FN_CALL_OPEN P##r0, \
                                            8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
                                            P##__VA_ARGS__ \
                                           )

#define IP2_LANGUAGE_FN_CALL_OPEN(fn_addr,fn_type,fn_value) PP2_QUOTE_OPEN fn_value

#define PP2_INSN_8PP2_LANGUAGE_FN_PARSE_ARGS(P,r0,r1,r2,args_tup,...) (,P##r0,P##r1,P##r2,PP2_LANGUAGE_FN_PARSE_ARGS P##args_tup,P##__VA_ARGS__)
#define PP2_LANGUAGE_FN_PARSE_ARGS(...) \
        IP2_LANGUAGE_FN_CALL_PARSE_ARGS_OVERLOAD( \
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
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_OVERLOAD(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_FN_CALL_PARSE_ARGS_,m,9_OR_MORE)

#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_0(P,_) 8PP2_NOP

#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1(P,a0) PP2_IS_TUPLE(P##a0)(IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1_QUOTE,IP2_LANGUAGE_FN_CALL_PARSE_ARGS_CHOOSE_0_OR_1_ARG(IP2_LANGUAGE_FN_CALL_TEST_IF_0_ARGS P##a0 ()))(,P##a0)
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1_SYNTAX(P,a0) 8PP2_ARGS_SPILL,IP2_LANGUAGE_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1_QUOTE(P,a0) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_CHOOSE_0_OR_1_ARG(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1_SYNTAX)
#define IP2_LANGUAGE_FN_CALL_TEST_IF_0_ARGS() ,IP2_LANGUAGE_FN_CALL_PARSE_ARGS_0,

#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_2(P,a0,a1) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_3(P,a0,a1,a2) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_4(P,a0,a1,a2,a3) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_5(P,a0,a1,a2,a3,a4) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a4),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_6(P,a0,a1,a2,a3,a4,a5) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a4),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a5),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_7(P,a0,a1,a2,a3,a4,a5,a6) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a4),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a5),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a6),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_8(P,a0,a1,a2,a3,a4,a5,a6,a7) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a4),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a5),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a6),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a7),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_9_OR_MORE(P,a0,a1,a2,a3,a4,a5,a6,a7,...) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a4),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a5),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a6),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a7),8PP2_ARGS_UNSPILL_PUSH,8PP2_LANGUAGE_FN_PARSE_ARGS,(P##__VA_ARGS__)

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL_PUSH_ARG(P,r0,r1,r2,...) \
                                               (, \
                                                /*r0=*/, \
                                                /*r1=*/PP2_LOCAL_CTX_PUSH_ARGUMENT(P##r1,P##r0), \
                                                /*r2=*/P##r2, \
                                                P##__VA_ARGS__ \
                                               )

#endif



#define PP2_DEF_fn(...) )PP2_COMPILE_LANGUAGE_FN(,(__VA_ARGS__),
#define PP2_COMPILE_LANGUAGE_FN(P,params,body) 8PP2_LANGUAGE_FN,P##params,IP2_FX(COMPILE_LANGUAGE_FN_I, (,PP2_SEQ_SPLIT_HEAD P##body))
#define IP2_COMPILE_LANGUAGE_FN_I(P,body,rhs_stx) P##body,PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx)

#define PP2_INSN_8PP2_LANGUAGE_FN(P,r0,r1,r2,params,body,...) \
                                 (, \
                                  /*r0=*/(,Fn,(,8PP2_FRAME_ENTER_CLOSURE,(PP2_LOCAL_CTX_GET_STACK P##r1),IP2_LANGUAGE_FN_PARSE_PARAMS P##params,8PP2_LANGUAGE_BLOCK,P##body,8PP2_FRAME_LEAVE)), \
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

#define IP2_LANGUAGE_FN_PARSE_PARAMS_1(P,p0) \
        IP2_LANGUAGE_FN_PARSE_PARAMS_CHOOSE_0_OR_1( \
            IP2_LANGUAGE_FN_PARSE_PARAMS_TEST_IF_0_ARGS P##p0 () \
        )(,P##p0)
#define IP2_LANGUAGE_FN_PARSE_PARAMS_0(P,p0) 8PP2_NOP
#define IP2_LANGUAGE_FN_PARSE_PARAMS_1_IMPL(P,p0) IP2_FX(LANGUAGE_FN_PARSE_PARAM_TYPES_1,(,PP2_COMPILE_UNSAFE(P##p0())))
#define IP2_LANGUAGE_FN_PARSE_PARAMS_CHOOSE_0_OR_1(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_LANGUAGE_FN_PARSE_PARAMS_1_IMPL)
#define IP2_LANGUAGE_FN_PARSE_PARAMS_TEST_IF_0_ARGS() ,IP2_LANGUAGE_FN_PARSE_PARAMS_0,
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

/* PP2_FN(<params>) (<body>): bind a name to a function value -- pp2's analogue
 * of order-pp's `<name> ORDER_PP_FN(8fn(...))`. Written host-side as
 *
 *   #define PP2_DEF_add PP2_FN (x, y) (x plus (y))
 *
 * after which `add` is a first-class value in every position:
 *   - direct application   : add(2, 3)               -> 5
 *   - assign then call      : F (add), F call (2, 3)  -> 5
 *   - passed as a value     : print(add), map (add), ...
 *
 * PP2_FN is the same function-like shape as the `fn` keyword (PP2_DEF_fn): it
 * consumes the parameter tuple as its arguments and leaves the `fn` compiler
 * open so the `(body)` that follows -- and the rest of the enclosing program --
 * completes it, exactly as `fn (params) (body)` does inline. So a PP2_FN
 * binding is spelled without a redundant `fn` and without wrapping parens.
 *
 * Direct application `add(a, b)` needs no special machinery: the compiler's
 * RETURN grammar already dispatches a paren group following a value through
 * 8PP2_LANGUAGE_SELF_CALL (i.e. `call`). Note this only holds for
 * value-resolving names like `add`; a single-letter variable slot `F (...)` is
 * assignment, so a stored fn is still invoked with `call`. */
#define PP2_FN(...) )PP2_COMPILE_LANGUAGE_FN(,(__VA_ARGS__),

#endif

// ******************** From: primitive.h
/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_PRIMITIVE_H
#define PP2_LANGUAGE_DEFINITION_PRIMITIVE_H

#define PP2_PRIMITIVE(...) )PP2_PRIMITIVE_I(,__VA_ARGS__
#define PP2_PRIMITIVE_I(P,...) P##__VA_ARGS__

#endif



// ******************** From: print.h
/** @file */
#ifndef PP2_LANGUAGE_IO_PRINT_H
#define PP2_LANGUAGE_IO_PRINT_H


// ******************** From: emit.h
/** @file */
#ifndef PP2_LANGUAGE_IO_EMIT_H
#define PP2_LANGUAGE_IO_EMIT_H


// ******************** From: symbol.h
/** @file */
#ifndef PP2_LANGUAGE_BASIC_SYMBOL_H
#define PP2_LANGUAGE_BASIC_SYMBOL_H

/**
* Equality of two registered symbols, yielding 1 or 0.
*
* The preprocessor cannot compare two arbitrary tokens. It can compare tokens
* that have been registered, and a symbol is registered by defining
* `PP2_SYM_<name>(...) __VA_ARGS__`. Every PP2 type name is registered next to
* its type definition.
*
* `sa (sb)` yields `sb` when the two differ. When they are the same symbol it
* yields `sa` painted blue, because a macro is disabled inside its own
* expansion, and a painted token never expands again. So only the live one goes
* on to eat the trailing `(0,1)`, and the arity of what comes back is the
* answer: two arguments when the symbols differ, one when they match.
*
* Both names must be registered. An unregistered name expands to nothing at all,
* which looks exactly like the painted case, so it reports equal. Only ever call
* this on names you know are registered.
*/
#define PP2_SYMBOL_EQ(a,b) IP2_SYMBOL_EQ_I(PP2_SYM_##a,PP2_SYM_##b)
#define IP2_SYMBOL_EQ_I(sa,sb) IP2_SYMBOL_EQ_II(sa (sb) (0,1))
#define IP2_SYMBOL_EQ_II(...) IP2_SYMBOL_EQ_PICK(__VA_ARGS__,0,1)
#define IP2_SYMBOL_EQ_PICK(_1,_2,_3,...) _3

#endif


// ******************** From: emit.h
/** @file */
#ifndef PP2_MACHINE_INSNS_EMIT_H
#define PP2_MACHINE_INSNS_EMIT_H

#define PP2_INSN_8PP2_EMIT_LITERAL(P,r0,r1,r2,...) (,/*r0=*/,/*r1=*/P##r1,/*r2=*/P##r2,P##__VA_ARGS__)(,8LITERAL,P##r0)

#endif


/* Emit an object's string form. Most values can ride through r0 while str()
 * runs. A Quote containing a comma cannot: opening it in r0 would split the
 * VM state tuple. Put its raw tokens directly in a parenthesised output record
 * instead, where commas are ordinary variadic payload tokens. */
#define PP2_INSN_8PP2_LANGUAGE_EMIT_OBJECT(P,r0,r1,r2,...) \
        IP2_FX(LANGUAGE_EMIT_OBJECT_SELECT,(,PP2_LANGUAGE_OBJECT_TYPE P##r0)) \
            (,P##r0,P##r1,P##r2,P##__VA_ARGS__)

#define IP2_LANGUAGE_EMIT_OBJECT_SELECT(P,type) \
        PP2_CAT(IP2_LANGUAGE_EMIT_OBJECT_,PP2_SYMBOL_EQ(type,Quote))

/* Printing is done for its effect, so it answers with nil rather than leaving r0
 * empty. 8PP2_EMIT_LITERAL clears r0 once the tokens are out, so the nil is loaded
 * after it; the Quote path never puts the object in r0 at all and so can just set
 * nil directly. */
#define IP2_LANGUAGE_EMIT_OBJECT_0(P,obj,r1,r2,...) \
        (,P##obj,P##r1,P##r2,8PP2_LANGUAGE_METHOD_CALL,str(),8PP2_EMIT_LITERAL,8PP2_LANGUAGE_LOAD_NIL,P##__VA_ARGS__)

#define IP2_LANGUAGE_EMIT_OBJECT_1(P,obj,r1,r2,...) \
        (,/*r0=*/PP2_LANGUAGE_NIL,P##r1,P##r2,P##__VA_ARGS__)(,8LITERAL,PP2_FX(OPEN,PP2_LANGUAGE_OBJECT_VALUE P##obj))

#endif


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
#define PP2_INSN_8IP2_LANGUAGE_PRINT_OBJ(P,r0,r1,r2,stx,...)  (,/*r0=*/,P##r1,P##r2,PP2_COMPILE(P##stx),8PP2_LANGUAGE_EMIT_OBJECT,P##__VA_ARGS__)

#endif

// ******************** From: put.h
#ifndef PP2_LANGUAGE_IO_PUT_H
#define PP2_LANGUAGE_IO_PUT_H


#define PP2_DEF_put(stx) PP2_PRIMITIVE(8PP2_LANGUAGE_PUT,stx)

#define PP2_INSN_8PP2_LANGUAGE_PUT(P,r0,r1,r2,stx,...) (,/*r0=*/P##r0,/*r1=*/P##r1,/*r2=*/P##r2,PP2_COMPILE(stx),8PP2_LANGUAGE_EMIT_OBJECT,P##__VA_ARGS__)

#endif


// ******************** From: for.h
/** @file */
#ifndef PP2_LANGUAGE_STATEMENTS_FOR_H
#define PP2_LANGUAGE_STATEMENTS_FOR_H


// ******************** From: while.h
/** @file */
#ifndef PP2_LANGUAGE_STATEMENTS_WHILE_H
#define PP2_LANGUAGE_STATEMENTS_WHILE_H



// ******************** From: goto.h
/** @file */
#ifndef PP2_MACHINE_GOTO_GOTO_H
#define PP2_MACHINE_GOTO_GOTO_H


// ******************** From: find.h
/** @file */
#ifndef PP2_PRIMITIVE_ASSOC_FIND_H
#define PP2_PRIMITIVE_ASSOC_FIND_H


// ******************** From: find_tables.h
/** @file */
#ifndef PP2_PRIMITIVE_ASSOC_DETAIL_FIND_TABLES_H
#define PP2_PRIMITIVE_ASSOC_DETAIL_FIND_TABLES_H

#define IP2_LOOKUP_MATCH_0_0(P,value)   ,P##value,
#define IP2_LOOKUP_MATCH_1_1(P,value)   ,P##value,
#define IP2_LOOKUP_MATCH_2_2(P,value)   ,P##value,
#define IP2_LOOKUP_MATCH_3_3(P,value)   ,P##value,
#define IP2_LOOKUP_MATCH_4_4(P,value)   ,P##value,
#define IP2_LOOKUP_MATCH_5_5(P,value)   ,P##value,
#define IP2_LOOKUP_MATCH_6_6(P,value)   ,P##value,
#define IP2_LOOKUP_MATCH_7_7(P,value)   ,P##value,
#define IP2_LOOKUP_MATCH_8_8(P,value)   ,P##value,
#define IP2_LOOKUP_MATCH_9_9(P,value)   ,P##value,
#define IP2_LOOKUP_MATCH_10_10(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_11_11(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_12_12(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_13_13(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_14_14(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_15_15(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_16_16(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_17_17(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_18_18(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_19_19(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_20_20(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_21_21(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_22_22(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_23_23(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_24_24(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_25_25(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_26_26(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_27_27(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_28_28(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_29_29(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_30_30(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_31_31(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_32_32(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_33_33(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_34_34(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_35_35(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_36_36(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_37_37(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_38_38(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_39_39(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_40_40(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_41_41(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_42_42(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_43_43(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_44_44(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_45_45(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_46_46(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_47_47(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_48_48(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_49_49(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_50_50(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_51_51(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_52_52(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_53_53(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_54_54(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_55_55(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_56_56(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_57_57(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_58_58(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_59_59(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_60_60(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_61_61(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_62_62(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_63_63(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_64_64(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_65_65(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_66_66(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_67_67(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_68_68(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_69_69(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_70_70(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_71_71(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_72_72(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_73_73(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_74_74(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_75_75(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_76_76(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_77_77(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_78_78(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_79_79(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_80_80(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_81_81(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_82_82(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_83_83(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_84_84(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_85_85(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_86_86(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_87_87(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_88_88(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_89_89(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_90_90(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_91_91(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_92_92(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_93_93(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_94_94(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_95_95(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_96_96(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_97_97(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_98_98(P,value) ,P##value,
#define IP2_LOOKUP_MATCH_99_99(P,value) ,P##value,

#define IP2_LOOKUP_MATCH_UP_0(P,addr,value)  IP2_LOOKUP_MATCH_0_##addr(,P##value) IP2_LOOKUP_MATCH_DN_0
#define IP2_LOOKUP_MATCH_UP_1(P,addr,value)  IP2_LOOKUP_MATCH_1_##addr(,P##value) IP2_LOOKUP_MATCH_DN_1
#define IP2_LOOKUP_MATCH_UP_2(P,addr,value)  IP2_LOOKUP_MATCH_2_##addr(,P##value) IP2_LOOKUP_MATCH_DN_2
#define IP2_LOOKUP_MATCH_UP_3(P,addr,value)  IP2_LOOKUP_MATCH_3_##addr(,P##value) IP2_LOOKUP_MATCH_DN_3
#define IP2_LOOKUP_MATCH_UP_4(P,addr,value)  IP2_LOOKUP_MATCH_4_##addr(,P##value) IP2_LOOKUP_MATCH_DN_4
#define IP2_LOOKUP_MATCH_UP_5(P,addr,value)  IP2_LOOKUP_MATCH_5_##addr(,P##value) IP2_LOOKUP_MATCH_DN_5
#define IP2_LOOKUP_MATCH_UP_6(P,addr,value)  IP2_LOOKUP_MATCH_6_##addr(,P##value) IP2_LOOKUP_MATCH_DN_6
#define IP2_LOOKUP_MATCH_UP_7(P,addr,value)  IP2_LOOKUP_MATCH_7_##addr(,P##value) IP2_LOOKUP_MATCH_DN_7
#define IP2_LOOKUP_MATCH_UP_8(P,addr,value)  IP2_LOOKUP_MATCH_8_##addr(,P##value) IP2_LOOKUP_MATCH_DN_8
#define IP2_LOOKUP_MATCH_UP_9(P,addr,value)  IP2_LOOKUP_MATCH_9_##addr(,P##value) IP2_LOOKUP_MATCH_DN_9
#define IP2_LOOKUP_MATCH_UP_10(P,addr,value) IP2_LOOKUP_MATCH_10_##addr(,P##value) IP2_LOOKUP_MATCH_DN_10
#define IP2_LOOKUP_MATCH_UP_11(P,addr,value) IP2_LOOKUP_MATCH_11_##addr(,P##value) IP2_LOOKUP_MATCH_DN_11
#define IP2_LOOKUP_MATCH_UP_12(P,addr,value) IP2_LOOKUP_MATCH_12_##addr(,P##value) IP2_LOOKUP_MATCH_DN_12
#define IP2_LOOKUP_MATCH_UP_13(P,addr,value) IP2_LOOKUP_MATCH_13_##addr(,P##value) IP2_LOOKUP_MATCH_DN_13
#define IP2_LOOKUP_MATCH_UP_14(P,addr,value) IP2_LOOKUP_MATCH_14_##addr(,P##value) IP2_LOOKUP_MATCH_DN_14
#define IP2_LOOKUP_MATCH_UP_15(P,addr,value) IP2_LOOKUP_MATCH_15_##addr(,P##value) IP2_LOOKUP_MATCH_DN_15
#define IP2_LOOKUP_MATCH_UP_16(P,addr,value) IP2_LOOKUP_MATCH_16_##addr(,P##value) IP2_LOOKUP_MATCH_DN_16
#define IP2_LOOKUP_MATCH_UP_17(P,addr,value) IP2_LOOKUP_MATCH_17_##addr(,P##value) IP2_LOOKUP_MATCH_DN_17
#define IP2_LOOKUP_MATCH_UP_18(P,addr,value) IP2_LOOKUP_MATCH_18_##addr(,P##value) IP2_LOOKUP_MATCH_DN_18
#define IP2_LOOKUP_MATCH_UP_19(P,addr,value) IP2_LOOKUP_MATCH_19_##addr(,P##value) IP2_LOOKUP_MATCH_DN_19
#define IP2_LOOKUP_MATCH_UP_20(P,addr,value) IP2_LOOKUP_MATCH_20_##addr(,P##value) IP2_LOOKUP_MATCH_DN_20
#define IP2_LOOKUP_MATCH_UP_21(P,addr,value) IP2_LOOKUP_MATCH_21_##addr(,P##value) IP2_LOOKUP_MATCH_DN_21
#define IP2_LOOKUP_MATCH_UP_22(P,addr,value) IP2_LOOKUP_MATCH_22_##addr(,P##value) IP2_LOOKUP_MATCH_DN_22
#define IP2_LOOKUP_MATCH_UP_23(P,addr,value) IP2_LOOKUP_MATCH_23_##addr(,P##value) IP2_LOOKUP_MATCH_DN_23
#define IP2_LOOKUP_MATCH_UP_24(P,addr,value) IP2_LOOKUP_MATCH_24_##addr(,P##value) IP2_LOOKUP_MATCH_DN_24
#define IP2_LOOKUP_MATCH_UP_25(P,addr,value) IP2_LOOKUP_MATCH_25_##addr(,P##value) IP2_LOOKUP_MATCH_DN_25
#define IP2_LOOKUP_MATCH_UP_26(P,addr,value) IP2_LOOKUP_MATCH_26_##addr(,P##value) IP2_LOOKUP_MATCH_DN_26
#define IP2_LOOKUP_MATCH_UP_27(P,addr,value) IP2_LOOKUP_MATCH_27_##addr(,P##value) IP2_LOOKUP_MATCH_DN_27
#define IP2_LOOKUP_MATCH_UP_28(P,addr,value) IP2_LOOKUP_MATCH_28_##addr(,P##value) IP2_LOOKUP_MATCH_DN_28
#define IP2_LOOKUP_MATCH_UP_29(P,addr,value) IP2_LOOKUP_MATCH_29_##addr(,P##value) IP2_LOOKUP_MATCH_DN_29
#define IP2_LOOKUP_MATCH_UP_30(P,addr,value) IP2_LOOKUP_MATCH_30_##addr(,P##value) IP2_LOOKUP_MATCH_DN_30
#define IP2_LOOKUP_MATCH_UP_31(P,addr,value) IP2_LOOKUP_MATCH_31_##addr(,P##value) IP2_LOOKUP_MATCH_DN_31
#define IP2_LOOKUP_MATCH_UP_32(P,addr,value) IP2_LOOKUP_MATCH_32_##addr(,P##value) IP2_LOOKUP_MATCH_DN_32
#define IP2_LOOKUP_MATCH_UP_33(P,addr,value) IP2_LOOKUP_MATCH_33_##addr(,P##value) IP2_LOOKUP_MATCH_DN_33
#define IP2_LOOKUP_MATCH_UP_34(P,addr,value) IP2_LOOKUP_MATCH_34_##addr(,P##value) IP2_LOOKUP_MATCH_DN_34
#define IP2_LOOKUP_MATCH_UP_35(P,addr,value) IP2_LOOKUP_MATCH_35_##addr(,P##value) IP2_LOOKUP_MATCH_DN_35
#define IP2_LOOKUP_MATCH_UP_36(P,addr,value) IP2_LOOKUP_MATCH_36_##addr(,P##value) IP2_LOOKUP_MATCH_DN_36
#define IP2_LOOKUP_MATCH_UP_37(P,addr,value) IP2_LOOKUP_MATCH_37_##addr(,P##value) IP2_LOOKUP_MATCH_DN_37
#define IP2_LOOKUP_MATCH_UP_38(P,addr,value) IP2_LOOKUP_MATCH_38_##addr(,P##value) IP2_LOOKUP_MATCH_DN_38
#define IP2_LOOKUP_MATCH_UP_39(P,addr,value) IP2_LOOKUP_MATCH_39_##addr(,P##value) IP2_LOOKUP_MATCH_DN_39
#define IP2_LOOKUP_MATCH_UP_40(P,addr,value) IP2_LOOKUP_MATCH_40_##addr(,P##value) IP2_LOOKUP_MATCH_DN_40
#define IP2_LOOKUP_MATCH_UP_41(P,addr,value) IP2_LOOKUP_MATCH_41_##addr(,P##value) IP2_LOOKUP_MATCH_DN_41
#define IP2_LOOKUP_MATCH_UP_42(P,addr,value) IP2_LOOKUP_MATCH_42_##addr(,P##value) IP2_LOOKUP_MATCH_DN_42
#define IP2_LOOKUP_MATCH_UP_43(P,addr,value) IP2_LOOKUP_MATCH_43_##addr(,P##value) IP2_LOOKUP_MATCH_DN_43
#define IP2_LOOKUP_MATCH_UP_44(P,addr,value) IP2_LOOKUP_MATCH_44_##addr(,P##value) IP2_LOOKUP_MATCH_DN_44
#define IP2_LOOKUP_MATCH_UP_45(P,addr,value) IP2_LOOKUP_MATCH_45_##addr(,P##value) IP2_LOOKUP_MATCH_DN_45
#define IP2_LOOKUP_MATCH_UP_46(P,addr,value) IP2_LOOKUP_MATCH_46_##addr(,P##value) IP2_LOOKUP_MATCH_DN_46
#define IP2_LOOKUP_MATCH_UP_47(P,addr,value) IP2_LOOKUP_MATCH_47_##addr(,P##value) IP2_LOOKUP_MATCH_DN_47
#define IP2_LOOKUP_MATCH_UP_48(P,addr,value) IP2_LOOKUP_MATCH_48_##addr(,P##value) IP2_LOOKUP_MATCH_DN_48
#define IP2_LOOKUP_MATCH_UP_49(P,addr,value) IP2_LOOKUP_MATCH_49_##addr(,P##value) IP2_LOOKUP_MATCH_DN_49
#define IP2_LOOKUP_MATCH_UP_50(P,addr,value) IP2_LOOKUP_MATCH_50_##addr(,P##value) IP2_LOOKUP_MATCH_DN_50
#define IP2_LOOKUP_MATCH_UP_51(P,addr,value) IP2_LOOKUP_MATCH_51_##addr(,P##value) IP2_LOOKUP_MATCH_DN_51
#define IP2_LOOKUP_MATCH_UP_52(P,addr,value) IP2_LOOKUP_MATCH_52_##addr(,P##value) IP2_LOOKUP_MATCH_DN_52
#define IP2_LOOKUP_MATCH_UP_53(P,addr,value) IP2_LOOKUP_MATCH_53_##addr(,P##value) IP2_LOOKUP_MATCH_DN_53
#define IP2_LOOKUP_MATCH_UP_54(P,addr,value) IP2_LOOKUP_MATCH_54_##addr(,P##value) IP2_LOOKUP_MATCH_DN_54
#define IP2_LOOKUP_MATCH_UP_55(P,addr,value) IP2_LOOKUP_MATCH_55_##addr(,P##value) IP2_LOOKUP_MATCH_DN_55
#define IP2_LOOKUP_MATCH_UP_56(P,addr,value) IP2_LOOKUP_MATCH_56_##addr(,P##value) IP2_LOOKUP_MATCH_DN_56
#define IP2_LOOKUP_MATCH_UP_57(P,addr,value) IP2_LOOKUP_MATCH_57_##addr(,P##value) IP2_LOOKUP_MATCH_DN_57
#define IP2_LOOKUP_MATCH_UP_58(P,addr,value) IP2_LOOKUP_MATCH_58_##addr(,P##value) IP2_LOOKUP_MATCH_DN_58
#define IP2_LOOKUP_MATCH_UP_59(P,addr,value) IP2_LOOKUP_MATCH_59_##addr(,P##value) IP2_LOOKUP_MATCH_DN_59
#define IP2_LOOKUP_MATCH_UP_60(P,addr,value) IP2_LOOKUP_MATCH_60_##addr(,P##value) IP2_LOOKUP_MATCH_DN_60
#define IP2_LOOKUP_MATCH_UP_61(P,addr,value) IP2_LOOKUP_MATCH_61_##addr(,P##value) IP2_LOOKUP_MATCH_DN_61
#define IP2_LOOKUP_MATCH_UP_62(P,addr,value) IP2_LOOKUP_MATCH_62_##addr(,P##value) IP2_LOOKUP_MATCH_DN_62
#define IP2_LOOKUP_MATCH_UP_63(P,addr,value) IP2_LOOKUP_MATCH_63_##addr(,P##value) IP2_LOOKUP_MATCH_DN_63
#define IP2_LOOKUP_MATCH_UP_64(P,addr,value) IP2_LOOKUP_MATCH_64_##addr(,P##value) IP2_LOOKUP_MATCH_DN_64
#define IP2_LOOKUP_MATCH_UP_65(P,addr,value) IP2_LOOKUP_MATCH_65_##addr(,P##value) IP2_LOOKUP_MATCH_DN_65
#define IP2_LOOKUP_MATCH_UP_66(P,addr,value) IP2_LOOKUP_MATCH_66_##addr(,P##value) IP2_LOOKUP_MATCH_DN_66
#define IP2_LOOKUP_MATCH_UP_67(P,addr,value) IP2_LOOKUP_MATCH_67_##addr(,P##value) IP2_LOOKUP_MATCH_DN_67
#define IP2_LOOKUP_MATCH_UP_68(P,addr,value) IP2_LOOKUP_MATCH_68_##addr(,P##value) IP2_LOOKUP_MATCH_DN_68
#define IP2_LOOKUP_MATCH_UP_69(P,addr,value) IP2_LOOKUP_MATCH_69_##addr(,P##value) IP2_LOOKUP_MATCH_DN_69
#define IP2_LOOKUP_MATCH_UP_70(P,addr,value) IP2_LOOKUP_MATCH_70_##addr(,P##value) IP2_LOOKUP_MATCH_DN_70
#define IP2_LOOKUP_MATCH_UP_71(P,addr,value) IP2_LOOKUP_MATCH_71_##addr(,P##value) IP2_LOOKUP_MATCH_DN_71
#define IP2_LOOKUP_MATCH_UP_72(P,addr,value) IP2_LOOKUP_MATCH_72_##addr(,P##value) IP2_LOOKUP_MATCH_DN_72
#define IP2_LOOKUP_MATCH_UP_73(P,addr,value) IP2_LOOKUP_MATCH_73_##addr(,P##value) IP2_LOOKUP_MATCH_DN_73
#define IP2_LOOKUP_MATCH_UP_74(P,addr,value) IP2_LOOKUP_MATCH_74_##addr(,P##value) IP2_LOOKUP_MATCH_DN_74
#define IP2_LOOKUP_MATCH_UP_75(P,addr,value) IP2_LOOKUP_MATCH_75_##addr(,P##value) IP2_LOOKUP_MATCH_DN_75
#define IP2_LOOKUP_MATCH_UP_76(P,addr,value) IP2_LOOKUP_MATCH_76_##addr(,P##value) IP2_LOOKUP_MATCH_DN_76
#define IP2_LOOKUP_MATCH_UP_77(P,addr,value) IP2_LOOKUP_MATCH_77_##addr(,P##value) IP2_LOOKUP_MATCH_DN_77
#define IP2_LOOKUP_MATCH_UP_78(P,addr,value) IP2_LOOKUP_MATCH_78_##addr(,P##value) IP2_LOOKUP_MATCH_DN_78
#define IP2_LOOKUP_MATCH_UP_79(P,addr,value) IP2_LOOKUP_MATCH_79_##addr(,P##value) IP2_LOOKUP_MATCH_DN_79
#define IP2_LOOKUP_MATCH_UP_80(P,addr,value) IP2_LOOKUP_MATCH_80_##addr(,P##value) IP2_LOOKUP_MATCH_DN_80
#define IP2_LOOKUP_MATCH_UP_81(P,addr,value) IP2_LOOKUP_MATCH_81_##addr(,P##value) IP2_LOOKUP_MATCH_DN_81
#define IP2_LOOKUP_MATCH_UP_82(P,addr,value) IP2_LOOKUP_MATCH_82_##addr(,P##value) IP2_LOOKUP_MATCH_DN_82
#define IP2_LOOKUP_MATCH_UP_83(P,addr,value) IP2_LOOKUP_MATCH_83_##addr(,P##value) IP2_LOOKUP_MATCH_DN_83
#define IP2_LOOKUP_MATCH_UP_84(P,addr,value) IP2_LOOKUP_MATCH_84_##addr(,P##value) IP2_LOOKUP_MATCH_DN_84
#define IP2_LOOKUP_MATCH_UP_85(P,addr,value) IP2_LOOKUP_MATCH_85_##addr(,P##value) IP2_LOOKUP_MATCH_DN_85
#define IP2_LOOKUP_MATCH_UP_86(P,addr,value) IP2_LOOKUP_MATCH_86_##addr(,P##value) IP2_LOOKUP_MATCH_DN_86
#define IP2_LOOKUP_MATCH_UP_87(P,addr,value) IP2_LOOKUP_MATCH_87_##addr(,P##value) IP2_LOOKUP_MATCH_DN_87
#define IP2_LOOKUP_MATCH_UP_88(P,addr,value) IP2_LOOKUP_MATCH_88_##addr(,P##value) IP2_LOOKUP_MATCH_DN_88
#define IP2_LOOKUP_MATCH_UP_89(P,addr,value) IP2_LOOKUP_MATCH_89_##addr(,P##value) IP2_LOOKUP_MATCH_DN_89
#define IP2_LOOKUP_MATCH_UP_90(P,addr,value) IP2_LOOKUP_MATCH_90_##addr(,P##value) IP2_LOOKUP_MATCH_DN_90
#define IP2_LOOKUP_MATCH_UP_91(P,addr,value) IP2_LOOKUP_MATCH_91_##addr(,P##value) IP2_LOOKUP_MATCH_DN_91
#define IP2_LOOKUP_MATCH_UP_92(P,addr,value) IP2_LOOKUP_MATCH_92_##addr(,P##value) IP2_LOOKUP_MATCH_DN_92
#define IP2_LOOKUP_MATCH_UP_93(P,addr,value) IP2_LOOKUP_MATCH_93_##addr(,P##value) IP2_LOOKUP_MATCH_DN_93
#define IP2_LOOKUP_MATCH_UP_94(P,addr,value) IP2_LOOKUP_MATCH_94_##addr(,P##value) IP2_LOOKUP_MATCH_DN_94
#define IP2_LOOKUP_MATCH_UP_95(P,addr,value) IP2_LOOKUP_MATCH_95_##addr(,P##value) IP2_LOOKUP_MATCH_DN_95
#define IP2_LOOKUP_MATCH_UP_96(P,addr,value) IP2_LOOKUP_MATCH_96_##addr(,P##value) IP2_LOOKUP_MATCH_DN_96
#define IP2_LOOKUP_MATCH_UP_97(P,addr,value) IP2_LOOKUP_MATCH_97_##addr(,P##value) IP2_LOOKUP_MATCH_DN_97
#define IP2_LOOKUP_MATCH_UP_98(P,addr,value) IP2_LOOKUP_MATCH_98_##addr(,P##value) IP2_LOOKUP_MATCH_DN_98
#define IP2_LOOKUP_MATCH_UP_99(P,addr,value) IP2_LOOKUP_MATCH_99_##addr(,P##value) IP2_LOOKUP_MATCH_DN_99

#define IP2_LOOKUP_MATCH_DN_0(P,addr,value)  IP2_LOOKUP_MATCH_0_##addr(,P##value) IP2_LOOKUP_MATCH_UP_0
#define IP2_LOOKUP_MATCH_DN_1(P,addr,value)  IP2_LOOKUP_MATCH_1_##addr(,P##value) IP2_LOOKUP_MATCH_UP_1
#define IP2_LOOKUP_MATCH_DN_2(P,addr,value)  IP2_LOOKUP_MATCH_2_##addr(,P##value) IP2_LOOKUP_MATCH_UP_2
#define IP2_LOOKUP_MATCH_DN_3(P,addr,value)  IP2_LOOKUP_MATCH_3_##addr(,P##value) IP2_LOOKUP_MATCH_UP_3
#define IP2_LOOKUP_MATCH_DN_4(P,addr,value)  IP2_LOOKUP_MATCH_4_##addr(,P##value) IP2_LOOKUP_MATCH_UP_4
#define IP2_LOOKUP_MATCH_DN_5(P,addr,value)  IP2_LOOKUP_MATCH_5_##addr(,P##value) IP2_LOOKUP_MATCH_UP_5
#define IP2_LOOKUP_MATCH_DN_6(P,addr,value)  IP2_LOOKUP_MATCH_6_##addr(,P##value) IP2_LOOKUP_MATCH_UP_6
#define IP2_LOOKUP_MATCH_DN_7(P,addr,value)  IP2_LOOKUP_MATCH_7_##addr(,P##value) IP2_LOOKUP_MATCH_UP_7
#define IP2_LOOKUP_MATCH_DN_8(P,addr,value)  IP2_LOOKUP_MATCH_8_##addr(,P##value) IP2_LOOKUP_MATCH_UP_8
#define IP2_LOOKUP_MATCH_DN_9(P,addr,value)  IP2_LOOKUP_MATCH_9_##addr(,P##value) IP2_LOOKUP_MATCH_UP_9
#define IP2_LOOKUP_MATCH_DN_10(P,addr,value) IP2_LOOKUP_MATCH_10_##addr(,P##value) IP2_LOOKUP_MATCH_UP_10
#define IP2_LOOKUP_MATCH_DN_11(P,addr,value) IP2_LOOKUP_MATCH_11_##addr(,P##value) IP2_LOOKUP_MATCH_UP_11
#define IP2_LOOKUP_MATCH_DN_12(P,addr,value) IP2_LOOKUP_MATCH_12_##addr(,P##value) IP2_LOOKUP_MATCH_UP_12
#define IP2_LOOKUP_MATCH_DN_13(P,addr,value) IP2_LOOKUP_MATCH_13_##addr(,P##value) IP2_LOOKUP_MATCH_UP_13
#define IP2_LOOKUP_MATCH_DN_14(P,addr,value) IP2_LOOKUP_MATCH_14_##addr(,P##value) IP2_LOOKUP_MATCH_UP_14
#define IP2_LOOKUP_MATCH_DN_15(P,addr,value) IP2_LOOKUP_MATCH_15_##addr(,P##value) IP2_LOOKUP_MATCH_UP_15
#define IP2_LOOKUP_MATCH_DN_16(P,addr,value) IP2_LOOKUP_MATCH_16_##addr(,P##value) IP2_LOOKUP_MATCH_UP_16
#define IP2_LOOKUP_MATCH_DN_17(P,addr,value) IP2_LOOKUP_MATCH_17_##addr(,P##value) IP2_LOOKUP_MATCH_UP_17
#define IP2_LOOKUP_MATCH_DN_18(P,addr,value) IP2_LOOKUP_MATCH_18_##addr(,P##value) IP2_LOOKUP_MATCH_UP_18
#define IP2_LOOKUP_MATCH_DN_19(P,addr,value) IP2_LOOKUP_MATCH_19_##addr(,P##value) IP2_LOOKUP_MATCH_UP_19
#define IP2_LOOKUP_MATCH_DN_20(P,addr,value) IP2_LOOKUP_MATCH_20_##addr(,P##value) IP2_LOOKUP_MATCH_UP_20
#define IP2_LOOKUP_MATCH_DN_21(P,addr,value) IP2_LOOKUP_MATCH_21_##addr(,P##value) IP2_LOOKUP_MATCH_UP_21
#define IP2_LOOKUP_MATCH_DN_22(P,addr,value) IP2_LOOKUP_MATCH_22_##addr(,P##value) IP2_LOOKUP_MATCH_UP_22
#define IP2_LOOKUP_MATCH_DN_23(P,addr,value) IP2_LOOKUP_MATCH_23_##addr(,P##value) IP2_LOOKUP_MATCH_UP_23
#define IP2_LOOKUP_MATCH_DN_24(P,addr,value) IP2_LOOKUP_MATCH_24_##addr(,P##value) IP2_LOOKUP_MATCH_UP_24
#define IP2_LOOKUP_MATCH_DN_25(P,addr,value) IP2_LOOKUP_MATCH_25_##addr(,P##value) IP2_LOOKUP_MATCH_UP_25
#define IP2_LOOKUP_MATCH_DN_26(P,addr,value) IP2_LOOKUP_MATCH_26_##addr(,P##value) IP2_LOOKUP_MATCH_UP_26
#define IP2_LOOKUP_MATCH_DN_27(P,addr,value) IP2_LOOKUP_MATCH_27_##addr(,P##value) IP2_LOOKUP_MATCH_UP_27
#define IP2_LOOKUP_MATCH_DN_28(P,addr,value) IP2_LOOKUP_MATCH_28_##addr(,P##value) IP2_LOOKUP_MATCH_UP_28
#define IP2_LOOKUP_MATCH_DN_29(P,addr,value) IP2_LOOKUP_MATCH_29_##addr(,P##value) IP2_LOOKUP_MATCH_UP_29
#define IP2_LOOKUP_MATCH_DN_30(P,addr,value) IP2_LOOKUP_MATCH_30_##addr(,P##value) IP2_LOOKUP_MATCH_UP_30
#define IP2_LOOKUP_MATCH_DN_31(P,addr,value) IP2_LOOKUP_MATCH_31_##addr(,P##value) IP2_LOOKUP_MATCH_UP_31
#define IP2_LOOKUP_MATCH_DN_32(P,addr,value) IP2_LOOKUP_MATCH_32_##addr(,P##value) IP2_LOOKUP_MATCH_UP_32
#define IP2_LOOKUP_MATCH_DN_33(P,addr,value) IP2_LOOKUP_MATCH_33_##addr(,P##value) IP2_LOOKUP_MATCH_UP_33
#define IP2_LOOKUP_MATCH_DN_34(P,addr,value) IP2_LOOKUP_MATCH_34_##addr(,P##value) IP2_LOOKUP_MATCH_UP_34
#define IP2_LOOKUP_MATCH_DN_35(P,addr,value) IP2_LOOKUP_MATCH_35_##addr(,P##value) IP2_LOOKUP_MATCH_UP_35
#define IP2_LOOKUP_MATCH_DN_36(P,addr,value) IP2_LOOKUP_MATCH_36_##addr(,P##value) IP2_LOOKUP_MATCH_UP_36
#define IP2_LOOKUP_MATCH_DN_37(P,addr,value) IP2_LOOKUP_MATCH_37_##addr(,P##value) IP2_LOOKUP_MATCH_UP_37
#define IP2_LOOKUP_MATCH_DN_38(P,addr,value) IP2_LOOKUP_MATCH_38_##addr(,P##value) IP2_LOOKUP_MATCH_UP_38
#define IP2_LOOKUP_MATCH_DN_39(P,addr,value) IP2_LOOKUP_MATCH_39_##addr(,P##value) IP2_LOOKUP_MATCH_UP_39
#define IP2_LOOKUP_MATCH_DN_40(P,addr,value) IP2_LOOKUP_MATCH_40_##addr(,P##value) IP2_LOOKUP_MATCH_UP_40
#define IP2_LOOKUP_MATCH_DN_41(P,addr,value) IP2_LOOKUP_MATCH_41_##addr(,P##value) IP2_LOOKUP_MATCH_UP_41
#define IP2_LOOKUP_MATCH_DN_42(P,addr,value) IP2_LOOKUP_MATCH_42_##addr(,P##value) IP2_LOOKUP_MATCH_UP_42
#define IP2_LOOKUP_MATCH_DN_43(P,addr,value) IP2_LOOKUP_MATCH_43_##addr(,P##value) IP2_LOOKUP_MATCH_UP_43
#define IP2_LOOKUP_MATCH_DN_44(P,addr,value) IP2_LOOKUP_MATCH_44_##addr(,P##value) IP2_LOOKUP_MATCH_UP_44
#define IP2_LOOKUP_MATCH_DN_45(P,addr,value) IP2_LOOKUP_MATCH_45_##addr(,P##value) IP2_LOOKUP_MATCH_UP_45
#define IP2_LOOKUP_MATCH_DN_46(P,addr,value) IP2_LOOKUP_MATCH_46_##addr(,P##value) IP2_LOOKUP_MATCH_UP_46
#define IP2_LOOKUP_MATCH_DN_47(P,addr,value) IP2_LOOKUP_MATCH_47_##addr(,P##value) IP2_LOOKUP_MATCH_UP_47
#define IP2_LOOKUP_MATCH_DN_48(P,addr,value) IP2_LOOKUP_MATCH_48_##addr(,P##value) IP2_LOOKUP_MATCH_UP_48
#define IP2_LOOKUP_MATCH_DN_49(P,addr,value) IP2_LOOKUP_MATCH_49_##addr(,P##value) IP2_LOOKUP_MATCH_UP_49
#define IP2_LOOKUP_MATCH_DN_50(P,addr,value) IP2_LOOKUP_MATCH_50_##addr(,P##value) IP2_LOOKUP_MATCH_UP_50
#define IP2_LOOKUP_MATCH_DN_51(P,addr,value) IP2_LOOKUP_MATCH_51_##addr(,P##value) IP2_LOOKUP_MATCH_UP_51
#define IP2_LOOKUP_MATCH_DN_52(P,addr,value) IP2_LOOKUP_MATCH_52_##addr(,P##value) IP2_LOOKUP_MATCH_UP_52
#define IP2_LOOKUP_MATCH_DN_53(P,addr,value) IP2_LOOKUP_MATCH_53_##addr(,P##value) IP2_LOOKUP_MATCH_UP_53
#define IP2_LOOKUP_MATCH_DN_54(P,addr,value) IP2_LOOKUP_MATCH_54_##addr(,P##value) IP2_LOOKUP_MATCH_UP_54
#define IP2_LOOKUP_MATCH_DN_55(P,addr,value) IP2_LOOKUP_MATCH_55_##addr(,P##value) IP2_LOOKUP_MATCH_UP_55
#define IP2_LOOKUP_MATCH_DN_56(P,addr,value) IP2_LOOKUP_MATCH_56_##addr(,P##value) IP2_LOOKUP_MATCH_UP_56
#define IP2_LOOKUP_MATCH_DN_57(P,addr,value) IP2_LOOKUP_MATCH_57_##addr(,P##value) IP2_LOOKUP_MATCH_UP_57
#define IP2_LOOKUP_MATCH_DN_58(P,addr,value) IP2_LOOKUP_MATCH_58_##addr(,P##value) IP2_LOOKUP_MATCH_UP_58
#define IP2_LOOKUP_MATCH_DN_59(P,addr,value) IP2_LOOKUP_MATCH_59_##addr(,P##value) IP2_LOOKUP_MATCH_UP_59
#define IP2_LOOKUP_MATCH_DN_60(P,addr,value) IP2_LOOKUP_MATCH_60_##addr(,P##value) IP2_LOOKUP_MATCH_UP_60
#define IP2_LOOKUP_MATCH_DN_61(P,addr,value) IP2_LOOKUP_MATCH_61_##addr(,P##value) IP2_LOOKUP_MATCH_UP_61
#define IP2_LOOKUP_MATCH_DN_62(P,addr,value) IP2_LOOKUP_MATCH_62_##addr(,P##value) IP2_LOOKUP_MATCH_UP_62
#define IP2_LOOKUP_MATCH_DN_63(P,addr,value) IP2_LOOKUP_MATCH_63_##addr(,P##value) IP2_LOOKUP_MATCH_UP_63
#define IP2_LOOKUP_MATCH_DN_64(P,addr,value) IP2_LOOKUP_MATCH_64_##addr(,P##value) IP2_LOOKUP_MATCH_UP_64
#define IP2_LOOKUP_MATCH_DN_65(P,addr,value) IP2_LOOKUP_MATCH_65_##addr(,P##value) IP2_LOOKUP_MATCH_UP_65
#define IP2_LOOKUP_MATCH_DN_66(P,addr,value) IP2_LOOKUP_MATCH_66_##addr(,P##value) IP2_LOOKUP_MATCH_UP_66
#define IP2_LOOKUP_MATCH_DN_67(P,addr,value) IP2_LOOKUP_MATCH_67_##addr(,P##value) IP2_LOOKUP_MATCH_UP_67
#define IP2_LOOKUP_MATCH_DN_68(P,addr,value) IP2_LOOKUP_MATCH_68_##addr(,P##value) IP2_LOOKUP_MATCH_UP_68
#define IP2_LOOKUP_MATCH_DN_69(P,addr,value) IP2_LOOKUP_MATCH_69_##addr(,P##value) IP2_LOOKUP_MATCH_UP_69
#define IP2_LOOKUP_MATCH_DN_70(P,addr,value) IP2_LOOKUP_MATCH_70_##addr(,P##value) IP2_LOOKUP_MATCH_UP_70
#define IP2_LOOKUP_MATCH_DN_71(P,addr,value) IP2_LOOKUP_MATCH_71_##addr(,P##value) IP2_LOOKUP_MATCH_UP_71
#define IP2_LOOKUP_MATCH_DN_72(P,addr,value) IP2_LOOKUP_MATCH_72_##addr(,P##value) IP2_LOOKUP_MATCH_UP_72
#define IP2_LOOKUP_MATCH_DN_73(P,addr,value) IP2_LOOKUP_MATCH_73_##addr(,P##value) IP2_LOOKUP_MATCH_UP_73
#define IP2_LOOKUP_MATCH_DN_74(P,addr,value) IP2_LOOKUP_MATCH_74_##addr(,P##value) IP2_LOOKUP_MATCH_UP_74
#define IP2_LOOKUP_MATCH_DN_75(P,addr,value) IP2_LOOKUP_MATCH_75_##addr(,P##value) IP2_LOOKUP_MATCH_UP_75
#define IP2_LOOKUP_MATCH_DN_76(P,addr,value) IP2_LOOKUP_MATCH_76_##addr(,P##value) IP2_LOOKUP_MATCH_UP_76
#define IP2_LOOKUP_MATCH_DN_77(P,addr,value) IP2_LOOKUP_MATCH_77_##addr(,P##value) IP2_LOOKUP_MATCH_UP_77
#define IP2_LOOKUP_MATCH_DN_78(P,addr,value) IP2_LOOKUP_MATCH_78_##addr(,P##value) IP2_LOOKUP_MATCH_UP_78
#define IP2_LOOKUP_MATCH_DN_79(P,addr,value) IP2_LOOKUP_MATCH_79_##addr(,P##value) IP2_LOOKUP_MATCH_UP_79
#define IP2_LOOKUP_MATCH_DN_80(P,addr,value) IP2_LOOKUP_MATCH_80_##addr(,P##value) IP2_LOOKUP_MATCH_UP_80
#define IP2_LOOKUP_MATCH_DN_81(P,addr,value) IP2_LOOKUP_MATCH_81_##addr(,P##value) IP2_LOOKUP_MATCH_UP_81
#define IP2_LOOKUP_MATCH_DN_82(P,addr,value) IP2_LOOKUP_MATCH_82_##addr(,P##value) IP2_LOOKUP_MATCH_UP_82
#define IP2_LOOKUP_MATCH_DN_83(P,addr,value) IP2_LOOKUP_MATCH_83_##addr(,P##value) IP2_LOOKUP_MATCH_UP_83
#define IP2_LOOKUP_MATCH_DN_84(P,addr,value) IP2_LOOKUP_MATCH_84_##addr(,P##value) IP2_LOOKUP_MATCH_UP_84
#define IP2_LOOKUP_MATCH_DN_85(P,addr,value) IP2_LOOKUP_MATCH_85_##addr(,P##value) IP2_LOOKUP_MATCH_UP_85
#define IP2_LOOKUP_MATCH_DN_86(P,addr,value) IP2_LOOKUP_MATCH_86_##addr(,P##value) IP2_LOOKUP_MATCH_UP_86
#define IP2_LOOKUP_MATCH_DN_87(P,addr,value) IP2_LOOKUP_MATCH_87_##addr(,P##value) IP2_LOOKUP_MATCH_UP_87
#define IP2_LOOKUP_MATCH_DN_88(P,addr,value) IP2_LOOKUP_MATCH_88_##addr(,P##value) IP2_LOOKUP_MATCH_UP_88
#define IP2_LOOKUP_MATCH_DN_89(P,addr,value) IP2_LOOKUP_MATCH_89_##addr(,P##value) IP2_LOOKUP_MATCH_UP_89
#define IP2_LOOKUP_MATCH_DN_90(P,addr,value) IP2_LOOKUP_MATCH_90_##addr(,P##value) IP2_LOOKUP_MATCH_UP_90
#define IP2_LOOKUP_MATCH_DN_91(P,addr,value) IP2_LOOKUP_MATCH_91_##addr(,P##value) IP2_LOOKUP_MATCH_UP_91
#define IP2_LOOKUP_MATCH_DN_92(P,addr,value) IP2_LOOKUP_MATCH_92_##addr(,P##value) IP2_LOOKUP_MATCH_UP_92
#define IP2_LOOKUP_MATCH_DN_93(P,addr,value) IP2_LOOKUP_MATCH_93_##addr(,P##value) IP2_LOOKUP_MATCH_UP_93
#define IP2_LOOKUP_MATCH_DN_94(P,addr,value) IP2_LOOKUP_MATCH_94_##addr(,P##value) IP2_LOOKUP_MATCH_UP_94
#define IP2_LOOKUP_MATCH_DN_95(P,addr,value) IP2_LOOKUP_MATCH_95_##addr(,P##value) IP2_LOOKUP_MATCH_UP_95
#define IP2_LOOKUP_MATCH_DN_96(P,addr,value) IP2_LOOKUP_MATCH_96_##addr(,P##value) IP2_LOOKUP_MATCH_UP_96
#define IP2_LOOKUP_MATCH_DN_97(P,addr,value) IP2_LOOKUP_MATCH_97_##addr(,P##value) IP2_LOOKUP_MATCH_UP_97
#define IP2_LOOKUP_MATCH_DN_98(P,addr,value) IP2_LOOKUP_MATCH_98_##addr(,P##value) IP2_LOOKUP_MATCH_UP_98
#define IP2_LOOKUP_MATCH_DN_99(P,addr,value) IP2_LOOKUP_MATCH_99_##addr(,P##value) IP2_LOOKUP_MATCH_UP_99

#endif

#define PP2_ASSOC_FIND(aseq,key,default) IP2_ASSOC_FIND_I(default,IP2_LOOKUP_MATCH_UP_##key aseq)
#define IP2_ASSOC_FIND_I(default,lookup) PP2_TUPLE_AT_1(,lookup,default)

#endif


#define PP2_INSN_8PP2_GOTO(P,r0,r1,r2,label,...) \
                          (, \
                           P##r0,P##r1,P##r2, \
                           IP2_FX( \
                               GOTO_FIND_CONTINUATION, \
                               (,P##r0,P##r1,P##r2,P##label,IP2_GOTO_CTX_GET_LABELS P##r1,(P##__VA_ARGS__)) \
                           ) \
                          )
#define IP2_GOTO_FIND_CONTINUATION(P,r0,r1,r2,label,labels,vm_insns) \
        PP2_FX( \
            OPEN, \
            PP2_ASSOC_FIND(P##labels,P##label,(8PP2_GOTO_LABEL_NOT_FOUND,P##vm_insns)) \
        )
#define IP2_GOTO_CTX_GET_LABELS(P,stack,labels,...) P##labels

#define PP2_INSN_8PP2_GOTO_LABEL_NOT_FOUND(P,r0,r1,r2,vm_insns,...) (,P##r0,P##r1,P##r2,P##__VA_ARGS__)

#endif

// ******************** From: label.h
/** @file */
#ifndef PP2_MACHINE_GOTO_LABEL_H
#define PP2_MACHINE_GOTO_LABEL_H


#define PP2_INSN_8PP2_LABEL(P,r0,r1,r2,label,body,...) \
                                (, \
                                    P##r0, \
                                    /*r1=*/IP2_FX( \
                                        LABEL_I, \
                                        (P##label,P##body,PP2_OPEN P##r1)\
                                    ), \
                                    P##r2, \
                                    P##__VA_ARGS__ \
                                )

#define IP2_LABEL_I(label,body,\
                    P,stack,labels,...) \
        (,P##stack,(,P##label,P##body)P##labels,P##__VA_ARGS__)

#endif


#define PP2_DEF_while(cond_stx) )PP2_COMPILE_LANGUAGE_WHILE(cond_stx,

#define PP2_COMPILE_LANGUAGE_WHILE(cond_stx,body_stx_tup) \
        8PP2_LANGUAGE_LOOP, \
        IP2_COMPILE_LANGUAGE_WHILE_MERGE_COND_AND_BODY_IF_PRESENT( \
            IP2_COMPILE_LANGUAGE_WHILE_TEST_IF_COND_OMITTED cond_stx () \
        )(,body_stx_tup,cond_stx)

#define IP2_COMPILE_LANGUAGE_WHILE_MERGE_COND_AND_BODY_IF_PRESENT(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_COMPILE_LANGUAGE_WHILE_CONDITIONAL)
#define IP2_COMPILE_LANGUAGE_WHILE_TEST_IF_COND_OMITTED(...) ,IP2_COMPILE_LANGUAGE_WHILE_UNCONDITIONAL,
#define IP2_COMPILE_LANGUAGE_WHILE_CONDITIONAL(P,body_stx_tup,cond_stx) \
        ( \
         8PP2_LANGUAGE_COMPILE,P##cond_stx, \
         8PP2_LANGUAGE_WHILE_LOOP_BRANCH, \
         8PP2_LANGUAGE_BLOCK,P##body_stx_tup, \
         8PP2_GOTO,1, \
        )
#define IP2_COMPILE_LANGUAGE_WHILE_UNCONDITIONAL(P,body_stx_tup,_) \
        ( \
         8PP2_LANGUAGE_BLOCK,P##body_stx_tup, \
         8PP2_GOTO,1, \
        )


#define PP2_INSN_8PP2_LANGUAGE_LOOP(P,r0,r1,r2,body_stx_tup,...) \
                                   (, \
                                    P##r0, \
                                    /*r1=*/IP2_FX(LANGUAGE_WHILE_LOOP_PUSH_LABELS, (P##body_stx_tup,(P##__VA_ARGS__),PP2_OPEN P##r1)), \
                                    P##r2, \
                                    PP2_OPEN P##body_stx_tup \
                                   )

/* Label 0 is the loop's exit continuation. A loop runs for its effect, so it answers
 * with nil: the exit path loads it on the way out, which also covers `for`, since a
 * for compiles down to a while. */
#define IP2_LANGUAGE_WHILE_LOOP_PUSH_LABELS(body,epilogue,P,stack,labels,...) (,P##stack,(,0,(8PP2_LANGUAGE_LOOP_POP_LABELS,8PP2_LANGUAGE_LOAD_NIL,PP2_OPEN P##epilogue))(,1,P##body)P##labels,P##__VA_ARGS__)

/* On loop exit (the goto-0/epilogue path) drop the two labels this loop pushed,
 * restoring any enclosing loop's labels. Without this the labels list is shared
 * across nesting: an inner loop's (,1,body) stays at the front after it exits
 * and masks the outer loop's own label 1 on loop-back, so nested while/for
 * jump into the wrong body. The two labels this loop pushed are at the front on
 * exit (any inner loop has already popped its own), so dropping two suffices. */
#define PP2_INSN_8PP2_LANGUAGE_LOOP_POP_LABELS(P,r0,r1,r2,...) \
        (,P##r0,/*r1=*/IP2_FX(LANGUAGE_LOOP_POP_LABELS,(PP2_OPEN P##r1)),P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LOOP_POP_LABELS(P,stack,labels,...) (,P##stack,PP2_EAT PP2_EAT P##labels,P##__VA_ARGS__)


#define PP2_INSN_8PP2_LANGUAGE_WHILE_LOOP_BRANCH(P,r0,r1,r2,...) \
                                                (, \
                                                 /*r0=*/,P##r1,P##r2, \
                                                 IP2_LANGUAGE_WHILE_LOOP_BRANCH_SELECT P##r0 (,P##__VA_ARGS__) \
                                                )

#define IP2_LANGUAGE_WHILE_LOOP_BRANCH_SELECT(obj_addr,obj_type,obj_value) IP2_LANGUAGE_WHILE_LOOP_BRANCH_##obj_value
#define IP2_LANGUAGE_WHILE_LOOP_BRANCH_1(P,...) P##__VA_ARGS__
#define IP2_LANGUAGE_WHILE_LOOP_BRANCH_0(P,...) 8PP2_GOTO,0,

#endif


#define PP2_DEF_for(init_stx,cond_stx,update_stx) )PP2_COMPILE_LANGUAGE_FOR(init_stx,cond_stx,update_stx,

#define PP2_COMPILE_LANGUAGE_FOR(init_stx,cond_stx,update_stx,body_stx_tup) \
        IP2_COMPILE_LANGUAGE_FOR_INLINE_INIT_IF_PRESENT( \
            IP2_COMPILE_LANGUAGE_FOR_TEST_IF_INIT_OMITTED init_stx () \
        )(init_stx) /*no comma*/ \
        PP2_COMPILE_LANGUAGE_WHILE( \
            cond_stx, \
            IP2_COMPILE_LANGUAGE_FOR_MERGE_BODY_AND_UPDATE_IF_PRESENT( \
                IP2_COMPILE_LANGUAGE_FOR_TEST_IF_UPDATE_OMITTED update_stx () \
            )(,body_stx_tup,update_stx) \
        )

#define IP2_COMPILE_LANGUAGE_FOR_INLINE_INIT_IF_PRESENT(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_COMPILE_LANGUAGE_FOR_WITH_INIT)
#define IP2_COMPILE_LANGUAGE_FOR_TEST_IF_INIT_OMITTED(...) ,IP2_COMPILE_LANGUAGE_FOR_WITHOUT_INIT,
#define IP2_COMPILE_LANGUAGE_FOR_WITH_INIT(init_stx) 8PP2_LANGUAGE_COMPILE,init_stx,
#define IP2_COMPILE_LANGUAGE_FOR_WITHOUT_INIT()

#define IP2_COMPILE_LANGUAGE_FOR_MERGE_BODY_AND_UPDATE_IF_PRESENT(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_COMPILE_LANGUAGE_FOR_WITH_UPDATE)
#define IP2_COMPILE_LANGUAGE_FOR_TEST_IF_UPDATE_OMITTED(...) ,IP2_COMPILE_LANGUAGE_FOR_WITHOUT_UPDATE,
#define IP2_COMPILE_LANGUAGE_FOR_WITH_UPDATE(P,body_stx_tup,update_stx) (PP2_OPEN P##body_stx_tup,P##update_stx)
#define IP2_COMPILE_LANGUAGE_FOR_WITHOUT_UPDATE(P,body_stx_tup,_) P##body_stx_tup

#endif

// ******************** From: if.h
/** @file */
#ifndef PP2_LANGUAGE_STATEMENTS_IF_H
#define PP2_LANGUAGE_STATEMENTS_IF_H




#define PP2_DEF_if(cond_stx) PP2_PRIMITIVE(8PP2_LANGUAGE_IF,cond_stx,PP2_SEQ_SPLIT_HEAD)


#define PP2_INSN_8PP2_LANGUAGE_IF(P,r0,r1,r2,cond_stx,if_branch,else_branch,...) \
                                 (,\
                                  P##r0,P##r1,P##r2, \
                                  PP2_COMPILE(cond_stx), \
                                  8PP2_LANGUAGE_IF_BRANCH,P##if_branch,P##else_branch, \
                                  P##__VA_ARGS__ \
                                 )

#define PP2_INSN_8PP2_LANGUAGE_IF_BRANCH(P,r0,r1,r2,if_branch,else_branch,...) \
                                        (, \
                                         /*r0=*/,P##r1,P##r2, \
                                         IP2_LANGUAGE_IF_BRANCH_SELECT P##r0 (,P##if_branch,P##else_branch), \
                                         P##__VA_ARGS__ \
                                        )

#define PP2_INSN_8PP2_LANGUAGE_ELSE(P,r0,r1,r2,else_branch,...) \
                                   (, \
                                    P##r0,P##r1,P##r2, \
                                    IP2_LANGUAGE_ELSE_TEST_IF_COND(IP2_LANGUAGE_ELSE_DETECT_BLOCK P##else_branch), \
                                    P##__VA_ARGS__, \
                                   )

#define PP2_INSN_8PP2_LANGUAGE_ELSE_IF(P,r0,r1,r2,if_branch,...) \
                                      (, \
                                       P##r0,P##r1,P##r2, \
                                       PP2_COMPILE(if_branch), \
                                       P##__VA_ARGS__, \
                                      )

#define IP2_LANGUAGE_IF_BRANCH_SELECT(obj_addr,obj_type,obj_value) IP2_LANGUAGE_IF_BRANCH_##obj_value
#define IP2_LANGUAGE_IF_BRANCH_1(P,if_branch,else_branch)  PP2_LANGUAGE_BLOCK P##if_branch
#define IP2_LANGUAGE_IF_BRANCH_0(P,if_branch,else_branch) IP2_LANGUAGE_ELSE_MATCH_##else_branch

#define IP2_LANGUAGE_ELSE_MATCH_else 8PP2_LANGUAGE_ELSE,
#define IP2_LANGUAGE_ELSE_MATCH_ 8PP2_LANGUAGE_LOAD_NIL /* no else clause: a false if answers nil */

#define IP2_LANGUAGE_ELSE_DETECT_BLOCK(...) 0BLOCK_DETECTED,PP2_LANGUAGE_BLOCK(__VA_ARGS__)
#define IP2_LANGUAGE_ELSE_TEST_IF_COND(...) IP2_LANGUAGE_ELSE_TEST_IF_COND_I(__VA_ARGS__)
#define IP2_LANGUAGE_ELSE_TEST_IF_COND_I(suffix,...) IP2_LANGUAGE_ELSE_TEST_IF_COND_II_##suffix __VA_ARGS__
#define IP2_LANGUAGE_ELSE_TEST_IF_COND_II_IP2_LANGUAGE_ELSE_DETECT_BLOCK 8PP2_LANGUAGE_ELSE_IF,
#define IP2_LANGUAGE_ELSE_TEST_IF_COND_II_0BLOCK_DETECTED

#endif

// ******************** From: try.h
/** @file */
#ifndef PP2_LANGUAGE_STATEMENTS_TRY_H
#define PP2_LANGUAGE_STATEMENTS_TRY_H



// ******************** From: pop_eh.h
/** @file */
#ifndef PP2_MACHINE_EXCEPTION_POP_EH_H
#define PP2_MACHINE_EXCEPTION_POP_EH_H



/* Uninstall the innermost handler, run when a protected body finishes without throwing.
 *
 * Dropping the front entry is enough. Everything the body pushed onto the spill stack
 * -- activation frames, spilled argument lists -- is strictly balanced and has already
 * been popped by the time the body ends, so the handler this try installed is back on
 * top. r0 is left alone: it still holds whatever the body produced, which is the value
 * of the try. */
#define PP2_INSN_8PP2_POP_EXCEPTION_HANDLER(P,r0,r1,r2,...) \
                                           (, \
                                            P##r0, \
                                            /*r1=*/IP2_FX(POP_EXCEPTION_HANDLER_I,(PP2_OPEN P##r1)), \
                                            P##r2, \
                                            P##__VA_ARGS__ \
                                           )

#define IP2_POP_EXCEPTION_HANDLER_I(P,stack,labels,arguments,registers,_) \
        (,P##stack,P##labels,P##arguments,/*registers=*/PP2_EAT P##registers,)

#endif

// ******************** From: push_eh.h
/** @file */
#ifndef PP2_MACHINE_EXCEPTION_PUSH_EH_H
#define PP2_MACHINE_EXCEPTION_PUSH_EH_H



/* Install an exception handler by pushing it onto the spill stack, tagged 8E, in
 * among the activation frames and spilled argument lists it will have to unwind past.
 *
 * Living on that one stack is what makes the nesting come out right for free. Handlers
 * shadow one another because the stack is a LIFO, so a throw meets the innermost first.
 * A throw is popping frames off the same stack it is looking for a handler on, so it
 * cannot pass a handler without having already restored everything the handler's scope
 * expects to see. And nothing has to be kept in step with anything else, because there
 * is only the one structure.
 *
 * The entry carries three things: the handler continuation, and snapshots of the labels
 * and the pending arguments as they stand here.
 *
 * Those two are snapshotted and the local stack deliberately is NOT, and the difference
 * is the whole distinction the semantics turn on. The local stack is what the program
 * SAYS -- the try body's assignments are real and a throw must not undo them -- so it is
 * recovered by restoring activation frames on the way out (see unwind.h), which discards
 * only the callee's locals and keeps the try scope's own. Labels and pending arguments
 * are what the machine happens to be in the MIDDLE of -- a half-walked loop, a half-built
 * call whose operands are still parked -- and at the moment of a throw that state is
 * meaningless debris. Keeping it would hand the handler a stale parked callee. So they
 * are restored to what they were when the try began.
 *
 * See PP2_INSN_8PP2_POP_EXCEPTION_HANDLER for the matching pop and unwind.h for the walk. */
#define PP2_INSN_8PP2_PUSH_EXCEPTION_HANDLER(P,r0,r1,r2,handler,...) \
                                            (, \
                                             P##r0, \
                                             /*r1=*/IP2_FX(PUSH_EXCEPTION_HANDLER_I,(P##handler,PP2_OPEN P##r1)), \
                                             P##r2, \
                                             P##__VA_ARGS__ \
                                            )

#define IP2_PUSH_EXCEPTION_HANDLER_I(handler,\
                                     P,stack,labels,arguments,registers,_) \
        (,P##stack,P##labels,P##arguments,/*registers=*/(8E,P##labels,(P##arguments),P##handler)P##registers,)

#endif


/* `try (body) catch (handler)` runs the body with a handler installed. If the body
 * throws, the rest of it is abandoned and the handler runs instead; if it finishes,
 * the handler is uninstalled and never runs. Either way execution carries on with
 * whatever follows the statement.
 *
 *   try (
 *       print(1),
 *       print(nonexistent),
 *       print(2)
 *   ) catch (
 *       print((caught!))
 *   )
 *
 * prints `1 caught!`. The `print(2)` is skipped, and the program does not die.
 *
 * `catch (e) (handler)` names the exception, binding it in the handler as a Quote
 * of the thrown `TYPE(message)`. The name is spelled out character by character
 * like any `var` name, so `catch (e r r) (...)` binds `err`.
 *
 * A throw inside the handler is not caught by its own try, since the entry is
 * popped on the way in, so it reaches the next handler out or ends the program. */
/* Object-like, so the body group arrives still parenthesised as an argument of
 * PP2_COMPILE_LANGUAGE_TRY. A function-like PP2_DEF_try would collect the body
 * group as its own argument list and be torn apart on the commas between the
 * body's statements. The whole tail `(body) catch (handler)` holds no top-level
 * comma, so it arrives as a single argument and is taken apart here instead. */
#define PP2_DEF_try )PP2_COMPILE_LANGUAGE_TRY(

#define PP2_COMPILE_LANGUAGE_TRY(...) \
        IP2_FX(LANGUAGE_TRY_SPLIT,(,PP2_SEQ_SPLIT_HEAD __VA_ARGS__))

/* The tokens after the body group are the whole catch clause, so pasting the peel
 * prefix onto them both checks for the `catch` keyword and strips it, leaving the
 * clause as a seq of one or two groups. A clause that did not open with `catch`
 * leaves the unresolved paste behind, which is not a group, and that is what tells
 * a malformed try from a well-formed one. */
#define IP2_LANGUAGE_TRY_SPLIT(P,body_stx,catch_clause) \
        IP2_LANGUAGE_TRY_CHECK(P##body_stx,IP2_LANGUAGE_TRY_PEEL_##catch_clause)

#define IP2_LANGUAGE_TRY_PEEL_catch

#define IP2_LANGUAGE_TRY_CHECK(body_stx,clause) \
        PP2_IS_TUPLE(clause)(IP2_LANGUAGE_TRY_SHAPE,IP2_LANGUAGE_TRY_MALFORMED)(body_stx,clause)

#define IP2_LANGUAGE_TRY_MALFORMED(body_stx,clause) \
        8PP2_THROW_EXCEPTION,8PP2_LANGUAGE_DEFINITION_EXCEPTION,try

/* One group is a bare handler, two are a name and a handler. A bound name compiles
 * to a store of r0, which the throw has already loaded with the exception, into a
 * local of that name; the store runs first thing in the handler's continuation. */
/* IP2_FY, not IP2_FX: this runs inside the IP2_FX that PP2_COMPILE_LANGUAGE_TRY
 * opened, and a hop reused inside its own expansion is blue-painted and stops
 * firing. Nested hops need distinct names. */
#define IP2_LANGUAGE_TRY_SHAPE(body_stx,clause) \
        IP2_FY(LANGUAGE_TRY_SHAPE_I,(body_stx,PP2_SEQ_SPLIT_HEAD clause))

#define IP2_LANGUAGE_TRY_SHAPE_I(body_stx,first,rest) \
        PP2_IS_TUPLE(rest)(IP2_LANGUAGE_TRY_BOUND,IP2_LANGUAGE_TRY_PLAIN)(body_stx,first,rest)

#define IP2_LANGUAGE_TRY_PLAIN(body_stx,handler_stx,rest) \
        8PP2_LANGUAGE_TRY,body_stx,(),handler_stx

#define IP2_LANGUAGE_TRY_BOUND(body_stx,name,handler_stx) \
        8PP2_LANGUAGE_TRY,body_stx,(8PP2_STACK_STORE,PP2_SPACED name,),handler_stx


/* The instruction stream trailing a try IS its continuation, so both the normal
 * path and the throw path have to end up in it. The normal path just falls through:
 * body, pop the handler, carry on. The throw path cannot fall through to anything,
 * because a throw abandons the stream it was running in, so the handler is installed
 * as a continuation that already has that same trailing stream appended to it. The
 * two paths meet again at the instruction after the try, whichever one ran. */
#define PP2_INSN_8PP2_LANGUAGE_TRY(P,r0,r1,r2,body_stx,bind,handler_stx,...) \
                                  (, \
                                   P##r0,P##r1,P##r2, \
                                   8PP2_PUSH_EXCEPTION_HANDLER, \
                                       (PP2_OPEN P##bind 8PP2_LANGUAGE_BLOCK,P##handler_stx,P##__VA_ARGS__), \
                                   8PP2_LANGUAGE_BLOCK,P##body_stx, \
                                   8PP2_POP_EXCEPTION_HANDLER, \
                                   P##__VA_ARGS__ \
                                  )

#endif


// ******************** From: any.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_ANY_H
#define PP2_LANGUAGE_TYPES_ANY_H


// ******************** From: type.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_TYPE_H
#define PP2_LANGUAGE_TYPES_TYPE_H




#define PP2_DEF_Type PP2_TYPE(Type,Any)
#define PP2_SYM_Type(...) __VA_ARGS__

#define PP2_DEF_Type_call PP2_PRIMITIVE(8PP2_LANGUAGE_TYPE_CALL_PTR,)
#define PP2_INSN_8PP2_LANGUAGE_TYPE_CALL_PTR(P,r0,r1,r2,rhs_stx,...) \
                                            (, \
                                             /*r0=*/(,Fn,(,8PP2_LOCAL_CTX_PREPEND_ARGUMENTS,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1,8PP2_LOCAL_CTX_POP_ARGUMENT,8PP2_LANGUAGE_TYPE_CALL)), \
                                             /*r1=*/PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1, \
                                             /*r2=*/P##r2, \
                                             PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx), \
                                             P##__VA_ARGS__ \
                                            )
#define PP2_INSN_8PP2_LANGUAGE_TYPE_CALL(P,r0,r1,r2,...) \
                                        (, \
                                         /*r0=*/,P##r1,P##r2, \
                                         8PP2_LANGUAGE_TYPE_MEMBER,P##r0,(,Quote,(construct)), \
                                         /* pass the type object itself as `self`, then the call args, */ \
                                         /* so <Type>_construct(self,arg0,...) binds like any method   */ \
                                         8PP2_LOCAL_CTX_PUSH_ARGUMENTS,(P##r0)PP2_LOCAL_CTX_GET_ARGUMENTS P##r1, \
                                         8PP2_LANGUAGE_FN_CALL_IMPL, \
                                         P##__VA_ARGS__ \
                                        )

#define PP2_DEF_Type_member PP2_VM_FN(8PP2_LANGUAGE_TYPE_MEMBER,2)
#define PP2_INSN_8PP2_LANGUAGE_TYPE_MEMBER(P,r0,r1,r2,type,member,...) \
                                          (, \
                                           P##r0,PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2, \
                                           IP2_FX ( \
                                               LANGUAGE_TYPE_MEMBER_COMPILE, \
                                               ( \
                                                   PP2_FX(LANGUAGE_TYPE_NAME,PP2_LANGUAGE_OBJECT_VALUE P##type), \
                                                   PP2_FX(OPEN,PP2_LANGUAGE_OBJECT_VALUE P##member) \
                                               ) \
                                           ), \
                                           P##__VA_ARGS__ \
                                          )
#define IP2_LANGUAGE_TYPE_MEMBER_COMPILE(type_name,member_name) IP2_LANGUAGE_COMPILE(type_name##_##member_name)

#define PP2_LANGUAGE_TYPE_NAME(P,type_name,supertype_name) P##type_name
#define PP2_LANGUAGE_SUPERTYPE_NAME(P,type_name,supertype_name) P##supertype_name


/* str(): a Type prints as its name, so `print(Bool)` gives `Bool` and
 * `print(5 type())` gives `Int`. Without this a Type fell through to Any_str,
 * which hands the object itself to the emitter, and printing a type spilled its
 * internals: `(,Type,(,Bool,Any))`. Like Bool_str this leaves a raw token in r0
 * for 8PP2_EMIT_LITERAL rather than an object. */
#define PP2_DEF_Type_str PP2_VM_FN(8PP2_LANGUAGE_TYPE_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_TYPE_STR(P,r0,r1,r2,obj,...) \
        (,PP2_FX(LANGUAGE_TYPE_NAME,PP2_LANGUAGE_OBJECT_VALUE P##obj),P##r1,P##r2,P##__VA_ARGS__)


/* eq(other): two Type objects are equal when they name the same type. Type names
 * are registered symbols, so this is one symbol comparison. A Type never equals
 * a value of any other type. */
#define PP2_DEF_Type_eq PP2_VM_FN(8PP2_LANGUAGE_TYPE_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_TYPE_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_TYPE_EQ, (,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_TYPE_EQ(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) \
        PP2_CAT(IP2_LANGUAGE_TYPE_EQ_T_,PP2_SYMBOL_EQ(Type,rhs_type))(lhs_value,rhs_value)
#define IP2_LANGUAGE_TYPE_EQ_T_0(lhs_value,rhs_value) (,Bool,0)
#define IP2_LANGUAGE_TYPE_EQ_T_1(lhs_value,rhs_value) \
        (,Bool,IP2_LANGUAGE_TYPE_EQ_NAMES(PP2_FX(LANGUAGE_TYPE_NAME,lhs_value),PP2_FX(LANGUAGE_TYPE_NAME,rhs_value)))
#define IP2_LANGUAGE_TYPE_EQ_NAMES(lhs_name,rhs_name) PP2_SYMBOL_EQ(lhs_name,rhs_name)

#endif



#define PP2_DEF_Any PP2_TYPE(Any,)
#define PP2_SYM_Any(...) __VA_ARGS__

#define PP2_DEF_Any_type )PP2_COMPILE_LANGUAGE_ANY_TYPE(
#define PP2_COMPILE_LANGUAGE_ANY_TYPE(rhs_stx) 8PP2_LANGUAGE_ANY_TYPE,PP2_COMPILE_LANGUAGE_RETURN(rhs_stx)

#define PP2_INSN_8PP2_LANGUAGE_ANY_TYPE(P,r0,r1,r2,...) (,/*r0=*/,P##r1,P##r2,IP2_FX(LANGUAGE_ANY_TYPE_RESOLVE,(,PP2_LOCAL_CTX_UNPACK_ARGS P##r1)),8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,P##__VA_ARGS__)
#define IP2_LANGUAGE_ANY_TYPE_RESOLVE(P,obj) PP2_FX(COMPILE_UNSAFE,(PP2_LANGUAGE_OBJECT_TYPE P##obj))


#define PP2_DEF_Any_str PP2_VM_FN(8PP2_LANGUAGE_ANY_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_ANY_STR(P,r0,r1,r2,obj,...) (,P##obj,P##r1,P##r2,P##__VA_ARGS__)


/* eq(other): the root equality every type inherits, so `eq` is total wherever
 * an answer exists. Values of different types are never equal, which is decided
 * here by comparing the two type names as registered symbols.
 *
 * Reaching this with two values of the SAME type means that type defined no eq
 * of its own, and the only types in that position are the ones whose values are
 * arbitrary token sequences: Quote, Seq, Fn. The preprocessor cannot compare
 * arbitrary tokens, so there is no answer to give and we raise the definition
 * exception rather than invent one. */
#define PP2_DEF_Any_eq PP2_VM_FN(8PP2_LANGUAGE_ANY_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_ANY_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(LANGUAGE_ANY_EQ,(,PP2_LANGUAGE_OBJECT_TYPE P##lhs_obj,PP2_LANGUAGE_OBJECT_TYPE P##rhs_obj)) \
         P##__VA_ARGS__ \
        )
#define IP2_LANGUAGE_ANY_EQ(P,lt,rt) PP2_CAT(IP2_LANGUAGE_ANY_EQ_,PP2_SYMBOL_EQ(lt,rt))(P##lt)
#define IP2_LANGUAGE_ANY_EQ_0(lt) 8PP2_LOAD_CONST,(,Bool,0),
#define IP2_LANGUAGE_ANY_EQ_1(lt) 8PP2_THROW_EXCEPTION,8PP2_LANGUAGE_DEFINITION_EXCEPTION,lt##_eq,


/* neq(other): the negation of whatever eq the receiver's type resolves to, so a
 * type gets neq for free the moment it gets eq. Bind the receiver's eq into r0
 * with a bare METHOD_CALL, fire it against the pre-evaluated operand, then send
 * not() to the Bool that comes back. */
#define PP2_DEF_Any_neq PP2_VM_FN(8PP2_LANGUAGE_ANY_NEQ,2)
#define PP2_INSN_8PP2_LANGUAGE_ANY_NEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) \
        (, \
         P##r0,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8PP2_LOAD_CONST,P##lhs_obj, \
         8PP2_LANGUAGE_METHOD_CALL,eq, \
         8PP2_LOCAL_CTX_PUSH_ARGUMENT,P##rhs_obj, \
         8PP2_LANGUAGE_FN_CALL_IMPL, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8PP2_LANGUAGE_METHOD_CALL,not(), \
         P##__VA_ARGS__ \
        )

#endif

// ******************** From: bool.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_BOOL_H
#define PP2_LANGUAGE_TYPES_BOOL_H




#define PP2_DEF_Bool PP2_TYPE(Bool,Any)
#define PP2_SYM_Bool(...) __VA_ARGS__

#define PP2_DEF_true  PP2_CONST(Bool,1)
#define PP2_DEF_false PP2_CONST(Bool,0)

/* Bool(x): the argument is already a compiled Bool object, so construct just
 * returns it (identity), exactly like Int_construct. */
#define PP2_DEF_Bool_construct PP2_VM_FN(8PP2_LANGUAGE_BOOL_CONSTRUCT,2)
#define PP2_INSN_8PP2_LANGUAGE_BOOL_CONSTRUCT(P,r0,r1,r2,self,arg0,...) (,/*r0=*/P##arg0,P##r1,P##r2,P##__VA_ARGS__)

#define PP2_DEF_Bool_not PP2_VM_FN(8PP2_LANGUAGE_BOOL_NOT,1)
#define PP2_INSN_8PP2_LANGUAGE_BOOL_NOT(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_LANGUAGE_BOOL_NOT P##obj,P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_NOT(addr,type,obj) IP2_LANGUAGE_BOOL_NOT_##obj
#define IP2_LANGUAGE_BOOL_NOT_0 (,Bool,1)
#define IP2_LANGUAGE_BOOL_NOT_1 (,Bool,0)

#define PP2_DEF_Bool_and PP2_VM_FN(8PP2_LANGUAGE_BOOL_AND,2)
#define PP2_INSN_8PP2_LANGUAGE_BOOL_AND(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BOOL_AND, (,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_AND(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) IP2_LANGUAGE_BOOL_AND_##lhs_value##_##rhs_value
#define IP2_LANGUAGE_BOOL_AND_0_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_AND_0_1 (,Bool,0)
#define IP2_LANGUAGE_BOOL_AND_1_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_AND_1_1 (,Bool,1)

#define PP2_DEF_Bool_or PP2_VM_FN(8PP2_LANGUAGE_BOOL_OR,2)
#define PP2_INSN_8PP2_LANGUAGE_BOOL_OR(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BOOL_OR, (,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_OR(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) IP2_LANGUAGE_BOOL_OR_##lhs_value##_##rhs_value
#define IP2_LANGUAGE_BOOL_OR_0_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_OR_0_1 (,Bool,1)
#define IP2_LANGUAGE_BOOL_OR_1_0 (,Bool,1)
#define IP2_LANGUAGE_BOOL_OR_1_1 (,Bool,1)

#define PP2_DEF_Bool_xor PP2_VM_FN(8PP2_LANGUAGE_BOOL_XOR,2)
#define PP2_INSN_8PP2_LANGUAGE_BOOL_XOR(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BOOL_XOR, (,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_XOR(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) IP2_LANGUAGE_BOOL_XOR_##lhs_value##_##rhs_value
#define IP2_LANGUAGE_BOOL_XOR_0_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_XOR_0_1 (,Bool,1)
#define IP2_LANGUAGE_BOOL_XOR_1_0 (,Bool,1)
#define IP2_LANGUAGE_BOOL_XOR_1_1 (,Bool,0)

/* eq(other): a Bool equals only a Bool of the same value. Any other type takes
 * the foreign branch and compares false, so eq stays total. */
#define PP2_DEF_Bool_eq PP2_VM_FN(8PP2_LANGUAGE_BOOL_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_BOOL_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BOOL_EQ, (,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_EQ(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) \
        PP2_CAT(IP2_LANGUAGE_BOOL_EQ_T_,PP2_SYMBOL_EQ(Bool,rhs_type))(lhs_value,rhs_value)
#define IP2_LANGUAGE_BOOL_EQ_T_0(lhs_value,rhs_value) (,Bool,0)
#define IP2_LANGUAGE_BOOL_EQ_T_1(lhs_value,rhs_value) IP2_LANGUAGE_BOOL_EQ_##lhs_value##_##rhs_value
#define IP2_LANGUAGE_BOOL_EQ_0_0 (,Bool,1)
#define IP2_LANGUAGE_BOOL_EQ_0_1 (,Bool,0)
#define IP2_LANGUAGE_BOOL_EQ_1_0 (,Bool,0)
#define IP2_LANGUAGE_BOOL_EQ_1_1 (,Bool,1)

#define PP2_DEF_Bool_str PP2_VM_FN(8PP2_LANGUAGE_BOOL_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_BOOL_STR(P,r0,r1,r2,obj,...) (,PP2_CAT(IP2_LANGUAGE_BOOL_STR_,PP2_LANGUAGE_OBJECT_VALUE P##obj),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BOOL_STR_0 false
#define IP2_LANGUAGE_BOOL_STR_1 true

#endif

// ******************** From: int.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_INT_H
#define PP2_LANGUAGE_TYPES_INT_H



// ******************** From: add.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_LITERAL_ADD_H
#define PP2_PRIMITIVE_ARITHMETIC_LITERAL_ADD_H


// ******************** From: drop.h
/** @file */
#ifndef PP2_PRIMITIVE_TUPLE_DROP_H
#define PP2_PRIMITIVE_TUPLE_DROP_H

#define PP2_TUPLE_DROP_0(P,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_1(P,x0,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_2(P,x0,x1,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_3(P,x0,x1,x2,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_4(P,x0,x1,x2,x3,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_5(P,x0,x1,x2,x3,x4,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_6(P,x0,x1,x2,x3,x4,x5,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_7(P,x0,x1,x2,x3,x4,x5,x6,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_8(P,x0,x1,x2,x3,x4,x5,x6,x7,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_9(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_10(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_11(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_12(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_13(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_14(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_15(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_16(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_17(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_18(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_19(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_20(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_21(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_22(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_23(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_24(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_25(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_26(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_27(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_28(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_29(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_30(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_31(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_32(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_33(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_34(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_35(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_36(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_37(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_38(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_39(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_40(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_41(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_42(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_43(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_44(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,...) P##__VA_ARGS__     
#define PP2_TUPLE_DROP_45(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,...) P##__VA_ARGS__ 
#define PP2_TUPLE_DROP_46(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_47(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_48(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_49(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_50(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_51(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_52(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_53(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_54(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_55(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_56(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_57(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_58(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_59(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_60(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_61(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_62(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_63(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_64(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_65(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_66(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_67(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_68(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_69(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_70(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_71(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_72(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_73(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_74(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_75(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_76(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_77(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_78(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_79(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_80(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_81(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_82(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_83(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_84(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_85(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_86(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_87(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_88(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_89(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_90(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_91(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_92(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_93(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_94(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_95(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_96(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_97(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_98(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,...) P##__VA_ARGS__       
#define PP2_TUPLE_DROP_99(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,...) P##__VA_ARGS__   
#define PP2_TUPLE_DROP_100(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,...) P##__VA_ARGS__

#define PP2_TUPLE_DROP_101(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_102(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_103(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_104(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_105(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_106(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_107(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_108(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_109(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_110(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_111(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_112(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_113(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_114(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_115(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_116(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_117(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_118(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_119(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_120(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_121(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_122(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_123(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_124(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_125(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_126(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,...) P##__VA_ARGS__
#define PP2_TUPLE_DROP_127(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,...) P##__VA_ARGS__
#endif

/* PP2_LITERAL_ADD(a,b) -> a+b. Index a into (b,b+1,...) = drop b from the number line.
 * The indirection prescans a,b to literals so ADD composes on nested expressions.
 * Fixed precision: a <= 99 (AT), b <= 127 (DROP), a+b <= 127. */
#define PP2_LITERAL_ADD(a,b) IP2_LITERAL_ADD_EVAL(a,b)
#define IP2_LITERAL_ADD_EVAL(a,b)               \
        PP2_FX(                                 \
            TUPLE_AT_##a,                       \
            (,PP2_TUPLE_DROP_##b(,              \
                0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,                          \
                (overflow)                      \
            ),)                                 \
        )

#endif

// ******************** From: sub.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_LITERAL_SUB_H
#define PP2_PRIMITIVE_ARITHMETIC_LITERAL_SUB_H


// ******************** From: take.h
/** @file */
#ifndef PP2_PRIMITIVE_TUPLE_TAKE_H
#define PP2_PRIMITIVE_TUPLE_TAKE_H

/* PP2_TUPLE_TAKE_n(,x0,x1,...) -> x0,x1,...,x{n-1}, (first n elements, trailing comma). Dual of DROP. */
#define PP2_TUPLE_TAKE_0(P,...)
#define PP2_TUPLE_TAKE_1(P,x0,...) P##x0,
#define PP2_TUPLE_TAKE_2(P,x0,x1,...) P##x0,P##x1,
#define PP2_TUPLE_TAKE_3(P,x0,x1,x2,...) P##x0,P##x1,P##x2,
#define PP2_TUPLE_TAKE_4(P,x0,x1,x2,x3,...) P##x0,P##x1,P##x2,P##x3,
#define PP2_TUPLE_TAKE_5(P,x0,x1,x2,x3,x4,...) P##x0,P##x1,P##x2,P##x3,P##x4,
#define PP2_TUPLE_TAKE_6(P,x0,x1,x2,x3,x4,x5,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,
#define PP2_TUPLE_TAKE_7(P,x0,x1,x2,x3,x4,x5,x6,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,
#define PP2_TUPLE_TAKE_8(P,x0,x1,x2,x3,x4,x5,x6,x7,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,
#define PP2_TUPLE_TAKE_9(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,
#define PP2_TUPLE_TAKE_10(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,
#define PP2_TUPLE_TAKE_11(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,
#define PP2_TUPLE_TAKE_12(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,
#define PP2_TUPLE_TAKE_13(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,
#define PP2_TUPLE_TAKE_14(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,
#define PP2_TUPLE_TAKE_15(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,
#define PP2_TUPLE_TAKE_16(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,
#define PP2_TUPLE_TAKE_17(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,
#define PP2_TUPLE_TAKE_18(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,
#define PP2_TUPLE_TAKE_19(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,
#define PP2_TUPLE_TAKE_20(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,
#define PP2_TUPLE_TAKE_21(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,
#define PP2_TUPLE_TAKE_22(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,
#define PP2_TUPLE_TAKE_23(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,
#define PP2_TUPLE_TAKE_24(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,
#define PP2_TUPLE_TAKE_25(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,
#define PP2_TUPLE_TAKE_26(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,
#define PP2_TUPLE_TAKE_27(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,
#define PP2_TUPLE_TAKE_28(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,
#define PP2_TUPLE_TAKE_29(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,
#define PP2_TUPLE_TAKE_30(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,
#define PP2_TUPLE_TAKE_31(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,
#define PP2_TUPLE_TAKE_32(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,
#define PP2_TUPLE_TAKE_33(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,
#define PP2_TUPLE_TAKE_34(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,
#define PP2_TUPLE_TAKE_35(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,
#define PP2_TUPLE_TAKE_36(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,
#define PP2_TUPLE_TAKE_37(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,
#define PP2_TUPLE_TAKE_38(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,
#define PP2_TUPLE_TAKE_39(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,
#define PP2_TUPLE_TAKE_40(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,
#define PP2_TUPLE_TAKE_41(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,
#define PP2_TUPLE_TAKE_42(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,
#define PP2_TUPLE_TAKE_43(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,
#define PP2_TUPLE_TAKE_44(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,
#define PP2_TUPLE_TAKE_45(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,
#define PP2_TUPLE_TAKE_46(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,
#define PP2_TUPLE_TAKE_47(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,
#define PP2_TUPLE_TAKE_48(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,
#define PP2_TUPLE_TAKE_49(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,
#define PP2_TUPLE_TAKE_50(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,
#define PP2_TUPLE_TAKE_51(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,
#define PP2_TUPLE_TAKE_52(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,
#define PP2_TUPLE_TAKE_53(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,
#define PP2_TUPLE_TAKE_54(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,
#define PP2_TUPLE_TAKE_55(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,
#define PP2_TUPLE_TAKE_56(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,
#define PP2_TUPLE_TAKE_57(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,
#define PP2_TUPLE_TAKE_58(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,
#define PP2_TUPLE_TAKE_59(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,
#define PP2_TUPLE_TAKE_60(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,
#define PP2_TUPLE_TAKE_61(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,
#define PP2_TUPLE_TAKE_62(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,
#define PP2_TUPLE_TAKE_63(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,
#define PP2_TUPLE_TAKE_64(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,
#define PP2_TUPLE_TAKE_65(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,
#define PP2_TUPLE_TAKE_66(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,
#define PP2_TUPLE_TAKE_67(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,
#define PP2_TUPLE_TAKE_68(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,
#define PP2_TUPLE_TAKE_69(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,
#define PP2_TUPLE_TAKE_70(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,
#define PP2_TUPLE_TAKE_71(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,
#define PP2_TUPLE_TAKE_72(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,
#define PP2_TUPLE_TAKE_73(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,
#define PP2_TUPLE_TAKE_74(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,
#define PP2_TUPLE_TAKE_75(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,
#define PP2_TUPLE_TAKE_76(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,
#define PP2_TUPLE_TAKE_77(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,
#define PP2_TUPLE_TAKE_78(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,
#define PP2_TUPLE_TAKE_79(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,
#define PP2_TUPLE_TAKE_80(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,
#define PP2_TUPLE_TAKE_81(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,
#define PP2_TUPLE_TAKE_82(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,
#define PP2_TUPLE_TAKE_83(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,
#define PP2_TUPLE_TAKE_84(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,
#define PP2_TUPLE_TAKE_85(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,
#define PP2_TUPLE_TAKE_86(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,
#define PP2_TUPLE_TAKE_87(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,
#define PP2_TUPLE_TAKE_88(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,
#define PP2_TUPLE_TAKE_89(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,
#define PP2_TUPLE_TAKE_90(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,
#define PP2_TUPLE_TAKE_91(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,
#define PP2_TUPLE_TAKE_92(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,
#define PP2_TUPLE_TAKE_93(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,
#define PP2_TUPLE_TAKE_94(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,
#define PP2_TUPLE_TAKE_95(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,
#define PP2_TUPLE_TAKE_96(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,
#define PP2_TUPLE_TAKE_97(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,
#define PP2_TUPLE_TAKE_98(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,
#define PP2_TUPLE_TAKE_99(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,
#define PP2_TUPLE_TAKE_100(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,
#define PP2_TUPLE_TAKE_101(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,
#define PP2_TUPLE_TAKE_102(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,
#define PP2_TUPLE_TAKE_103(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,
#define PP2_TUPLE_TAKE_104(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,
#define PP2_TUPLE_TAKE_105(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,
#define PP2_TUPLE_TAKE_106(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,
#define PP2_TUPLE_TAKE_107(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,
#define PP2_TUPLE_TAKE_108(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,
#define PP2_TUPLE_TAKE_109(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,
#define PP2_TUPLE_TAKE_110(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,
#define PP2_TUPLE_TAKE_111(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,
#define PP2_TUPLE_TAKE_112(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,
#define PP2_TUPLE_TAKE_113(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,
#define PP2_TUPLE_TAKE_114(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,
#define PP2_TUPLE_TAKE_115(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,
#define PP2_TUPLE_TAKE_116(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,
#define PP2_TUPLE_TAKE_117(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,
#define PP2_TUPLE_TAKE_118(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,P##x117,
#define PP2_TUPLE_TAKE_119(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,P##x117,P##x118,
#define PP2_TUPLE_TAKE_120(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,P##x117,P##x118,P##x119,
#define PP2_TUPLE_TAKE_121(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,P##x117,P##x118,P##x119,P##x120,
#define PP2_TUPLE_TAKE_122(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,P##x117,P##x118,P##x119,P##x120,P##x121,
#define PP2_TUPLE_TAKE_123(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,P##x117,P##x118,P##x119,P##x120,P##x121,P##x122,
#define PP2_TUPLE_TAKE_124(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,P##x117,P##x118,P##x119,P##x120,P##x121,P##x122,P##x123,
#define PP2_TUPLE_TAKE_125(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,P##x117,P##x118,P##x119,P##x120,P##x121,P##x122,P##x123,P##x124,
#define PP2_TUPLE_TAKE_126(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,P##x117,P##x118,P##x119,P##x120,P##x121,P##x122,P##x123,P##x124,P##x125,
#define PP2_TUPLE_TAKE_127(P,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,...) P##x0,P##x1,P##x2,P##x3,P##x4,P##x5,P##x6,P##x7,P##x8,P##x9,P##x10,P##x11,P##x12,P##x13,P##x14,P##x15,P##x16,P##x17,P##x18,P##x19,P##x20,P##x21,P##x22,P##x23,P##x24,P##x25,P##x26,P##x27,P##x28,P##x29,P##x30,P##x31,P##x32,P##x33,P##x34,P##x35,P##x36,P##x37,P##x38,P##x39,P##x40,P##x41,P##x42,P##x43,P##x44,P##x45,P##x46,P##x47,P##x48,P##x49,P##x50,P##x51,P##x52,P##x53,P##x54,P##x55,P##x56,P##x57,P##x58,P##x59,P##x60,P##x61,P##x62,P##x63,P##x64,P##x65,P##x66,P##x67,P##x68,P##x69,P##x70,P##x71,P##x72,P##x73,P##x74,P##x75,P##x76,P##x77,P##x78,P##x79,P##x80,P##x81,P##x82,P##x83,P##x84,P##x85,P##x86,P##x87,P##x88,P##x89,P##x90,P##x91,P##x92,P##x93,P##x94,P##x95,P##x96,P##x97,P##x98,P##x99,P##x100,P##x101,P##x102,P##x103,P##x104,P##x105,P##x106,P##x107,P##x108,P##x109,P##x110,P##x111,P##x112,P##x113,P##x114,P##x115,P##x116,P##x117,P##x118,P##x119,P##x120,P##x121,P##x122,P##x123,P##x124,P##x125,P##x126,

#endif

/* PP2_LITERAL_SUB(a,b) -> a-b, clamped at 0. Index a into [b zero-clamps] ++ (0,1,2,...).
 * The indirection prescans a,b to literals so SUB composes. Fixed precision: a,b <= 127. */
#define PP2_LITERAL_SUB(a,b) IP2_LITERAL_SUB_EVAL(a,b)
#define IP2_LITERAL_SUB_EVAL(a,b)               \
        PP2_FX(                                 \
            TUPLE_AT_##a,                       \
            (,PP2_TUPLE_TAKE_##b(,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)       \
              0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,                            \
              (overflow)                        \
            )                                   \
        )

#endif

// ******************** From: mul.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_LITERAL_MUL_H
#define PP2_PRIMITIVE_ARITHMETIC_LITERAL_MUL_H


// ******************** From: literal.h
/** @file */
#ifndef PP2_PRIMITIVE_COMPARISON_LITERAL_H
#define PP2_PRIMITIVE_COMPARISON_LITERAL_H


/* All relations reduce to clamped subtraction + is-zero (a<=b iff a-b clamped == 0). */

/* is-zero: x==0 -> 1 else 0. The `probe,` a defined IP2_LITERAL_IS_ZERO_0 injects
 * must splice into AT_1's argument list, so expand the tuple (FX) before AT_1 scans. */
#define PP2_LITERAL_IS_ZERO(x) IP2_LITERAL_IS_ZERO_I(x)
#define IP2_LITERAL_IS_ZERO_I(x) PP2_FX(TUPLE_AT_1,(,IP2_LITERAL_IS_ZERO_TAG_##x 1,0,))
#define IP2_LITERAL_IS_ZERO_TAG_0 probe,

/* boolean helpers on {0,1}. AND takes one indirection so its (comparison-result)
 * arguments are prescanned to 0/1 before the ## paste. */
#define PP2_LITERAL_NOT(x) PP2_LITERAL_IS_ZERO(x)
#define PP2_LITERAL_AND(x,y) IP2_LITERAL_AND_CAT(x,y)
#define IP2_LITERAL_AND_CAT(x,y) IP2_LITERAL_AND_##x##y
#define IP2_LITERAL_AND_00 0
#define IP2_LITERAL_AND_01 0
#define IP2_LITERAL_AND_10 0
#define IP2_LITERAL_AND_11 1

#define PP2_LITERAL_LEQ(a,b) PP2_LITERAL_IS_ZERO(PP2_LITERAL_SUB(a,b))
#define PP2_LITERAL_GEQ(a,b) PP2_LITERAL_LEQ(b,a)
#define PP2_LITERAL_LT(a,b)  PP2_LITERAL_NOT(PP2_LITERAL_GEQ(a,b))
#define PP2_LITERAL_GT(a,b)  PP2_LITERAL_NOT(PP2_LITERAL_LEQ(a,b))
#define PP2_LITERAL_EQ(a,b)  PP2_LITERAL_AND(PP2_LITERAL_LEQ(a,b),PP2_LITERAL_LEQ(b,a))

#endif

/* PP2_LITERAL_MUL(a,b) -> a*b, one table lookup (no iteration). Index the smaller
 * operand into (0, hi, 2*hi, ..., hi*hi) = the larger operand's multiples table,
 * so the index stays small. Fixed precision: a*b <= 127. Args are prescanned so
 * MUL composes on nested expressions. */
#define PP2_LITERAL_MUL(a,b) IP2_LITERAL_MUL_I(a,b)
#define IP2_LITERAL_MUL_I(a,b) IP2_LITERAL_MUL_PICK(PP2_LITERAL_LT(a,b),a,b)
#define IP2_LITERAL_MUL_PICK(lt,a,b) IP2_LITERAL_MUL_PICK_I(lt,a,b)
#define IP2_LITERAL_MUL_PICK_I(lt,a,b) IP2_LITERAL_MUL_##lt(a,b)
#define IP2_LITERAL_MUL_1(a,b) IP2_LITERAL_MUL_AT(a,b)  /* a<b:  index a, table of b */
#define IP2_LITERAL_MUL_0(a,b) IP2_LITERAL_MUL_AT(b,a)  /* a>=b: index b, table of a */
#define IP2_LITERAL_MUL_AT(i,base) PP2_FX(TUPLE_AT_0,(,PP2_FX(TUPLE_DROP_##i,(,0,base,PP2_LITERAL_MUL_TABLE_##base,(overflow))),))

#define PP2_LITERAL_MUL_TABLE_0 
#define PP2_LITERAL_MUL_TABLE_1 
#define PP2_LITERAL_MUL_TABLE_2 4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,124,126
#define PP2_LITERAL_MUL_TABLE_3 6,9,12,15,18,21,24,27,30,33,36,39,42,45,48,51,54,57,60,63,66,69,72,75,78,81,84,87,90,93,96,99,102,105,108,111,114,117,120,123,126
#define PP2_LITERAL_MUL_TABLE_4 8,12,16,20,24,28,32,36,40,44,48,52,56,60,64,68,72,76,80,84,88,92,96,100,104,108,112,116,120,124
#define PP2_LITERAL_MUL_TABLE_5 10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,105,110,115,120,125
#define PP2_LITERAL_MUL_TABLE_6 12,18,24,30,36,42,48,54,60,66,72,78,84,90,96,102,108,114,120,126
#define PP2_LITERAL_MUL_TABLE_7 14,21,28,35,42,49,56,63,70,77,84,91,98,105,112,119,126
#define PP2_LITERAL_MUL_TABLE_8 16,24,32,40,48,56,64,72,80,88,96,104,112,120
#define PP2_LITERAL_MUL_TABLE_9 18,27,36,45,54,63,72,81,90,99,108,117,126
#define PP2_LITERAL_MUL_TABLE_10 20,30,40,50,60,70,80,90,100,110,120
#define PP2_LITERAL_MUL_TABLE_11 22,33,44,55,66,77,88,99,110,121
#define PP2_LITERAL_MUL_TABLE_12 24,36,48,60,72,84,96,108,120
#define PP2_LITERAL_MUL_TABLE_13 26,39,52,65,78,91,104,117
#define PP2_LITERAL_MUL_TABLE_14 28,42,56,70,84,98,112,126
#define PP2_LITERAL_MUL_TABLE_15 30,45,60,75,90,105,120
#define PP2_LITERAL_MUL_TABLE_16 32,48,64,80,96,112
#define PP2_LITERAL_MUL_TABLE_17 34,51,68,85,102,119
#define PP2_LITERAL_MUL_TABLE_18 36,54,72,90,108,126
#define PP2_LITERAL_MUL_TABLE_19 38,57,76,95,114
#define PP2_LITERAL_MUL_TABLE_20 40,60,80,100,120
#define PP2_LITERAL_MUL_TABLE_21 42,63,84,105,126
#define PP2_LITERAL_MUL_TABLE_22 44,66,88,110
#define PP2_LITERAL_MUL_TABLE_23 46,69,92,115
#define PP2_LITERAL_MUL_TABLE_24 48,72,96,120
#define PP2_LITERAL_MUL_TABLE_25 50,75,100,125
#define PP2_LITERAL_MUL_TABLE_26 52,78,104
#define PP2_LITERAL_MUL_TABLE_27 54,81,108
#define PP2_LITERAL_MUL_TABLE_28 56,84,112
#define PP2_LITERAL_MUL_TABLE_29 58,87,116
#define PP2_LITERAL_MUL_TABLE_30 60,90,120
#define PP2_LITERAL_MUL_TABLE_31 62,93,124
#define PP2_LITERAL_MUL_TABLE_32 64,96
#define PP2_LITERAL_MUL_TABLE_33 66,99
#define PP2_LITERAL_MUL_TABLE_34 68,102
#define PP2_LITERAL_MUL_TABLE_35 70,105
#define PP2_LITERAL_MUL_TABLE_36 72,108
#define PP2_LITERAL_MUL_TABLE_37 74,111
#define PP2_LITERAL_MUL_TABLE_38 76,114
#define PP2_LITERAL_MUL_TABLE_39 78,117
#define PP2_LITERAL_MUL_TABLE_40 80,120
#define PP2_LITERAL_MUL_TABLE_41 82,123
#define PP2_LITERAL_MUL_TABLE_42 84,126
#define PP2_LITERAL_MUL_TABLE_43 86
#define PP2_LITERAL_MUL_TABLE_44 88
#define PP2_LITERAL_MUL_TABLE_45 90
#define PP2_LITERAL_MUL_TABLE_46 92
#define PP2_LITERAL_MUL_TABLE_47 94
#define PP2_LITERAL_MUL_TABLE_48 96
#define PP2_LITERAL_MUL_TABLE_49 98
#define PP2_LITERAL_MUL_TABLE_50 100
#define PP2_LITERAL_MUL_TABLE_51 102
#define PP2_LITERAL_MUL_TABLE_52 104
#define PP2_LITERAL_MUL_TABLE_53 106
#define PP2_LITERAL_MUL_TABLE_54 108
#define PP2_LITERAL_MUL_TABLE_55 110
#define PP2_LITERAL_MUL_TABLE_56 112
#define PP2_LITERAL_MUL_TABLE_57 114
#define PP2_LITERAL_MUL_TABLE_58 116
#define PP2_LITERAL_MUL_TABLE_59 118
#define PP2_LITERAL_MUL_TABLE_60 120
#define PP2_LITERAL_MUL_TABLE_61 122
#define PP2_LITERAL_MUL_TABLE_62 124
#define PP2_LITERAL_MUL_TABLE_63 126
#define PP2_LITERAL_MUL_TABLE_64 
#define PP2_LITERAL_MUL_TABLE_65 
#define PP2_LITERAL_MUL_TABLE_66 
#define PP2_LITERAL_MUL_TABLE_67 
#define PP2_LITERAL_MUL_TABLE_68 
#define PP2_LITERAL_MUL_TABLE_69 
#define PP2_LITERAL_MUL_TABLE_70 
#define PP2_LITERAL_MUL_TABLE_71 
#define PP2_LITERAL_MUL_TABLE_72 
#define PP2_LITERAL_MUL_TABLE_73 
#define PP2_LITERAL_MUL_TABLE_74 
#define PP2_LITERAL_MUL_TABLE_75 
#define PP2_LITERAL_MUL_TABLE_76 
#define PP2_LITERAL_MUL_TABLE_77 
#define PP2_LITERAL_MUL_TABLE_78 
#define PP2_LITERAL_MUL_TABLE_79 
#define PP2_LITERAL_MUL_TABLE_80 
#define PP2_LITERAL_MUL_TABLE_81 
#define PP2_LITERAL_MUL_TABLE_82 
#define PP2_LITERAL_MUL_TABLE_83 
#define PP2_LITERAL_MUL_TABLE_84 
#define PP2_LITERAL_MUL_TABLE_85 
#define PP2_LITERAL_MUL_TABLE_86 
#define PP2_LITERAL_MUL_TABLE_87 
#define PP2_LITERAL_MUL_TABLE_88 
#define PP2_LITERAL_MUL_TABLE_89 
#define PP2_LITERAL_MUL_TABLE_90 
#define PP2_LITERAL_MUL_TABLE_91 
#define PP2_LITERAL_MUL_TABLE_92 
#define PP2_LITERAL_MUL_TABLE_93 
#define PP2_LITERAL_MUL_TABLE_94 
#define PP2_LITERAL_MUL_TABLE_95 
#define PP2_LITERAL_MUL_TABLE_96 
#define PP2_LITERAL_MUL_TABLE_97 
#define PP2_LITERAL_MUL_TABLE_98 
#define PP2_LITERAL_MUL_TABLE_99 
#define PP2_LITERAL_MUL_TABLE_100 
#define PP2_LITERAL_MUL_TABLE_101 
#define PP2_LITERAL_MUL_TABLE_102 
#define PP2_LITERAL_MUL_TABLE_103 
#define PP2_LITERAL_MUL_TABLE_104 
#define PP2_LITERAL_MUL_TABLE_105 
#define PP2_LITERAL_MUL_TABLE_106 
#define PP2_LITERAL_MUL_TABLE_107 
#define PP2_LITERAL_MUL_TABLE_108 
#define PP2_LITERAL_MUL_TABLE_109 
#define PP2_LITERAL_MUL_TABLE_110 
#define PP2_LITERAL_MUL_TABLE_111 
#define PP2_LITERAL_MUL_TABLE_112 
#define PP2_LITERAL_MUL_TABLE_113 
#define PP2_LITERAL_MUL_TABLE_114 
#define PP2_LITERAL_MUL_TABLE_115 
#define PP2_LITERAL_MUL_TABLE_116 
#define PP2_LITERAL_MUL_TABLE_117 
#define PP2_LITERAL_MUL_TABLE_118 
#define PP2_LITERAL_MUL_TABLE_119 
#define PP2_LITERAL_MUL_TABLE_120 
#define PP2_LITERAL_MUL_TABLE_121 
#define PP2_LITERAL_MUL_TABLE_122 
#define PP2_LITERAL_MUL_TABLE_123 
#define PP2_LITERAL_MUL_TABLE_124 
#define PP2_LITERAL_MUL_TABLE_125 
#define PP2_LITERAL_MUL_TABLE_126 
#define PP2_LITERAL_MUL_TABLE_127 

#endif

// ******************** From: div.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_LITERAL_DIV_H
#define PP2_PRIMITIVE_ARITHMETIC_LITERAL_DIV_H


/* PP2_LITERAL_DIV(a,b) -> floor(a/b), PP2_LITERAL_MOD(a,b) -> a mod b, one table
 * lookup each (no iteration). If a<b the result is 0 / a; otherwise index the
 * divisor b into the dividend a's table. b==0 yields a (divzero) sentinel.
 * Fixed precision: a,b <= 127. Args prescanned so div/mod compose. */
#define PP2_LITERAL_DIV(a,b) IP2_LITERAL_DIV_I(a,b)
#define IP2_LITERAL_DIV_I(a,b) IP2_LITERAL_DIV_GUARD(PP2_LITERAL_LT(a,b),a,b)
#define IP2_LITERAL_DIV_GUARD(lt,a,b) IP2_LITERAL_DIV_GUARD_I(lt,a,b)
#define IP2_LITERAL_DIV_GUARD_I(lt,a,b) IP2_LITERAL_DIV_##lt(a,b)
#define IP2_LITERAL_DIV_1(a,b) 0
#define IP2_LITERAL_DIV_0(a,b) PP2_FX(TUPLE_AT_0,(,PP2_FX(TUPLE_DROP_##b,(,(divzero),a,PP2_LITERAL_DIV_TABLE_##a,(overflow))),))

#define PP2_LITERAL_MOD(a,b) IP2_LITERAL_MOD_I(a,b)
#define IP2_LITERAL_MOD_I(a,b) IP2_LITERAL_MOD_GUARD(PP2_LITERAL_LT(a,b),a,b)
#define IP2_LITERAL_MOD_GUARD(lt,a,b) IP2_LITERAL_MOD_GUARD_I(lt,a,b)
#define IP2_LITERAL_MOD_GUARD_I(lt,a,b) IP2_LITERAL_MOD_##lt(a,b)
#define IP2_LITERAL_MOD_1(a,b) a
#define IP2_LITERAL_MOD_0(a,b) PP2_FX(TUPLE_AT_0,(,PP2_FX(TUPLE_DROP_##b,(,(divzero),0,PP2_LITERAL_MOD_TABLE_##a,(overflow))),))

#define PP2_LITERAL_DIV_TABLE_0 
#define PP2_LITERAL_MOD_TABLE_0 
#define PP2_LITERAL_DIV_TABLE_1 
#define PP2_LITERAL_MOD_TABLE_1 
#define PP2_LITERAL_DIV_TABLE_2 1
#define PP2_LITERAL_MOD_TABLE_2 0
#define PP2_LITERAL_DIV_TABLE_3 1,1
#define PP2_LITERAL_MOD_TABLE_3 1,0
#define PP2_LITERAL_DIV_TABLE_4 2,1,1
#define PP2_LITERAL_MOD_TABLE_4 0,1,0
#define PP2_LITERAL_DIV_TABLE_5 2,1,1,1
#define PP2_LITERAL_MOD_TABLE_5 1,2,1,0
#define PP2_LITERAL_DIV_TABLE_6 3,2,1,1,1
#define PP2_LITERAL_MOD_TABLE_6 0,0,2,1,0
#define PP2_LITERAL_DIV_TABLE_7 3,2,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_7 1,1,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_8 4,2,2,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_8 0,2,0,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_9 4,3,2,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_9 1,0,1,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_10 5,3,2,2,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_10 0,1,2,0,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_11 5,3,2,2,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_11 1,2,3,1,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_12 6,4,3,2,2,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_12 0,0,0,2,0,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_13 6,4,3,2,2,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_13 1,1,1,3,1,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_14 7,4,3,2,2,2,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_14 0,2,2,4,2,0,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_15 7,5,3,3,2,2,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_15 1,0,3,0,3,1,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_16 8,5,4,3,2,2,2,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_16 0,1,0,1,4,2,0,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_17 8,5,4,3,2,2,2,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_17 1,2,1,2,5,3,1,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_18 9,6,4,3,3,2,2,2,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_18 0,0,2,3,0,4,2,0,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_19 9,6,4,3,3,2,2,2,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_19 1,1,3,4,1,5,3,1,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_20 10,6,5,4,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_20 0,2,0,0,2,6,4,2,0,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_21 10,7,5,4,3,3,2,2,2,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_21 1,0,1,1,3,0,5,3,1,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_22 11,7,5,4,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_22 0,1,2,2,4,1,6,4,2,0,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_23 11,7,5,4,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_23 1,2,3,3,5,2,7,5,3,1,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_24 12,8,6,4,4,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_24 0,0,0,4,0,3,0,6,4,2,0,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_25 12,8,6,5,4,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_25 1,1,1,0,1,4,1,7,5,3,1,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_26 13,8,6,5,4,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_26 0,2,2,1,2,5,2,8,6,4,2,0,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_27 13,9,6,5,4,3,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_27 1,0,3,2,3,6,3,0,7,5,3,1,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_28 14,9,7,5,4,4,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_28 0,1,0,3,4,0,4,1,8,6,4,2,0,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_29 14,9,7,5,4,4,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_29 1,2,1,4,5,1,5,2,9,7,5,3,1,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_30 15,10,7,6,5,4,3,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_30 0,0,2,0,0,2,6,3,0,8,6,4,2,0,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_31 15,10,7,6,5,4,3,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_31 1,1,3,1,1,3,7,4,1,9,7,5,3,1,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_32 16,10,8,6,5,4,4,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_32 0,2,0,2,2,4,0,5,2,10,8,6,4,2,0,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_33 16,11,8,6,5,4,4,3,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_33 1,0,1,3,3,5,1,6,3,0,9,7,5,3,1,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_34 17,11,8,6,5,4,4,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_34 0,1,2,4,4,6,2,7,4,1,10,8,6,4,2,0,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_35 17,11,8,7,5,5,4,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_35 1,2,3,0,5,0,3,8,5,2,11,9,7,5,3,1,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_36 18,12,9,7,6,5,4,4,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_36 0,0,0,1,0,1,4,0,6,3,0,10,8,6,4,2,0,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_37 18,12,9,7,6,5,4,4,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_37 1,1,1,2,1,2,5,1,7,4,1,11,9,7,5,3,1,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_38 19,12,9,7,6,5,4,4,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_38 0,2,2,3,2,3,6,2,8,5,2,12,10,8,6,4,2,0,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_39 19,13,9,7,6,5,4,4,3,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_39 1,0,3,4,3,4,7,3,9,6,3,0,11,9,7,5,3,1,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_40 20,13,10,8,6,5,5,4,4,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_40 0,1,0,0,4,5,0,4,0,7,4,1,12,10,8,6,4,2,0,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_41 20,13,10,8,6,5,5,4,4,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_41 1,2,1,1,5,6,1,5,1,8,5,2,13,11,9,7,5,3,1,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_42 21,14,10,8,7,6,5,4,4,3,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_42 0,0,2,2,0,0,2,6,2,9,6,3,0,12,10,8,6,4,2,0,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_43 21,14,10,8,7,6,5,4,4,3,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_43 1,1,3,3,1,1,3,7,3,10,7,4,1,13,11,9,7,5,3,1,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_44 22,14,11,8,7,6,5,4,4,4,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_44 0,2,0,4,2,2,4,8,4,0,8,5,2,14,12,10,8,6,4,2,0,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_45 22,15,11,9,7,6,5,5,4,4,3,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_45 1,0,1,0,3,3,5,0,5,1,9,6,3,0,13,11,9,7,5,3,1,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_46 23,15,11,9,7,6,5,5,4,4,3,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_46 0,1,2,1,4,4,6,1,6,2,10,7,4,1,14,12,10,8,6,4,2,0,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_47 23,15,11,9,7,6,5,5,4,4,3,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_47 1,2,3,2,5,5,7,2,7,3,11,8,5,2,15,13,11,9,7,5,3,1,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_48 24,16,12,9,8,6,6,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_48 0,0,0,3,0,6,0,3,8,4,0,9,6,3,0,14,12,10,8,6,4,2,0,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_49 24,16,12,9,8,7,6,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_49 1,1,1,4,1,0,1,4,9,5,1,10,7,4,1,15,13,11,9,7,5,3,1,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_50 25,16,12,10,8,7,6,5,5,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_50 0,2,2,0,2,1,2,5,0,6,2,11,8,5,2,16,14,12,10,8,6,4,2,0,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_51 25,17,12,10,8,7,6,5,5,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_51 1,0,3,1,3,2,3,6,1,7,3,12,9,6,3,0,15,13,11,9,7,5,3,1,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_52 26,17,13,10,8,7,6,5,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_52 0,1,0,2,4,3,4,7,2,8,4,0,10,7,4,1,16,14,12,10,8,6,4,2,0,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_53 26,17,13,10,8,7,6,5,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_53 1,2,1,3,5,4,5,8,3,9,5,1,11,8,5,2,17,15,13,11,9,7,5,3,1,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_54 27,18,13,10,9,7,6,6,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_54 0,0,2,4,0,5,6,0,4,10,6,2,12,9,6,3,0,16,14,12,10,8,6,4,2,0,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_55 27,18,13,11,9,7,6,6,5,5,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_55 1,1,3,0,1,6,7,1,5,0,7,3,13,10,7,4,1,17,15,13,11,9,7,5,3,1,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_56 28,18,14,11,9,8,7,6,5,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_56 0,2,0,1,2,0,0,2,6,1,8,4,0,11,8,5,2,18,16,14,12,10,8,6,4,2,0,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_57 28,19,14,11,9,8,7,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_57 1,0,1,2,3,1,1,3,7,2,9,5,1,12,9,6,3,0,17,15,13,11,9,7,5,3,1,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_58 29,19,14,11,9,8,7,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_58 0,1,2,3,4,2,2,4,8,3,10,6,2,13,10,7,4,1,18,16,14,12,10,8,6,4,2,0,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_59 29,19,14,11,9,8,7,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_59 1,2,3,4,5,3,3,5,9,4,11,7,3,14,11,8,5,2,19,17,15,13,11,9,7,5,3,1,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_60 30,20,15,12,10,8,7,6,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_60 0,0,0,0,0,4,4,6,0,5,0,8,4,0,12,9,6,3,0,18,16,14,12,10,8,6,4,2,0,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_61 30,20,15,12,10,8,7,6,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_61 1,1,1,1,1,5,5,7,1,6,1,9,5,1,13,10,7,4,1,19,17,15,13,11,9,7,5,3,1,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_62 31,20,15,12,10,8,7,6,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_62 0,2,2,2,2,6,6,8,2,7,2,10,6,2,14,11,8,5,2,20,18,16,14,12,10,8,6,4,2,0,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_63 31,21,15,12,10,9,7,7,6,5,5,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_63 1,0,3,3,3,0,7,0,3,8,3,11,7,3,15,12,9,6,3,0,19,17,15,13,11,9,7,5,3,1,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_64 32,21,16,12,10,9,8,7,6,5,5,4,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_64 0,1,0,4,4,1,0,1,4,9,4,12,8,4,0,13,10,7,4,1,20,18,16,14,12,10,8,6,4,2,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_65 32,21,16,13,10,9,8,7,6,5,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_65 1,2,1,0,5,2,1,2,5,10,5,0,9,5,1,14,11,8,5,2,21,19,17,15,13,11,9,7,5,3,1,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_66 33,22,16,13,11,9,8,7,6,6,5,5,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_66 0,0,2,1,0,3,2,3,6,0,6,1,10,6,2,15,12,9,6,3,0,20,18,16,14,12,10,8,6,4,2,0,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_67 33,22,16,13,11,9,8,7,6,6,5,5,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_67 1,1,3,2,1,4,3,4,7,1,7,2,11,7,3,16,13,10,7,4,1,21,19,17,15,13,11,9,7,5,3,1,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_68 34,22,17,13,11,9,8,7,6,6,5,5,4,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_68 0,2,0,3,2,5,4,5,8,2,8,3,12,8,4,0,14,11,8,5,2,22,20,18,16,14,12,10,8,6,4,2,0,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_69 34,23,17,13,11,9,8,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_69 1,0,1,4,3,6,5,6,9,3,9,4,13,9,5,1,15,12,9,6,3,0,21,19,17,15,13,11,9,7,5,3,1,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_70 35,23,17,14,11,10,8,7,7,6,5,5,5,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_70 0,1,2,0,4,0,6,7,0,4,10,5,0,10,6,2,16,13,10,7,4,1,22,20,18,16,14,12,10,8,6,4,2,0,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_71 35,23,17,14,11,10,8,7,7,6,5,5,5,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_71 1,2,3,1,5,1,7,8,1,5,11,6,1,11,7,3,17,14,11,8,5,2,23,21,19,17,15,13,11,9,7,5,3,1,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_72 36,24,18,14,12,10,9,8,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_72 0,0,0,2,0,2,0,0,2,6,0,7,2,12,8,4,0,15,12,9,6,3,0,22,20,18,16,14,12,10,8,6,4,2,0,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_73 36,24,18,14,12,10,9,8,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_73 1,1,1,3,1,3,1,1,3,7,1,8,3,13,9,5,1,16,13,10,7,4,1,23,21,19,17,15,13,11,9,7,5,3,1,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_74 37,24,18,14,12,10,9,8,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_74 0,2,2,4,2,4,2,2,4,8,2,9,4,14,10,6,2,17,14,11,8,5,2,24,22,20,18,16,14,12,10,8,6,4,2,0,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_75 37,25,18,15,12,10,9,8,7,6,6,5,5,5,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_75 1,0,3,0,3,5,3,3,5,9,3,10,5,0,11,7,3,18,15,12,9,6,3,0,23,21,19,17,15,13,11,9,7,5,3,1,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_76 38,25,19,15,12,10,9,8,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_76 0,1,0,1,4,6,4,4,6,10,4,11,6,1,12,8,4,0,16,13,10,7,4,1,24,22,20,18,16,14,12,10,8,6,4,2,0,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_77 38,25,19,15,12,11,9,8,7,7,6,5,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_77 1,2,1,2,5,0,5,5,7,0,5,12,7,2,13,9,5,1,17,14,11,8,5,2,25,23,21,19,17,15,13,11,9,7,5,3,1,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_78 39,26,19,15,13,11,9,8,7,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_78 0,0,2,3,0,1,6,6,8,1,6,0,8,3,14,10,6,2,18,15,12,9,6,3,0,24,22,20,18,16,14,12,10,8,6,4,2,0,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_79 39,26,19,15,13,11,9,8,7,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_79 1,1,3,4,1,2,7,7,9,2,7,1,9,4,15,11,7,3,19,16,13,10,7,4,1,25,23,21,19,17,15,13,11,9,7,5,3,1,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_80 40,26,20,16,13,11,10,8,8,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_80 0,2,0,0,2,3,0,8,0,3,8,2,10,5,0,12,8,4,0,17,14,11,8,5,2,26,24,22,20,18,16,14,12,10,8,6,4,2,0,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_81 40,27,20,16,13,11,10,9,8,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_81 1,0,1,1,3,4,1,0,1,4,9,3,11,6,1,13,9,5,1,18,15,12,9,6,3,0,25,23,21,19,17,15,13,11,9,7,5,3,1,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_82 41,27,20,16,13,11,10,9,8,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_82 0,1,2,2,4,5,2,1,2,5,10,4,12,7,2,14,10,6,2,19,16,13,10,7,4,1,26,24,22,20,18,16,14,12,10,8,6,4,2,0,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_83 41,27,20,16,13,11,10,9,8,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_83 1,2,3,3,5,6,3,2,3,6,11,5,13,8,3,15,11,7,3,20,17,14,11,8,5,2,27,25,23,21,19,17,15,13,11,9,7,5,3,1,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_84 42,28,21,16,14,12,10,9,8,7,7,6,6,5,5,4,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_84 0,0,0,4,0,0,4,3,4,7,0,6,0,9,4,16,12,8,4,0,18,15,12,9,6,3,0,26,24,22,20,18,16,14,12,10,8,6,4,2,0,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_85 42,28,21,17,14,12,10,9,8,7,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_85 1,1,1,0,1,1,5,4,5,8,1,7,1,10,5,0,13,9,5,1,19,16,13,10,7,4,1,27,25,23,21,19,17,15,13,11,9,7,5,3,1,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_86 43,28,21,17,14,12,10,9,8,7,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_86 0,2,2,1,2,2,6,5,6,9,2,8,2,11,6,1,14,10,6,2,20,17,14,11,8,5,2,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_87 43,29,21,17,14,12,10,9,8,7,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_87 1,0,3,2,3,3,7,6,7,10,3,9,3,12,7,2,15,11,7,3,21,18,15,12,9,6,3,0,27,25,23,21,19,17,15,13,11,9,7,5,3,1,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_88 44,29,22,17,14,12,11,9,8,8,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_88 0,1,0,3,4,4,0,7,8,0,4,10,4,13,8,3,16,12,8,4,0,19,16,13,10,7,4,1,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_89 44,29,22,17,14,12,11,9,8,8,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_89 1,2,1,4,5,5,1,8,9,1,5,11,5,14,9,4,17,13,9,5,1,20,17,14,11,8,5,2,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_90 45,30,22,18,15,12,11,10,9,8,7,6,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_90 0,0,2,0,0,6,2,0,0,2,6,12,6,0,10,5,0,14,10,6,2,21,18,15,12,9,6,3,0,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_91 45,30,22,18,15,13,11,10,9,8,7,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_91 1,1,3,1,1,0,3,1,1,3,7,0,7,1,11,6,1,15,11,7,3,22,19,16,13,10,7,4,1,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_92 46,30,23,18,15,13,11,10,9,8,7,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_92 0,2,0,2,2,1,4,2,2,4,8,1,8,2,12,7,2,16,12,8,4,0,20,17,14,11,8,5,2,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_93 46,31,23,18,15,13,11,10,9,8,7,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_93 1,0,1,3,3,2,5,3,3,5,9,2,9,3,13,8,3,17,13,9,5,1,21,18,15,12,9,6,3,0,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_94 47,31,23,18,15,13,11,10,9,8,7,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_94 0,1,2,4,4,3,6,4,4,6,10,3,10,4,14,9,4,18,14,10,6,2,22,19,16,13,10,7,4,1,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_95 47,31,23,19,15,13,11,10,9,8,7,7,6,6,5,5,5,5,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_95 1,2,3,0,5,4,7,5,5,7,11,4,11,5,15,10,5,0,15,11,7,3,23,20,17,14,11,8,5,2,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_96 48,32,24,19,16,13,12,10,9,8,8,7,6,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_96 0,0,0,1,0,5,0,6,6,8,0,5,12,6,0,11,6,1,16,12,8,4,0,21,18,15,12,9,6,3,0,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_97 48,32,24,19,16,13,12,10,9,8,8,7,6,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_97 1,1,1,2,1,6,1,7,7,9,1,6,13,7,1,12,7,2,17,13,9,5,1,22,19,16,13,10,7,4,1,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_98 49,32,24,19,16,14,12,10,9,8,8,7,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_98 0,2,2,3,2,0,2,8,8,10,2,7,0,8,2,13,8,3,18,14,10,6,2,23,20,17,14,11,8,5,2,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_99 49,33,24,19,16,14,12,11,9,9,8,7,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_99 1,0,3,4,3,1,3,0,9,0,3,8,1,9,3,14,9,4,19,15,11,7,3,24,21,18,15,12,9,6,3,0,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_100 50,33,25,20,16,14,12,11,10,9,8,7,7,6,6,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_100 0,1,0,0,4,2,4,1,0,1,4,9,2,10,4,15,10,5,0,16,12,8,4,0,22,19,16,13,10,7,4,1,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_101 50,33,25,20,16,14,12,11,10,9,8,7,7,6,6,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_101 1,2,1,1,5,3,5,2,1,2,5,10,3,11,5,16,11,6,1,17,13,9,5,1,23,20,17,14,11,8,5,2,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_102 51,34,25,20,17,14,12,11,10,9,8,7,7,6,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_102 0,0,2,2,0,4,6,3,2,3,6,11,4,12,6,0,12,7,2,18,14,10,6,2,24,21,18,15,12,9,6,3,0,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_103 51,34,25,20,17,14,12,11,10,9,8,7,7,6,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_103 1,1,3,3,1,5,7,4,3,4,7,12,5,13,7,1,13,8,3,19,15,11,7,3,25,22,19,16,13,10,7,4,1,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_104 52,34,26,20,17,14,13,11,10,9,8,8,7,6,6,6,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_104 0,2,0,4,2,6,0,5,4,5,8,0,6,14,8,2,14,9,4,20,16,12,8,4,0,23,20,17,14,11,8,5,2,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_105 52,35,26,21,17,15,13,11,10,9,8,8,7,7,6,6,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_105 1,0,1,0,3,0,1,6,5,6,9,1,7,0,9,3,15,10,5,0,17,13,9,5,1,24,21,18,15,12,9,6,3,0,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_106 53,35,26,21,17,15,13,11,10,9,8,8,7,7,6,6,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_106 0,1,2,1,4,1,2,7,6,7,10,2,8,1,10,4,16,11,6,1,18,14,10,6,2,25,22,19,16,13,10,7,4,1,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_107 53,35,26,21,17,15,13,11,10,9,8,8,7,7,6,6,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_107 1,2,3,2,5,2,3,8,7,8,11,3,9,2,11,5,17,12,7,2,19,15,11,7,3,26,23,20,17,14,11,8,5,2,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_108 54,36,27,21,18,15,13,12,10,9,9,8,7,7,6,6,6,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_108 0,0,0,3,0,3,4,0,8,9,0,4,10,3,12,6,0,13,8,3,20,16,12,8,4,0,24,21,18,15,12,9,6,3,0,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_109 54,36,27,21,18,15,13,12,10,9,9,8,7,7,6,6,6,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_109 1,1,1,4,1,4,5,1,9,10,1,5,11,4,13,7,1,14,9,4,21,17,13,9,5,1,25,22,19,16,13,10,7,4,1,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_110 55,36,27,22,18,15,13,12,11,10,9,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_110 0,2,2,0,2,5,6,2,0,0,2,6,12,5,14,8,2,15,10,5,0,18,14,10,6,2,26,23,20,17,14,11,8,5,2,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_111 55,37,27,22,18,15,13,12,11,10,9,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_111 1,0,3,1,3,6,7,3,1,1,3,7,13,6,15,9,3,16,11,6,1,19,15,11,7,3,27,24,21,18,15,12,9,6,3,0,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_112 56,37,28,22,18,16,14,12,11,10,9,8,8,7,7,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_112 0,1,0,2,4,0,0,4,2,2,4,8,0,7,0,10,4,17,12,7,2,20,16,12,8,4,0,25,22,19,16,13,10,7,4,1,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_113 56,37,28,22,18,16,14,12,11,10,9,8,8,7,7,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_113 1,2,1,3,5,1,1,5,3,3,5,9,1,8,1,11,5,18,13,8,3,21,17,13,9,5,1,26,23,20,17,14,11,8,5,2,37,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_114 57,38,28,22,19,16,14,12,11,10,9,8,8,7,7,6,6,6,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_114 0,0,2,4,0,2,2,6,4,4,6,10,2,9,2,12,6,0,14,9,4,22,18,14,10,6,2,27,24,21,18,15,12,9,6,3,0,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_115 57,38,28,23,19,16,14,12,11,10,9,8,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_115 1,1,3,0,1,3,3,7,5,5,7,11,3,10,3,13,7,1,15,10,5,0,19,15,11,7,3,28,25,22,19,16,13,10,7,4,1,37,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_116 58,38,29,23,19,16,14,12,11,10,9,8,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_116 0,2,0,1,2,4,4,8,6,6,8,12,4,11,4,14,8,2,16,11,6,1,20,16,12,8,4,0,26,23,20,17,14,11,8,5,2,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_117 58,39,29,23,19,16,14,13,11,10,9,9,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_117 1,0,1,2,3,5,5,0,7,7,9,0,5,12,5,15,9,3,17,12,7,2,21,17,13,9,5,1,27,24,21,18,15,12,9,6,3,0,37,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_118 59,39,29,23,19,16,14,13,11,10,9,9,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_118 0,1,2,3,4,6,6,1,8,8,10,1,6,13,6,16,10,4,18,13,8,3,22,18,14,10,6,2,28,25,22,19,16,13,10,7,4,1,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_119 59,39,29,23,19,17,14,13,11,10,9,9,8,7,7,7,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_119 1,2,3,4,5,0,7,2,9,9,11,2,7,14,7,0,11,5,19,14,9,4,23,19,15,11,7,3,29,26,23,20,17,14,11,8,5,2,39,37,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_120 60,40,30,24,20,17,15,13,12,10,10,9,8,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_120 0,0,0,0,0,1,0,3,0,10,0,3,8,0,8,1,12,6,0,15,10,5,0,20,16,12,8,4,0,27,24,21,18,15,12,9,6,3,0,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_121 60,40,30,24,20,17,15,13,12,11,10,9,8,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_121 1,1,1,1,1,2,1,4,1,0,1,4,9,1,9,2,13,7,1,16,11,6,1,21,17,13,9,5,1,28,25,22,19,16,13,10,7,4,1,39,37,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_122 61,40,30,24,20,17,15,13,12,11,10,9,8,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_122 0,2,2,2,2,3,2,5,2,1,2,5,10,2,10,3,14,8,2,17,12,7,2,22,18,14,10,6,2,29,26,23,20,17,14,11,8,5,2,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_123 61,41,30,24,20,17,15,13,12,11,10,9,8,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_123 1,0,3,3,3,4,3,6,3,2,3,6,11,3,11,4,15,9,3,18,13,8,3,23,19,15,11,7,3,30,27,24,21,18,15,12,9,6,3,0,39,37,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_124 62,41,31,24,20,17,15,13,12,11,10,9,8,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_124 0,1,0,4,4,5,4,7,4,3,4,7,12,4,12,5,16,10,4,19,14,9,4,24,20,16,12,8,4,0,28,25,22,19,16,13,10,7,4,1,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_125 62,41,31,25,20,17,15,13,12,11,10,9,8,8,7,7,6,6,6,5,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_125 1,2,1,0,5,6,5,8,5,4,5,8,13,5,13,6,17,11,5,20,15,10,5,0,21,17,13,9,5,1,29,26,23,20,17,14,11,8,5,2,41,39,37,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_126 63,42,31,25,21,18,15,14,12,11,10,9,9,8,7,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_126 0,0,2,1,0,0,6,0,6,5,6,9,0,6,14,7,0,12,6,0,16,11,6,1,22,18,14,10,6,2,30,27,24,21,18,15,12,9,6,3,0,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define PP2_LITERAL_DIV_TABLE_127 63,42,31,25,21,18,15,14,12,11,10,9,9,8,7,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define PP2_LITERAL_MOD_TABLE_127 1,1,3,2,1,1,7,1,7,6,7,10,1,7,15,8,1,13,7,1,17,12,7,2,23,19,15,11,7,3,31,28,25,22,19,16,13,10,7,4,1,41,39,37,35,33,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0

#endif

// ******************** From: inc.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_LITERAL_INC_H
#define PP2_PRIMITIVE_ARITHMETIC_LITERAL_INC_H


/* PP2_LITERAL_INC(,x) -> x+1. The indirection prescans x to a literal before the
 * ## paste below, so INC composes when x is itself an unexpanded expression. */
#define PP2_LITERAL_INC(P,x) IP2_LITERAL_INC_EVAL(x)
#define IP2_LITERAL_INC_EVAL(x)                 \
        PP2_FY(                                 \
            TUPLE_AT_0,                         \
            (,PP2_TUPLE_DROP_##x(,              \
                1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,                          \
                (overflow)                      \
            ),)                                 \
        )

#endif

// ******************** From: dec.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_LITERAL_DEC_H
#define PP2_PRIMITIVE_ARITHMETIC_LITERAL_DEC_H


/* PP2_LITERAL_DEC(,x) -> x-1, clamped at 0. Element i of the line is max(0,i-1). */
#define PP2_LITERAL_DEC(P,x) IP2_LITERAL_DEC_EVAL(x)
#define IP2_LITERAL_DEC_EVAL(x)                 \
        PP2_FY(                                 \
            TUPLE_AT_0,                         \
            (,PP2_TUPLE_DROP_##x(,              \
                0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,                          \
                (underflow)                     \
            ),)                                 \
        )

#endif

// ******************** From: arbitrary.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_H

/* Arbitrary-precision integer arithmetic on decimal digit-sequences.
 *
 * A number is a most-significant-digit-first sequence of single-digit tuples,
 * e.g. (1)(2)(3) == 123 and (0) == 0; a negative value wraps its magnitude in
 * one extra paren layer, e.g. ((1)(2)(3)) == -123. Every operation FIXes its
 * result to this canonical form (no leading zeros, no negative zero). There is
 * no fixed upper bound -- length is limited only by the preprocessor.
 *
 * Public operations:
 *   PP2_ARBITRARY_INC(x) / PP2_ARBITRARY_DEC(x)
 *   PP2_ARBITRARY_ADD(x,y) / PP2_ARBITRARY_SUB(x,y) / PP2_ARBITRARY_NEG(x)
 *   PP2_ARBITRARY_CMP(x,y)            -> 0 (x<y) | 1 (x==y) | 2 (x>y)
 *   PP2_ARBITRARY_LESS(x,y) / PP2_ARBITRARY_LESS_EQUAL(x,y)
 *   PP2_ARBITRARY_GREATER(x,y) / PP2_ARBITRARY_GREATER_EQUAL(x,y)
 *   PP2_ARBITRARY_EQUAL(x,y) / PP2_ARBITRARY_NOT_EQUAL(x,y)
 *   PP2_ARBITRARY_MUL(x,y)
 *   PP2_ARBITRARY_DIV(x,y) / PP2_ARBITRARY_MOD(x,y)  (C semantics, truncated)
 *   PP2_ARBITRARY_SIGN(x)             -> selector (negative? ...)
 *   PP2_ARBITRARY_FIX(x)              -> canonical form
 *   PP2_ARBITRARY_PROMOTE(n)          -> native literal 0..127 to digit-seq
 *   PP2_ARBITRARY_DEMOTE(x)           -> digit-seq to native token(s)
 */


// ******************** From: sign.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_SIGN_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_SIGN_H


/* Sign of an arbitrary number: yields PP2_IF_1 when x is negative (its magnitude
 * seq is wrapped in an extra paren layer, so stripping one leaves a tuple) and
 * PP2_IF_0 when non-negative. Use as PP2_ARBITRARY_SIGN(x)(neg,nonneg). */

#define PP2_ARBITRARY_SIGN(x) PP2_ARBITRARY_SIGN_I(PP2_OPEN x)
#define PP2_ARBITRARY_SIGN_I(...) PP2_IS_EDIBLE(,__VA_ARGS__)

#endif

// ******************** From: inc.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_INC_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_INC_H


// ******************** From: dec.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DEC_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DEC_H


// ******************** From: isnt_0.h
/** @file */
#ifndef PP2_PRIMITIVE_DETECTION_ISNT_0_H
#define PP2_PRIMITIVE_DETECTION_ISNT_0_H


/**
* Yields the selector \link PP2_IF_1 \endlink when the token `x` is not `0`, and
* \link PP2_IF_0 \endlink when it is `0`. Only `PP2_ISNT_0_0` is defined (to the
* edible `()`), so pasting turns a `0` into a tuple that PP2_ISNT_EDIBLE detects.
*/
#define PP2_ISNT_0(x) PP2_ISNT_0_I(PP2_PRIMITIVE_CAT(PP2_ISNT_0_,x))
#define PP2_ISNT_0_I(...) PP2_ISNT_EDIBLE(,__VA_ARGS__)

#define PP2_ISNT_0_0 ()

#endif

// ******************** From: fix.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_FIX_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_FIX_H


/* Normalise a number to canonical form: strip leading zeros so the most
 * significant digit is non-zero, collapse an all-zero magnitude to (0), and
 * drop a redundant negative sign on zero. FIX_INTERNAL handles an unsigned
 * magnitude; FIX dispatches on sign. */

#define PP2_ARBITRARY_FIX(x) PP2_ARBITRARY_SIGN(x)(PP2_ARBITRARY_FIX_,SIGNED,UNSIGNED)(x)
#define PP2_ARBITRARY_FIX_SIGNED(x) PP2_ARBITRARY_FIX_SIGNED_I(PP2_ARBITRARY_FIX_INTERNAL(PP2_OPEN x))
#define PP2_ARBITRARY_FIX_UNSIGNED(x) PP2_ARBITRARY_FIX_INTERNAL(x)

/* if the fixed magnitude is (0), drop the sign wrapper; else re-wrap negative */
#define PP2_ARBITRARY_FIX_SIGNED_I(x) PP2_SCAN(PP2_ISNT_0 (PP2_SEQ_HEAD(x))(,,PP2_OPEN)(x))

#define PP2_ARBITRARY_FIX_INTERNAL(x) PP2_ARBITRARY_FIX_II(PP2_ARBITRARY_FIX_A x)

#define PP2_ARBITRARY_FIX_II(c) PP2_IS_EDIBLE(,c)(,c,(0))
#define PP2_ARBITRARY_FIX_A(digit) PP2_ISNT_0(digit)(,(digit),PP2_ARBITRARY_FIX_B)
#define PP2_ARBITRARY_FIX_B(digit) PP2_ISNT_0(digit)(,(digit),PP2_ARBITRARY_FIX_A)

#endif

/* Decrement an arbitrary number. A negative x decrements by incrementing its
 * magnitude (more negative); zero decrements to -1 (i.e. ((1))); a positive x
 * runs the unsigned borrow walk (DEC_0..DEC_9), mirroring INC but borrowing. */

#define PP2_ARBITRARY_DEC(x) PP2_ARBITRARY_DEC_I(PP2_ARBITRARY_FIX(x))

#define PP2_ARBITRARY_DEC_I(x) PP2_ARBITRARY_SIGN(x)(PP2_ARBITRARY_DEC_I_,SIGNED,UNSIGNED)(x)
#define PP2_ARBITRARY_DEC_I_SIGNED(x) (PP2_ARBITRARY_INC_INTERNAL(PP2_OPEN x))
#define PP2_ARBITRARY_DEC_I_UNSIGNED(x) PP2_SCAN(PP2_ISNT_0(PP2_SEQ_HEAD(x))(PP2_ARBITRARY_DEC_I_UNSIGNED_,NONZERO,ZERO)(x))
#define PP2_ARBITRARY_DEC_I_UNSIGNED_ZERO(x) ((1))
#define PP2_ARBITRARY_DEC_I_UNSIGNED_NONZERO(x) PP2_ARBITRARY_DEC_INTERNAL(x)

#define PP2_ARBITRARY_DEC_INTERNAL(x) PP2_ARBITRARY_DEC_INTERNAL_I(PP2_SCAN(PP2_ARBITRARY_DEC_A x(00), PP2_ARBITRARY_DEC_IV PP2_ARBITRARY_SPECIAL_CLOSE(x)))
#define PP2_ARBITRARY_DEC_INTERNAL_I(...) PP2_ARBITRARY_FIX_INTERNAL(PP2_TUPLE_AT_0(,__VA_ARGS__))

#define PP2_ARBITRARY_DEC_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DEC_II PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DEC_B)
#define PP2_ARBITRARY_DEC_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DEC_II PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DEC_A)
#define PP2_ARBITRARY_DEC_II(...) PP2_ARBITRARY_DEC_III(__VA_ARGS__)

#define PP2_ARBITRARY_DEC_III(digit, res, op) op(digit)(res)
#define PP2_ARBITRARY_DEC_IV(digit) PP2_ARBITRARY_DEC_##digit
#define PP2_ARBITRARY_DEC_V(digit) (digit)PP2_ARBITRARY_DEC_VI
#define PP2_ARBITRARY_DEC_VI(res) res,PP2_ARBITRARY_DEC_V

#define PP2_ARBITRARY_DEC_0(res) (9)res,PP2_ARBITRARY_DEC_IV
#define PP2_ARBITRARY_DEC_1(res) (0)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_2(res) (1)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_3(res) (2)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_4(res) (3)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_5(res) (4)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_6(res) (5)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_7(res) (6)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_8(res) (7)res,PP2_ARBITRARY_DEC_V
#define PP2_ARBITRARY_DEC_9(res) (8)res,PP2_ARBITRARY_DEC_V

#endif

/* Increment an arbitrary number. A negative x increments by decrementing its
 * magnitude; a non-negative x runs the unsigned carry walk. The walk prefixes a
 * leading (0) to absorb a possible carry-out, drives the digit sequence through
 * the alternating A/B co-routine, and applies the per-digit carry rules
 * (INC_0..INC_9) from the least significant end via SPECIAL_CLOSE. */

#define PP2_ARBITRARY_INC(x) PP2_ARBITRARY_INC_I(PP2_ARBITRARY_FIX(x))

#define PP2_ARBITRARY_INC_I(x) PP2_ARBITRARY_SIGN(x)(PP2_ARBITRARY_INC_I_,SIGNED,UNSIGNED)(x)
#define PP2_ARBITRARY_INC_I_SIGNED(x) PP2_ARBITRARY_FIX((PP2_ARBITRARY_DEC_INTERNAL(PP2_OPEN x)))
#define PP2_ARBITRARY_INC_I_UNSIGNED(x) PP2_ARBITRARY_INC_INTERNAL(x)

#define PP2_ARBITRARY_INC_INTERNAL(x) PP2_ARBITRARY_INC_INTERNAL_I(PP2_SCAN(PP2_ARBITRARY_INC_A (0)x(00), PP2_ARBITRARY_INC_IV PP2_ARBITRARY_SPECIAL_CLOSE((0)x)))
#define PP2_ARBITRARY_INC_INTERNAL_I(...) PP2_ARBITRARY_FIX_INTERNAL(PP2_TUPLE_AT_0(,__VA_ARGS__))

#define PP2_ARBITRARY_INC_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_INC_II PP2_DEFER(PP2_LPAREN_ID)() digit,PP2_ARBITRARY_INC_B)
#define PP2_ARBITRARY_INC_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_INC_II PP2_DEFER(PP2_LPAREN_ID)() digit,PP2_ARBITRARY_INC_A)
#define PP2_ARBITRARY_INC_II(...) PP2_ARBITRARY_INC_III(__VA_ARGS__)

#define PP2_ARBITRARY_INC_III(digit, res, op) op(digit)(res)
#define PP2_ARBITRARY_INC_IV(digit) PP2_ARBITRARY_INC_##digit
#define PP2_ARBITRARY_INC_V(digit) (digit)PP2_ARBITRARY_INC_VI
#define PP2_ARBITRARY_INC_VI(res) res,PP2_ARBITRARY_INC_V

#define PP2_ARBITRARY_INC_0(res) (1)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_1(res) (2)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_2(res) (3)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_3(res) (4)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_4(res) (5)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_5(res) (6)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_6(res) (7)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_7(res) (8)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_8(res) (9)res,PP2_ARBITRARY_INC_V
#define PP2_ARBITRARY_INC_9(res) (0)res,PP2_ARBITRARY_INC_IV

#endif

// ******************** From: neg.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_NEG_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_NEG_H


/* Negate: toggle the sign wrapper. A negative x loses its extra paren layer; a
 * non-negative x gains one. FIX collapses negative zero back to (0). */

#define PP2_ARBITRARY_NEG(x) PP2_ARBITRARY_NEG_I(PP2_ARBITRARY_FIX(x))
#define PP2_ARBITRARY_NEG_I(x) PP2_ARBITRARY_FIX(PP2_ARBITRARY_SIGN(x)(,PP2_OPEN x,(x)))

#endif

// ******************** From: add.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_ADD_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_ADD_H


// ******************** From: compare.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_COMPARE_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_COMPARE_H


// ******************** From: rel.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_REL_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_REL_H


// ******************** From: lookup.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_LOOKUP_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_LOOKUP_H


/* Index a 10-tuple by a single digit n. Used to read the single-digit
 * addition and relation tables. */

#define PP2_ARBITRARY_LOOKUP(n, tuple) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_LOOKUP_,n) tuple

#define PP2_ARBITRARY_LOOKUP_0(a, b, c, d, e, f, g, h, i, j) a
#define PP2_ARBITRARY_LOOKUP_1(a, b, c, d, e, f, g, h, i, j) b
#define PP2_ARBITRARY_LOOKUP_2(a, b, c, d, e, f, g, h, i, j) c
#define PP2_ARBITRARY_LOOKUP_3(a, b, c, d, e, f, g, h, i, j) d
#define PP2_ARBITRARY_LOOKUP_4(a, b, c, d, e, f, g, h, i, j) e
#define PP2_ARBITRARY_LOOKUP_5(a, b, c, d, e, f, g, h, i, j) f
#define PP2_ARBITRARY_LOOKUP_6(a, b, c, d, e, f, g, h, i, j) g
#define PP2_ARBITRARY_LOOKUP_7(a, b, c, d, e, f, g, h, i, j) h
#define PP2_ARBITRARY_LOOKUP_8(a, b, c, d, e, f, g, h, i, j) i
#define PP2_ARBITRARY_LOOKUP_9(a, b, c, d, e, f, g, h, i, j) j

#endif

/* Single-digit relation: PP2_ARBITRARY_REL(a,b) -> 0 if a<b, 1 if a==b, 2 if
 * a>b. Two nested lookups index the 10x10 table. */

#define PP2_ARBITRARY_REL(a, b) \
    PP2_ARBITRARY_LOOKUP(a, PP2_ARBITRARY_LOOKUP(b, ( \
        (1, 2, 2, 2, 2, 2, 2, 2, 2, 2), \
        (0, 1, 2, 2, 2, 2, 2, 2, 2, 2), \
        (0, 0, 1, 2, 2, 2, 2, 2, 2, 2), \
        (0, 0, 0, 1, 2, 2, 2, 2, 2, 2), \
        (0, 0, 0, 0, 1, 2, 2, 2, 2, 2), \
        (0, 0, 0, 0, 0, 1, 2, 2, 2, 2), \
        (0, 0, 0, 0, 0, 0, 1, 2, 2, 2), \
        (0, 0, 0, 0, 0, 0, 0, 1, 2, 2), \
        (0, 0, 0, 0, 0, 0, 0, 0, 1, 2), \
        (0, 0, 0, 0, 0, 0, 0, 0, 0, 1) \
    )))

#endif

/* Three-way comparison. PP2_ARBITRARY_CMP(x,y) -> 0 if x<y, 1 if x==y, 2 if x>y.
 * The MSD-first FMERGE threads a running verdict: once a more significant column
 * decides <, it stays 0 (CMP_M_0); once it decides >, it stays 2 (CMP_M_2);
 * while equal it consults the single-digit relation (CMP_M_1). The six relations
 * are simple maps over the three-way result. */

#define PP2_ARBITRARY_CMP_INTERNAL(x, y) \
    PP2_SCAN(PP2_ARBITRARY_CMP_M(1) PP2_ARBITRARY_FMERGE(x, y, PP2_ARBITRARY_CMP_M, 0)(PP2_ARBITRARY_CMP_FIN))

#define PP2_ARBITRARY_CMP_M(x) PP2_ARBITRARY_CMP_M_ ## x
#define PP2_ARBITRARY_CMP_M_0(a, b) PP2_INDIRECT(0)
#define PP2_ARBITRARY_CMP_M_1(a, b) PP2_INDIRECT(PP2_ARBITRARY_REL(a, b))
#define PP2_ARBITRARY_CMP_M_2(a, b) PP2_INDIRECT(2)
#define PP2_ARBITRARY_CMP_FIN(state) state

/* sign-aware dispatch: any negative < any non-negative; both-negative reverses */
#define PP2_ARBITRARY_CMP(x, y) PP2_ARBITRARY_CMP_DISP(PP2_ARBITRARY_FIX(x), PP2_ARBITRARY_FIX(y))
#define PP2_ARBITRARY_CMP_DISP(x, y) PP2_ARBITRARY_CMP_CAT(PP2_ARBITRARY_SIGN(x)(,1,0), PP2_ARBITRARY_SIGN(y)(,1,0))(x, y)
#define PP2_ARBITRARY_CMP_CAT(a, b) PP2_ARBITRARY_CMP_CAT_I(a, b)
#define PP2_ARBITRARY_CMP_CAT_I(a, b) PP2_ARBITRARY_CMP_S_##a##b
#define PP2_ARBITRARY_CMP_S_00(x, y) PP2_ARBITRARY_CMP_INTERNAL(x, y)
#define PP2_ARBITRARY_CMP_S_01(x, y) 2
#define PP2_ARBITRARY_CMP_S_10(x, y) 0
#define PP2_ARBITRARY_CMP_S_11(x, y) PP2_ARBITRARY_CMP_INTERNAL(PP2_OPEN y, PP2_OPEN x)

/* derived relations: bare 0/1 tokens. The _MAP indirection forces CMP to expand
 * to a 0/1/2 token before it is pasted onto the relation prefix. */
#define PP2_ARBITRARY_LESS_EQUAL(x, y)    PP2_ARBITRARY_LEQ_MAP(PP2_ARBITRARY_CMP(x, y))
#define PP2_ARBITRARY_LESS(x, y)          PP2_ARBITRARY_LT_MAP(PP2_ARBITRARY_CMP(x, y))
#define PP2_ARBITRARY_GREATER_EQUAL(x, y) PP2_ARBITRARY_GEQ_MAP(PP2_ARBITRARY_CMP(x, y))
#define PP2_ARBITRARY_GREATER(x, y)       PP2_ARBITRARY_GT_MAP(PP2_ARBITRARY_CMP(x, y))
#define PP2_ARBITRARY_EQUAL(x, y)         PP2_ARBITRARY_EQ_MAP(PP2_ARBITRARY_CMP(x, y))
#define PP2_ARBITRARY_NOT_EQUAL(x, y)     PP2_ARBITRARY_NEQ_MAP(PP2_ARBITRARY_CMP(x, y))

#define PP2_ARBITRARY_LEQ_MAP(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_LEQ_,c)
#define PP2_ARBITRARY_LT_MAP(c)  PP2_PRIMITIVE_CAT(PP2_ARBITRARY_LT_, c)
#define PP2_ARBITRARY_GEQ_MAP(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_GEQ_,c)
#define PP2_ARBITRARY_GT_MAP(c)  PP2_PRIMITIVE_CAT(PP2_ARBITRARY_GT_, c)
#define PP2_ARBITRARY_EQ_MAP(c)  PP2_PRIMITIVE_CAT(PP2_ARBITRARY_EQ_, c)
#define PP2_ARBITRARY_NEQ_MAP(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_NEQ_,c)

#define PP2_ARBITRARY_LEQ_0 1
#define PP2_ARBITRARY_LEQ_1 1
#define PP2_ARBITRARY_LEQ_2 0
#define PP2_ARBITRARY_LT_0 1
#define PP2_ARBITRARY_LT_1 0
#define PP2_ARBITRARY_LT_2 0
#define PP2_ARBITRARY_GEQ_0 0
#define PP2_ARBITRARY_GEQ_1 1
#define PP2_ARBITRARY_GEQ_2 1
#define PP2_ARBITRARY_GT_0 0
#define PP2_ARBITRARY_GT_1 0
#define PP2_ARBITRARY_GT_2 1
#define PP2_ARBITRARY_EQ_0 0
#define PP2_ARBITRARY_EQ_1 1
#define PP2_ARBITRARY_EQ_2 0
#define PP2_ARBITRARY_NEQ_0 1
#define PP2_ARBITRARY_NEQ_1 0
#define PP2_ARBITRARY_NEQ_2 1

#endif

// ******************** From: plus.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_PLUS_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_PLUS_H


/* Single-digit addition: PP2_PLUS(a,b) -> a (carry,sum) pair via the 10x10
 * table. PP2_PLUS_3RD threads the running carry across a column, deferring the
 * carry-out through PP2_INDIRECT so the merge walk stays a single scan. */

#define PP2_PLUS(a, b) \
    PP2_ARBITRARY_LOOKUP(b, PP2_ARBITRARY_LOOKUP(a, ( \
        ((0, 0), (0, 1), (0, 2), (0, 3), (0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9)), \
        ((0, 1), (0, 2), (0, 3), (0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9), (1, 0)), \
        ((0, 2), (0, 3), (0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9), (1, 0), (1, 1)), \
        ((0, 3), (0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9), (1, 0), (1, 1), (1, 2)), \
        ((0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9), (1, 0), (1, 1), (1, 2), (1, 3)), \
        ((0, 5), (0, 6), (0, 7), (0, 8), (0, 9), (1, 0), (1, 1), (1, 2), (1, 3), (1, 4)), \
        ((0, 6), (0, 7), (0, 8), (0, 9), (1, 0), (1, 1), (1, 2), (1, 3), (1, 4), (1, 5)), \
        ((0, 7), (0, 8), (0, 9), (1, 0), (1, 1), (1, 2), (1, 3), (1, 4), (1, 5), (1, 6)), \
        ((0, 8), (0, 9), (1, 0), (1, 1), (1, 2), (1, 3), (1, 4), (1, 5), (1, 6), (1, 7)), \
        ((0, 9), (1, 0), (1, 1), (1, 2), (1, 3), (1, 4), (1, 5), (1, 6), (1, 7), (1, 8)) \
    )))

#define PP2_PLUS_3RD(mode) PP2_PRIMITIVE_CAT(PP2_PLUS_3RD_, mode)

#define PP2_PLUS_3RD_0(bin) (PP2_BINARY(1) bin) PP2_INDIRECT(PP2_BINARY(0) bin)
#define PP2_PLUS_3RD_1(bin, n) PP2_PLUS_3RD_2(PP2_BINARY(0) bin, PP2_PLUS(PP2_BINARY(1) bin, n))
#define PP2_PLUS_3RD_2(a, bin) (PP2_BINARY(1) bin) PP2_INDIRECT(PP2_BINARY_CTOR(1, PP2_PLUS(a, PP2_BINARY(0) bin)))

#define PP2_BINARY(i) PP2_PRIMITIVE_CAT(PP2_BINARY_, i)
#define PP2_BINARY_0(a, ...) a
#define PP2_BINARY_1(a, ...) __VA_ARGS__

#define PP2_BINARY_CTOR(i, bin) PP2_BINARY(i) bin

#endif

// ******************** From: sub_internal.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SUB_INTERNAL_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SUB_INTERNAL_H


// ******************** From: bitor.h
/** @file */
#ifndef PP2_PRIMITIVE_LOGICAL_BITOR_H
#define PP2_PRIMITIVE_LOGICAL_BITOR_H


/* Boolean or on {0,1}, curried: PP2_BITOR(b)(c). Used to combine borrows in
 * arbitrary-precision subtraction. */

#define PP2_BITOR(b) PP2_PRIMITIVE_CAT(PP2_BITOR_, b)
#define PP2_BITOR_0(c) c
#define PP2_BITOR_1(c) 1

#endif

// ******************** From: minus.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_MINUS_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_MINUS_H


/* Single-digit subtraction: PP2_MINUS(a,b) -> a (borrow,diff) pair via the 10x10
 * table (borrow=1 when a<b, diff = (a-b) mod 10). */

#define PP2_MINUS(a, b) \
    PP2_ARBITRARY_LOOKUP(b, PP2_ARBITRARY_LOOKUP(a, ( \
        ((0, 0), (1, 9), (1, 8), (1, 7), (1, 6), (1, 5), (1, 4), (1, 3), (1, 2), (1, 1)), \
        ((0, 1), (0, 0), (1, 9), (1, 8), (1, 7), (1, 6), (1, 5), (1, 4), (1, 3), (1, 2)), \
        ((0, 2), (0, 1), (0, 0), (1, 9), (1, 8), (1, 7), (1, 6), (1, 5), (1, 4), (1, 3)), \
        ((0, 3), (0, 2), (0, 1), (0, 0), (1, 9), (1, 8), (1, 7), (1, 6), (1, 5), (1, 4)), \
        ((0, 4), (0, 3), (0, 2), (0, 1), (0, 0), (1, 9), (1, 8), (1, 7), (1, 6), (1, 5)), \
        ((0, 5), (0, 4), (0, 3), (0, 2), (0, 1), (0, 0), (1, 9), (1, 8), (1, 7), (1, 6)), \
        ((0, 6), (0, 5), (0, 4), (0, 3), (0, 2), (0, 1), (0, 0), (1, 9), (1, 8), (1, 7)), \
        ((0, 7), (0, 6), (0, 5), (0, 4), (0, 3), (0, 2), (0, 1), (0, 0), (1, 9), (1, 8)), \
        ((0, 8), (0, 7), (0, 6), (0, 5), (0, 4), (0, 3), (0, 2), (0, 1), (0, 0), (1, 9)), \
        ((0, 9), (0, 8), (0, 7), (0, 6), (0, 5), (0, 4), (0, 3), (0, 2), (0, 1), (0, 0)) \
    )))

#endif

/* Magnitude subtraction x - y, REQUIRING x >= y (both unsigned, canonical). The
 * RMERGE walks aligned digit pairs least-significant first, PP2_MINUS produces a
 * (borrow,diff) per column, and the running borrow threads forward through
 * PP2_INDIRECT (combined with PP2_BITOR). The reversed result is re-fixed. */

#define PP2_ARBITRARY_SUB_INTERNAL(x, y) \
    PP2_ARBITRARY_FIX_INTERNAL(PP2_SEQ_REVERSE(PP2_SCAN( \
        PP2_ARBITRARY_SUB_M(0) PP2_ARBITRARY_RMERGE(x, y, PP2_ARBITRARY_SUB_M, 0)() \
    )))

#define PP2_ARBITRARY_SUB_M(borrow) PP2_ARBITRARY_SUB_M_ ## borrow
#define PP2_ARBITRARY_SUB_M_0(x, y) PP2_ARBITRARY_SUB_II(PP2_MINUS(x, y), 0)
#define PP2_ARBITRARY_SUB_M_1(x, y) PP2_ARBITRARY_SUB_II(PP2_MINUS(x, y), 1)
#define PP2_ARBITRARY_SUB_II(bin, c) PP2_ARBITRARY_SUB_III(PP2_BINARY(0) bin, PP2_MINUS(PP2_BINARY(1) bin, c))
#define PP2_ARBITRARY_SUB_III(b, bin) (PP2_BINARY(1) bin) PP2_INDIRECT(PP2_BITOR(b)(PP2_BINARY(0) bin))

#endif

/* Signed addition. Dispatches on the sign pair: same-sign adds magnitudes
 * (ADD_INTERNAL) and keeps/negates the sign; opposite-sign subtracts the smaller
 * magnitude from the larger and takes the larger's sign (via ADD_INTERNAL's
 * mixed helper, which compares then routes to SUB_INTERNAL). */

#define PP2_ARBITRARY_ADD(x, y) PP2_ARBITRARY_ADD_I(PP2_ARBITRARY_FIX(x), PP2_ARBITRARY_FIX(y))

#define PP2_ARBITRARY_ADD_I(x, y) \
    PP2_ARBITRARY_ADD_CAT(PP2_ARBITRARY_SIGN(x)(,1,0), PP2_ARBITRARY_SIGN(y)(,1,0))( \
        PP2_ARBITRARY_SIGN(x)(,PP2_OPEN,) x, \
        PP2_ARBITRARY_SIGN(y)(,PP2_OPEN,) y \
    )
#define PP2_ARBITRARY_ADD_CAT(a, b) PP2_ARBITRARY_ADD_CAT_I(a, b)
#define PP2_ARBITRARY_ADD_CAT_I(a, b) PP2_ARBITRARY_ADD_S_##a##b

#define PP2_ARBITRARY_ADD_S_00(x, y) PP2_ARBITRARY_ADD_INTERNAL(x, y)
#define PP2_ARBITRARY_ADD_S_11(x, y) (PP2_ARBITRARY_ADD_INTERNAL(x, y))
#define PP2_ARBITRARY_ADD_S_01(x, y) PP2_ARBITRARY_ADD_S_10(y, x)
#define PP2_ARBITRARY_ADD_S_10(x, y) PP2_ARBITRARY_FIX(PP2_ARBITRARY_ADD_MIX(PP2_ARBITRARY_CMP_INTERNAL(x, y))(x, y))

/* x is the (positive) magnitude of the negative operand, y the non-negative
 * operand: result is y - x, signed by which magnitude is larger. The extra
 * indirection expands the CMP result to a 0/1/2 token before it is pasted. */
#define PP2_ARBITRARY_ADD_MIX(c) PP2_ARBITRARY_ADD_MIX_EVAL(c)
#define PP2_ARBITRARY_ADD_MIX_EVAL(c) PP2_ARBITRARY_ADD_MIX_##c
#define PP2_ARBITRARY_ADD_MIX_0(x, y) PP2_ARBITRARY_SUB_INTERNAL(y, x)
#define PP2_ARBITRARY_ADD_MIX_1(x, y) (0)
#define PP2_ARBITRARY_ADD_MIX_2(x, y) (PP2_ARBITRARY_SUB_INTERNAL(x, y))

#define PP2_ARBITRARY_ADD_INTERNAL(x, y) \
    PP2_ARBITRARY_FIX_INTERNAL(PP2_SEQ_REVERSE(PP2_SCAN( \
        PP2_ARBITRARY_ADD_M(0) PP2_ARBITRARY_RMERGE(x, y, PP2_ARBITRARY_ADD_M, 0)() \
    )))

#define PP2_ARBITRARY_ADD_M(carry) PP2_ARBITRARY_ADD_ ## carry
#define PP2_ARBITRARY_ADD_0(x, y) PP2_PLUS_3RD(0)(PP2_PLUS(x, y))
#define PP2_ARBITRARY_ADD_1(x, y) PP2_PLUS_3RD(1)(PP2_PLUS(x, y), 1)

#endif

// ******************** From: sub.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_SUB_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_SUB_H


/* Signed subtraction, defined as x + (-y). ADD already handles every sign
 * combination, so negating y and adding covers all cases uniformly. */

#define PP2_ARBITRARY_SUB(x, y) PP2_ARBITRARY_ADD(x, PP2_ARBITRARY_NEG(y))

#endif

// ******************** From: mul.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_MUL_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_MUL_H


// ******************** From: muldigit.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_MULDIGIT_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_MULDIGIT_H


// ******************** From: times.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_TIMES_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_TIMES_H


/* Single-digit multiplication: PP2_TIMES(a,b) -> a (carry,product) pair via the
 * 10x10 table (carry 0..8, product = (a*b) mod 10). */

#define PP2_TIMES(a, b) \
    PP2_ARBITRARY_LOOKUP(b, PP2_ARBITRARY_LOOKUP(a, ( \
        ((0, 0), (0, 0), (0, 0), (0, 0), (0, 0), (0, 0), (0, 0), (0, 0), (0, 0), (0, 0)), \
        ((0, 0), (0, 1), (0, 2), (0, 3), (0, 4), (0, 5), (0, 6), (0, 7), (0, 8), (0, 9)), \
        ((0, 0), (0, 2), (0, 4), (0, 6), (0, 8), (1, 0), (1, 2), (1, 4), (1, 6), (1, 8)), \
        ((0, 0), (0, 3), (0, 6), (0, 9), (1, 2), (1, 5), (1, 8), (2, 1), (2, 4), (2, 7)), \
        ((0, 0), (0, 4), (0, 8), (1, 2), (1, 6), (2, 0), (2, 4), (2, 8), (3, 2), (3, 6)), \
        ((0, 0), (0, 5), (1, 0), (1, 5), (2, 0), (2, 5), (3, 0), (3, 5), (4, 0), (4, 5)), \
        ((0, 0), (0, 6), (1, 2), (1, 8), (2, 4), (3, 0), (3, 6), (4, 2), (4, 8), (5, 4)), \
        ((0, 0), (0, 7), (1, 4), (2, 1), (2, 8), (3, 5), (4, 2), (4, 9), (5, 6), (6, 3)), \
        ((0, 0), (0, 8), (1, 6), (2, 4), (3, 2), (4, 0), (4, 8), (5, 6), (6, 4), (7, 2)), \
        ((0, 0), (0, 9), (1, 8), (2, 7), (3, 6), (4, 5), (5, 4), (6, 3), (7, 2), (8, 1)) \
    )))

#endif

/* Multiply an unsigned magnitude y by a single digit d -> unsigned magnitude.
 * A single RMERGE walk (least-significant first) multiplies each digit of y by d
 * with PP2_TIMES, threading the carry forward via PP2_PLUS_3RD. The multiplier
 * digit d is supplied as the merge's pad value so every column sees it. This is
 * one pass, exactly like ADD -- no scan ladder needed. */

#define PP2_ARBITRARY_MULDIGIT(y, d) \
    PP2_ARBITRARY_FIX_INTERNAL(PP2_SEQ_REVERSE(PP2_SCAN( \
        PP2_ARBITRARY_MUL_M(0) PP2_ARBITRARY_RMERGE(y, (d), PP2_ARBITRARY_MUL_M, d)() \
    )))

#define PP2_ARBITRARY_MUL_M(carry) PP2_ARBITRARY_MUL_M_ ## carry
#define PP2_ARBITRARY_MUL_M_0(x, y) PP2_PLUS_3RD(0)(PP2_TIMES(x, y))
#define PP2_ARBITRARY_MUL_M_1(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 1)
#define PP2_ARBITRARY_MUL_M_2(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 2)
#define PP2_ARBITRARY_MUL_M_3(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 3)
#define PP2_ARBITRARY_MUL_M_4(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 4)
#define PP2_ARBITRARY_MUL_M_5(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 5)
#define PP2_ARBITRARY_MUL_M_6(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 6)
#define PP2_ARBITRARY_MUL_M_7(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 7)
#define PP2_ARBITRARY_MUL_M_8(x, y) PP2_PLUS_3RD(1)(PP2_TIMES(x, y), 8)

#endif

/* Signed multiplication.
 *
 * The magnitude product is a Horner walk over the multiplier: for each digit d
 * of x, most significant first, acc = acc*10 + y*d. The walk is the same
 * sliding-window engine as RMERGE: each digit of the reversed multiplier opens
 * one deferred paren, nesting the next step inside, so the digits themselves
 * fuel the construction and the nest evaluates inside out (most significant
 * digit innermost, hence first) through ordinary argument expansion. One digit,
 * one nesting level -- no rescan ladder.
 *
 * The sign of the result is the XOR of the operand signs. */

#define PP2_ARBITRARY_MUL(x, y) PP2_ARBITRARY_MUL_I(PP2_ARBITRARY_FIX(x), PP2_ARBITRARY_FIX(y))

#define PP2_ARBITRARY_MUL_I(x, y) \
    PP2_ARBITRARY_MUL_CAT(PP2_ARBITRARY_SIGN(x)(,1,0), PP2_ARBITRARY_SIGN(y)(,1,0))( \
        PP2_ARBITRARY_SIGN(x)(,PP2_OPEN,) x, \
        PP2_ARBITRARY_SIGN(y)(,PP2_OPEN,) y \
    )
#define PP2_ARBITRARY_MUL_CAT(a, b) PP2_ARBITRARY_MUL_CAT_I(a, b)
#define PP2_ARBITRARY_MUL_CAT_I(a, b) PP2_ARBITRARY_MUL_S_##a##b

#define PP2_ARBITRARY_MUL_S_00(x, y) PP2_ARBITRARY_MUL_INTERNAL(x, y)
#define PP2_ARBITRARY_MUL_S_11(x, y) PP2_ARBITRARY_MUL_INTERNAL(x, y)
#define PP2_ARBITRARY_MUL_S_01(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_MUL_INTERNAL(x, y)))
#define PP2_ARBITRARY_MUL_S_10(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_MUL_INTERNAL(x, y)))

/* magnitude product: Horner walk over the reversed multiplier. The walk driver
 * is a private PP2_SCAN clone: the nest evaluates inside the driver's rescan,
 * where the driver's own name is painted, so it must not be the PP2_SCAN that
 * every inner operation (ADD_INTERNAL, MULDIGIT, SEQ_REVERSE) depends on. */
#define PP2_ARBITRARY_MULW_GO(...) __VA_ARGS__

#define PP2_ARBITRARY_MUL_INTERNAL(x, y) PP2_ARBITRARY_MUL_INTERNAL_I(PP2_SEQ_REVERSE(x), y)
#define PP2_ARBITRARY_MUL_INTERNAL_I(rx, y) \
    PP2_ARBITRARY_MULW_III(PP2_ARBITRARY_MULW_GO( \
        PP2_ARBITRARY_MULW_A rx(00) (0), y PP2_ARBITRARY_SPECIAL_CLOSE(rx)))

#define PP2_ARBITRARY_MULW_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_MULW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_MULW_B)
#define PP2_ARBITRARY_MULW_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_MULW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_MULW_A)
#define PP2_ARBITRARY_MULW_I(...) PP2_ARBITRARY_MULW_II(__VA_ARGS__)
#define PP2_ARBITRARY_MULW_II(digit, acc, y) \
        PP2_ARBITRARY_ADD_INTERNAL(PP2_ARBITRARY_MULDIGIT(y, digit), acc(0)), y
#define PP2_ARBITRARY_MULW_III(...) PP2_TUPLE_AT_0(,__VA_ARGS__)

#endif

// ******************** From: div.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DIV_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DIV_H


// ******************** From: divmod.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_DIVMOD_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_DIVMOD_H


// ******************** From: qdigit.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_QDIGIT_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_QDIGIT_H


/* Quotient digit: given magnitudes r < 10*y, find how many times y fits into r.
 * PP2_ARBITRARY_QD_0(r, y) -> qd, remainder. A chain of at most ten distinct
 * steps (bounded by the radix, not the operand): step k stops with k if r < y,
 * else subtracts y and hands off to step k+1. Each dispatch expands the CMP
 * result to a 0/1/2 token before pasting it onto the step's arm prefix. */

#define PP2_ARBITRARY_QD_0(r, y) PP2_ARBITRARY_QD_GO_0(PP2_ARBITRARY_CMP_INTERNAL(r, y))(r, y)
#define PP2_ARBITRARY_QD_1(r, y) PP2_ARBITRARY_QD_GO_1(PP2_ARBITRARY_CMP_INTERNAL(r, y))(r, y)
#define PP2_ARBITRARY_QD_2(r, y) PP2_ARBITRARY_QD_GO_2(PP2_ARBITRARY_CMP_INTERNAL(r, y))(r, y)
#define PP2_ARBITRARY_QD_3(r, y) PP2_ARBITRARY_QD_GO_3(PP2_ARBITRARY_CMP_INTERNAL(r, y))(r, y)
#define PP2_ARBITRARY_QD_4(r, y) PP2_ARBITRARY_QD_GO_4(PP2_ARBITRARY_CMP_INTERNAL(r, y))(r, y)
#define PP2_ARBITRARY_QD_5(r, y) PP2_ARBITRARY_QD_GO_5(PP2_ARBITRARY_CMP_INTERNAL(r, y))(r, y)
#define PP2_ARBITRARY_QD_6(r, y) PP2_ARBITRARY_QD_GO_6(PP2_ARBITRARY_CMP_INTERNAL(r, y))(r, y)
#define PP2_ARBITRARY_QD_7(r, y) PP2_ARBITRARY_QD_GO_7(PP2_ARBITRARY_CMP_INTERNAL(r, y))(r, y)
#define PP2_ARBITRARY_QD_8(r, y) PP2_ARBITRARY_QD_GO_8(PP2_ARBITRARY_CMP_INTERNAL(r, y))(r, y)
#define PP2_ARBITRARY_QD_9(r, y) 9, r

#define PP2_ARBITRARY_QD_GO_0(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_QD_R_0_, c)
#define PP2_ARBITRARY_QD_GO_1(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_QD_R_1_, c)
#define PP2_ARBITRARY_QD_GO_2(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_QD_R_2_, c)
#define PP2_ARBITRARY_QD_GO_3(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_QD_R_3_, c)
#define PP2_ARBITRARY_QD_GO_4(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_QD_R_4_, c)
#define PP2_ARBITRARY_QD_GO_5(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_QD_R_5_, c)
#define PP2_ARBITRARY_QD_GO_6(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_QD_R_6_, c)
#define PP2_ARBITRARY_QD_GO_7(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_QD_R_7_, c)
#define PP2_ARBITRARY_QD_GO_8(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_QD_R_8_, c)

#define PP2_ARBITRARY_QD_R_0_0(r, y) 0, r
#define PP2_ARBITRARY_QD_R_0_1(r, y) PP2_ARBITRARY_QD_1(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_0_2(r, y) PP2_ARBITRARY_QD_1(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_1_0(r, y) 1, r
#define PP2_ARBITRARY_QD_R_1_1(r, y) PP2_ARBITRARY_QD_2(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_1_2(r, y) PP2_ARBITRARY_QD_2(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_2_0(r, y) 2, r
#define PP2_ARBITRARY_QD_R_2_1(r, y) PP2_ARBITRARY_QD_3(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_2_2(r, y) PP2_ARBITRARY_QD_3(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_3_0(r, y) 3, r
#define PP2_ARBITRARY_QD_R_3_1(r, y) PP2_ARBITRARY_QD_4(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_3_2(r, y) PP2_ARBITRARY_QD_4(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_4_0(r, y) 4, r
#define PP2_ARBITRARY_QD_R_4_1(r, y) PP2_ARBITRARY_QD_5(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_4_2(r, y) PP2_ARBITRARY_QD_5(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_5_0(r, y) 5, r
#define PP2_ARBITRARY_QD_R_5_1(r, y) PP2_ARBITRARY_QD_6(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_5_2(r, y) PP2_ARBITRARY_QD_6(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_6_0(r, y) 6, r
#define PP2_ARBITRARY_QD_R_6_1(r, y) PP2_ARBITRARY_QD_7(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_6_2(r, y) PP2_ARBITRARY_QD_7(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_7_0(r, y) 7, r
#define PP2_ARBITRARY_QD_R_7_1(r, y) PP2_ARBITRARY_QD_8(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_7_2(r, y) PP2_ARBITRARY_QD_8(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_8_0(r, y) 8, r
#define PP2_ARBITRARY_QD_R_8_1(r, y) PP2_ARBITRARY_QD_9(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)
#define PP2_ARBITRARY_QD_R_8_2(r, y) PP2_ARBITRARY_QD_9(PP2_ARBITRARY_SUB_INTERNAL(r, y), y)

#endif

/* Magnitude long division, quotient and remainder in one walk. The dividend's
 * digits drive the same sliding-window nest as MUL (most significant digit
 * innermost, so evaluated first); each level appends the incoming digit to the
 * running remainder, extracts one quotient digit with the QD chain, and threads
 * (quotient, remainder, divisor) outward. PP2_ARBITRARY_DIVMOD_INTERNAL(x, y)
 * expands to the triple q, r, y; the Q/R pickers select one component.
 * Division by zero is undefined (produces garbage, does not hang). */

/* private PP2_SCAN clone: the nest evaluates inside the driver's rescan, where
 * the driver's own name is painted, so it must not be the PP2_SCAN that the
 * inner operations (CMP, SUB_INTERNAL, FIX, SEQ_REVERSE) depend on */
#define PP2_ARBITRARY_DIVW_GO(...) __VA_ARGS__

#define PP2_ARBITRARY_DIVMOD_INTERNAL(x, y) PP2_ARBITRARY_DIVMOD_INTERNAL_I(PP2_SEQ_REVERSE(x), y)
#define PP2_ARBITRARY_DIVMOD_INTERNAL_I(rx, y) \
    PP2_ARBITRARY_DIVW_GO(PP2_ARBITRARY_DIVW_A rx(00) , (0), y PP2_ARBITRARY_SPECIAL_CLOSE(rx))

#define PP2_ARBITRARY_DIVW_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DIVW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DIVW_B)
#define PP2_ARBITRARY_DIVW_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DIVW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DIVW_A)
#define PP2_ARBITRARY_DIVW_I(...) PP2_ARBITRARY_DIVW_II(__VA_ARGS__)
#define PP2_ARBITRARY_DIVW_II(digit, q, r, y) \
        PP2_ARBITRARY_DIVW_III(q, y, PP2_ARBITRARY_QD_0(PP2_ARBITRARY_FIX_INTERNAL(r(digit)), y))
#define PP2_ARBITRARY_DIVW_III(q, y, qr) PP2_ARBITRARY_DIVW_IV(q, y, qr)
#define PP2_ARBITRARY_DIVW_IV(q, y, qd, r) q(qd), r, y

#define PP2_ARBITRARY_DIVMOD_Q(...) PP2_TUPLE_AT_0(,__VA_ARGS__)
#define PP2_ARBITRARY_DIVMOD_R(...) PP2_TUPLE_AT_1(,__VA_ARGS__)

#endif

/* Signed division, truncated toward zero (C semantics): the magnitude quotient
 * takes the XOR of the operand signs. Division by zero is undefined. */

#define PP2_ARBITRARY_DIV(x, y) PP2_ARBITRARY_DIV_I(PP2_ARBITRARY_FIX(x), PP2_ARBITRARY_FIX(y))

#define PP2_ARBITRARY_DIV_I(x, y) \
    PP2_ARBITRARY_DIV_CAT(PP2_ARBITRARY_SIGN(x)(,1,0), PP2_ARBITRARY_SIGN(y)(,1,0))( \
        PP2_ARBITRARY_SIGN(x)(,PP2_OPEN,) x, \
        PP2_ARBITRARY_SIGN(y)(,PP2_OPEN,) y \
    )
#define PP2_ARBITRARY_DIV_CAT(a, b) PP2_ARBITRARY_DIV_CAT_I(a, b)
#define PP2_ARBITRARY_DIV_CAT_I(a, b) PP2_ARBITRARY_DIV_S_##a##b

#define PP2_ARBITRARY_DIV_S_00(x, y) PP2_ARBITRARY_DIV_INTERNAL(x, y)
#define PP2_ARBITRARY_DIV_S_11(x, y) PP2_ARBITRARY_DIV_INTERNAL(x, y)
#define PP2_ARBITRARY_DIV_S_01(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_DIV_INTERNAL(x, y)))
#define PP2_ARBITRARY_DIV_S_10(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_DIV_INTERNAL(x, y)))

#define PP2_ARBITRARY_DIV_INTERNAL(x, y) \
    PP2_ARBITRARY_FIX_INTERNAL(PP2_ARBITRARY_DIVMOD_Q(PP2_ARBITRARY_DIVMOD_INTERNAL(x, y)))

#endif

// ******************** From: mod.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_MOD_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_MOD_H


/* Signed remainder, C semantics: the result takes the dividend's sign and
 * satisfies x == y*(x/y) + x%y with truncated division. Division by zero is
 * undefined. */

#define PP2_ARBITRARY_MOD(x, y) PP2_ARBITRARY_MOD_I(PP2_ARBITRARY_FIX(x), PP2_ARBITRARY_FIX(y))

#define PP2_ARBITRARY_MOD_I(x, y) \
    PP2_ARBITRARY_MOD_CAT(PP2_ARBITRARY_SIGN(x)(,1,0), PP2_ARBITRARY_SIGN(y)(,1,0))( \
        PP2_ARBITRARY_SIGN(x)(,PP2_OPEN,) x, \
        PP2_ARBITRARY_SIGN(y)(,PP2_OPEN,) y \
    )
#define PP2_ARBITRARY_MOD_CAT(a, b) PP2_ARBITRARY_MOD_CAT_I(a, b)
#define PP2_ARBITRARY_MOD_CAT_I(a, b) PP2_ARBITRARY_MOD_S_##a##b

#define PP2_ARBITRARY_MOD_S_00(x, y) PP2_ARBITRARY_MOD_INTERNAL(x, y)
#define PP2_ARBITRARY_MOD_S_01(x, y) PP2_ARBITRARY_MOD_INTERNAL(x, y)
#define PP2_ARBITRARY_MOD_S_10(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_MOD_INTERNAL(x, y)))
#define PP2_ARBITRARY_MOD_S_11(x, y) PP2_ARBITRARY_FIX((PP2_ARBITRARY_MOD_INTERNAL(x, y)))

#define PP2_ARBITRARY_MOD_INTERNAL(x, y) \
    PP2_ARBITRARY_DIVMOD_R(PP2_ARBITRARY_DIVMOD_INTERNAL(x, y))

#endif

// ******************** From: promote.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_PROMOTE_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_PROMOTE_H


/* Promote a native literal token 0..127 to its canonical digit-seq, e.g.
* 123 -> (1)(2)(3). Generated table; bounded by the literal layer it bridges
* from (a native token cannot be split without a table), not by arithmetic. */

#define PP2_ARBITRARY_PROMOTE(n) PP2_ARBITRARY_PROMOTE_I(n)
#define PP2_ARBITRARY_PROMOTE_I(n) PP2_ARBITRARY_PROMOTE_##n
#define PP2_ARBITRARY_PROMOTE_0 (0)
#define PP2_ARBITRARY_PROMOTE_1 (1)
#define PP2_ARBITRARY_PROMOTE_2 (2)
#define PP2_ARBITRARY_PROMOTE_3 (3)
#define PP2_ARBITRARY_PROMOTE_4 (4)
#define PP2_ARBITRARY_PROMOTE_5 (5)
#define PP2_ARBITRARY_PROMOTE_6 (6)
#define PP2_ARBITRARY_PROMOTE_7 (7)
#define PP2_ARBITRARY_PROMOTE_8 (8)
#define PP2_ARBITRARY_PROMOTE_9 (9)
#define PP2_ARBITRARY_PROMOTE_10 (1)(0)
#define PP2_ARBITRARY_PROMOTE_11 (1)(1)
#define PP2_ARBITRARY_PROMOTE_12 (1)(2)
#define PP2_ARBITRARY_PROMOTE_13 (1)(3)
#define PP2_ARBITRARY_PROMOTE_14 (1)(4)
#define PP2_ARBITRARY_PROMOTE_15 (1)(5)
#define PP2_ARBITRARY_PROMOTE_16 (1)(6)
#define PP2_ARBITRARY_PROMOTE_17 (1)(7)
#define PP2_ARBITRARY_PROMOTE_18 (1)(8)
#define PP2_ARBITRARY_PROMOTE_19 (1)(9)
#define PP2_ARBITRARY_PROMOTE_20 (2)(0)
#define PP2_ARBITRARY_PROMOTE_21 (2)(1)
#define PP2_ARBITRARY_PROMOTE_22 (2)(2)
#define PP2_ARBITRARY_PROMOTE_23 (2)(3)
#define PP2_ARBITRARY_PROMOTE_24 (2)(4)
#define PP2_ARBITRARY_PROMOTE_25 (2)(5)
#define PP2_ARBITRARY_PROMOTE_26 (2)(6)
#define PP2_ARBITRARY_PROMOTE_27 (2)(7)
#define PP2_ARBITRARY_PROMOTE_28 (2)(8)
#define PP2_ARBITRARY_PROMOTE_29 (2)(9)
#define PP2_ARBITRARY_PROMOTE_30 (3)(0)
#define PP2_ARBITRARY_PROMOTE_31 (3)(1)
#define PP2_ARBITRARY_PROMOTE_32 (3)(2)
#define PP2_ARBITRARY_PROMOTE_33 (3)(3)
#define PP2_ARBITRARY_PROMOTE_34 (3)(4)
#define PP2_ARBITRARY_PROMOTE_35 (3)(5)
#define PP2_ARBITRARY_PROMOTE_36 (3)(6)
#define PP2_ARBITRARY_PROMOTE_37 (3)(7)
#define PP2_ARBITRARY_PROMOTE_38 (3)(8)
#define PP2_ARBITRARY_PROMOTE_39 (3)(9)
#define PP2_ARBITRARY_PROMOTE_40 (4)(0)
#define PP2_ARBITRARY_PROMOTE_41 (4)(1)
#define PP2_ARBITRARY_PROMOTE_42 (4)(2)
#define PP2_ARBITRARY_PROMOTE_43 (4)(3)
#define PP2_ARBITRARY_PROMOTE_44 (4)(4)
#define PP2_ARBITRARY_PROMOTE_45 (4)(5)
#define PP2_ARBITRARY_PROMOTE_46 (4)(6)
#define PP2_ARBITRARY_PROMOTE_47 (4)(7)
#define PP2_ARBITRARY_PROMOTE_48 (4)(8)
#define PP2_ARBITRARY_PROMOTE_49 (4)(9)
#define PP2_ARBITRARY_PROMOTE_50 (5)(0)
#define PP2_ARBITRARY_PROMOTE_51 (5)(1)
#define PP2_ARBITRARY_PROMOTE_52 (5)(2)
#define PP2_ARBITRARY_PROMOTE_53 (5)(3)
#define PP2_ARBITRARY_PROMOTE_54 (5)(4)
#define PP2_ARBITRARY_PROMOTE_55 (5)(5)
#define PP2_ARBITRARY_PROMOTE_56 (5)(6)
#define PP2_ARBITRARY_PROMOTE_57 (5)(7)
#define PP2_ARBITRARY_PROMOTE_58 (5)(8)
#define PP2_ARBITRARY_PROMOTE_59 (5)(9)
#define PP2_ARBITRARY_PROMOTE_60 (6)(0)
#define PP2_ARBITRARY_PROMOTE_61 (6)(1)
#define PP2_ARBITRARY_PROMOTE_62 (6)(2)
#define PP2_ARBITRARY_PROMOTE_63 (6)(3)
#define PP2_ARBITRARY_PROMOTE_64 (6)(4)
#define PP2_ARBITRARY_PROMOTE_65 (6)(5)
#define PP2_ARBITRARY_PROMOTE_66 (6)(6)
#define PP2_ARBITRARY_PROMOTE_67 (6)(7)
#define PP2_ARBITRARY_PROMOTE_68 (6)(8)
#define PP2_ARBITRARY_PROMOTE_69 (6)(9)
#define PP2_ARBITRARY_PROMOTE_70 (7)(0)
#define PP2_ARBITRARY_PROMOTE_71 (7)(1)
#define PP2_ARBITRARY_PROMOTE_72 (7)(2)
#define PP2_ARBITRARY_PROMOTE_73 (7)(3)
#define PP2_ARBITRARY_PROMOTE_74 (7)(4)
#define PP2_ARBITRARY_PROMOTE_75 (7)(5)
#define PP2_ARBITRARY_PROMOTE_76 (7)(6)
#define PP2_ARBITRARY_PROMOTE_77 (7)(7)
#define PP2_ARBITRARY_PROMOTE_78 (7)(8)
#define PP2_ARBITRARY_PROMOTE_79 (7)(9)
#define PP2_ARBITRARY_PROMOTE_80 (8)(0)
#define PP2_ARBITRARY_PROMOTE_81 (8)(1)
#define PP2_ARBITRARY_PROMOTE_82 (8)(2)
#define PP2_ARBITRARY_PROMOTE_83 (8)(3)
#define PP2_ARBITRARY_PROMOTE_84 (8)(4)
#define PP2_ARBITRARY_PROMOTE_85 (8)(5)
#define PP2_ARBITRARY_PROMOTE_86 (8)(6)
#define PP2_ARBITRARY_PROMOTE_87 (8)(7)
#define PP2_ARBITRARY_PROMOTE_88 (8)(8)
#define PP2_ARBITRARY_PROMOTE_89 (8)(9)
#define PP2_ARBITRARY_PROMOTE_90 (9)(0)
#define PP2_ARBITRARY_PROMOTE_91 (9)(1)
#define PP2_ARBITRARY_PROMOTE_92 (9)(2)
#define PP2_ARBITRARY_PROMOTE_93 (9)(3)
#define PP2_ARBITRARY_PROMOTE_94 (9)(4)
#define PP2_ARBITRARY_PROMOTE_95 (9)(5)
#define PP2_ARBITRARY_PROMOTE_96 (9)(6)
#define PP2_ARBITRARY_PROMOTE_97 (9)(7)
#define PP2_ARBITRARY_PROMOTE_98 (9)(8)
#define PP2_ARBITRARY_PROMOTE_99 (9)(9)
#define PP2_ARBITRARY_PROMOTE_100 (1)(0)(0)
#define PP2_ARBITRARY_PROMOTE_101 (1)(0)(1)
#define PP2_ARBITRARY_PROMOTE_102 (1)(0)(2)
#define PP2_ARBITRARY_PROMOTE_103 (1)(0)(3)
#define PP2_ARBITRARY_PROMOTE_104 (1)(0)(4)
#define PP2_ARBITRARY_PROMOTE_105 (1)(0)(5)
#define PP2_ARBITRARY_PROMOTE_106 (1)(0)(6)
#define PP2_ARBITRARY_PROMOTE_107 (1)(0)(7)
#define PP2_ARBITRARY_PROMOTE_108 (1)(0)(8)
#define PP2_ARBITRARY_PROMOTE_109 (1)(0)(9)
#define PP2_ARBITRARY_PROMOTE_110 (1)(1)(0)
#define PP2_ARBITRARY_PROMOTE_111 (1)(1)(1)
#define PP2_ARBITRARY_PROMOTE_112 (1)(1)(2)
#define PP2_ARBITRARY_PROMOTE_113 (1)(1)(3)
#define PP2_ARBITRARY_PROMOTE_114 (1)(1)(4)
#define PP2_ARBITRARY_PROMOTE_115 (1)(1)(5)
#define PP2_ARBITRARY_PROMOTE_116 (1)(1)(6)
#define PP2_ARBITRARY_PROMOTE_117 (1)(1)(7)
#define PP2_ARBITRARY_PROMOTE_118 (1)(1)(8)
#define PP2_ARBITRARY_PROMOTE_119 (1)(1)(9)
#define PP2_ARBITRARY_PROMOTE_120 (1)(2)(0)
#define PP2_ARBITRARY_PROMOTE_121 (1)(2)(1)
#define PP2_ARBITRARY_PROMOTE_122 (1)(2)(2)
#define PP2_ARBITRARY_PROMOTE_123 (1)(2)(3)
#define PP2_ARBITRARY_PROMOTE_124 (1)(2)(4)
#define PP2_ARBITRARY_PROMOTE_125 (1)(2)(5)
#define PP2_ARBITRARY_PROMOTE_126 (1)(2)(6)
#define PP2_ARBITRARY_PROMOTE_127 (1)(2)(7)

#endif

// ******************** From: demote.h
/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DEMOTE_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DEMOTE_H


/* Demote a canonical number to a native token: (1)(2)(3) -> 123, ((1)(2)) -> - 12
 * (the sign is a separate token; -12 is not a valid paste). The digits drive the
 * same sliding-window nest as MUL, but in natural order: the least significant
 * digit lands innermost, so each level prepends its digit to the accumulated
 * token with one paste. No reverse, no residue. */

#define PP2_ARBITRARY_DEMOTE(x) PP2_ARBITRARY_SIGN(x)(PP2_ARBITRARY_DEMOTE_,SIGNED,UNSIGNED)(x)
#define PP2_ARBITRARY_DEMOTE_SIGNED(x) - PP2_ARBITRARY_DEMOTE_INTERNAL(PP2_OPEN x)
#define PP2_ARBITRARY_DEMOTE_UNSIGNED(x) PP2_ARBITRARY_DEMOTE_INTERNAL(x)

/* private PP2_SCAN clone, same reason as the MUL walk driver */
#define PP2_ARBITRARY_DEMW_GO(...) __VA_ARGS__

#define PP2_ARBITRARY_DEMOTE_INTERNAL(x) \
    PP2_ARBITRARY_DEMW_GO(PP2_ARBITRARY_DEMW_A x(00) PP2_ARBITRARY_SPECIAL_CLOSE(x))

#define PP2_ARBITRARY_DEMW_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DEMW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DEMW_B)
#define PP2_ARBITRARY_DEMW_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_ARBITRARY_DEMW_I PP2_DEFER(PP2_LPAREN_ID)() digit, PP2_ARBITRARY_DEMW_A)
#define PP2_ARBITRARY_DEMW_I(...) PP2_ARBITRARY_DEMW_II(__VA_ARGS__)
#define PP2_ARBITRARY_DEMW_II(digit, acc) PP2_PRIMITIVE_CAT(digit, acc)

#endif

#endif

/* Bare integer literals (PP2_DEF_0, PP2_DEF_1, ...) so `5` compiles to (,Int,5),
 * exactly as PP2_DEF_true compiles `true` to (,Bool,1). */

// ******************** From: int_literals.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_DETAIL_INT_LITERALS_H
#define PP2_LANGUAGE_TYPES_DETAIL_INT_LITERALS_H


/* Bare integer literals 0..127 compile to Int constants, exactly as
 * PP2_DEF_true = PP2_CONST(Bool,1). Generated; fixed precision. */
#define PP2_DEF_0 PP2_CONST(Int,0)
#define PP2_DEF_1 PP2_CONST(Int,1)
#define PP2_DEF_2 PP2_CONST(Int,2)
#define PP2_DEF_3 PP2_CONST(Int,3)
#define PP2_DEF_4 PP2_CONST(Int,4)
#define PP2_DEF_5 PP2_CONST(Int,5)
#define PP2_DEF_6 PP2_CONST(Int,6)
#define PP2_DEF_7 PP2_CONST(Int,7)
#define PP2_DEF_8 PP2_CONST(Int,8)
#define PP2_DEF_9 PP2_CONST(Int,9)
#define PP2_DEF_10 PP2_CONST(Int,10)
#define PP2_DEF_11 PP2_CONST(Int,11)
#define PP2_DEF_12 PP2_CONST(Int,12)
#define PP2_DEF_13 PP2_CONST(Int,13)
#define PP2_DEF_14 PP2_CONST(Int,14)
#define PP2_DEF_15 PP2_CONST(Int,15)
#define PP2_DEF_16 PP2_CONST(Int,16)
#define PP2_DEF_17 PP2_CONST(Int,17)
#define PP2_DEF_18 PP2_CONST(Int,18)
#define PP2_DEF_19 PP2_CONST(Int,19)
#define PP2_DEF_20 PP2_CONST(Int,20)
#define PP2_DEF_21 PP2_CONST(Int,21)
#define PP2_DEF_22 PP2_CONST(Int,22)
#define PP2_DEF_23 PP2_CONST(Int,23)
#define PP2_DEF_24 PP2_CONST(Int,24)
#define PP2_DEF_25 PP2_CONST(Int,25)
#define PP2_DEF_26 PP2_CONST(Int,26)
#define PP2_DEF_27 PP2_CONST(Int,27)
#define PP2_DEF_28 PP2_CONST(Int,28)
#define PP2_DEF_29 PP2_CONST(Int,29)
#define PP2_DEF_30 PP2_CONST(Int,30)
#define PP2_DEF_31 PP2_CONST(Int,31)
#define PP2_DEF_32 PP2_CONST(Int,32)
#define PP2_DEF_33 PP2_CONST(Int,33)
#define PP2_DEF_34 PP2_CONST(Int,34)
#define PP2_DEF_35 PP2_CONST(Int,35)
#define PP2_DEF_36 PP2_CONST(Int,36)
#define PP2_DEF_37 PP2_CONST(Int,37)
#define PP2_DEF_38 PP2_CONST(Int,38)
#define PP2_DEF_39 PP2_CONST(Int,39)
#define PP2_DEF_40 PP2_CONST(Int,40)
#define PP2_DEF_41 PP2_CONST(Int,41)
#define PP2_DEF_42 PP2_CONST(Int,42)
#define PP2_DEF_43 PP2_CONST(Int,43)
#define PP2_DEF_44 PP2_CONST(Int,44)
#define PP2_DEF_45 PP2_CONST(Int,45)
#define PP2_DEF_46 PP2_CONST(Int,46)
#define PP2_DEF_47 PP2_CONST(Int,47)
#define PP2_DEF_48 PP2_CONST(Int,48)
#define PP2_DEF_49 PP2_CONST(Int,49)
#define PP2_DEF_50 PP2_CONST(Int,50)
#define PP2_DEF_51 PP2_CONST(Int,51)
#define PP2_DEF_52 PP2_CONST(Int,52)
#define PP2_DEF_53 PP2_CONST(Int,53)
#define PP2_DEF_54 PP2_CONST(Int,54)
#define PP2_DEF_55 PP2_CONST(Int,55)
#define PP2_DEF_56 PP2_CONST(Int,56)
#define PP2_DEF_57 PP2_CONST(Int,57)
#define PP2_DEF_58 PP2_CONST(Int,58)
#define PP2_DEF_59 PP2_CONST(Int,59)
#define PP2_DEF_60 PP2_CONST(Int,60)
#define PP2_DEF_61 PP2_CONST(Int,61)
#define PP2_DEF_62 PP2_CONST(Int,62)
#define PP2_DEF_63 PP2_CONST(Int,63)
#define PP2_DEF_64 PP2_CONST(Int,64)
#define PP2_DEF_65 PP2_CONST(Int,65)
#define PP2_DEF_66 PP2_CONST(Int,66)
#define PP2_DEF_67 PP2_CONST(Int,67)
#define PP2_DEF_68 PP2_CONST(Int,68)
#define PP2_DEF_69 PP2_CONST(Int,69)
#define PP2_DEF_70 PP2_CONST(Int,70)
#define PP2_DEF_71 PP2_CONST(Int,71)
#define PP2_DEF_72 PP2_CONST(Int,72)
#define PP2_DEF_73 PP2_CONST(Int,73)
#define PP2_DEF_74 PP2_CONST(Int,74)
#define PP2_DEF_75 PP2_CONST(Int,75)
#define PP2_DEF_76 PP2_CONST(Int,76)
#define PP2_DEF_77 PP2_CONST(Int,77)
#define PP2_DEF_78 PP2_CONST(Int,78)
#define PP2_DEF_79 PP2_CONST(Int,79)
#define PP2_DEF_80 PP2_CONST(Int,80)
#define PP2_DEF_81 PP2_CONST(Int,81)
#define PP2_DEF_82 PP2_CONST(Int,82)
#define PP2_DEF_83 PP2_CONST(Int,83)
#define PP2_DEF_84 PP2_CONST(Int,84)
#define PP2_DEF_85 PP2_CONST(Int,85)
#define PP2_DEF_86 PP2_CONST(Int,86)
#define PP2_DEF_87 PP2_CONST(Int,87)
#define PP2_DEF_88 PP2_CONST(Int,88)
#define PP2_DEF_89 PP2_CONST(Int,89)
#define PP2_DEF_90 PP2_CONST(Int,90)
#define PP2_DEF_91 PP2_CONST(Int,91)
#define PP2_DEF_92 PP2_CONST(Int,92)
#define PP2_DEF_93 PP2_CONST(Int,93)
#define PP2_DEF_94 PP2_CONST(Int,94)
#define PP2_DEF_95 PP2_CONST(Int,95)
#define PP2_DEF_96 PP2_CONST(Int,96)
#define PP2_DEF_97 PP2_CONST(Int,97)
#define PP2_DEF_98 PP2_CONST(Int,98)
#define PP2_DEF_99 PP2_CONST(Int,99)
#define PP2_DEF_100 PP2_CONST(Int,100)
#define PP2_DEF_101 PP2_CONST(Int,101)
#define PP2_DEF_102 PP2_CONST(Int,102)
#define PP2_DEF_103 PP2_CONST(Int,103)
#define PP2_DEF_104 PP2_CONST(Int,104)
#define PP2_DEF_105 PP2_CONST(Int,105)
#define PP2_DEF_106 PP2_CONST(Int,106)
#define PP2_DEF_107 PP2_CONST(Int,107)
#define PP2_DEF_108 PP2_CONST(Int,108)
#define PP2_DEF_109 PP2_CONST(Int,109)
#define PP2_DEF_110 PP2_CONST(Int,110)
#define PP2_DEF_111 PP2_CONST(Int,111)
#define PP2_DEF_112 PP2_CONST(Int,112)
#define PP2_DEF_113 PP2_CONST(Int,113)
#define PP2_DEF_114 PP2_CONST(Int,114)
#define PP2_DEF_115 PP2_CONST(Int,115)
#define PP2_DEF_116 PP2_CONST(Int,116)
#define PP2_DEF_117 PP2_CONST(Int,117)
#define PP2_DEF_118 PP2_CONST(Int,118)
#define PP2_DEF_119 PP2_CONST(Int,119)
#define PP2_DEF_120 PP2_CONST(Int,120)
#define PP2_DEF_121 PP2_CONST(Int,121)
#define PP2_DEF_122 PP2_CONST(Int,122)
#define PP2_DEF_123 PP2_CONST(Int,123)
#define PP2_DEF_124 PP2_CONST(Int,124)
#define PP2_DEF_125 PP2_CONST(Int,125)
#define PP2_DEF_126 PP2_CONST(Int,126)
#define PP2_DEF_127 PP2_CONST(Int,127)

#endif

/* Int is the LITERAL integer: its value is a native token 0..127 and its
 * arithmetic is the table-driven literal layer, exactly as before. An operation
 * stays literal until it needs to be arbitrary: when a result would leave 0..127
 * (overflow, negative) it promotes to a Long object instead, and when the rhs
 * is already a Long the lhs promotes and the arbitrary op runs. Each binary
 * method dispatches on the rhs TYPE token (one paste, no value sniffing); the
 * in-range checks are one or two literal table lookups. */

#define PP2_DEF_Int PP2_TYPE(Int,Any)
#define PP2_SYM_Int(...) __VA_ARGS__

/* Int(x): the argument syntax is already compiled to an Int object by the
 * type-call machinery, so the constructor just returns it. */
#define PP2_DEF_Int_construct PP2_VM_FN(8PP2_LANGUAGE_INT_CONSTRUCT,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_CONSTRUCT(P,r0,r1,r2,self,arg0,...) (,/*r0=*/P##arg0,P##r1,P##r2,P##__VA_ARGS__)

/* str: an Int stringizes to its own value token (5 -> 5), like Bool_str. */
#define PP2_DEF_Int_str PP2_VM_FN(8PP2_LANGUAGE_INT_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_INT_STR(P,r0,r1,r2,obj,...) (,/*r0=*/PP2_LANGUAGE_OBJECT_VALUE P##obj,P##r1,P##r2,P##__VA_ARGS__)

/* plus: lhs plus (rhs). Int+Int stays literal while lhs+rhs <= 127 (checked as
 * rhs <= 127-lhs, two lookups), else both promote and the sum is a Long.
 * Int+Long promotes the lhs. */
#define PP2_DEF_Int_plus PP2_VM_FN(8PP2_LANGUAGE_INT_PLUS,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_PLUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_PLUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_PLUS(P,la,lt,lv,ra,rt,rv) IP2_INT_PLUS_T(rt)(lv,rv)
#define IP2_INT_PLUS_T(t) IP2_INT_PLUS_##t
#define IP2_INT_PLUS_Int(lv,rv) IP2_INT_PLUS_C(PP2_LITERAL_LEQ(rv,PP2_LITERAL_SUB(127,lv)))(lv,rv)
#define IP2_INT_PLUS_C(c) IP2_INT_PLUS_C_I(c)
#define IP2_INT_PLUS_C_I(c) IP2_INT_PLUS_C_##c
#define IP2_INT_PLUS_C_1(lv,rv) (,Int,PP2_LITERAL_ADD(lv,rv))
#define IP2_INT_PLUS_C_0(lv,rv) (,Long,PP2_ARBITRARY_ADD(PP2_ARBITRARY_PROMOTE(lv),PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_INT_PLUS_Long(lv,rv) (,Long,PP2_ARBITRARY_ADD(PP2_ARBITRARY_PROMOTE(lv),rv))

/* minus: literal while lhs >= rhs, else the true (negative) Long result. */
#define PP2_DEF_Int_minus PP2_VM_FN(8PP2_LANGUAGE_INT_MINUS,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_MINUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_MINUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_MINUS(P,la,lt,lv,ra,rt,rv) IP2_INT_MINUS_T(rt)(lv,rv)
#define IP2_INT_MINUS_T(t) IP2_INT_MINUS_##t
#define IP2_INT_MINUS_Int(lv,rv) IP2_INT_MINUS_C(PP2_LITERAL_GEQ(lv,rv))(lv,rv)
#define IP2_INT_MINUS_C(c) IP2_INT_MINUS_C_I(c)
#define IP2_INT_MINUS_C_I(c) IP2_INT_MINUS_C_##c
#define IP2_INT_MINUS_C_1(lv,rv) (,Int,PP2_LITERAL_SUB(lv,rv))
#define IP2_INT_MINUS_C_0(lv,rv) (,Long,PP2_ARBITRARY_SUB(PP2_ARBITRARY_PROMOTE(lv),PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_INT_MINUS_Long(lv,rv) (,Long,PP2_ARBITRARY_SUB(PP2_ARBITRARY_PROMOTE(lv),rv))

/* times/mul: literal while lhs*rhs <= 127 (checked as rhs <= 127/lhs, with a
 * zero guard so the division is defined), else Long. */
#define PP2_DEF_Int_times PP2_VM_FN(8PP2_LANGUAGE_INT_TIMES,2)
#define PP2_DEF_Int_mul   PP2_VM_FN(8PP2_LANGUAGE_INT_TIMES,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_TIMES(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_TIMES,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_TIMES(P,la,lt,lv,ra,rt,rv) IP2_INT_TIMES_T(rt)(lv,rv)
#define IP2_INT_TIMES_T(t) IP2_INT_TIMES_##t
#define IP2_INT_TIMES_Int(lv,rv) IP2_INT_TIMES_Z(PP2_LITERAL_EQ(lv,0))(lv,rv)
#define IP2_INT_TIMES_Z(c) IP2_INT_TIMES_Z_I(c)
#define IP2_INT_TIMES_Z_I(c) IP2_INT_TIMES_Z_##c
#define IP2_INT_TIMES_Z_1(lv,rv) (,Int,0)
#define IP2_INT_TIMES_Z_0(lv,rv) IP2_INT_TIMES_C(PP2_LITERAL_LEQ(rv,PP2_LITERAL_DIV(127,lv)))(lv,rv)
#define IP2_INT_TIMES_C(c) IP2_INT_TIMES_C_I(c)
#define IP2_INT_TIMES_C_I(c) IP2_INT_TIMES_C_##c
#define IP2_INT_TIMES_C_1(lv,rv) (,Int,PP2_LITERAL_MUL(lv,rv))
#define IP2_INT_TIMES_C_0(lv,rv) (,Long,PP2_ARBITRARY_MUL(PP2_ARBITRARY_PROMOTE(lv),PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_INT_TIMES_Long(lv,rv) (,Long,PP2_ARBITRARY_MUL(PP2_ARBITRARY_PROMOTE(lv),rv))

/* div: a quotient of non-negative literals never leaves 0..127, so Int/Int is
 * always literal. */
#define PP2_DEF_Int_div PP2_VM_FN(8PP2_LANGUAGE_INT_DIV,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_DIV(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_DIV,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_DIV(P,la,lt,lv,ra,rt,rv) IP2_INT_DIV_T(rt)(lv,rv)
#define IP2_INT_DIV_T(t) IP2_INT_DIV_##t
#define IP2_INT_DIV_Int(lv,rv) (,Int,PP2_LITERAL_DIV(lv,rv))
#define IP2_INT_DIV_Long(lv,rv) (,Long,PP2_ARBITRARY_DIV(PP2_ARBITRARY_PROMOTE(lv),rv))

/* mod: likewise always literal for Int/Int. */
#define PP2_DEF_Int_mod PP2_VM_FN(8PP2_LANGUAGE_INT_MOD,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_MOD(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_MOD,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_MOD(P,la,lt,lv,ra,rt,rv) IP2_INT_MOD_T(rt)(lv,rv)
#define IP2_INT_MOD_T(t) IP2_INT_MOD_##t
#define IP2_INT_MOD_Int(lv,rv) (,Int,PP2_LITERAL_MOD(lv,rv))
#define IP2_INT_MOD_Long(lv,rv) (,Long,PP2_ARBITRARY_MOD(PP2_ARBITRARY_PROMOTE(lv),rv))

/* inc(): literal below 127; 127 inc() promotes to Long 128. */
#define PP2_DEF_Int_inc PP2_VM_FN(8PP2_LANGUAGE_INT_INC,1)
#define PP2_INSN_8PP2_LANGUAGE_INT_INC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_INC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_INC(P,addr,type,value) IP2_INT_INC_C(PP2_LITERAL_EQ(value,127))(value)
#define IP2_INT_INC_C(c) IP2_INT_INC_C_I(c)
#define IP2_INT_INC_C_I(c) IP2_INT_INC_C_##c
#define IP2_INT_INC_C_0(v) (,Int,PP2_LITERAL_INC(,v))
#define IP2_INT_INC_C_1(v) (,Long,PP2_ARBITRARY_INC(PP2_ARBITRARY_PROMOTE(v)))

/* dec(): literal above 0; 0 dec() promotes to Long -1. */
#define PP2_DEF_Int_dec PP2_VM_FN(8PP2_LANGUAGE_INT_DEC,1)
#define PP2_INSN_8PP2_LANGUAGE_INT_DEC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_DEC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_DEC(P,addr,type,value) IP2_INT_DEC_C(PP2_LITERAL_EQ(value,0))(value)
#define IP2_INT_DEC_C(c) IP2_INT_DEC_C_I(c)
#define IP2_INT_DEC_C_I(c) IP2_INT_DEC_C_##c
#define IP2_INT_DEC_C_0(v) (,Int,PP2_LITERAL_DEC(,v))
#define IP2_INT_DEC_C_1(v) (,Long,PP2_ARBITRARY_DEC(PP2_ARBITRARY_PROMOTE(v)))

/* comparisons: lhs OP (rhs) -> (,Bool,0|1). Int vs Int is a literal table
 * relation; Int vs Long promotes the lhs and uses the arbitrary relation. */
#define PP2_DEF_Int_eq  PP2_VM_FN(8PP2_LANGUAGE_INT_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_EQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
/* eq alone among the relations is total: a number compared against a value of
 * some non-numeric type is false, not an error, so `List (1, true) contains (x)`
 * can ask every element. The ordering relations still reject a foreign rhs. */
#define IP2_LANGUAGE_INT_EQ(P,la,lt,lv,ra,rt,rv) IP2_INT_EQ_T(rt)(lv,rv)
#define IP2_INT_EQ_T(t) IP2_INT_EQ_T_I(IP2_INT_EQ_TAG_##t)
#define IP2_INT_EQ_T_I(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_INT_EQ_Foreign)
#define IP2_INT_EQ_TAG_Int  ,IP2_INT_EQ_Int
#define IP2_INT_EQ_TAG_Long ,IP2_INT_EQ_Long
#define IP2_INT_EQ_Int(lv,rv) (,Bool,PP2_LITERAL_EQ(lv,rv))
#define IP2_INT_EQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_EQUAL(PP2_ARBITRARY_PROMOTE(lv),rv))
#define IP2_INT_EQ_Foreign(lv,rv) (,Bool,0)

#define PP2_DEF_Int_lt  PP2_VM_FN(8PP2_LANGUAGE_INT_LT,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_LT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_LT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_LT(P,la,lt,lv,ra,rt,rv) IP2_INT_LT_T(rt)(lv,rv)
#define IP2_INT_LT_T(t) IP2_INT_LT_##t
#define IP2_INT_LT_Int(lv,rv) (,Bool,PP2_LITERAL_LT(lv,rv))
#define IP2_INT_LT_Long(lv,rv) (,Bool,PP2_ARBITRARY_LESS(PP2_ARBITRARY_PROMOTE(lv),rv))

#define PP2_DEF_Int_gt  PP2_VM_FN(8PP2_LANGUAGE_INT_GT,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_GT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_GT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_GT(P,la,lt,lv,ra,rt,rv) IP2_INT_GT_T(rt)(lv,rv)
#define IP2_INT_GT_T(t) IP2_INT_GT_##t
#define IP2_INT_GT_Int(lv,rv) (,Bool,PP2_LITERAL_GT(lv,rv))
#define IP2_INT_GT_Long(lv,rv) (,Bool,PP2_ARBITRARY_GREATER(PP2_ARBITRARY_PROMOTE(lv),rv))

#define PP2_DEF_Int_leq PP2_VM_FN(8PP2_LANGUAGE_INT_LEQ,2)
#define PP2_DEF_Int_lte PP2_VM_FN(8PP2_LANGUAGE_INT_LEQ,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_LEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_LEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_LEQ(P,la,lt,lv,ra,rt,rv) IP2_INT_LEQ_T(rt)(lv,rv)
#define IP2_INT_LEQ_T(t) IP2_INT_LEQ_##t
#define IP2_INT_LEQ_Int(lv,rv) (,Bool,PP2_LITERAL_LEQ(lv,rv))
#define IP2_INT_LEQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_LESS_EQUAL(PP2_ARBITRARY_PROMOTE(lv),rv))

#define PP2_DEF_Int_geq PP2_VM_FN(8PP2_LANGUAGE_INT_GEQ,2)
#define PP2_DEF_Int_gte PP2_VM_FN(8PP2_LANGUAGE_INT_GEQ,2)
#define PP2_INSN_8PP2_LANGUAGE_INT_GEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_GEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_GEQ(P,la,lt,lv,ra,rt,rv) IP2_INT_GEQ_T(rt)(lv,rv)
#define IP2_INT_GEQ_T(t) IP2_INT_GEQ_##t
#define IP2_INT_GEQ_Int(lv,rv) (,Bool,PP2_LITERAL_GEQ(lv,rv))
#define IP2_INT_GEQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_GREATER_EQUAL(PP2_ARBITRARY_PROMOTE(lv),rv))

#endif

// ******************** From: list.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_LIST_H
#define PP2_LANGUAGE_TYPES_LIST_H




#define PP2_DEF_List PP2_TYPE(List,Any)
#define PP2_SYM_List(...) __VA_ARGS__

/* A List's value is a plain tuple of compiled objects, (e0,...,en-1); the
 * empty list is (). Elements are always parenthesised object tuples, so
 * emptiness is decided by edibility of the first item. Every operation over
 * an arbitrary number of elements works in chunks of at most 8 and
 * reschedules itself as an instruction, so long lists ride the machine's
 * unbounded fuel rather than any fixed-depth macro recursion. */

#define IP2_LIST_PROBE(x0,...) x0

/* List(a0,...,an): variadic construction. The constructor's body is a single
 * instruction that reads the whole argument seq from the local context (self
 * first), eats self, and tuple-izes the rest in one prescan walk, so no
 * fixed-arity VM_FN splice is involved. */
#define PP2_DEF_List_construct PP2_CONST(Fn,(,8IP2_LANGUAGE_LIST_CONSTRUCT))
#define PP2_INSN_8IP2_LANGUAGE_LIST_CONSTRUCT(P,r0,r1,r2,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_CONSTRUCT_VALUE,(,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
/* The FX hop expands the argument seq before the walk name meets it: a
 * function-like macro passed over by the scanner while its parens are still
 * hidden behind an unexpanded name is never revisited. */
#define IP2_LIST_CONSTRUCT_VALUE(P,seq) IP2_LIST_TUPLEIZE(PP2_EAT P##seq)

#define IP2_LIST_TUPLEIZE(seq) (PP2_REVERSE_CAT(0,IP2_LIST_TUPLEIZE_A seq))
#define IP2_LIST_TUPLEIZE_A(x) x IP2_LIST_TUPLEIZE_B
#define IP2_LIST_TUPLEIZE_B(x) ,x IP2_LIST_TUPLEIZE_C
#define IP2_LIST_TUPLEIZE_C(x) ,x IP2_LIST_TUPLEIZE_B
#define IP2_LIST_TUPLEIZE_A0
#define IP2_LIST_TUPLEIZE_B0
#define IP2_LIST_TUPLEIZE_C0

/* str: (e0, e1, ..., en-1) -- a parenthesised, comma-separated rendering, so
 * the result stays one paren group (a bare comma in r0 would split the
 * machine state tuple) and the user can PP2_OPEN it wherever bare elements
 * are wanted (initialisers, argument lists, parameter lists). Each element
 * renders through its own str method; results accumulate on the argument
 * seq, SPILL/UNSPILL bracketing each call so it runs on a clean argument
 * list. The schedule starts by clearing the stale receiver argument. */
#define PP2_DEF_List_str PP2_VM_FN(8PP2_LANGUAGE_LIST_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_STR(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8IP2_LANGUAGE_LIST_STR_SCHEDULE,PP2_LANGUAGE_OBJECT_VALUE P##self, \
         P##__VA_ARGS__ \
        )

#define PP2_INSN_8IP2_LANGUAGE_LIST_STR_SCHEDULE(P,r0,r1,r2,elems,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_STR_EMIT(P##elems) \
         P##__VA_ARGS__ \
        )

/* PP2_IS_EDIBLE pastes its subject unexpanded, so the head probe must be
 * forced through one plain-substitution hop before the edibility test. */
#define IP2_LIST_STR_EMIT(elems) IP2_LIST_STR_EMIT_I(IP2_LIST_PROBE elems,elems)
#define IP2_LIST_STR_EMIT_I(head,elems) PP2_IS_EDIBLE(,head)(IP2_LIST_STR_EMIT_,SOME,NONE)(elems)
#define IP2_LIST_STR_EMIT_NONE(elems) 8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_SOME(elems) IP2_LIST_STR_EMIT_COUNT(PP2_OPEN elems)
#define IP2_LIST_STR_EMIT_COUNT(...) \
        IP2_LIST_STR_EMIT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(__VA_ARGS__)
#define IP2_LIST_STR_EMIT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_STR_EMIT_,m,9_OR_MORE)

#define IP2_LIST_STR_BUNDLE(e) 8PP2_ARGS_SPILL,8PP2_LOAD_CONST,e,8PP2_LANGUAGE_METHOD_CALL,str(),8PP2_ARGS_UNSPILL_PUSH

#define IP2_LIST_STR_EMIT_1(e0) IP2_LIST_STR_BUNDLE(e0),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_2(e0,e1) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_3(e0,e1,e2) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_4(e0,e1,e2,e3) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_5(e0,e1,e2,e3,e4) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),IP2_LIST_STR_BUNDLE(e4),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_6(e0,e1,e2,e3,e4,e5) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),IP2_LIST_STR_BUNDLE(e4),IP2_LIST_STR_BUNDLE(e5),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_7(e0,e1,e2,e3,e4,e5,e6) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),IP2_LIST_STR_BUNDLE(e4),IP2_LIST_STR_BUNDLE(e5),IP2_LIST_STR_BUNDLE(e6),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_8(e0,e1,e2,e3,e4,e5,e6,e7) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),IP2_LIST_STR_BUNDLE(e4),IP2_LIST_STR_BUNDLE(e5),IP2_LIST_STR_BUNDLE(e6),IP2_LIST_STR_BUNDLE(e7),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_9_OR_MORE(e0,e1,e2,e3,e4,e5,e6,e7,...) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),IP2_LIST_STR_BUNDLE(e4),IP2_LIST_STR_BUNDLE(e5),IP2_LIST_STR_BUNDLE(e6),IP2_LIST_STR_BUNDLE(e7),8IP2_LANGUAGE_LIST_STR_SCHEDULE,(__VA_ARGS__),

#define PP2_INSN_8IP2_LANGUAGE_LIST_STR_FINISH(P,r0,r1,r2,...) \
        (, \
         /*r0=*/IP2_FX(LIST_STR_FINISH_JOIN,(,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1)), \
         PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_STR_FINISH_JOIN(P,seq) IP2_LIST_TUPLEIZE(P##seq)

/* size: chunked count through the machine's own arithmetic. Each step folds
 * up to 8 elements into the accumulator held in r0 with one `plus` method
 * call, so the count rides the Int literal tables until 127 and promotes to
 * Long automatically past the wall. */
#define PP2_DEF_List_size PP2_VM_FN(8PP2_LANGUAGE_LIST_SIZE,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_SIZE(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Int,0),P##r1,P##r2, \
         8IP2_LANGUAGE_LIST_SIZE_STEP,PP2_LANGUAGE_OBJECT_VALUE P##self, \
         P##__VA_ARGS__ \
        )

#define PP2_INSN_8IP2_LANGUAGE_LIST_SIZE_STEP(P,r0,r1,r2,elems,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_SIZE_EMIT(P##elems) \
         P##__VA_ARGS__ \
        )

#define IP2_LIST_SIZE_EMIT(elems) IP2_LIST_SIZE_EMIT_I(IP2_LIST_PROBE elems,elems)
#define IP2_LIST_SIZE_EMIT_I(head,elems) PP2_IS_EDIBLE(,head)(IP2_LIST_SIZE_EMIT_,SOME,NONE)(elems)
#define IP2_LIST_SIZE_EMIT_NONE(elems)
#define IP2_LIST_SIZE_EMIT_SOME(elems) IP2_LIST_SIZE_EMIT_COUNT(PP2_OPEN elems)
#define IP2_LIST_SIZE_EMIT_COUNT(...) \
        IP2_LIST_SIZE_EMIT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(__VA_ARGS__)
#define IP2_LIST_SIZE_EMIT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_SIZE_EMIT_,m,9_OR_MORE)

#define IP2_LIST_SIZE_EMIT_1(e0) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (1),
#define IP2_LIST_SIZE_EMIT_2(e0,e1) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (2),
#define IP2_LIST_SIZE_EMIT_3(e0,e1,e2) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (3),
#define IP2_LIST_SIZE_EMIT_4(e0,e1,e2,e3) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (4),
#define IP2_LIST_SIZE_EMIT_5(e0,e1,e2,e3,e4) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (5),
#define IP2_LIST_SIZE_EMIT_6(e0,e1,e2,e3,e4,e5) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (6),
#define IP2_LIST_SIZE_EMIT_7(e0,e1,e2,e3,e4,e5,e6) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (7),
#define IP2_LIST_SIZE_EMIT_8(e0,e1,e2,e3,e4,e5,e6,e7) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (8),
#define IP2_LIST_SIZE_EMIT_9_OR_MORE(e0,e1,e2,e3,e4,e5,e6,e7,...) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (8),8IP2_LANGUAGE_LIST_SIZE_STEP,(__VA_ARGS__),

/* at(i): drop-table pick. The index must be a literal Int (the table covers
 * 0..127); an out-of-range index is garbage-in-garbage-out, like division by
 * zero in the arbitrary layer. */
#define PP2_DEF_List_at PP2_VM_FN(8PP2_LANGUAGE_LIST_AT,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_AT(P,r0,r1,r2,self,idx,...) \
        (, \
         /*r0=*/IP2_FX(LIST_AT_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self,PP2_LANGUAGE_OBJECT_VALUE P##idx)), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
/* A written call site fixes its argument count before prescan, so PP2_OPEN
 * must pass through a variadic hop for its commas to be live where the drop
 * table is invoked. */
#define IP2_LIST_AT_I(P,elems,i) IP2_LIST_AT_II(PP2_CAT(PP2_TUPLE_DROP_,i),PP2_OPEN P##elems)
#define IP2_LIST_AT_II(drop,...) IP2_LIST_AT_III(drop(,__VA_ARGS__))
#define IP2_LIST_AT_III(...) IP2_LIST_PROBE(__VA_ARGS__)

#define PP2_DEF_List_head PP2_VM_FN(8PP2_LANGUAGE_LIST_HEAD,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_HEAD(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/IP2_FX(LIST_HEAD_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self)), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_HEAD_I(P,elems) IP2_LIST_PROBE P##elems

#define PP2_DEF_List_tail PP2_VM_FN(8PP2_LANGUAGE_LIST_TAIL,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_TAIL(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_TAIL_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_TAIL_I(P,elems) IP2_LIST_TAIL_II(PP2_OPEN P##elems)
#define IP2_LIST_TAIL_II(...) (PP2_TUPLE_DROP_1(,__VA_ARGS__))

/* push/push_front: one variadic paste builds the new element tuple; the only
 * case split is whether the old list was empty (no separating comma). */
#define PP2_DEF_List_push PP2_VM_FN(8PP2_LANGUAGE_LIST_PUSH,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_PUSH(P,r0,r1,r2,self,x,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_PUSH_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self,P##x))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_PUSH_I(P,elems,x) IP2_LIST_PUSH_II(IP2_LIST_PROBE P##elems,P##elems,P##x)
#define IP2_LIST_PUSH_II(head,elems,x) PP2_IS_EDIBLE(,head)(IP2_LIST_PUSH_,SOME,NONE)(elems,x)
#define IP2_LIST_PUSH_SOME(elems,x) (PP2_OPEN elems,x)
#define IP2_LIST_PUSH_NONE(elems,x) (x)

#define PP2_DEF_List_push_front PP2_VM_FN(8PP2_LANGUAGE_LIST_PUSH_FRONT,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_PUSH_FRONT(P,r0,r1,r2,self,x,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_PUSH_FRONT_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self,P##x))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_PUSH_FRONT_I(P,elems,x) IP2_LIST_PUSH_FRONT_II(IP2_LIST_PROBE P##elems,P##elems,P##x)
#define IP2_LIST_PUSH_FRONT_II(head,elems,x) PP2_IS_EDIBLE(,head)(IP2_LIST_PUSH_FRONT_,SOME,NONE)(elems,x)
#define IP2_LIST_PUSH_FRONT_SOME(elems,x) (x,PP2_OPEN elems)
#define IP2_LIST_PUSH_FRONT_NONE(elems,x) (x)

/* append: four-way paste dispatch on the emptiness of each side. */
#define PP2_DEF_List_append PP2_VM_FN(8PP2_LANGUAGE_LIST_APPEND,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_APPEND(P,r0,r1,r2,self,rhs,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_APPEND_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self,PP2_LANGUAGE_OBJECT_VALUE P##rhs))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_APPEND_I(P,a,b) IP2_LIST_APPEND_II(IP2_LIST_PROBE P##a,IP2_LIST_PROBE P##b,P##a,P##b)
#define IP2_LIST_APPEND_II(ha,hb,a,b) IP2_LIST_APPEND_CAT(PP2_IS_EDIBLE(,ha)(,S,N),PP2_IS_EDIBLE(,hb)(,S,N))(a,b)
#define IP2_LIST_APPEND_CAT(x,y) IP2_LIST_APPEND_CAT_I(x,y)
#define IP2_LIST_APPEND_CAT_I(x,y) IP2_LIST_APPEND_##x##y
#define IP2_LIST_APPEND_SS(a,b) (PP2_OPEN a,PP2_OPEN b)
#define IP2_LIST_APPEND_SN(a,b) a
#define IP2_LIST_APPEND_NS(a,b) b
#define IP2_LIST_APPEND_NN(a,b) ()

#define PP2_DEF_List_empty PP2_VM_FN(8PP2_LANGUAGE_LIST_EMPTY,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_EMPTY(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Bool,IP2_FX(LIST_EMPTY_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_EMPTY_I(P,elems) IP2_LIST_EMPTY_II(IP2_LIST_PROBE P##elems)
#define IP2_LIST_EMPTY_II(head) PP2_IS_EDIBLE(,head)(IP2_LIST_EMPTY_,SOME,NONE)
#define IP2_LIST_EMPTY_SOME 0
#define IP2_LIST_EMPTY_NONE 1

/* reverse: chunked machine loop. Each step reverses up to 8 elements with a
 * fixed paste and prepends them onto the accumulator threaded as an insn
 * operand. */
#define PP2_DEF_List_reverse PP2_VM_FN(8PP2_LANGUAGE_LIST_REVERSE,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_REVERSE(P,r0,r1,r2,self,...) \
        (, \
         P##r0,P##r1,P##r2, \
         8IP2_LANGUAGE_LIST_REV_STEP,PP2_LANGUAGE_OBJECT_VALUE P##self,(), \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_REV_STEP(P,r0,r1,r2,rest,acc,...) \
        (, \
         /*r0=*/IP2_LIST_REV_R0(P##rest,P##acc), \
         P##r1,P##r2, \
         IP2_LIST_REV_NEXT(P##rest,P##acc) \
         P##__VA_ARGS__ \
        )

/* r0 line: the finished List when at most 8 elements remain, empty otherwise. */
#define IP2_LIST_REV_R0(rest,acc) IP2_LIST_REV_R0_I(IP2_LIST_PROBE rest,rest,acc)
#define IP2_LIST_REV_R0_I(head,rest,acc) PP2_IS_EDIBLE(,head)(IP2_LIST_REV_R0_,SOME,NONE)(rest,acc)
#define IP2_LIST_REV_R0_NONE(rest,acc) (,List,acc)
#define IP2_LIST_REV_R0_SOME(rest,acc) IP2_LIST_REV_R0_COUNT(acc,PP2_OPEN rest)
#define IP2_LIST_REV_R0_COUNT(acc,...) \
        IP2_LIST_REV_R0_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(acc,__VA_ARGS__)
#define IP2_LIST_REV_R0_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_REV_R0_,m,9_OR_MORE)

#define IP2_LIST_REV_JOIN(acc,...) IP2_LIST_REV_JOIN_I(IP2_LIST_PROBE acc,acc,__VA_ARGS__)
#define IP2_LIST_REV_JOIN_I(head,acc,...) PP2_IS_EDIBLE(,head)(IP2_LIST_REV_JOIN_,SOME,NONE)(acc,__VA_ARGS__)
#define IP2_LIST_REV_JOIN_SOME(acc,...) (__VA_ARGS__,PP2_OPEN acc)
#define IP2_LIST_REV_JOIN_NONE(acc,...) (__VA_ARGS__)

#define IP2_LIST_REV_R0_1(acc,e0) (,List,IP2_LIST_REV_JOIN(acc,e0))
#define IP2_LIST_REV_R0_2(acc,e0,e1) (,List,IP2_LIST_REV_JOIN(acc,e1,e0))
#define IP2_LIST_REV_R0_3(acc,e0,e1,e2) (,List,IP2_LIST_REV_JOIN(acc,e2,e1,e0))
#define IP2_LIST_REV_R0_4(acc,e0,e1,e2,e3) (,List,IP2_LIST_REV_JOIN(acc,e3,e2,e1,e0))
#define IP2_LIST_REV_R0_5(acc,e0,e1,e2,e3,e4) (,List,IP2_LIST_REV_JOIN(acc,e4,e3,e2,e1,e0))
#define IP2_LIST_REV_R0_6(acc,e0,e1,e2,e3,e4,e5) (,List,IP2_LIST_REV_JOIN(acc,e5,e4,e3,e2,e1,e0))
#define IP2_LIST_REV_R0_7(acc,e0,e1,e2,e3,e4,e5,e6) (,List,IP2_LIST_REV_JOIN(acc,e6,e5,e4,e3,e2,e1,e0))
#define IP2_LIST_REV_R0_8(acc,e0,e1,e2,e3,e4,e5,e6,e7) (,List,IP2_LIST_REV_JOIN(acc,e7,e6,e5,e4,e3,e2,e1,e0))
#define IP2_LIST_REV_R0_9_OR_MORE(acc,e0,e1,e2,e3,e4,e5,e6,e7,...)

/* continuation line: reschedule with the first 8 folded in when more remain. */
#define IP2_LIST_REV_NEXT(rest,acc) IP2_LIST_REV_NEXT_I(IP2_LIST_PROBE rest,rest,acc)
#define IP2_LIST_REV_NEXT_I(head,rest,acc) PP2_IS_EDIBLE(,head)(IP2_LIST_REV_NEXT_,SOME,NONE)(rest,acc)
#define IP2_LIST_REV_NEXT_NONE(rest,acc)
#define IP2_LIST_REV_NEXT_SOME(rest,acc) IP2_LIST_REV_NEXT_COUNT(acc,PP2_OPEN rest)
#define IP2_LIST_REV_NEXT_COUNT(acc,...) \
        IP2_LIST_REV_NEXT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(acc,__VA_ARGS__)
#define IP2_LIST_REV_NEXT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_REV_NEXT_,m,9_OR_MORE)
#define IP2_LIST_REV_NEXT_1(acc,e0)
#define IP2_LIST_REV_NEXT_2(acc,e0,e1)
#define IP2_LIST_REV_NEXT_3(acc,e0,e1,e2)
#define IP2_LIST_REV_NEXT_4(acc,e0,e1,e2,e3)
#define IP2_LIST_REV_NEXT_5(acc,e0,e1,e2,e3,e4)
#define IP2_LIST_REV_NEXT_6(acc,e0,e1,e2,e3,e4,e5)
#define IP2_LIST_REV_NEXT_7(acc,e0,e1,e2,e3,e4,e5,e6)
#define IP2_LIST_REV_NEXT_8(acc,e0,e1,e2,e3,e4,e5,e6,e7)
#define IP2_LIST_REV_NEXT_9_OR_MORE(acc,e0,e1,e2,e3,e4,e5,e6,e7,...) 8IP2_LANGUAGE_LIST_REV_STEP,(__VA_ARGS__),IP2_LIST_REV_JOIN(acc,e7,e6,e5,e4,e3,e2,e1,e0),

/* eq(other): other is a List of the same length whose elements are pairwise eq.
 * One pair per machine round, walking both element tuples together and exiting
 * on the first mismatch. Each round delegates to the left element's own eq, so
 * a list of lists compares by recursing into this same handler. */
#define PP2_DEF_List_eq PP2_VM_FN(8PP2_LANGUAGE_LIST_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_EQ(P,r0,r1,r2,self,other,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(LANGUAGE_LIST_EQ_ENTER,(,P##self,P##other,PP2_LANGUAGE_OBJECT_TYPE P##other)) \
         P##__VA_ARGS__ \
        )
#define IP2_LANGUAGE_LIST_EQ_ENTER(P,self,other,other_type) \
        PP2_CAT(IP2_LIST_EQ_ENTER_,PP2_SYMBOL_EQ(List,other_type))(self,other)
#define IP2_LIST_EQ_ENTER_0(self,other) 8PP2_LOAD_CONST,(,Bool,0),
#define IP2_LIST_EQ_ENTER_1(self,other) \
        8IP2_LANGUAGE_LIST_EQ_STEP,PP2_LANGUAGE_OBJECT_VALUE self,PP2_LANGUAGE_OBJECT_VALUE other,

#define PP2_INSN_8IP2_LANGUAGE_LIST_EQ_STEP(P,r0,r1,r2,lrest,rrest,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_EQ_EMIT(P##lrest,P##rrest) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_EQ_EMIT(l,r) IP2_LIST_EQ_EMIT_I(IP2_LIST_PROBE l,IP2_LIST_PROBE r,l,r)
#define IP2_LIST_EQ_EMIT_I(lh,rh,l,r) PP2_IS_EDIBLE(,lh)(IP2_LIST_EQ_LEFT_,SOME,NONE)(lh,rh,l,r)
#define IP2_LIST_EQ_LEFT_SOME(lh,rh,l,r) PP2_IS_EDIBLE(,rh)(IP2_LIST_EQ_PAIR_,SOME,NONE)(lh,rh,l,r)
#define IP2_LIST_EQ_LEFT_NONE(lh,rh,l,r) PP2_IS_EDIBLE(,rh)(IP2_LIST_EQ_DRAINED_,SOME,NONE)(lh,rh,l,r)
/* left drained: equal only if the right drained too */
#define IP2_LIST_EQ_DRAINED_NONE(lh,rh,l,r) 8PP2_LOAD_CONST,(,Bool,1),
#define IP2_LIST_EQ_DRAINED_SOME(lh,rh,l,r) 8PP2_LOAD_CONST,(,Bool,0),
/* left has an element, right ran out: the right list is shorter */
#define IP2_LIST_EQ_PAIR_NONE(lh,rh,l,r) 8PP2_LOAD_CONST,(,Bool,0),
#define IP2_LIST_EQ_PAIR_SOME(lh,rh,l,r) \
        8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
        8PP2_LOAD_CONST,lh, \
        8PP2_LANGUAGE_METHOD_CALL,eq, \
        8PP2_LOCAL_CTX_PUSH_ARGUMENT,rh, \
        8PP2_LANGUAGE_FN_CALL_IMPL, \
        8IP2_LANGUAGE_LIST_EQ_NEXT,IP2_LIST_EQ_TAIL(PP2_OPEN l),IP2_LIST_EQ_TAIL(PP2_OPEN r),
#define IP2_LIST_EQ_TAIL(...) (PP2_TUPLE_DROP_1(,__VA_ARGS__))
#define PP2_INSN_8IP2_LANGUAGE_LIST_EQ_NEXT(P,r0,r1,r2,lrest,rrest,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(LIST_EQ_NEXT_I,(,PP2_LANGUAGE_OBJECT_VALUE P##r0))(P##lrest,P##rrest) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_EQ_NEXT_I(P,b) IP2_LIST_EQ_NEXT_II(b)
#define IP2_LIST_EQ_NEXT_II(b) IP2_LIST_EQ_NEXT_##b
/* a mismatched pair leaves the false in r0, which is the answer */
#define IP2_LIST_EQ_NEXT_0(lrest,rrest)
#define IP2_LIST_EQ_NEXT_1(lrest,rrest) 8IP2_LANGUAGE_LIST_EQ_STEP,lrest,rrest,


/* contains(x): one element per machine round with early exit on a hit. Each
 * round calls the element's own eq method with the pre-evaluated probe
 * object: METHOD_CALL with a bare method name binds the method Fn into r0
 * without invoking it, so the argument object can be pushed directly and the
 * call fired with FN_CALL_IMPL, keeping receiver-first argument order. */
#define PP2_DEF_List_contains PP2_VM_FN(8PP2_LANGUAGE_LIST_CONTAINS,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_CONTAINS(P,r0,r1,r2,self,x,...) \
        (, \
         P##r0,P##r1,P##r2, \
         8IP2_LANGUAGE_LIST_CONTAINS_STEP,PP2_LANGUAGE_OBJECT_VALUE P##self,P##x, \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_CONTAINS_STEP(P,r0,r1,r2,rest,x,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_CONTAINS_EMIT(P##rest,P##x) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_CONTAINS_EMIT(rest,x) IP2_LIST_CONTAINS_EMIT_I(IP2_LIST_PROBE rest,rest,x)
#define IP2_LIST_CONTAINS_EMIT_I(head,rest,x) PP2_IS_EDIBLE(,head)(IP2_LIST_CONTAINS_EMIT_,SOME,NONE)(head,rest,x)
#define IP2_LIST_CONTAINS_EMIT_NONE(head,rest,x) 8PP2_LOAD_CONST,(,Bool,0),
#define IP2_LIST_CONTAINS_EMIT_SOME(head,rest,x) \
        8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
        8PP2_LOAD_CONST,head, \
        8PP2_LANGUAGE_METHOD_CALL,eq, \
        8PP2_LOCAL_CTX_PUSH_ARGUMENT,x, \
        8PP2_LANGUAGE_FN_CALL_IMPL, \
        8IP2_LANGUAGE_LIST_CONTAINS_NEXT,IP2_LIST_CONTAINS_TAIL(PP2_OPEN rest),x,
#define IP2_LIST_CONTAINS_TAIL(...) (PP2_TUPLE_DROP_1(,__VA_ARGS__))
#define PP2_INSN_8IP2_LANGUAGE_LIST_CONTAINS_NEXT(P,r0,r1,r2,rest,x,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(LIST_CONTAINS_NEXT_I,(,PP2_LANGUAGE_OBJECT_VALUE P##r0))(P##rest,P##x) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_CONTAINS_NEXT_I(P,b) IP2_LIST_CONTAINS_NEXT_II(b)
#define IP2_LIST_CONTAINS_NEXT_II(b) IP2_LIST_CONTAINS_NEXT_##b
#define IP2_LIST_CONTAINS_NEXT_1(rest,x)
#define IP2_LIST_CONTAINS_NEXT_0(rest,x) 8IP2_LANGUAGE_LIST_CONTAINS_STEP,rest,x,

/* map(fn): call fn on each element (pre-evaluated object pushed as the
 * argument, the Fn object loaded into r0 and fired with FN_CALL_IMPL),
 * results accumulate on the argument seq under SPILL/UNSPILL brackets and
 * gather into a new List, chunked 8 per machine round. */
#define IP2_LIST_MAP_B(e,fn) 8PP2_ARGS_SPILL,8PP2_LOCAL_CTX_PUSH_ARGUMENT,e,8PP2_LOAD_CONST,fn,8PP2_LANGUAGE_FN_CALL_IMPL,8PP2_ARGS_UNSPILL_PUSH

#define PP2_DEF_List_map PP2_VM_FN(8PP2_LANGUAGE_LIST_MAP,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_MAP(P,r0,r1,r2,self,fn,...) \
        (, \
         /*r0=*/,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8IP2_LANGUAGE_LIST_MAP_SCHEDULE,PP2_LANGUAGE_OBJECT_VALUE P##self,P##fn, \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_MAP_SCHEDULE(P,r0,r1,r2,elems,fn,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_MAP_EMIT(P##elems,P##fn) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_MAP_EMIT(elems,fn) IP2_LIST_MAP_EMIT_I(IP2_LIST_PROBE elems,elems,fn)
#define IP2_LIST_MAP_EMIT_I(head,elems,fn) PP2_IS_EDIBLE(,head)(IP2_LIST_MAP_EMIT_,SOME,NONE)(elems,fn)
#define IP2_LIST_MAP_EMIT_NONE(elems,fn) 8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_SOME(elems,fn) IP2_LIST_MAP_EMIT_COUNT(fn,PP2_OPEN elems)
#define IP2_LIST_MAP_EMIT_COUNT(fn,...) \
        IP2_LIST_MAP_EMIT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(fn,__VA_ARGS__)
#define IP2_LIST_MAP_EMIT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_MAP_EMIT_,m,9_OR_MORE)
#define IP2_LIST_MAP_EMIT_1(fn,e0) IP2_LIST_MAP_B(e0,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_2(fn,e0,e1) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_3(fn,e0,e1,e2) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_4(fn,e0,e1,e2,e3) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_5(fn,e0,e1,e2,e3,e4) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),IP2_LIST_MAP_B(e4,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_6(fn,e0,e1,e2,e3,e4,e5) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),IP2_LIST_MAP_B(e4,fn),IP2_LIST_MAP_B(e5,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_7(fn,e0,e1,e2,e3,e4,e5,e6) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),IP2_LIST_MAP_B(e4,fn),IP2_LIST_MAP_B(e5,fn),IP2_LIST_MAP_B(e6,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_8(fn,e0,e1,e2,e3,e4,e5,e6,e7) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),IP2_LIST_MAP_B(e4,fn),IP2_LIST_MAP_B(e5,fn),IP2_LIST_MAP_B(e6,fn),IP2_LIST_MAP_B(e7,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_9_OR_MORE(fn,e0,e1,e2,e3,e4,e5,e6,e7,...) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),IP2_LIST_MAP_B(e4,fn),IP2_LIST_MAP_B(e5,fn),IP2_LIST_MAP_B(e6,fn),IP2_LIST_MAP_B(e7,fn),8IP2_LANGUAGE_LIST_MAP_SCHEDULE,(__VA_ARGS__),fn,

#define PP2_INSN_8IP2_LANGUAGE_LIST_MAP_FINISH(P,r0,r1,r2,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_MAP_GATHER,(,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1))), \
         PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_MAP_GATHER(P,seq) IP2_LIST_TUPLEIZE(P##seq)

/* fold(fn, init): fn(acc, elem) threads through r0; FN_CALL_PUSH_ARG pushes
 * the running accumulator, so no spill bracketing is needed. */
#define IP2_LIST_FOLD_B(e,fn) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_FN_CALL_PUSH_ARG,8PP2_LOCAL_CTX_PUSH_ARGUMENT,e,8PP2_LOAD_CONST,fn,8PP2_LANGUAGE_FN_CALL_IMPL

#define PP2_DEF_List_fold PP2_VM_FN(8PP2_LANGUAGE_LIST_FOLD,3)
#define PP2_INSN_8PP2_LANGUAGE_LIST_FOLD(P,r0,r1,r2,self,fn,init,...) \
        (, \
         /*r0=*/P##init,P##r1,P##r2, \
         8IP2_LANGUAGE_LIST_FOLD_SCHEDULE,PP2_LANGUAGE_OBJECT_VALUE P##self,P##fn, \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_FOLD_SCHEDULE(P,r0,r1,r2,elems,fn,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_FOLD_EMIT(P##elems,P##fn) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_FOLD_EMIT(elems,fn) IP2_LIST_FOLD_EMIT_I(IP2_LIST_PROBE elems,elems,fn)
#define IP2_LIST_FOLD_EMIT_I(head,elems,fn) PP2_IS_EDIBLE(,head)(IP2_LIST_FOLD_EMIT_,SOME,NONE)(elems,fn)
#define IP2_LIST_FOLD_EMIT_NONE(elems,fn)
#define IP2_LIST_FOLD_EMIT_SOME(elems,fn) IP2_LIST_FOLD_EMIT_COUNT(fn,PP2_OPEN elems)
#define IP2_LIST_FOLD_EMIT_COUNT(fn,...) \
        IP2_LIST_FOLD_EMIT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(fn,__VA_ARGS__)
#define IP2_LIST_FOLD_EMIT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_FOLD_EMIT_,m,9_OR_MORE)
#define IP2_LIST_FOLD_EMIT_1(fn,e0) IP2_LIST_FOLD_B(e0,fn),
#define IP2_LIST_FOLD_EMIT_2(fn,e0,e1) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),
#define IP2_LIST_FOLD_EMIT_3(fn,e0,e1,e2) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),
#define IP2_LIST_FOLD_EMIT_4(fn,e0,e1,e2,e3) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),
#define IP2_LIST_FOLD_EMIT_5(fn,e0,e1,e2,e3,e4) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),IP2_LIST_FOLD_B(e4,fn),
#define IP2_LIST_FOLD_EMIT_6(fn,e0,e1,e2,e3,e4,e5) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),IP2_LIST_FOLD_B(e4,fn),IP2_LIST_FOLD_B(e5,fn),
#define IP2_LIST_FOLD_EMIT_7(fn,e0,e1,e2,e3,e4,e5,e6) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),IP2_LIST_FOLD_B(e4,fn),IP2_LIST_FOLD_B(e5,fn),IP2_LIST_FOLD_B(e6,fn),
#define IP2_LIST_FOLD_EMIT_8(fn,e0,e1,e2,e3,e4,e5,e6,e7) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),IP2_LIST_FOLD_B(e4,fn),IP2_LIST_FOLD_B(e5,fn),IP2_LIST_FOLD_B(e6,fn),IP2_LIST_FOLD_B(e7,fn),
#define IP2_LIST_FOLD_EMIT_9_OR_MORE(fn,e0,e1,e2,e3,e4,e5,e6,e7,...) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),IP2_LIST_FOLD_B(e4,fn),IP2_LIST_FOLD_B(e5,fn),IP2_LIST_FOLD_B(e6,fn),IP2_LIST_FOLD_B(e7,fn),8IP2_LANGUAGE_LIST_FOLD_SCHEDULE,(__VA_ARGS__),fn,

/* filter(fn): map's bundle, but the spill frame is closed by a KEEP
 * instruction that pushes the original element only when fn said true. */
#define IP2_LIST_FILTER_B(e,fn) 8PP2_ARGS_SPILL,8PP2_LOCAL_CTX_PUSH_ARGUMENT,e,8PP2_LOAD_CONST,fn,8PP2_LANGUAGE_FN_CALL_IMPL,8IP2_LANGUAGE_LIST_FILTER_KEEP,e

#define PP2_DEF_List_filter PP2_VM_FN(8PP2_LANGUAGE_LIST_FILTER,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_FILTER(P,r0,r1,r2,self,fn,...) \
        (, \
         /*r0=*/,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8IP2_LANGUAGE_LIST_FILTER_SCHEDULE,PP2_LANGUAGE_OBJECT_VALUE P##self,P##fn, \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_FILTER_SCHEDULE(P,r0,r1,r2,elems,fn,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_FILTER_EMIT(P##elems,P##fn) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_FILTER_EMIT(elems,fn) IP2_LIST_FILTER_EMIT_I(IP2_LIST_PROBE elems,elems,fn)
#define IP2_LIST_FILTER_EMIT_I(head,elems,fn) PP2_IS_EDIBLE(,head)(IP2_LIST_FILTER_EMIT_,SOME,NONE)(elems,fn)
#define IP2_LIST_FILTER_EMIT_NONE(elems,fn) 8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_SOME(elems,fn) IP2_LIST_FILTER_EMIT_COUNT(fn,PP2_OPEN elems)
#define IP2_LIST_FILTER_EMIT_COUNT(fn,...) \
        IP2_LIST_FILTER_EMIT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(fn,__VA_ARGS__)
#define IP2_LIST_FILTER_EMIT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_FILTER_EMIT_,m,9_OR_MORE)
#define IP2_LIST_FILTER_EMIT_1(fn,e0) IP2_LIST_FILTER_B(e0,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_2(fn,e0,e1) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_3(fn,e0,e1,e2) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_4(fn,e0,e1,e2,e3) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_5(fn,e0,e1,e2,e3,e4) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),IP2_LIST_FILTER_B(e4,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_6(fn,e0,e1,e2,e3,e4,e5) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),IP2_LIST_FILTER_B(e4,fn),IP2_LIST_FILTER_B(e5,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_7(fn,e0,e1,e2,e3,e4,e5,e6) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),IP2_LIST_FILTER_B(e4,fn),IP2_LIST_FILTER_B(e5,fn),IP2_LIST_FILTER_B(e6,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_8(fn,e0,e1,e2,e3,e4,e5,e6,e7) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),IP2_LIST_FILTER_B(e4,fn),IP2_LIST_FILTER_B(e5,fn),IP2_LIST_FILTER_B(e6,fn),IP2_LIST_FILTER_B(e7,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_9_OR_MORE(fn,e0,e1,e2,e3,e4,e5,e6,e7,...) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),IP2_LIST_FILTER_B(e4,fn),IP2_LIST_FILTER_B(e5,fn),IP2_LIST_FILTER_B(e6,fn),IP2_LIST_FILTER_B(e7,fn),8IP2_LANGUAGE_LIST_FILTER_SCHEDULE,(__VA_ARGS__),fn,

#define PP2_INSN_8IP2_LANGUAGE_LIST_FILTER_KEEP(P,r0,r1,r2,e,...) \
        IP2_FX(LIST_FILTER_KEEP_I,(,PP2_LANGUAGE_OBJECT_VALUE P##r0))(,P##r1,P##r2,P##e,P##__VA_ARGS__)
#define IP2_LIST_FILTER_KEEP_I(P,b) IP2_LIST_FILTER_KEEP_II(b)
#define IP2_LIST_FILTER_KEEP_II(b) IP2_LIST_FILTER_KEEP_##b
#define IP2_LIST_FILTER_KEEP_1(P,r1,r2,e,...) (,,PP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT(P##r1,P##e),P##r2,P##__VA_ARGS__)
#define IP2_LIST_FILTER_KEEP_0(P,r1,r2,e,...) (,,IP2_LIST_FILTER_UNSPILL P##r1,P##r2,P##__VA_ARGS__)
/* restore the spilled argument frame without pushing anything. IP2_UNTAG, not
 * PP2_OPEN: entries on the spill stack carry a kind tag (see context.h), so opening
 * one raw would spill its `8A,` into the local context as an extra field. */
#define IP2_LIST_FILTER_UNSPILL(P,stack,labels,arguments,registers,_) IP2_FX(LIST_FILTER_UNSPILL_I,(,P##stack,P##labels,PP2_SEQ_SPLIT_HEAD P##registers))
#define IP2_LIST_FILTER_UNSPILL_I(P,stack,labels,frame,rest) (,P##stack,P##labels,/*arguments=*/IP2_UNTAG P##frame,/*registers=*/P##rest,)

/* each(fn): map's traversal for effect only; returns the receiver. */
#define PP2_DEF_List_each PP2_VM_FN(8PP2_LANGUAGE_LIST_EACH,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_EACH(P,r0,r1,r2,self,fn,...) \
        (, \
         /*r0=*/,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8IP2_LANGUAGE_LIST_MAP_SCHEDULE,PP2_LANGUAGE_OBJECT_VALUE P##self,P##fn, \
         8IP2_LANGUAGE_LIST_EACH_FINISH,P##self, \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_EACH_FINISH(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/P##self, \
         PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2, \
         P##__VA_ARGS__ \
        )

#endif

// ******************** From: long.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_LONG_H
#define PP2_LANGUAGE_TYPES_LONG_H




/* Long is the ARBITRARY-precision integer: its value is a canonical decimal
 * digit-seq, (1)(2)(8) == 128, ((1)) == -1, unbounded length, signed. All of
 * its arithmetic is the arbitrary layer. Long is contagious: any operation
 * with a Long operand yields a Long (an Int rhs is promoted). Ints promote
 * themselves INTO Long only when a result leaves 0..127 (see int.h).
 *
 * Construction: Long (5) promotes a literal Int; Long (((1)(2)(8))) builds
 * 128 from a quoted digit-seq (normalized by FIX; a quote's value keeps its
 * wrapping parens, so the constructor OPENs it -- and one EXTRA wrap therefore
 * denotes a negative: Long ((((1)(2)(8)))) == -128); Long of a Long is
 * identity. */

#define PP2_DEF_Long PP2_TYPE(Long,Any)
#define PP2_SYM_Long(...) __VA_ARGS__

#define PP2_DEF_Long_construct PP2_VM_FN(8PP2_LANGUAGE_LONG_CONSTRUCT,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_CONSTRUCT(P,r0,r1,r2,self,arg0,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_CONSTRUCT,(,PP2_OPEN P##arg0)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_CONSTRUCT(P,addr,type,value) IP2_LONG_CONSTRUCT_T(type)(value)
#define IP2_LONG_CONSTRUCT_T(t) IP2_LONG_CONSTRUCT_##t
#define IP2_LONG_CONSTRUCT_Int(v) (,Long,PP2_ARBITRARY_PROMOTE(v))
#define IP2_LONG_CONSTRUCT_Long(v) (,Long,v)
#define IP2_LONG_CONSTRUCT_Quote(v) (,Long,PP2_ARBITRARY_FIX(PP2_OPEN v))
#define IP2_LONG_CONSTRUCT_Seq(v) (,Long,PP2_ARBITRARY_FIX(v))

/* call: the tail of a Long literal. `(2)(5)(6)` compiles its leading `(2)` to a
 * Long (see IP2_LANGUAGE_COMPILE_LIT_LONG) and leaves `(5)(6)` sitting where a
 * call would be, so each remaining digit group arrives here as `call (5)...`.
 * A Long's value already IS the digit-seq, so appending a digit is juxtaposing
 * its group; FIX then does nothing but strip a leading zero. The syntax after
 * the digits compiles as the return of this instruction, exactly as it would
 * after any other expression, so `(2)(5)(6) plus (1)` needs no lookahead.
 *
 * One instruction per digit, and each is a fresh VM dispatch, so a literal is
 * bounded by the machine's fuel rather than by macro depth. Calling a Long on
 * anything but a digit is the definition exception: a Long is not callable. */
#define PP2_DEF_Long_call PP2_PRIMITIVE(8IP2_LANGUAGE_LONG_DIGIT,)

#define PP2_INSN_8IP2_LANGUAGE_LONG_DIGIT(P,r0,r1,r2,rhs_stx,...) \
        IP2_FX(LONG_DIGIT_SELECT,(,PP2_SEQ_SPLIT_HEAD P##rhs_stx)) \
            (,P##r0,PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2,P##rhs_stx,P##__VA_ARGS__)

/* the leading group of the call syntax decides: one digit appends, anything
 * else is not a digit and so not a literal */
#define IP2_LONG_DIGIT_SELECT(P,dtup,...) PP2_CAT(IP2_LONG_DIGIT_,IP2_LANGUAGE_LITERAL_KIND dtup)
#define IP2_LONG_DIGIT_LONG  IP2_LONG_DIGIT_APPEND
#define IP2_LONG_DIGIT_QUOTE IP2_LONG_DIGIT_REJECT

#define IP2_LONG_DIGIT_APPEND(P,r0,r1,r2,rhs_stx,...) \
        (, \
         /*r0=*/IP2_FX(LONG_DIGIT_VALUE,(,PP2_LANGUAGE_OBJECT_VALUE P##r0,PP2_SEQ_SPLIT_HEAD P##rhs_stx)), \
         P##r1,P##r2, \
         IP2_FX(LONG_DIGIT_REST,(,PP2_SEQ_SPLIT_HEAD P##rhs_stx)), \
         P##__VA_ARGS__ \
        )
#define IP2_LONG_DIGIT_VALUE(P,value,dtup,...) (,Long,PP2_ARBITRARY_FIX(P##value dtup))
#define IP2_LONG_DIGIT_REST(P,dtup,...) PP2_COMPILE_LANGUAGE_RETURN(__VA_ARGS__)

#define IP2_LONG_DIGIT_REJECT(P,r0,r1,r2,rhs_stx,...) \
        (,P##r0,P##r1,P##r2,8PP2_THROW_EXCEPTION,8PP2_LANGUAGE_DEFINITION_EXCEPTION,Long_call,P##__VA_ARGS__)

/* str: demote the digit-seq back to native tokens (a negative emits the sign
 * as its own token: ((1)(2)) -> - 12). */
#define PP2_DEF_Long_str PP2_VM_FN(8PP2_LANGUAGE_LONG_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_LONG_STR(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_STR,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_STR(P,addr,type,value) PP2_ARBITRARY_DEMOTE(value)

/* binary arithmetic: dispatch on the rhs type, promoting an Int rhs */
#define PP2_DEF_Long_plus PP2_VM_FN(8PP2_LANGUAGE_LONG_PLUS,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_PLUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_PLUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_PLUS(P,la,lt,lv,ra,rt,rv) IP2_LONG_PLUS_T(rt)(lv,rv)
#define IP2_LONG_PLUS_T(t) IP2_LONG_PLUS_##t
#define IP2_LONG_PLUS_Int(lv,rv) (,Long,PP2_ARBITRARY_ADD(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_PLUS_Long(lv,rv) (,Long,PP2_ARBITRARY_ADD(lv,rv))

#define PP2_DEF_Long_minus PP2_VM_FN(8PP2_LANGUAGE_LONG_MINUS,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_MINUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_MINUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_MINUS(P,la,lt,lv,ra,rt,rv) IP2_LONG_MINUS_T(rt)(lv,rv)
#define IP2_LONG_MINUS_T(t) IP2_LONG_MINUS_##t
#define IP2_LONG_MINUS_Int(lv,rv) (,Long,PP2_ARBITRARY_SUB(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_MINUS_Long(lv,rv) (,Long,PP2_ARBITRARY_SUB(lv,rv))

#define PP2_DEF_Long_times PP2_VM_FN(8PP2_LANGUAGE_LONG_TIMES,2)
#define PP2_DEF_Long_mul   PP2_VM_FN(8PP2_LANGUAGE_LONG_TIMES,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_TIMES(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_TIMES,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_TIMES(P,la,lt,lv,ra,rt,rv) IP2_LONG_TIMES_T(rt)(lv,rv)
#define IP2_LONG_TIMES_T(t) IP2_LONG_TIMES_##t
#define IP2_LONG_TIMES_Int(lv,rv) (,Long,PP2_ARBITRARY_MUL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_TIMES_Long(lv,rv) (,Long,PP2_ARBITRARY_MUL(lv,rv))

#define PP2_DEF_Long_div PP2_VM_FN(8PP2_LANGUAGE_LONG_DIV,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_DIV(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_DIV,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_DIV(P,la,lt,lv,ra,rt,rv) IP2_LONG_DIV_T(rt)(lv,rv)
#define IP2_LONG_DIV_T(t) IP2_LONG_DIV_##t
#define IP2_LONG_DIV_Int(lv,rv) (,Long,PP2_ARBITRARY_DIV(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_DIV_Long(lv,rv) (,Long,PP2_ARBITRARY_DIV(lv,rv))

#define PP2_DEF_Long_mod PP2_VM_FN(8PP2_LANGUAGE_LONG_MOD,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_MOD(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_MOD,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_MOD(P,la,lt,lv,ra,rt,rv) IP2_LONG_MOD_T(rt)(lv,rv)
#define IP2_LONG_MOD_T(t) IP2_LONG_MOD_##t
#define IP2_LONG_MOD_Int(lv,rv) (,Long,PP2_ARBITRARY_MOD(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_MOD_Long(lv,rv) (,Long,PP2_ARBITRARY_MOD(lv,rv))

#define PP2_DEF_Long_inc PP2_VM_FN(8PP2_LANGUAGE_LONG_INC,1)
#define PP2_INSN_8PP2_LANGUAGE_LONG_INC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_INC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_INC(P,addr,type,value) (,Long,PP2_ARBITRARY_INC(value))

#define PP2_DEF_Long_dec PP2_VM_FN(8PP2_LANGUAGE_LONG_DEC,1)
#define PP2_INSN_8PP2_LANGUAGE_LONG_DEC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_DEC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_DEC(P,addr,type,value) (,Long,PP2_ARBITRARY_DEC(value))

/* comparisons -> (,Bool,0|1), rhs-dispatched like the arithmetic */
#define PP2_DEF_Long_eq  PP2_VM_FN(8PP2_LANGUAGE_LONG_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_EQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
/* as with Int_eq, a foreign rhs compares false rather than failing to resolve */
#define IP2_LANGUAGE_LONG_EQ(P,la,lt,lv,ra,rt,rv) IP2_LONG_EQ_T(rt)(lv,rv)
#define IP2_LONG_EQ_T(t) IP2_LONG_EQ_T_I(IP2_LONG_EQ_TAG_##t)
#define IP2_LONG_EQ_T_I(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_LONG_EQ_Foreign)
#define IP2_LONG_EQ_TAG_Int  ,IP2_LONG_EQ_Int
#define IP2_LONG_EQ_TAG_Long ,IP2_LONG_EQ_Long
#define IP2_LONG_EQ_Int(lv,rv) (,Bool,PP2_ARBITRARY_EQUAL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_EQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_EQUAL(lv,rv))
#define IP2_LONG_EQ_Foreign(lv,rv) (,Bool,0)

#define PP2_DEF_Long_lt  PP2_VM_FN(8PP2_LANGUAGE_LONG_LT,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_LT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_LT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_LT(P,la,lt,lv,ra,rt,rv) IP2_LONG_LT_T(rt)(lv,rv)
#define IP2_LONG_LT_T(t) IP2_LONG_LT_##t
#define IP2_LONG_LT_Int(lv,rv) (,Bool,PP2_ARBITRARY_LESS(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_LT_Long(lv,rv) (,Bool,PP2_ARBITRARY_LESS(lv,rv))

#define PP2_DEF_Long_gt  PP2_VM_FN(8PP2_LANGUAGE_LONG_GT,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_GT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_GT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_GT(P,la,lt,lv,ra,rt,rv) IP2_LONG_GT_T(rt)(lv,rv)
#define IP2_LONG_GT_T(t) IP2_LONG_GT_##t
#define IP2_LONG_GT_Int(lv,rv) (,Bool,PP2_ARBITRARY_GREATER(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_GT_Long(lv,rv) (,Bool,PP2_ARBITRARY_GREATER(lv,rv))

#define PP2_DEF_Long_leq PP2_VM_FN(8PP2_LANGUAGE_LONG_LEQ,2)
#define PP2_DEF_Long_lte PP2_VM_FN(8PP2_LANGUAGE_LONG_LEQ,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_LEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_LEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_LEQ(P,la,lt,lv,ra,rt,rv) IP2_LONG_LEQ_T(rt)(lv,rv)
#define IP2_LONG_LEQ_T(t) IP2_LONG_LEQ_##t
#define IP2_LONG_LEQ_Int(lv,rv) (,Bool,PP2_ARBITRARY_LESS_EQUAL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_LEQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_LESS_EQUAL(lv,rv))

#define PP2_DEF_Long_geq PP2_VM_FN(8PP2_LANGUAGE_LONG_GEQ,2)
#define PP2_DEF_Long_gte PP2_VM_FN(8PP2_LANGUAGE_LONG_GEQ,2)
#define PP2_INSN_8PP2_LANGUAGE_LONG_GEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_GEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_GEQ(P,la,lt,lv,ra,rt,rv) IP2_LONG_GEQ_T(rt)(lv,rv)
#define IP2_LONG_GEQ_T(t) IP2_LONG_GEQ_##t
#define IP2_LONG_GEQ_Int(lv,rv) (,Bool,PP2_ARBITRARY_GREATER_EQUAL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_GEQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_GREATER_EQUAL(lv,rv))

#endif

// ******************** From: nil.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_NIL_H
#define PP2_LANGUAGE_TYPES_NIL_H



/* Nil is the value of everything done for its effect rather than for an answer: a
 * print, an assignment, a loop, an if that was not taken, an empty body, a
 * function whose last statement is a statement.
 *
 * Before Nil those all left r0 empty, and an empty r0 is not an object. Anything
 * that then read it -- printing it, returning it, comparing it -- reached for the
 * object's fields with PP2_LANGUAGE_OBJECT_VALUE, found no parenthesised triple to
 * take apart, so the accessor never fired and its own macro name spilled into the
 * output. A procedure now answers with a real object that means "no answer", and
 * every operation on it behaves.
 *
 * There is exactly one Nil value, written `nil`. */
#define PP2_DEF_Nil PP2_TYPE(Nil,Any)
#define PP2_SYM_Nil(...) __VA_ARGS__

#define PP2_DEF_nil PP2_CONST(Nil,)

/* An empty statement is nil, which is what makes an empty body work: `fn () ()`,
 * `catch ()`, and a block with nothing in it all compile through PP2_COMPILE with
 * empty syntax, and so all reach PP2_DEF_ here. Before, the empty name resolved to
 * nothing and the compiler raised a definition exception on a program that had
 * simply said nothing. */
#define PP2_DEF_ PP2_CONST(Nil,)

/* Nil(x) is nil, so `Nil(expr)` evaluates expr and throws the value away. */
#define PP2_DEF_Nil_construct PP2_VM_FN(8PP2_LANGUAGE_NIL_CONSTRUCT,2)
#define PP2_INSN_8PP2_LANGUAGE_NIL_CONSTRUCT(P,r0,r1,r2,self,arg0,...) \
        (,/*r0=*/PP2_LANGUAGE_NIL,P##r1,P##r2,P##__VA_ARGS__)

/* str(): nil prints as nothing at all, exactly like a quote holding no tokens.
 * Printing is how a program says something, and a procedure has nothing to say, so
 * `print(f(x))` on a procedure adds no word to the output rather than littering it
 * with `nil`. Like Bool_str this leaves raw tokens in r0 for 8PP2_EMIT_LITERAL
 * rather than an object, and here those tokens are simply none. */
#define PP2_DEF_Nil_str PP2_VM_FN(8PP2_LANGUAGE_NIL_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_NIL_STR(P,r0,r1,r2,obj,...) (,/*r0=*/,P##r1,P##r2,P##__VA_ARGS__)

/* eq(other): nil equals nil and nothing else. Without its own eq, two Nils would
 * reach Any_eq's same-type branch, which raises rather than guessing. That is right
 * for Quote and Fn, whose values are arbitrary tokens the preprocessor cannot
 * compare, and wrong here, where there is one value and therefore one answer. */
#define PP2_DEF_Nil_eq PP2_VM_FN(8PP2_LANGUAGE_NIL_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_NIL_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) \
        (,/*r0=*/IP2_FX(LANGUAGE_NIL_EQ,(,PP2_LANGUAGE_OBJECT_TYPE P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_NIL_EQ(P,rhs_type) PP2_CAT(IP2_LANGUAGE_NIL_EQ_,PP2_SYMBOL_EQ(Nil,P##rhs_type))
#define IP2_LANGUAGE_NIL_EQ_0 (,Bool,0)
#define IP2_LANGUAGE_NIL_EQ_1 (,Bool,1)

#endif

// ******************** From: quote.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_QUOTE_H
#define PP2_LANGUAGE_TYPES_QUOTE_H



#define PP2_DEF_Quote PP2_TYPE(Quote,Any)
#define PP2_SYM_Quote(...) __VA_ARGS__

/* Quote(x): the argument is already a compiled Quote object, so construct just
 * returns it (identity), exactly like Int_construct. */
#define PP2_DEF_Quote_construct PP2_VM_FN(8PP2_LANGUAGE_QUOTE_CONSTRUCT,2)
#define PP2_INSN_8PP2_LANGUAGE_QUOTE_CONSTRUCT(P,r0,r1,r2,self,arg0,...) (,/*r0=*/P##arg0,P##r1,P##r2,P##__VA_ARGS__)

#define PP2_DEF_Quote_cat PP2_VM_FN(8PP2_LANGUAGE_QUOTE_CAT,2)
#define PP2_INSN_8PP2_LANGUAGE_QUOTE_CAT(P,r0,r1,r2,o0,o1,...) (,/*r0=*/IP2_FX(LANGUAGE_QUOTE_CAT,(,PP2_LANGUAGE_OBJECT_VALUE P##o0,PP2_LANGUAGE_OBJECT_VALUE P##o1)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_QUOTE_CAT(P,v0,v1) (,Quote,(PP2_CAT(PP2_OPEN P##v0, PP2_OPEN P##v1)))

#define PP2_DEF_Quote_str PP2_VM_FN(8PP2_LANGUAGE_QUOTE_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_QUOTE_STR(P,r0,r1,r2,obj,...) (,PP2_FX(OPEN, PP2_LANGUAGE_OBJECT_VALUE P##obj),P##r1,P##r2,P##__VA_ARGS__)

#endif

// ******************** From: seq.h
/** @file */
#ifndef PP2_LANGUAGE_TYPES_SEQ_H
#define PP2_LANGUAGE_TYPES_SEQ_H





/* Seq is the thin representation type: its value is a RAW paren-group seq,
 * (1)(2)(3), with no object structure inside the groups -- the shape PP2's
 * own substrates use (Long digit-seqs, the machine's argument list). List
 * is the first-class collection; a Seq only earns its keep next to a
 * representation, so it stays minimal: get in, look at the groups, get out.
 *
 * Construction: Seq (((1)(2)(3))) from a quoted raw seq (the quote's wrapping
 * parens are OPENed away); Seq (X) of a Long exposes its digit-seq (a
 * negative keeps its sign wrap and reads as one group); Seq of a Seq is
 * identity. The empty seq's value is no tokens at all. */

#define PP2_DEF_Seq PP2_TYPE(Seq,Any)
#define PP2_SYM_Seq(...) __VA_ARGS__

#define PP2_DEF_Seq_construct PP2_VM_FN(8PP2_LANGUAGE_SEQ_CONSTRUCT,2)
#define PP2_INSN_8PP2_LANGUAGE_SEQ_CONSTRUCT(P,r0,r1,r2,self,arg0,...) (,/*r0=*/IP2_FX(LANGUAGE_SEQ_CONSTRUCT,(,PP2_OPEN P##arg0)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_SEQ_CONSTRUCT(P,addr,type,value) IP2_SEQ_CONSTRUCT_T(type)(value)
#define IP2_SEQ_CONSTRUCT_T(t) IP2_SEQ_CONSTRUCT_##t
#define IP2_SEQ_CONSTRUCT_Quote(v) (,Seq,PP2_OPEN v)
#define IP2_SEQ_CONSTRUCT_Seq(v) (,Seq,v)
#define IP2_SEQ_CONSTRUCT_Long(v) (,Seq,v)

/* str: the raw seq is already a single token group chain with no bare
 * commas, so it renders verbatim. */
#define PP2_DEF_Seq_str PP2_VM_FN(8PP2_LANGUAGE_SEQ_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_SEQ_STR(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_SEQ_STR,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_SEQ_STR(P,addr,type,value) value

#define IP2_SEQ_DROP1(s) PP2_EAT s

#define PP2_DEF_Seq_empty PP2_VM_FN(8PP2_LANGUAGE_SEQ_EMPTY,1)
#define PP2_INSN_8PP2_LANGUAGE_SEQ_EMPTY(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Bool,IP2_FX(SEQ_EMPTY_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_SEQ_EMPTY_I(P,s) PP2_IS_EDIBLE(,s)(IP2_SEQ_EMPTY_,SOME,NONE)
#define IP2_SEQ_EMPTY_SOME 0
#define IP2_SEQ_EMPTY_NONE 1

/* head: the first group as a Quote object (PP2_SEQ_SPLIT_HEAD keeps the
 * group's wrap, so a comma-bearing group stays one unit); tail: the rest as
 * a Seq. head of the empty seq is garbage-in-garbage-out. */
#define PP2_DEF_Seq_head PP2_VM_FN(8PP2_LANGUAGE_SEQ_HEAD,1)
#define PP2_INSN_8PP2_LANGUAGE_SEQ_HEAD(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Quote,IP2_FX(SEQ_HEADG_GET,(,PP2_LANGUAGE_OBJECT_VALUE P##self))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
/* nested hop uses IP2_FY: IP2_FX is painted inside its own rescan */
#define IP2_SEQ_HEADG_GET(P,s) IP2_FY(SEQ_HEADG,(,PP2_SEQ_SPLIT_HEAD P##s))
#define IP2_SEQ_HEADG(P,g,...) P##g

#define PP2_DEF_Seq_tail PP2_VM_FN(8PP2_LANGUAGE_SEQ_TAIL,1)
#define PP2_INSN_8PP2_LANGUAGE_SEQ_TAIL(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Seq,IP2_FX(SEQ_TAILG,(,PP2_LANGUAGE_OBJECT_VALUE P##self))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_SEQ_TAILG(P,s) IP2_SEQ_DROP1(P##s)

/* push(q): append a Quote's token tuple as one new group at the end. */
#define PP2_DEF_Seq_push PP2_VM_FN(8PP2_LANGUAGE_SEQ_PUSH,2)
#define PP2_INSN_8PP2_LANGUAGE_SEQ_PUSH(P,r0,r1,r2,self,x,...) \
        (, \
         /*r0=*/(,Seq,IP2_FX(SEQ_PUSH_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self,PP2_LANGUAGE_OBJECT_VALUE P##x))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_SEQ_PUSH_I(P,s,g) P##s P##g

/* size: one group per machine round through the accumulator's own inc
 * method, so a long seq's count promotes to Long automatically. */
#define PP2_DEF_Seq_size PP2_VM_FN(8PP2_LANGUAGE_SEQ_SIZE,1)
#define PP2_INSN_8PP2_LANGUAGE_SEQ_SIZE(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Int,0),P##r1,P##r2, \
         8IP2_LANGUAGE_SEQ_SIZE_STEP,(PP2_LANGUAGE_OBJECT_VALUE P##self), \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_SEQ_SIZE_STEP(P,r0,r1,r2,rest,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(SEQ_SIZE_EMIT,P##rest) \
         P##__VA_ARGS__ \
        )
#define IP2_SEQ_SIZE_EMIT(...) IP2_SEQ_SIZE_EMIT_I(IP2_LIST_PROBE(__VA_ARGS__,),__VA_ARGS__)
#define IP2_SEQ_SIZE_EMIT_I(head,...) PP2_IS_EDIBLE(,head)(IP2_SEQ_SIZE_EMIT_,SOME,NONE)(__VA_ARGS__)
#define IP2_SEQ_SIZE_EMIT_NONE(...)
#define IP2_SEQ_SIZE_EMIT_SOME(...) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,inc (),8IP2_LANGUAGE_SEQ_SIZE_STEP,(PP2_EAT __VA_ARGS__),

/* to_list: one group per round becomes a Quote object pushed onto the
 * argument seq; the gather is List's own tuple-ize. */
#define PP2_DEF_Seq_to_list PP2_VM_FN(8PP2_LANGUAGE_SEQ_TO_LIST,1)
#define PP2_INSN_8PP2_LANGUAGE_SEQ_TO_LIST(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8IP2_LANGUAGE_SEQ_TO_LIST_STEP,(PP2_LANGUAGE_OBJECT_VALUE P##self), \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_SEQ_TO_LIST_STEP(P,r0,r1,r2,rest,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(SEQ_TO_LIST_EMIT,P##rest) \
         P##__VA_ARGS__ \
        )
#define IP2_SEQ_TO_LIST_EMIT(...) IP2_SEQ_TO_LIST_EMIT_I(IP2_LIST_PROBE(__VA_ARGS__,),__VA_ARGS__)
#define IP2_SEQ_TO_LIST_EMIT_I(head,...) PP2_IS_EDIBLE(,head)(IP2_SEQ_TO_LIST_EMIT_,SOME,NONE)(__VA_ARGS__)
#define IP2_SEQ_TO_LIST_EMIT_NONE(...) 8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_SEQ_TO_LIST_EMIT_SOME(...) 8PP2_LOCAL_CTX_PUSH_ARGUMENT,(,Quote,IP2_FY(SEQ_HEADG,(,PP2_SEQ_SPLIT_HEAD __VA_ARGS__))),8IP2_LANGUAGE_SEQ_TO_LIST_STEP,(PP2_EAT __VA_ARGS__),

#endif


#endif


// ******************** From: vm.h
/** @file */
#ifndef IP2_MACHINE_VM_H
#define IP2_MACHINE_VM_H



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
