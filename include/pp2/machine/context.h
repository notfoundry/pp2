/** @file */
#ifndef PP2_MACHINE_CONTEXT_H
#define PP2_MACHINE_CONTEXT_H

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/seq/head.h"

/**
*
*/
#define PP2_DEFAULT_LOCAL_CTX \
        (, \
         /*stack=*/(), \
         /*labels=*/, \
         /*arguments=*/, \
         /*registers=*/(), \
        )

#define PP2_LOCAL_CTX_GET_STACK PP2_TUPLE_AT_0
#define PP2_LOCAL_CTX_GET_LABELS PP2_TUPLE_AT_1
#define PP2_LOCAL_CTX_GET_ARGUMENTS PP2_TUPLE_AT_2
#define PP2_LOCAL_CTX_GET_REGISTERS PP2_TUPLE_AT_3

#define PP2_LOCAL_CTX_SET_STACK(ctx,v) IP2_LOCAL_CTX_SET_STACK ctx,v)
#define IP2_LOCAL_CTX_SET_STACK(P,...) IP2_LOCAL_CTX_SET_STACK_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_SET_STACK_I(P,stack,labels,arguments,registers,_,v) (,P##v,P##labels,P##arguments,P##registers,)

#define PP2_LOCAL_CTX_SET_LABELS(ctx,v) IP2_LOCAL_CTX_SET_LABELS ctx,v)
#define IP2_LOCAL_CTX_SET_LABELS(P,...) IP2_LOCAL_CTX_SET_LABELS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_SET_LABELS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##v,P##arguments,P##registers,)

#define PP2_LOCAL_CTX_SET_ARGUMENTS(ctx,v) IP2_LOCAL_CTX_SET_ARGUMENTS ctx,v)
#define IP2_LOCAL_CTX_SET_ARGUMENTS(P,...) IP2_LOCAL_CTX_SET_ARGUMENTS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_SET_ARGUMENTS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##v,P##registers,)

#define PP2_LOCAL_CTX_SET_REGISTERS(ctx,v) IP2_LOCAL_CTX_SET_REGISTERS ctx,v)
#define IP2_LOCAL_CTX_SET_REGISTERS(P,...) IP2_LOCAL_CTX_SET_REGISTERS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_SET_REGISTERS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##arguments,P##v,)


#define PP2_LOCAL_CTX_GET_ARGUMENTS_HEAD(P,stack,labels,arguments,registers,_) PP2_SEQ_HEAD(P##arguments)

#define PP2_LOCAL_CTX_PUSH_ARGUMENT(ctx,v) IP2_LOCAL_CTX_PUSH_ARGUMENT ctx,v)
#define IP2_LOCAL_CTX_PUSH_ARGUMENT(P,... ) IP2_LOCAL_CTX_PUSH_ARGUMENT_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PUSH_ARGUMENT_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##arguments(P##v),P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_PUSH_ARGUMENT(P,r0,r1,r2,v,...) (,P##r0,PP2_LOCAL_CTX_PUSH_ARGUMENT(P##r1,P##v),P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_PUSH_ARGUMENTS(ctx,v) IP2_LOCAL_CTX_PUSH_ARGUMENTS ctx,v)
#define IP2_LOCAL_CTX_PUSH_ARGUMENTS(P,... ) IP2_LOCAL_CTX_PUSH_ARGUMENTS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PUSH_ARGUMENTS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##arguments P##v,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_PUSH_ARGUMENTS(P,r0,r1,r2,v,...) (,P##r0,PP2_LOCAL_CTX_PUSH_ARGUMENTS(P##r1,P##v),P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_PREPEND_ARGUMENT(ctx,v) IP2_LOCAL_CTX_PREPEND_ARGUMENT ctx,v)
#define IP2_LOCAL_CTX_PREPEND_ARGUMENT(P,... ) IP2_LOCAL_CTX_PREPEND_ARGUMENT_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PREPEND_ARGUMENT_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,(P##v)P##arguments,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_PREPEND_ARGUMENT(P,r0,r1,r2,v,...) (,P##r0,PP2_LOCAL_CTX_PREPEND_ARGUMENT(P##r1,P##v),P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_PREPEND_ARGUMENTS(ctx,v) IP2_LOCAL_CTX_PREPEND_ARGUMENTS ctx,v)
#define IP2_LOCAL_CTX_PREPEND_ARGUMENTS(P,... ) IP2_LOCAL_CTX_PREPEND_ARGUMENTS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PREPEND_ARGUMENTS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##v P##arguments,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_PREPEND_ARGUMENTS(P,r0,r1,r2,v,...) (,P##r0,PP2_LOCAL_CTX_PREPEND_ARGUMENTS(P##r1,P##v),P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_POP_ARGUMENT(P,stack,labels,arguments,registers,_) (,P##stack,P##labels,PP2_EAT P##arguments,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_POP_ARGUMENT(P,r0,r1,r2,...) (,PP2_LOCAL_CTX_GET_ARGUMENTS_HEAD P##r1,PP2_LOCAL_CTX_POP_ARGUMENT P##r1,P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_CLEAR_ARGUMENTS(P,stack,labels,arguments,registers,_) (,P##stack,P##labels,/*arguments=*/,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_CLEAR_ARGUMENTS(P,r0,r1,r2,...) (,P##r0,PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2,P##__VA_ARGS__)

/* Argument-stack spilling for nested calls. The argument list is a single
 * shared stack, so evaluating a call argument that is itself a call would
 * scoop up the enclosing call's in-flight operands (its parked callee and any
 * already-evaluated sibling arguments). SPILL saves the whole current argument
 * list as one frame on the register spill-stack (a LIFO) and empties the
 * argument list, so the argument evaluates on a private, empty stack; nested
 * calls spill further, giving each call depth its own frame. UNSPILL_PUSH
 * restores the saved frame and pushes the just-evaluated argument (r0) onto it.
 * Spills are strictly LIFO and balanced (one SPILL + one UNSPILL_PUSH bracket
 * each argument), so the register field behaves as a proper call-frame stack. */
/* Every entry on the spill stack carries a tag saying what kind of thing it is:
 * 8A for a saved argument list, 8F for a saved local stack, 8E for an installed
 * exception handler. A throw unwinds by walking this stack and undoing each entry
 * in turn, which it can only do if it knows which is which -- the two kinds are
 * both seqs of groups and are otherwise indistinguishable.
 *
 * The tag is deliberately cheap: it adds two tokens to a pushed entry and NO extra
 * macro expansion anywhere, because the pop side swaps PP2_OPEN for IP2_UNTAG,
 * which is the same one expansion doing the same one job. */
#define IP2_UNTAG(tag,...) __VA_ARGS__

#define PP2_LOCAL_CTX_SPILL_ARGUMENTS(P,stack,labels,arguments,registers,_) (,P##stack,P##labels,/*arguments=*/,/*registers=*/(8A,P##arguments)P##registers,)
#define PP2_INSN_8PP2_ARGS_SPILL(P,r0,r1,r2,...) (,P##r0,PP2_LOCAL_CTX_SPILL_ARGUMENTS P##r1,P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT(ctx,v) IP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT ctx,v)
#define IP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT(P,...) IP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT_I(P,stack,labels,arguments,registers,_,v) IP2_FX(LOCAL_CTX_UNSPILL_PUSH_ARGUMENT_II,(,P##stack,P##labels,(P##v),PP2_SEQ_SPLIT_HEAD P##registers))
#define IP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT_II(P,stack,labels,elem,frame,rest) (,P##stack,P##labels,/*arguments=*/IP2_UNTAG P##frame P##elem,/*registers=*/P##rest,)
#define PP2_INSN_8PP2_ARGS_UNSPILL_PUSH(P,r0,r1,r2,...) (,/*r0=*/,PP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT(P##r1,P##r0),P##r2,P##__VA_ARGS__)

/* Local-variable frames for calls. A user function's parameters are bound into
 * name-addressed slots on the local stack, so a nested call whose callee reuses
 * a slot name would clobber the caller's live local. FRAME_ENTER saves the
 * whole local stack onto the same register spill-stack (as one frame) and hands
 * the callee an empty stack; FRAME_LEAVE restores the caller's stack by direct
 * assignment, leaving r0 (the call's result) untouched. FRAME_ENTER/LEAVE and
 * the argument SPILL/UNSPILL_PUSH are each balanced and strictly nested, so the
 * shared register stack stays a well-formed LIFO of activation frames. Only
 * user fns are bracketed (builtin VM_FN methods bind no locals). */
#define PP2_LOCAL_CTX_FRAME_ENTER(P,stack,labels,arguments,registers,_) (,/*stack=*/(),P##labels,P##arguments,/*registers=*/(8F,P##stack)P##registers,)
#define PP2_INSN_8PP2_FRAME_ENTER(P,r0,r1,r2,...) (,P##r0,PP2_LOCAL_CTX_FRAME_ENTER P##r1,P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_FRAME_LEAVE(P,stack,labels,arguments,registers,_) IP2_FX(LOCAL_CTX_FRAME_LEAVE_I,(,P##labels,P##arguments,PP2_SEQ_SPLIT_HEAD P##registers))
#define IP2_LOCAL_CTX_FRAME_LEAVE_I(P,labels,arguments,frame,rest) (,/*stack=*/IP2_UNTAG P##frame,P##labels,P##arguments,/*registers=*/P##rest,)
#define PP2_INSN_8PP2_FRAME_LEAVE(P,r0,r1,r2,...) (,P##r0,PP2_LOCAL_CTX_FRAME_LEAVE P##r1,P##r2,P##__VA_ARGS__)

/* Closure variant of FRAME_ENTER. A lexical closure captures the environment
 * visible where the function is DEFINED; since loads only ever see the top
 * frame, that top frame is the whole visible environment, so a user fn snapshots
 * its defining stack into its value at creation. On call this installs that
 * captured stack (instead of the empty frame FRAME_ENTER gives) after spilling
 * the caller's stack, so the body sees the closed-over bindings; parameters are
 * then STACK_STOREd on top and shadow any captured binding of the same name.
 * FRAME_LEAVE restores the caller unchanged, so captures are by snapshot. A fn
 * defined with an empty environment captures (), i.e. behaves exactly as before. */
#define PP2_INSN_8PP2_FRAME_ENTER_CLOSURE(P,r0,r1,r2,captured,...) (,P##r0,IP2_FX(LOCAL_CTX_FRAME_ENTER_CLOSURE,(P##captured,PP2_OPEN P##r1)),P##r2,P##__VA_ARGS__)
#define IP2_LOCAL_CTX_FRAME_ENTER_CLOSURE(captured,P,stack,labels,arguments,registers,_) (,/*stack=*/PP2_OPEN captured,P##labels,P##arguments,/*registers=*/(8F,P##stack)P##registers,)

#define PP2_LOCAL_CTX_UNPACK_ARGS(P,stack,labels,arguments,registers,_) PP2_REVERSE_CAT(0,IP2_LOCAL_CTX_UNPACK_ARGS P##arguments)
#define IP2_LOCAL_CTX_UNPACK_ARGS(x) x IP2_LOCAL_CTX_UNPACK_ARGS_UP
#define IP2_LOCAL_CTX_UNPACK_ARGS_UP(x) ,x IP2_LOCAL_CTX_UNPACK_ARGS_DN
#define IP2_LOCAL_CTX_UNPACK_ARGS_DN(x) ,x IP2_LOCAL_CTX_UNPACK_ARGS_UP
#define IP2_LOCAL_CTX_UNPACK_ARGS_UP0
#define IP2_LOCAL_CTX_UNPACK_ARGS_DN0

/**
*
*/
#define PP2_DEFAULT_VM_STATE \
        (, \
         /*heap=*/, \
         /*eh_stack=*/, \
        )


#define IP2_VM_STATE_SET(idx,val,P,...) PP2_TUPLE_REPLACE_##idx(,P##val,P##__VA_ARGS__)

#endif