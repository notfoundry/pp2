/** @file */
#ifndef PP2_MACHINE_INSNS_EMIT_H
#define PP2_MACHINE_INSNS_EMIT_H

#define PP2_INSN_8PP2_EMIT_LITERAL(P,r0,r1,r2,...) (,/*r0=*/,/*r1=*/P##r1,/*r2=*/P##r2,P##__VA_ARGS__)(,8LITERAL,P##r0)

#endif