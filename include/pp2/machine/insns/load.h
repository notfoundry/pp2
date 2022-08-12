/** @file */
#ifndef PP2_MACHINE_INSNS_LOAD_H
#define PP2_MACHINE_INSNS_LOAD_H

#define PP2_INSN_8PP2_LOAD_CONST(P,r0,r1,r2,value,insn,...) PP2_INSN_##insn(,P##value,P##r1,P##r2,P##__VA_ARGS__)

#endif