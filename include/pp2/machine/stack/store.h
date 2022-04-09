/** @file */
#ifndef PP2_MACHINE_STACK_STORE_H
#define PP2_MACHINE_STACK_STORE_H

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/at.h"

#define PP2_INSN_8PP2_STACK_STORE(P,r0,r1,r2,addr,value,...) \
        IP2_FX( \
            STACK_STORE_I, (, \
             P##r0,P##r1,P##r2, \
             P##addr,P##value,IP2_STACK_STORE_SPLIT_FRAME P##r1, \
             P##__VA_ARGS__ \
            ) \
        )
#define IP2_STACK_STORE_I(P,r0,r1,r2,addr,value,frame,frame_stack,...) \
        PP2_FY( \
            INSN_8PP2_STACK_FRAME_STORE, (, \
             P##r0,P##r1,P##r2, \
             P##addr,P##value,IP2_STACK_STORE_SPLIT_FRAME P##frame,, \
             P##__VA_ARGS__ \
            ) \
        )

#define PP2_INSN_8PP2_STACK_FRAME_STORE(P,r0,r1,r2, \
                                        addr,value, \
                                        bind_P,bind_addr,bind_tag,bind_value,binds_lhs,binds_rhs, \
                                        ... \
                                       ) \
        ( \
         P,r0,r1,r2,addr,value,bind_p,bind_addr,bind_tag,bind_value,binds_lhs,binds_rhs \
        )

#define IP2_STACK_STORE_SPLIT_FRAME(...) __VA_ARGS__,

#endif