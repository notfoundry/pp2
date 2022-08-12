#ifndef PP2_MACHINE_INSNS_NOP_H
#define PP2_MACHINE_INSNS_NOP_H

#define PP2_INSN_8PP2_NOP(P,r0,r1,r2,...) (,P##r0,P##r1,P##r2,P##__VA_ARGS__)

#define PP2_INSN_8PP2_NOP_UNSAFE(P,r0,r1,r2,insn,...) PP2_INSN_##insn(,P##r0,P##r1,P##r2,P##__VA_ARGS__)


#endif