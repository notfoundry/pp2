/** @file */
#ifndef PP2_LANGUAGE_TYPES_ANY_H
#define PP2_LANGUAGE_TYPES_ANY_H

#include "pp2/language/compiler.h"
#include "pp2/language/basic/return.h"
#include "pp2/language/basic/object.h"
#include "pp2/language/basic/symbol.h"
#include "pp2/language/types/type.h"
#include "pp2/language/definition/type.h"
#include "pp2/language/definition/vm_fn.h"
#include "pp2/language/definition/primitive.h"

#include "pp2/machine/context.h"

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"

#define PP2_DEF_Any PP2_TYPE(Any,)
#define PP2_SYM_Any(...) __VA_ARGS__

#define PP2_DEF_Any_type )PP2_COMPILE_LANGUAGE_ANY_TYPE(
#define PP2_COMPILE_LANGUAGE_ANY_TYPE(rhs_stx) 8PP2_LANGUAGE_ANY_TYPE,PP2_COMPILE_LANGUAGE_RETURN(rhs_stx)

#define PP2_INSN_8PP2_LANGUAGE_ANY_TYPE(P,r0,r1,r2,...) (,/*r0=*/,P##r1,P##r2,IP2_FX(LANGUAGE_ANY_TYPE_RESOLVE,(,PP2_LOCAL_CTX_UNPACK_ARGS P##r1)),8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,P##__VA_ARGS__)
#define IP2_LANGUAGE_ANY_TYPE_RESOLVE(P,obj) PP2_FX(COMPILE_UNSAFE,(PP2_LANGUAGE_OBJECT_TYPE P##obj))


#define PP2_DEF_Any_str PP2_VM_FN(8PP2_LANGUAGE_ANY_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_ANY_STR(P,r0,r1,r2,obj,...) (,P##obj,P##r1,P##r2,P##__VA_ARGS__)


/* eq(other): the root equality every type inherits, so `eq` is total wherever
 * an answer exists. Values of different types are never equal, which is decided
 * here by comparing the two type names as registered symbols.
 *
 * Reaching this with two values of the SAME type means that type defined no eq
 * of its own, and the only types in that position are the ones whose values are
 * arbitrary token sequences: Quote, Seq, Fn. The preprocessor cannot compare
 * arbitrary tokens, so there is no answer to give and we raise the definition
 * exception rather than invent one. */
#define PP2_DEF_Any_eq PP2_VM_FN(8PP2_LANGUAGE_ANY_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_ANY_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(LANGUAGE_ANY_EQ,(,PP2_LANGUAGE_OBJECT_TYPE P##lhs_obj,PP2_LANGUAGE_OBJECT_TYPE P##rhs_obj)) \
         P##__VA_ARGS__ \
        )
#define IP2_LANGUAGE_ANY_EQ(P,lt,rt) PP2_CAT(IP2_LANGUAGE_ANY_EQ_,PP2_SYMBOL_EQ(lt,rt))(P##lt)
#define IP2_LANGUAGE_ANY_EQ_0(lt) 8PP2_LOAD_CONST,(,Bool,0),
#define IP2_LANGUAGE_ANY_EQ_1(lt) 8PP2_THROW_EXCEPTION,8PP2_LANGUAGE_DEFINITION_EXCEPTION,lt##_eq,


/* neq(other): the negation of whatever eq the receiver's type resolves to, so a
 * type gets neq for free the moment it gets eq. Bind the receiver's eq into r0
 * with a bare METHOD_CALL, fire it against the pre-evaluated operand, then send
 * not() to the Bool that comes back. */
#define PP2_DEF_Any_neq PP2_VM_FN(8PP2_LANGUAGE_ANY_NEQ,2)
#define PP2_INSN_8PP2_LANGUAGE_ANY_NEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) \
        (, \
         P##r0,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8PP2_LOAD_CONST,P##lhs_obj, \
         8PP2_LANGUAGE_METHOD_CALL,eq, \
         8PP2_LOCAL_CTX_PUSH_ARGUMENT,P##rhs_obj, \
         8PP2_LANGUAGE_FN_CALL_IMPL, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8PP2_LANGUAGE_METHOD_CALL,not(), \
         P##__VA_ARGS__ \
        )

#endif