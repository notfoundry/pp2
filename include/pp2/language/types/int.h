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
#include "pp2/primitive/arithmetic/arbitrary.h"

/* Bare integer literals (PP2_DEF_0, PP2_DEF_1, ...) so `5` compiles to (,Int,5),
 * exactly as PP2_DEF_true compiles `true` to (,Bool,1). */
#include "pp2/language/types/detail/int_literals.h"

/* Int is the LITERAL integer: its value is a native token 0..127 and its
 * arithmetic is the table-driven literal layer, exactly as before. An operation
 * stays literal until it needs to be arbitrary: when a result would leave 0..127
 * (overflow, negative) it promotes to a Long object instead, and when the rhs
 * is already a Long the lhs promotes and the arbitrary op runs. Each binary
 * method dispatches on the rhs TYPE token (one paste, no value sniffing); the
 * in-range checks are one or two literal table lookups. */

#define PP2_DEF_Int PP2_TYPE(Int,Any)
#define PP2_SYM_Int(...) __VA_ARGS__

/* Int(x): the argument syntax is already compiled to an Int object by the
 * type-call machinery, so the constructor just returns it. */
#define PP2_DEF_Int_construct PP2_VM_FN(PP2_LANGUAGE_INT_CONSTRUCT,2)
#define PP2_LANGUAGE_INT_CONSTRUCT(P,r0,r1,r2,self,arg0,...) (,/*r0=*/P##arg0,P##r1,P##r2,P##__VA_ARGS__)

/* str: an Int stringizes to its own value token (5 -> 5), like Bool_str. */
#define PP2_DEF_Int_str PP2_VM_FN(PP2_LANGUAGE_INT_STR,1)
#define PP2_LANGUAGE_INT_STR(P,r0,r1,r2,obj,...) (,/*r0=*/PP2_LANGUAGE_OBJECT_VALUE P##obj,P##r1,P##r2,P##__VA_ARGS__)

/* plus: lhs plus (rhs). Int+Int stays literal while lhs+rhs <= 127 (checked as
 * rhs <= 127-lhs, two lookups), else both promote and the sum is a Long.
 * Int+Long promotes the lhs. */
#define PP2_DEF_Int_plus PP2_VM_FN(PP2_LANGUAGE_INT_PLUS,2)
#define PP2_LANGUAGE_INT_PLUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_PLUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_PLUS(P,la,lt,lv,ra,rt,rv) IP2_INT_PLUS_T(rt)(lv,rv)
#define IP2_INT_PLUS_T(t) IP2_INT_PLUS_##t
#define IP2_INT_PLUS_Int(lv,rv) IP2_INT_PLUS_C(PP2_LITERAL_LEQ(rv,PP2_LITERAL_SUB(127,lv)))(lv,rv)
#define IP2_INT_PLUS_C(c) IP2_INT_PLUS_C_I(c)
#define IP2_INT_PLUS_C_I(c) IP2_INT_PLUS_C_##c
#define IP2_INT_PLUS_C_1(lv,rv) (,Int,PP2_LITERAL_ADD(lv,rv))
#define IP2_INT_PLUS_C_0(lv,rv) (,Long,PP2_ARBITRARY_ADD(PP2_ARBITRARY_PROMOTE(lv),PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_INT_PLUS_Long(lv,rv) (,Long,PP2_ARBITRARY_ADD(PP2_ARBITRARY_PROMOTE(lv),rv))

/* minus: literal while lhs >= rhs, else the true (negative) Long result. */
#define PP2_DEF_Int_minus PP2_VM_FN(PP2_LANGUAGE_INT_MINUS,2)
#define PP2_LANGUAGE_INT_MINUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_MINUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_MINUS(P,la,lt,lv,ra,rt,rv) IP2_INT_MINUS_T(rt)(lv,rv)
#define IP2_INT_MINUS_T(t) IP2_INT_MINUS_##t
#define IP2_INT_MINUS_Int(lv,rv) IP2_INT_MINUS_C(PP2_LITERAL_GEQ(lv,rv))(lv,rv)
#define IP2_INT_MINUS_C(c) IP2_INT_MINUS_C_I(c)
#define IP2_INT_MINUS_C_I(c) IP2_INT_MINUS_C_##c
#define IP2_INT_MINUS_C_1(lv,rv) (,Int,PP2_LITERAL_SUB(lv,rv))
#define IP2_INT_MINUS_C_0(lv,rv) (,Long,PP2_ARBITRARY_SUB(PP2_ARBITRARY_PROMOTE(lv),PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_INT_MINUS_Long(lv,rv) (,Long,PP2_ARBITRARY_SUB(PP2_ARBITRARY_PROMOTE(lv),rv))

/* times/mul: literal while lhs*rhs <= 127 (checked as rhs <= 127/lhs, with a
 * zero guard so the division is defined), else Long. */
#define PP2_DEF_Int_times PP2_VM_FN(PP2_LANGUAGE_INT_TIMES,2)
#define PP2_DEF_Int_mul   PP2_VM_FN(PP2_LANGUAGE_INT_TIMES,2)
#define PP2_LANGUAGE_INT_TIMES(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_TIMES,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_TIMES(P,la,lt,lv,ra,rt,rv) IP2_INT_TIMES_T(rt)(lv,rv)
#define IP2_INT_TIMES_T(t) IP2_INT_TIMES_##t
#define IP2_INT_TIMES_Int(lv,rv) IP2_INT_TIMES_Z(PP2_LITERAL_EQ(lv,0))(lv,rv)
#define IP2_INT_TIMES_Z(c) IP2_INT_TIMES_Z_I(c)
#define IP2_INT_TIMES_Z_I(c) IP2_INT_TIMES_Z_##c
#define IP2_INT_TIMES_Z_1(lv,rv) (,Int,0)
#define IP2_INT_TIMES_Z_0(lv,rv) IP2_INT_TIMES_C(PP2_LITERAL_LEQ(rv,PP2_LITERAL_DIV(127,lv)))(lv,rv)
#define IP2_INT_TIMES_C(c) IP2_INT_TIMES_C_I(c)
#define IP2_INT_TIMES_C_I(c) IP2_INT_TIMES_C_##c
#define IP2_INT_TIMES_C_1(lv,rv) (,Int,PP2_LITERAL_MUL(lv,rv))
#define IP2_INT_TIMES_C_0(lv,rv) (,Long,PP2_ARBITRARY_MUL(PP2_ARBITRARY_PROMOTE(lv),PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_INT_TIMES_Long(lv,rv) (,Long,PP2_ARBITRARY_MUL(PP2_ARBITRARY_PROMOTE(lv),rv))

/* div: a quotient of non-negative literals never leaves 0..127, so Int/Int is
 * always literal. */
#define PP2_DEF_Int_div PP2_VM_FN(PP2_LANGUAGE_INT_DIV,2)
#define PP2_LANGUAGE_INT_DIV(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_DIV,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_DIV(P,la,lt,lv,ra,rt,rv) IP2_INT_DIV_T(rt)(lv,rv)
#define IP2_INT_DIV_T(t) IP2_INT_DIV_##t
#define IP2_INT_DIV_Int(lv,rv) (,Int,PP2_LITERAL_DIV(lv,rv))
#define IP2_INT_DIV_Long(lv,rv) (,Long,PP2_ARBITRARY_DIV(PP2_ARBITRARY_PROMOTE(lv),rv))

/* mod: likewise always literal for Int/Int. */
#define PP2_DEF_Int_mod PP2_VM_FN(PP2_LANGUAGE_INT_MOD,2)
#define PP2_LANGUAGE_INT_MOD(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_MOD,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_MOD(P,la,lt,lv,ra,rt,rv) IP2_INT_MOD_T(rt)(lv,rv)
#define IP2_INT_MOD_T(t) IP2_INT_MOD_##t
#define IP2_INT_MOD_Int(lv,rv) (,Int,PP2_LITERAL_MOD(lv,rv))
#define IP2_INT_MOD_Long(lv,rv) (,Long,PP2_ARBITRARY_MOD(PP2_ARBITRARY_PROMOTE(lv),rv))

/* inc(): literal below 127; 127 inc() promotes to Long 128. */
#define PP2_DEF_Int_inc PP2_VM_FN(PP2_LANGUAGE_INT_INC,1)
#define PP2_LANGUAGE_INT_INC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_INC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_INC(P,addr,type,value) IP2_INT_INC_C(PP2_LITERAL_EQ(value,127))(value)
#define IP2_INT_INC_C(c) IP2_INT_INC_C_I(c)
#define IP2_INT_INC_C_I(c) IP2_INT_INC_C_##c
#define IP2_INT_INC_C_0(v) (,Int,PP2_LITERAL_INC(,v))
#define IP2_INT_INC_C_1(v) (,Long,PP2_ARBITRARY_INC(PP2_ARBITRARY_PROMOTE(v)))

/* dec(): literal above 0; 0 dec() promotes to Long -1. */
#define PP2_DEF_Int_dec PP2_VM_FN(PP2_LANGUAGE_INT_DEC,1)
#define PP2_LANGUAGE_INT_DEC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_DEC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_DEC(P,addr,type,value) IP2_INT_DEC_C(PP2_LITERAL_EQ(value,0))(value)
#define IP2_INT_DEC_C(c) IP2_INT_DEC_C_I(c)
#define IP2_INT_DEC_C_I(c) IP2_INT_DEC_C_##c
#define IP2_INT_DEC_C_0(v) (,Int,PP2_LITERAL_DEC(,v))
#define IP2_INT_DEC_C_1(v) (,Long,PP2_ARBITRARY_DEC(PP2_ARBITRARY_PROMOTE(v)))

/* comparisons: lhs OP (rhs) -> (,Bool,0|1). Int vs Int is a literal table
 * relation; Int vs Long promotes the lhs and uses the arbitrary relation. */
#define PP2_DEF_Int_eq  PP2_VM_FN(PP2_LANGUAGE_INT_EQ,2)
#define PP2_LANGUAGE_INT_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_EQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_EQ(P,la,lt,lv,ra,rt,rv) IP2_INT_EQ_T(rt)(lv,rv)
#define IP2_INT_EQ_T(t) IP2_INT_EQ_##t
#define IP2_INT_EQ_Int(lv,rv) (,Bool,PP2_LITERAL_EQ(lv,rv))
#define IP2_INT_EQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_EQUAL(PP2_ARBITRARY_PROMOTE(lv),rv))

#define PP2_DEF_Int_lt  PP2_VM_FN(PP2_LANGUAGE_INT_LT,2)
#define PP2_LANGUAGE_INT_LT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_LT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_LT(P,la,lt,lv,ra,rt,rv) IP2_INT_LT_T(rt)(lv,rv)
#define IP2_INT_LT_T(t) IP2_INT_LT_##t
#define IP2_INT_LT_Int(lv,rv) (,Bool,PP2_LITERAL_LT(lv,rv))
#define IP2_INT_LT_Long(lv,rv) (,Bool,PP2_ARBITRARY_LESS(PP2_ARBITRARY_PROMOTE(lv),rv))

#define PP2_DEF_Int_gt  PP2_VM_FN(PP2_LANGUAGE_INT_GT,2)
#define PP2_LANGUAGE_INT_GT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_GT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_GT(P,la,lt,lv,ra,rt,rv) IP2_INT_GT_T(rt)(lv,rv)
#define IP2_INT_GT_T(t) IP2_INT_GT_##t
#define IP2_INT_GT_Int(lv,rv) (,Bool,PP2_LITERAL_GT(lv,rv))
#define IP2_INT_GT_Long(lv,rv) (,Bool,PP2_ARBITRARY_GREATER(PP2_ARBITRARY_PROMOTE(lv),rv))

#define PP2_DEF_Int_leq PP2_VM_FN(PP2_LANGUAGE_INT_LEQ,2)
#define PP2_DEF_Int_lte PP2_VM_FN(PP2_LANGUAGE_INT_LEQ,2)
#define PP2_LANGUAGE_INT_LEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_LEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_LEQ(P,la,lt,lv,ra,rt,rv) IP2_INT_LEQ_T(rt)(lv,rv)
#define IP2_INT_LEQ_T(t) IP2_INT_LEQ_##t
#define IP2_INT_LEQ_Int(lv,rv) (,Bool,PP2_LITERAL_LEQ(lv,rv))
#define IP2_INT_LEQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_LESS_EQUAL(PP2_ARBITRARY_PROMOTE(lv),rv))

#define PP2_DEF_Int_geq PP2_VM_FN(PP2_LANGUAGE_INT_GEQ,2)
#define PP2_DEF_Int_gte PP2_VM_FN(PP2_LANGUAGE_INT_GEQ,2)
#define PP2_LANGUAGE_INT_GEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_INT_GEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_INT_GEQ(P,la,lt,lv,ra,rt,rv) IP2_INT_GEQ_T(rt)(lv,rv)
#define IP2_INT_GEQ_T(t) IP2_INT_GEQ_##t
#define IP2_INT_GEQ_Int(lv,rv) (,Bool,PP2_LITERAL_GEQ(lv,rv))
#define IP2_INT_GEQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_GREATER_EQUAL(PP2_ARBITRARY_PROMOTE(lv),rv))

#endif
