/** @file */
#ifndef PP2_MACHINE_STACK_STORE_H
#define PP2_MACHINE_STACK_STORE_H

#include "pp2/machine/stack/store_tables.h"

#include "pp2/primitive/basic/invoke.h"

#define PP2_INSN_8PP2_STACK_STORE(P,r0,r1,r2,addr,value,...) \
        PP2_FX( \
                INSN_8PP2_STACK_FRAME_STORE, \
                (,/*r0=*/,/*r1=*/,/*r2=*/P##r2, \
                 P##addr,P##value, \
                 /*(frame,frame_stack)=*/IP2_STACK_STORE_SPLIT_FRAME P##r1, \
                 P##__VA_ARGS__ \
                ) \
        )
#define PP2_INSN_8PP2_STACK_FRAME_STORE(P,r0,r1,r2,addr,value,frame,frame_stack,...) \
                                       ( \
                                        IP2_STACK_STORE_II(,P##r0,P##r1,P##r2,P##addr,P##value,P##frame_stack,PP2_STACK_FRAME_STORE_##addr P##frame), \
                                        P##__VA_ARGS__ \
                                       )

#define IP2_STACK_STORE_II(P,r0,r1,r2,addr,value,frame_stack,store_result) \
        IP2_STACK_STORE_III(,P##r0,P##r1,P##r2,P##addr,P##value,P##frame_stack,store_result,PP2_STACK_FRAME_STORE_UNBOUND,)

#define IP2_STACK_STORE_III(P,r0,r1,r2,addr,value,frame_stack,_,continuation,...) \
        continuation(,P##r0,P##r1,P##r2,P##addr,P##value,P##frame_stack,__VA_ARGS__)


#define PP2_STACK_FRAME_STORE_CONTINUE(P,r0,r1,r2,addr,value,frame_stack,b_addr,b_tag,b_value,tail_bindings,...) \
        ,/*r0=*/P##r0 (,P##b_addr,P##b_tag,P##b_value), \
        /*r1=*/P##r1, \
        /*r2=*/P##r2, \
        /*insn=*/8PP2_STACK_FRAME_STORE,P##addr,P##value,P##tail_bindings,P##frame_stack
#define PP2_STACK_FRAME_STORE_BREAK(P,r0,r1,r2,addr,value,frame_stack,_,b_addr,b_tag,b_value,tail_bindings,...) \
        ,/*r0=*/, \
        /*r1=*/((,P##addr,P##b_tag,P##value) P##r0 P##tail_bindings)P##frame_stack, \
        /*r2=*/P##r2
#define PP2_STACK_FRAME_STORE_UNBOUND(P,r0,r1,r2,addr,value,frame_stack,_) \
        ,/*r0=*/, \
        /*r1=*/((,P##addr,8LOCAL,P##value) P##r0)P##frame_stack, \
        /*r2=*/P##r2

#define IP2_STACK_STORE_SPLIT_FRAME(...) __VA_ARGS__,

#endif