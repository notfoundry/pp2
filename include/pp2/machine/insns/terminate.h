/** @file */
#ifndef PP2_MACHINE_INSNS_TERMINATE_H
#define PP2_MACHINE_INSNS_TERMINATE_H

/**
*
*/
#define PP2_INSN_8PP2_TERMINATE(P,r0,r1,r2,...) )

#define PP2_INSN_8PP2_DEBUG_TERMINATE(P,r0_,r1_,r2_,...) )(r0=P##r0_, r1=P##r1_, r2=P##r2_, ...=[P##__VA_ARGS__])

#endif