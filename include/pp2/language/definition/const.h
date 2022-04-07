/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_CONST_H
#define PP2_LANGUAGE_DEFINITION_CONST_H

#define PP2_CONST(value) 8DEF_CONST,value

#define PP2_INSN_8DEF_CONST(P,r0,r1,r2,value,K,...) PP2_INSN_##K(,P##value,P##r1,P##r2,P##__VA_ARGS__)

#endif