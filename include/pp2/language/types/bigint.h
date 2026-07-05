/** @file */
#ifndef PP2_LANGUAGE_TYPES_BIGINT_H
#define PP2_LANGUAGE_TYPES_BIGINT_H

#include "pp2/language/basic/object.h"
#include "pp2/language/definition/const.h"
#include "pp2/language/definition/type.h"
#include "pp2/language/definition/vm_fn.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/arithmetic/arbitrary.h"

/* BigInt is the ARBITRARY-precision integer: its value is a canonical decimal
 * digit-seq, (1)(2)(8) == 128, ((1)) == -1, unbounded length, signed. All of
 * its arithmetic is the arbitrary layer. BigInt is contagious: any operation
 * with a BigInt operand yields a BigInt (an Int rhs is promoted). Ints promote
 * themselves INTO BigInt only when a result leaves 0..127 (see int.h).
 *
 * Construction: BigInt (5) promotes a literal Int; BigInt (((1)(2)(8))) builds
 * 128 from a quoted digit-seq (normalized by FIX; a quote's value keeps its
 * wrapping parens, so the constructor OPENs it -- and one EXTRA wrap therefore
 * denotes a negative: BigInt ((((1)(2)(8)))) == -128); BigInt of a BigInt is
 * identity. */

#define PP2_DEF_BigInt PP2_TYPE(BigInt,Any)
#define PP2_SYM_BigInt(...) __VA_ARGS__

#define PP2_DEF_BigInt_construct PP2_VM_FN(PP2_LANGUAGE_BIGINT_CONSTRUCT,2)
#define PP2_LANGUAGE_BIGINT_CONSTRUCT(P,r0,r1,r2,self,arg0,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_CONSTRUCT,(,PP2_OPEN P##arg0)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_CONSTRUCT(P,addr,type,value) IP2_BIGINT_CONSTRUCT_T(type)(value)
#define IP2_BIGINT_CONSTRUCT_T(t) IP2_BIGINT_CONSTRUCT_##t
#define IP2_BIGINT_CONSTRUCT_Int(v) (,BigInt,PP2_ARBITRARY_PROMOTE(v))
#define IP2_BIGINT_CONSTRUCT_BigInt(v) (,BigInt,v)
#define IP2_BIGINT_CONSTRUCT_Quote(v) (,BigInt,PP2_ARBITRARY_FIX(PP2_OPEN v))
#define IP2_BIGINT_CONSTRUCT_Seq(v) (,BigInt,PP2_ARBITRARY_FIX(v))

/* str: demote the digit-seq back to native tokens (a negative emits the sign
 * as its own token: ((1)(2)) -> - 12). */
#define PP2_DEF_BigInt_str PP2_VM_FN(PP2_LANGUAGE_BIGINT_STR,1)
#define PP2_LANGUAGE_BIGINT_STR(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_STR,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_STR(P,addr,type,value) PP2_ARBITRARY_DEMOTE(value)

/* binary arithmetic: dispatch on the rhs type, promoting an Int rhs */
#define PP2_DEF_BigInt_plus PP2_VM_FN(PP2_LANGUAGE_BIGINT_PLUS,2)
#define PP2_LANGUAGE_BIGINT_PLUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_PLUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_PLUS(P,la,lt,lv,ra,rt,rv) IP2_BIGINT_PLUS_T(rt)(lv,rv)
#define IP2_BIGINT_PLUS_T(t) IP2_BIGINT_PLUS_##t
#define IP2_BIGINT_PLUS_Int(lv,rv) (,BigInt,PP2_ARBITRARY_ADD(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_BIGINT_PLUS_BigInt(lv,rv) (,BigInt,PP2_ARBITRARY_ADD(lv,rv))

#define PP2_DEF_BigInt_minus PP2_VM_FN(PP2_LANGUAGE_BIGINT_MINUS,2)
#define PP2_LANGUAGE_BIGINT_MINUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_MINUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_MINUS(P,la,lt,lv,ra,rt,rv) IP2_BIGINT_MINUS_T(rt)(lv,rv)
#define IP2_BIGINT_MINUS_T(t) IP2_BIGINT_MINUS_##t
#define IP2_BIGINT_MINUS_Int(lv,rv) (,BigInt,PP2_ARBITRARY_SUB(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_BIGINT_MINUS_BigInt(lv,rv) (,BigInt,PP2_ARBITRARY_SUB(lv,rv))

#define PP2_DEF_BigInt_times PP2_VM_FN(PP2_LANGUAGE_BIGINT_TIMES,2)
#define PP2_DEF_BigInt_mul   PP2_VM_FN(PP2_LANGUAGE_BIGINT_TIMES,2)
#define PP2_LANGUAGE_BIGINT_TIMES(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_TIMES,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_TIMES(P,la,lt,lv,ra,rt,rv) IP2_BIGINT_TIMES_T(rt)(lv,rv)
#define IP2_BIGINT_TIMES_T(t) IP2_BIGINT_TIMES_##t
#define IP2_BIGINT_TIMES_Int(lv,rv) (,BigInt,PP2_ARBITRARY_MUL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_BIGINT_TIMES_BigInt(lv,rv) (,BigInt,PP2_ARBITRARY_MUL(lv,rv))

#define PP2_DEF_BigInt_div PP2_VM_FN(PP2_LANGUAGE_BIGINT_DIV,2)
#define PP2_LANGUAGE_BIGINT_DIV(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_DIV,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_DIV(P,la,lt,lv,ra,rt,rv) IP2_BIGINT_DIV_T(rt)(lv,rv)
#define IP2_BIGINT_DIV_T(t) IP2_BIGINT_DIV_##t
#define IP2_BIGINT_DIV_Int(lv,rv) (,BigInt,PP2_ARBITRARY_DIV(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_BIGINT_DIV_BigInt(lv,rv) (,BigInt,PP2_ARBITRARY_DIV(lv,rv))

#define PP2_DEF_BigInt_mod PP2_VM_FN(PP2_LANGUAGE_BIGINT_MOD,2)
#define PP2_LANGUAGE_BIGINT_MOD(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_MOD,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_MOD(P,la,lt,lv,ra,rt,rv) IP2_BIGINT_MOD_T(rt)(lv,rv)
#define IP2_BIGINT_MOD_T(t) IP2_BIGINT_MOD_##t
#define IP2_BIGINT_MOD_Int(lv,rv) (,BigInt,PP2_ARBITRARY_MOD(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_BIGINT_MOD_BigInt(lv,rv) (,BigInt,PP2_ARBITRARY_MOD(lv,rv))

#define PP2_DEF_BigInt_inc PP2_VM_FN(PP2_LANGUAGE_BIGINT_INC,1)
#define PP2_LANGUAGE_BIGINT_INC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_INC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_INC(P,addr,type,value) (,BigInt,PP2_ARBITRARY_INC(value))

#define PP2_DEF_BigInt_dec PP2_VM_FN(PP2_LANGUAGE_BIGINT_DEC,1)
#define PP2_LANGUAGE_BIGINT_DEC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_DEC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_DEC(P,addr,type,value) (,BigInt,PP2_ARBITRARY_DEC(value))

/* comparisons -> (,Bool,0|1), rhs-dispatched like the arithmetic */
#define PP2_DEF_BigInt_eq  PP2_VM_FN(PP2_LANGUAGE_BIGINT_EQ,2)
#define PP2_LANGUAGE_BIGINT_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_EQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_EQ(P,la,lt,lv,ra,rt,rv) IP2_BIGINT_EQ_T(rt)(lv,rv)
#define IP2_BIGINT_EQ_T(t) IP2_BIGINT_EQ_##t
#define IP2_BIGINT_EQ_Int(lv,rv) (,Bool,PP2_ARBITRARY_EQUAL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_BIGINT_EQ_BigInt(lv,rv) (,Bool,PP2_ARBITRARY_EQUAL(lv,rv))

#define PP2_DEF_BigInt_lt  PP2_VM_FN(PP2_LANGUAGE_BIGINT_LT,2)
#define PP2_LANGUAGE_BIGINT_LT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_LT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_LT(P,la,lt,lv,ra,rt,rv) IP2_BIGINT_LT_T(rt)(lv,rv)
#define IP2_BIGINT_LT_T(t) IP2_BIGINT_LT_##t
#define IP2_BIGINT_LT_Int(lv,rv) (,Bool,PP2_ARBITRARY_LESS(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_BIGINT_LT_BigInt(lv,rv) (,Bool,PP2_ARBITRARY_LESS(lv,rv))

#define PP2_DEF_BigInt_gt  PP2_VM_FN(PP2_LANGUAGE_BIGINT_GT,2)
#define PP2_LANGUAGE_BIGINT_GT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_GT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_GT(P,la,lt,lv,ra,rt,rv) IP2_BIGINT_GT_T(rt)(lv,rv)
#define IP2_BIGINT_GT_T(t) IP2_BIGINT_GT_##t
#define IP2_BIGINT_GT_Int(lv,rv) (,Bool,PP2_ARBITRARY_GREATER(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_BIGINT_GT_BigInt(lv,rv) (,Bool,PP2_ARBITRARY_GREATER(lv,rv))

#define PP2_DEF_BigInt_leq PP2_VM_FN(PP2_LANGUAGE_BIGINT_LEQ,2)
#define PP2_DEF_BigInt_lte PP2_VM_FN(PP2_LANGUAGE_BIGINT_LEQ,2)
#define PP2_LANGUAGE_BIGINT_LEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_LEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_LEQ(P,la,lt,lv,ra,rt,rv) IP2_BIGINT_LEQ_T(rt)(lv,rv)
#define IP2_BIGINT_LEQ_T(t) IP2_BIGINT_LEQ_##t
#define IP2_BIGINT_LEQ_Int(lv,rv) (,Bool,PP2_ARBITRARY_LESS_EQUAL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_BIGINT_LEQ_BigInt(lv,rv) (,Bool,PP2_ARBITRARY_LESS_EQUAL(lv,rv))

#define PP2_DEF_BigInt_geq PP2_VM_FN(PP2_LANGUAGE_BIGINT_GEQ,2)
#define PP2_DEF_BigInt_gte PP2_VM_FN(PP2_LANGUAGE_BIGINT_GEQ,2)
#define PP2_LANGUAGE_BIGINT_GEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_BIGINT_GEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_BIGINT_GEQ(P,la,lt,lv,ra,rt,rv) IP2_BIGINT_GEQ_T(rt)(lv,rv)
#define IP2_BIGINT_GEQ_T(t) IP2_BIGINT_GEQ_##t
#define IP2_BIGINT_GEQ_Int(lv,rv) (,Bool,PP2_ARBITRARY_GREATER_EQUAL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_BIGINT_GEQ_BigInt(lv,rv) (,Bool,PP2_ARBITRARY_GREATER_EQUAL(lv,rv))

#endif
