/** @file */
#ifndef PP2_LANGUAGE_BASIC_NIL_H
#define PP2_LANGUAGE_BASIC_NIL_H

/* The Nil object and the instruction that loads it, with no dependencies, so the
 * statements that answer with Nil (print, assignment, if, loops) can reach it
 * without dragging in the whole type. The type itself, its methods, and the `nil`
 * literal live in language/types/nil.h. */

#define PP2_LANGUAGE_NIL (,Nil,)

/* Set r0 to nil and carry on. Unlike 8PP2_LOAD_CONST this eats no operand and
 * names no following instruction, so it is safe to append after an instruction
 * that has already consumed the rest of its stream (8PP2_EMIT_LITERAL). */
#define PP2_INSN_8PP2_LANGUAGE_LOAD_NIL(P,r0,r1,r2,...) \
        (,/*r0=*/PP2_LANGUAGE_NIL,P##r1,P##r2,P##__VA_ARGS__)

#endif
