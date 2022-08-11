/** @file */
#ifndef PP2_MACHINE_CONTEXT_H
#define PP2_MACHINE_CONTEXT_H

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/tuple/open.h"

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

#define PP2_LOCAL_CTX_PUSH_ARGUMENTS(ctx,v) IP2_LOCAL_CTX_PUSH_ARGUMENTS ctx,v)
#define IP2_LOCAL_CTX_PUSH_ARGUMENTS(P,... ) IP2_LOCAL_CTX_PUSH_ARGUMENTS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PUSH_ARGUMENTS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##arguments P##v,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_PUSH_ARGUMENTS(P,r0,r1,r2,v,...) (,P##r0,PP2_LOCAL_CTX_PUSH_ARGUMENTS(P##r1,P##v),P##r2,P##__VA_ARGS__)

#define PP2_LOCAL_CTX_PREPEND_ARGUMENTS(ctx,v) IP2_LOCAL_CTX_PREPEND_ARGUMENTS ctx,v)
#define IP2_LOCAL_CTX_PREPEND_ARGUMENTS(P,... ) IP2_LOCAL_CTX_PREPEND_ARGUMENTS_I(,P##__VA_ARGS__
#define IP2_LOCAL_CTX_PREPEND_ARGUMENTS_I(P,stack,labels,arguments,registers,_,v) (,P##stack,P##labels,P##v P##arguments,P##registers,)

#define PP2_LOCAL_CTX_POP_ARGUMENT(P,stack,labels,arguments,registers,_) (,P##stack,P##labels,PP2_EAT P##arguments,P##registers,)

#define PP2_LOCAL_CTX_CLEAR_ARGUMENTS(P,stack,labels,arguments,registers,_) (,P##stack,P##labels,/*arguments=*/,P##registers,)
#define PP2_INSN_8PP2_LOCAL_CTX_CLEAR_ARGUMENTS(P,r0,r1,r2,...) (,P##r0,PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2,P##__VA_ARGS__)

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