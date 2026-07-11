/** @file */
#ifndef PP2_MACHINE_STACK_STORE_H
#define PP2_MACHINE_STACK_STORE_H

#include "pp2/machine/stack/detail/frame_walk.h"
#include "pp2/machine/context.h"

#include "pp2/primitive/basic/invoke.h"

/* Store the value in r0 to a char-seq address in the current (top) frame.
 * PP2_FRAME_STORE rewrites the frame's bindings -- replacing the target's value
 * in place, or prepending a new binding when the address is unbound -- and the
 * rebuilt frame is set back as the first group of the local stack. r0 is
 * cleared; the store is a statement, not an expression. */
#define PP2_INSN_8PP2_STACK_STORE(P,value,r1,r2,addr,...) \
        (, \
         /*r0=*/, \
         IP2_FX(STACK_STORE_NEWCTX,(,P##r1,P##addr,P##value,IP2_STACK_STORE_SPLIT_FRAME(PP2_LOCAL_CTX_GET_STACK P##r1))), \
         P##r2, \
         P##__VA_ARGS__ \
        )

#define IP2_STACK_STORE_NEWCTX(P,ctx,addr,value,frame,frame_stack) \
        PP2_LOCAL_CTX_SET_STACK(ctx,(PP2_FRAME_STORE(addr,value,frame))frame_stack)

#define IP2_STACK_STORE_SPLIT_FRAME(stack) IP2_STACK_STORE_SPLIT_FRAME_I stack
#define IP2_STACK_STORE_SPLIT_FRAME_I(...) __VA_ARGS__,

#endif
