/** @file */
#ifndef PP2_LANGUAGE_BASIC_OBJECT_H
#define PP2_LANGUAGE_BASIC_OBJECT_H

#define PP2_INSN_8PP2_LANGUAGE_OBJECT_ADDR(P,r0,r1,r2,...) (,/*r0=*/IP2_LANGUAGE_OBJECT_ADDR P##r0,P##r1,P##r2,P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_OBJECT_TYPE(P,r0,r1,r2,...) (,/*r0=*/IP2_LANGUAGE_OBJECT_TYPE P##r0,P##r1,P##r2,P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_OBJECT_VALUE(P,r0,r1,r2,...) (,/*r0=*/IP2_LANGUAGE_OBJECT_VALUE P##r0,P##r1,P##r2,P##__VA_ARGS__)

#define IP2_LANGUAGE_OBJECT_ADDR(addr,type,value) addr
#define IP2_LANGUAGE_OBJECT_TYPE(addr,type,value) type
#define IP2_LANGUAGE_OBJECT_VALUE(addr,type,value) value

#endif