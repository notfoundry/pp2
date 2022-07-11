/** @file */
#ifndef PP2_MACHINE_STACK_LOAD_H
#define PP2_MACHINE_STACK_LOAD_H

#include "pp2/machine/stack/load_tables.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/at.h"

#define PP2_INSN_8PP2_STACK_LOAD(P,r0,r1,r2,addr,...) \
                                (, \
                                    /*r0=*/IP2_FX(STACK_FRAME_LOAD, (,P##addr,IP2_STACK_LOAD_SPLIT_FRAME P##r1)), \
                                    P##r1,P##r2, \
                                    P##__VA_ARGS__ \
                                )

#define IP2_STACK_FRAME_LOAD(P,addr,frame,frame_stack) IP2_STACK_FRAME_LOAD_I(PP2_STACK_FRAME_LOAD_UP_##addr P##frame)
#define IP2_STACK_FRAME_LOAD_I(x) PP2_TUPLE_AT_1(,x,PP2_UNBOUND_LOCAL(x))

#define IP2_STACK_LOAD_SPLIT_FRAME(P,stack,...) IP2_STACK_LOAD_SPLIT_FRAME_I P##stack
#define IP2_STACK_LOAD_SPLIT_FRAME_I(...) __VA_ARGS__,

#define PP2_UNBOUND_LOCAL()

#endif