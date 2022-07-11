/** @file */

#ifndef PP2_MACHINE_OUTPUT_H
#define PP2_MACHINE_OUTPUT_H

#include "pp2/machine/vm.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/punctuation/lparen.h"
#include "pp2/primitive/punctuation/rparen.h"

/**
*
*/
#define PP2_VM_OUTPUT(s) \
        IP2_VM_OUTPUT_SCAN( \
            IP2_FX(VM_OUTPUT_EMIT_UP, \
                   PP2_VM(/*r0=*/s(8HALT,),/*r1=*/,/*r2=*/,8PP2_VM_OUTPUT,)(,8HALT,)) \
            PP2_RPAREN \
        )

#define IP2_VM_OUTPUT_SCAN(...) __VA_ARGS__
#define IP2_VM_OUTPUT_SPLIT_HEAD(P,...) P,(P,__VA_ARGS__),

#define PP2_INSN_8PP2_VM_OUTPUT(P,r0,r1,r2,...) IP2_FX(VM_OUTPUT_I, (,IP2_VM_OUTPUT_SPLIT_HEAD P##r0,P##r1,P##r2,P##__VA_ARGS__))


#define IP2_VM_OUTPUT_I(P,r0_prefix,r0_head,r0_tail,r1,r2,...) IP2_VM_OUTPUT_I_##r0_prefix(,P##r0_head,P##r0_tail,P##r1,P##r2,P##__VA_ARGS__)
#define IP2_VM_OUTPUT_I_(P,r0_head,r0_tail,r1,r2,...) (,P##r0_tail,P##r0_head P##r1,P##r2,8PP2_VM_OUTPUT,P##__VA_ARGS__)
#define IP2_VM_OUTPUT_I_8HALT(P,r0_head,r0_tail,r1,r2,...) )P##r1


#define IP2_VM_OUTPUT_EMIT_UP(P,type,...)   IP2_VM_OUTPUT_EMIT_##type(,__VA_ARGS__##P) IP2_VM_OUTPUT_EMIT_DOWN
#define IP2_VM_OUTPUT_EMIT_DOWN(P,type,...) IP2_VM_OUTPUT_EMIT_##type(,__VA_ARGS__##P) IP2_VM_OUTPUT_EMIT_UP

#define IP2_VM_OUTPUT_EMIT_8HALT           PP2_EAT PP2_LPAREN
#define IP2_VM_OUTPUT_EMIT_8LITERAL(P,...) P##__VA_ARGS__
#define IP2_VM_OUTPUT_EMIT_8COMMA(P,...)   ,P##__VA_ARGS__
#define IP2_VM_OUTPUT_EMIT_8LPAREN(P,...)  (P##__VA_ARGS__
#define IP2_VM_OUTPUT_EMIT_8RPAREN(P,...)  )P##__VA_ARGS__

#endif