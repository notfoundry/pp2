/** @file */
#ifndef PP2_MACHINE_STACK_POP_H
#define PP2_MACHINE_STACK_POP_H

#include "pp2/primitive/basic/invoke.h"

#define PP2_INSN_8PP2_STACK_POP(P,r0,r1,r2,...) \
        IP2_FX( \
                STACK_POP_I, \
                (,/*r0=*/,/*r1=*/,/*r2=*/P##r2, \
                 /*(frame,frame_stack)=*/IP2_STACK_POP_SPLIT_FRAME P##r1, \
                 P##__VA_ARGS__ \
                ) \
        )
#define IP2_STACK_POP_I(P,r0,r1,r2,frame,frame_stack,...) \
        IP2_STACK_POP_PARSE_STACK_UP P##frame

#define IP2_STACK_POP_PARSE_STACK_UP(P,addr,tag,value) IP2_STACK_POP_PARSE_TAG_##tag(,P##addr,P##value) IP2_STACK_POP_PARSE_STACK_DN
#define IP2_STACK_POP_PARSE_STACK_DN(P,addr,tag,value) IP2_STACK_POP_PARSE_TAG_##tag(,P##addr,P##value) IP2_STACK_POP_PARSE_STACK_UP

#define IP2_STACK_POP_PARSE_TAG_8LOCAL(...)
#define IP2_STACK_POP_PARSE_TAG_8REF(P,...) ,P##__VA_ARGS__,IP2_STACK_POP_PREPARE_REF_STORE

#define IP2_STACK_POP_PREPARE_REF_STORE(P,addr,value) 8PP2_STACK_STORE,P##addr,P##value

#define IP2_STACK_POP_SPLIT_FRAME(...) __VA_ARGS__,

#endif