/** @file */
#ifndef PP2_MACHINE_STACK_LOAD_H
#define PP2_MACHINE_STACK_LOAD_H

#include "pp2/machine/stack/detail/frame_walk.h"

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"

/* Load the value bound to a char-seq address in the current (top) frame. The
 * frame is the first group of the local stack; PP2_FRAME_FIND walks its
 * bindings and returns the value, or (8MISS) when the address is unbound, which
 * routes to the UNBOUND_LOCAL exception carrying the address. */
#define PP2_INSN_8PP2_STACK_LOAD(P,r0,r1,r2,addr,...) \
        IP2_STACK_LOAD_DISPATCH( \
            IP2_FX(STACK_LOAD_FIND,(,P##addr,IP2_STACK_LOAD_SPLIT_FRAME P##r1)), \
            P##addr,P##r1,P##r2,P##__VA_ARGS__ \
        )

#define IP2_STACK_LOAD_FIND(P,addr,frame,...) PP2_FRAME_FIND(addr,frame)

#define IP2_STACK_LOAD_SPLIT_FRAME(P,stack,...) IP2_STACK_LOAD_SPLIT_FRAME_I P##stack
#define IP2_STACK_LOAD_SPLIT_FRAME_I(...) __VA_ARGS__,

/* Branch on whether the find hit. A compiled object opens to `,Type,...` (its
 * first field is empty), so the probe token is empty; a miss opens to the bare
 * `8MISS` token. */
#define IP2_STACK_LOAD_DISPATCH(res,addr,r1,r2,...) \
        IP2_STACK_LOAD_DISPATCH_I(IP2_STACK_LOAD_ISMISS(res),res,addr,r1,r2,__VA_ARGS__)
#define IP2_STACK_LOAD_DISPATCH_I(miss,res,addr,r1,r2,...) IP2_STACK_LOAD_DISPATCH_II(miss,res,addr,r1,r2,__VA_ARGS__)
#define IP2_STACK_LOAD_DISPATCH_II(miss,res,addr,r1,r2,...) IP2_STACK_LOAD_##miss(res,addr,r1,r2,__VA_ARGS__)

#define IP2_STACK_LOAD_ISMISS(res) IP2_FX(STACK_LOAD_ISMISS_I,(,PP2_OPEN res))
#define IP2_STACK_LOAD_ISMISS_I(P,x,...) IP2_STACK_LOAD_ISMISS_II(x)
#define IP2_STACK_LOAD_ISMISS_II(x) IP2_STACK_LOAD_ISMISS_TAG_##x
#define IP2_STACK_LOAD_ISMISS_TAG_ 0
#define IP2_STACK_LOAD_ISMISS_TAG_8MISS 1

#define IP2_STACK_LOAD_0(res,addr,r1,r2,...) (,/*r0=*/res,r1,r2,__VA_ARGS__)
#define IP2_STACK_LOAD_1(res,addr,r1,r2,...) \
        (,/*r0=*/,r1,r2,8PP2_THROW_EXCEPTION,8PP2_LANGUAGE_UNBOUND_LOCAL_EXCEPTION,addr,__VA_ARGS__)

#endif
