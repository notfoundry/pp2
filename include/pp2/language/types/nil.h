/** @file */
#ifndef PP2_LANGUAGE_TYPES_NIL_H
#define PP2_LANGUAGE_TYPES_NIL_H

#include "pp2/language/basic/nil.h"
#include "pp2/language/basic/object.h"
#include "pp2/language/basic/symbol.h"
#include "pp2/language/definition/const.h"
#include "pp2/language/definition/type.h"
#include "pp2/language/definition/vm_fn.h"

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"

/* Nil is the value of everything done for its effect rather than for an answer: a
 * print, an assignment, a loop, an if that was not taken, an empty body, a
 * function whose last statement is a statement.
 *
 * Before Nil those all left r0 empty, and an empty r0 is not an object. Anything
 * that then read it -- printing it, returning it, comparing it -- reached for the
 * object's fields with PP2_LANGUAGE_OBJECT_VALUE, found no parenthesised triple to
 * take apart, so the accessor never fired and its own macro name spilled into the
 * output. A procedure now answers with a real object that means "no answer", and
 * every operation on it behaves.
 *
 * There is exactly one Nil value, written `nil`. */
#define PP2_DEF_Nil PP2_TYPE(Nil,Any)
#define PP2_SYM_Nil(...) __VA_ARGS__

#define PP2_DEF_nil PP2_CONST(Nil,)

/* An empty statement is nil, which is what makes an empty body work: `fn () ()`,
 * `catch ()`, and a block with nothing in it all compile through PP2_COMPILE with
 * empty syntax, and so all reach PP2_DEF_ here. Before, the empty name resolved to
 * nothing and the compiler raised a definition exception on a program that had
 * simply said nothing. */
#define PP2_DEF_ PP2_CONST(Nil,)

/* Nil(x) is nil, so `Nil(expr)` evaluates expr and throws the value away. */
#define PP2_DEF_Nil_construct PP2_VM_FN(8PP2_LANGUAGE_NIL_CONSTRUCT,2)
#define PP2_INSN_8PP2_LANGUAGE_NIL_CONSTRUCT(P,r0,r1,r2,self,arg0,...) \
        (,/*r0=*/PP2_LANGUAGE_NIL,P##r1,P##r2,P##__VA_ARGS__)

/* str(): nil prints as nothing at all, exactly like a quote holding no tokens.
 * Printing is how a program says something, and a procedure has nothing to say, so
 * `print(f(x))` on a procedure adds no word to the output rather than littering it
 * with `nil`. Like Bool_str this leaves raw tokens in r0 for 8PP2_EMIT_LITERAL
 * rather than an object, and here those tokens are simply none. */
#define PP2_DEF_Nil_str PP2_VM_FN(8PP2_LANGUAGE_NIL_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_NIL_STR(P,r0,r1,r2,obj,...) (,/*r0=*/,P##r1,P##r2,P##__VA_ARGS__)

/* eq(other): nil equals nil and nothing else. Without its own eq, two Nils would
 * reach Any_eq's same-type branch, which raises rather than guessing. That is right
 * for Quote and Fn, whose values are arbitrary tokens the preprocessor cannot
 * compare, and wrong here, where there is one value and therefore one answer. */
#define PP2_DEF_Nil_eq PP2_VM_FN(8PP2_LANGUAGE_NIL_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_NIL_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) \
        (,/*r0=*/IP2_FX(LANGUAGE_NIL_EQ,(,PP2_LANGUAGE_OBJECT_TYPE P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_NIL_EQ(P,rhs_type) PP2_CAT(IP2_LANGUAGE_NIL_EQ_,PP2_SYMBOL_EQ(Nil,P##rhs_type))
#define IP2_LANGUAGE_NIL_EQ_0 (,Bool,0)
#define IP2_LANGUAGE_NIL_EQ_1 (,Bool,1)

#endif
