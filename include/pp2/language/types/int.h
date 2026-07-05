/** @file */
#ifndef PP2_LANGUAGE_TYPES_INT_H
#define PP2_LANGUAGE_TYPES_INT_H

#include "pp2/language/basic/object.h"
#include "pp2/language/definition/const.h"
#include "pp2/language/definition/type.h"
#include "pp2/language/definition/vm_fn.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/arithmetic/literal/add.h"
#include "pp2/primitive/arithmetic/literal/sub.h"
#include "pp2/primitive/arithmetic/literal/mul.h"
#include "pp2/primitive/arithmetic/literal/div.h"
#include "pp2/primitive/arithmetic/literal/inc.h"
#include "pp2/primitive/arithmetic/literal/dec.h"
#include "pp2/primitive/comparison/literal.h"

/* Bare integer literals (PP2_DEF_0, PP2_DEF_1, ...) so `5` compiles to (,Int,5),
 * exactly as PP2_DEF_true compiles `true` to (,Bool,1). */
#include "pp2/language/types/detail/int_literals.h"

#define PP2_DEF_Int PP2_TYPE(Int,Any)
#define PP2_SYM_Int(...) __VA_ARGS__

/* Int(x): the argument syntax is already compiled to an Int object by the
 * type-call machinery, so the constructor just returns it. */
#define PP2_DEF_Int_construct PP2_VM_FN(PP2_LANGUAGE_INT_CONSTRUCT,2)
#define PP2_LANGUAGE_INT_CONSTRUCT(P,r0,r1,r2,self,arg0,...) (,/*r0=*/P##arg0,P##r1,P##r2,P##__VA_ARGS__)

/* str: an Int stringizes to its own value token (5 -> 5), like Bool_str. */
#define PP2_DEF_Int_str PP2_VM_FN(PP2_LANGUAGE_INT_STR,1)
#define PP2_LANGUAGE_INT_STR(P,r0,r1,r2,obj,...) (,/*r0=*/PP2_LANGUAGE_OBJECT_VALUE P##obj,P##r1,P##r2,P##__VA_ARGS__)

/* plus: lhs plus (rhs) -> (,Int,lhs+rhs). Mirrors Bool_and: open both operand
 * objects, extract their values, compute, wrap the result back into an Int. */
#define PP2_DEF_Int_plus PP2_VM_FN(PP2_LANGUAGE_INT_PLUS,2)
#define PP2_LANGUAGE_INT_PLUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_PLUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_PLUS(P,lhs_addr,lhs_type,lhs_value,rhs_addr,rhs_type,rhs_value) (,Int,PP2_LITERAL_ADD(lhs_value,rhs_value))

/* inc(): x inc() -> (,Int,x+1), wiring the existing PP2_LITERAL_INC primitive.
 * The value must be extracted (via OPEN) before PP2_LITERAL_INC's `##` paste,
 * so route it through a helper the same way plus does. */
#define PP2_DEF_Int_inc PP2_VM_FN(PP2_LANGUAGE_INT_INC,1)
#define PP2_LANGUAGE_INT_INC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_INC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_INC(P,addr,type,value) (,Int,PP2_LITERAL_INC(,value))

/* dec(): x dec() -> (,Int,x-1) clamped at 0. */
#define PP2_DEF_Int_dec PP2_VM_FN(PP2_LANGUAGE_INT_DEC,1)
#define PP2_LANGUAGE_INT_DEC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_DEC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_DEC(P,addr,type,value) (,Int,PP2_LITERAL_DEC(,value))

/* minus: lhs minus (rhs) -> (,Int,lhs-rhs) clamped at 0. */
#define PP2_DEF_Int_minus PP2_VM_FN(PP2_LANGUAGE_INT_MINUS,2)
#define PP2_LANGUAGE_INT_MINUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_MINUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_MINUS(P,la,lt,lv,ra,rt,rv) (,Int,PP2_LITERAL_SUB(lv,rv))

/* times/mul: lhs times (rhs) -> (,Int,lhs*rhs). */
#define PP2_DEF_Int_times PP2_VM_FN(PP2_LANGUAGE_INT_TIMES,2)
#define PP2_DEF_Int_mul   PP2_VM_FN(PP2_LANGUAGE_INT_TIMES,2)
#define PP2_LANGUAGE_INT_TIMES(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_TIMES,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_TIMES(P,la,lt,lv,ra,rt,rv) (,Int,PP2_LITERAL_MUL(lv,rv))

/* div: lhs div (rhs) -> (,Int,floor(lhs/rhs)). */
#define PP2_DEF_Int_div PP2_VM_FN(PP2_LANGUAGE_INT_DIV,2)
#define PP2_LANGUAGE_INT_DIV(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_DIV,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_DIV(P,la,lt,lv,ra,rt,rv) (,Int,PP2_LITERAL_DIV(lv,rv))

/* mod: lhs mod (rhs) -> (,Int,lhs mod rhs). */
#define PP2_DEF_Int_mod PP2_VM_FN(PP2_LANGUAGE_INT_MOD,2)
#define PP2_LANGUAGE_INT_MOD(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_MOD,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_MOD(P,la,lt,lv,ra,rt,rv) (,Int,PP2_LITERAL_MOD(lv,rv))

/* comparisons: lhs OP (rhs) -> (,Bool,0|1). Each opens both operands, extracts
 * the values, and defers to the corresponding literal relation. */
#define PP2_DEF_Int_eq  PP2_VM_FN(PP2_LANGUAGE_INT_EQ,2)
#define PP2_LANGUAGE_INT_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_EQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_EQ(P,la,lt,lv,ra,rt,rv) (,Bool,PP2_LITERAL_EQ(lv,rv))

#define PP2_DEF_Int_lt  PP2_VM_FN(PP2_LANGUAGE_INT_LT,2)
#define PP2_LANGUAGE_INT_LT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_LT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_LT(P,la,lt,lv,ra,rt,rv) (,Bool,PP2_LITERAL_LT(lv,rv))

#define PP2_DEF_Int_gt  PP2_VM_FN(PP2_LANGUAGE_INT_GT,2)
#define PP2_LANGUAGE_INT_GT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_GT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_GT(P,la,lt,lv,ra,rt,rv) (,Bool,PP2_LITERAL_GT(lv,rv))

#define PP2_DEF_Int_leq PP2_VM_FN(PP2_LANGUAGE_INT_LEQ,2)
#define PP2_DEF_Int_lte PP2_VM_FN(PP2_LANGUAGE_INT_LEQ,2)
#define PP2_LANGUAGE_INT_LEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_LEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_LEQ(P,la,lt,lv,ra,rt,rv) (,Bool,PP2_LITERAL_LEQ(lv,rv))

#define PP2_DEF_Int_geq PP2_VM_FN(PP2_LANGUAGE_INT_GEQ,2)
#define PP2_DEF_Int_gte PP2_VM_FN(PP2_LANGUAGE_INT_GEQ,2)
#define PP2_LANGUAGE_INT_GEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_GEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_GEQ(P,la,lt,lv,ra,rt,rv) (,Bool,PP2_LITERAL_GEQ(lv,rv))

#endif
