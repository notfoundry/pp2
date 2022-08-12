/** @file */
#ifndef PP2_MACHINE_STACK_PUSH_H
#define PP2_MACHINE_STACK_PUSH_H

#include "pp2/primitive/basic/invoke.h"

#define PP2_INSN_8PP2_STACK_PUSH(P,r0,r1,r2,...) \
        IP2_FX( \
                STACK_PUSH_I, \
                (,/*r0=*/,/*r1=*/,/*r2=*/P##r2, \
                 /*(new_frame,old_frame,frame_stack)=*/IP2_STACK_PUSH_SPLIT_FRAME P##r1, \
                 P##__VA_ARGS__ \
                ) \
        )
#define IP2_STACK_PUSH_I(P,r0,r1,r2,new_frame,old_frame,frame_stack,...) (,P##r0,IP2_STACK_PUSH_II(P##new_frame) P##old_frame P##frame_stack,P##r2,P##__VA_ARGS__)
#define IP2_STACK_PUSH_II(frame) frame##0

#define IP2_STACK_PUSH_PARSE_STACK_UP(P,addr,tag,value) (,P##addr,IP2_STACK_PUSH_PARSE_TAG_##tag,P##value) IP2_STACK_PUSH_PARSE_STACK_DN
#define IP2_STACK_PUSH_PARSE_STACK_DN(P,addr,tag,value) (,P##addr,IP2_STACK_PUSH_PARSE_TAG_##tag,P##value) IP2_STACK_PUSH_PARSE_STACK_UP
#define IP2_STACK_PUSH_PARSE_STACK_UP0
#define IP2_STACK_PUSH_PARSE_STACK_DN0

#define IP2_STACK_PUSH_PARSE_TAG_8LOCAL 8REF(8PP2_STACK_POP_REF)
#define IP2_STACK_PUSH_PARSE_TAG_8REF(...) 8REF(__VA_ARGS__,8PP2_STACK_POP_REF)

#define IP2_STACK_PUSH_SPLIT_FRAME(...) IP2_STACK_PUSH_PARSE_STACK_UP __VA_ARGS__,__VA_ARGS__,

#endif