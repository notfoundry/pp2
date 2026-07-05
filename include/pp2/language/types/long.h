/** @file */
#ifndef PP2_LANGUAGE_TYPES_LONG_H
#define PP2_LANGUAGE_TYPES_LONG_H

#include "pp2/language/basic/object.h"
#include "pp2/language/definition/const.h"
#include "pp2/language/definition/type.h"
#include "pp2/language/definition/vm_fn.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/arithmetic/arbitrary.h"

/* Long is the ARBITRARY-precision integer: its value is a canonical decimal
 * digit-seq, (1)(2)(8) == 128, ((1)) == -1, unbounded length, signed. All of
 * its arithmetic is the arbitrary layer. Long is contagious: any operation
 * with a Long operand yields a Long (an Int rhs is promoted). Ints promote
 * themselves INTO Long only when a result leaves 0..127 (see int.h).
 *
 * Construction: Long (5) promotes a literal Int; Long (((1)(2)(8))) builds
 * 128 from a quoted digit-seq (normalized by FIX; a quote's value keeps its
 * wrapping parens, so the constructor OPENs it -- and one EXTRA wrap therefore
 * denotes a negative: Long ((((1)(2)(8)))) == -128); Long of a Long is
 * identity. */

#define PP2_DEF_Long PP2_TYPE(Long,Any)
#define PP2_SYM_Long(...) __VA_ARGS__

#define PP2_DEF_Long_construct PP2_VM_FN(PP2_LANGUAGE_LONG_CONSTRUCT,2)
#define PP2_LANGUAGE_LONG_CONSTRUCT(P,r0,r1,r2,self,arg0,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_CONSTRUCT,(,PP2_OPEN P##arg0)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_CONSTRUCT(P,addr,type,value) IP2_LONG_CONSTRUCT_T(type)(value)
#define IP2_LONG_CONSTRUCT_T(t) IP2_LONG_CONSTRUCT_##t
#define IP2_LONG_CONSTRUCT_Int(v) (,Long,PP2_ARBITRARY_PROMOTE(v))
#define IP2_LONG_CONSTRUCT_Long(v) (,Long,v)
#define IP2_LONG_CONSTRUCT_Quote(v) (,Long,PP2_ARBITRARY_FIX(PP2_OPEN v))
#define IP2_LONG_CONSTRUCT_Seq(v) (,Long,PP2_ARBITRARY_FIX(v))

/* str: demote the digit-seq back to native tokens (a negative emits the sign
 * as its own token: ((1)(2)) -> - 12). */
#define PP2_DEF_Long_str PP2_VM_FN(PP2_LANGUAGE_LONG_STR,1)
#define PP2_LANGUAGE_LONG_STR(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_STR,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_STR(P,addr,type,value) PP2_ARBITRARY_DEMOTE(value)

/* binary arithmetic: dispatch on the rhs type, promoting an Int rhs */
#define PP2_DEF_Long_plus PP2_VM_FN(PP2_LANGUAGE_LONG_PLUS,2)
#define PP2_LANGUAGE_LONG_PLUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_PLUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_PLUS(P,la,lt,lv,ra,rt,rv) IP2_LONG_PLUS_T(rt)(lv,rv)
#define IP2_LONG_PLUS_T(t) IP2_LONG_PLUS_##t
#define IP2_LONG_PLUS_Int(lv,rv) (,Long,PP2_ARBITRARY_ADD(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_PLUS_Long(lv,rv) (,Long,PP2_ARBITRARY_ADD(lv,rv))

#define PP2_DEF_Long_minus PP2_VM_FN(PP2_LANGUAGE_LONG_MINUS,2)
#define PP2_LANGUAGE_LONG_MINUS(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_MINUS,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_MINUS(P,la,lt,lv,ra,rt,rv) IP2_LONG_MINUS_T(rt)(lv,rv)
#define IP2_LONG_MINUS_T(t) IP2_LONG_MINUS_##t
#define IP2_LONG_MINUS_Int(lv,rv) (,Long,PP2_ARBITRARY_SUB(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_MINUS_Long(lv,rv) (,Long,PP2_ARBITRARY_SUB(lv,rv))

#define PP2_DEF_Long_times PP2_VM_FN(PP2_LANGUAGE_LONG_TIMES,2)
#define PP2_DEF_Long_mul   PP2_VM_FN(PP2_LANGUAGE_LONG_TIMES,2)
#define PP2_LANGUAGE_LONG_TIMES(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_TIMES,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_TIMES(P,la,lt,lv,ra,rt,rv) IP2_LONG_TIMES_T(rt)(lv,rv)
#define IP2_LONG_TIMES_T(t) IP2_LONG_TIMES_##t
#define IP2_LONG_TIMES_Int(lv,rv) (,Long,PP2_ARBITRARY_MUL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_TIMES_Long(lv,rv) (,Long,PP2_ARBITRARY_MUL(lv,rv))

#define PP2_DEF_Long_div PP2_VM_FN(PP2_LANGUAGE_LONG_DIV,2)
#define PP2_LANGUAGE_LONG_DIV(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_DIV,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_DIV(P,la,lt,lv,ra,rt,rv) IP2_LONG_DIV_T(rt)(lv,rv)
#define IP2_LONG_DIV_T(t) IP2_LONG_DIV_##t
#define IP2_LONG_DIV_Int(lv,rv) (,Long,PP2_ARBITRARY_DIV(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_DIV_Long(lv,rv) (,Long,PP2_ARBITRARY_DIV(lv,rv))

#define PP2_DEF_Long_mod PP2_VM_FN(PP2_LANGUAGE_LONG_MOD,2)
#define PP2_LANGUAGE_LONG_MOD(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_MOD,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_MOD(P,la,lt,lv,ra,rt,rv) IP2_LONG_MOD_T(rt)(lv,rv)
#define IP2_LONG_MOD_T(t) IP2_LONG_MOD_##t
#define IP2_LONG_MOD_Int(lv,rv) (,Long,PP2_ARBITRARY_MOD(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_MOD_Long(lv,rv) (,Long,PP2_ARBITRARY_MOD(lv,rv))

#define PP2_DEF_Long_inc PP2_VM_FN(PP2_LANGUAGE_LONG_INC,1)
#define PP2_LANGUAGE_LONG_INC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_INC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_INC(P,addr,type,value) (,Long,PP2_ARBITRARY_INC(value))

#define PP2_DEF_Long_dec PP2_VM_FN(PP2_LANGUAGE_LONG_DEC,1)
#define PP2_LANGUAGE_LONG_DEC(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_DEC,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_DEC(P,addr,type,value) (,Long,PP2_ARBITRARY_DEC(value))

/* comparisons -> (,Bool,0|1), rhs-dispatched like the arithmetic */
#define PP2_DEF_Long_eq  PP2_VM_FN(PP2_LANGUAGE_LONG_EQ,2)
#define PP2_LANGUAGE_LONG_EQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_EQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_EQ(P,la,lt,lv,ra,rt,rv) IP2_LONG_EQ_T(rt)(lv,rv)
#define IP2_LONG_EQ_T(t) IP2_LONG_EQ_##t
#define IP2_LONG_EQ_Int(lv,rv) (,Bool,PP2_ARBITRARY_EQUAL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_EQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_EQUAL(lv,rv))

#define PP2_DEF_Long_lt  PP2_VM_FN(PP2_LANGUAGE_LONG_LT,2)
#define PP2_LANGUAGE_LONG_LT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_LT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_LT(P,la,lt,lv,ra,rt,rv) IP2_LONG_LT_T(rt)(lv,rv)
#define IP2_LONG_LT_T(t) IP2_LONG_LT_##t
#define IP2_LONG_LT_Int(lv,rv) (,Bool,PP2_ARBITRARY_LESS(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_LT_Long(lv,rv) (,Bool,PP2_ARBITRARY_LESS(lv,rv))

#define PP2_DEF_Long_gt  PP2_VM_FN(PP2_LANGUAGE_LONG_GT,2)
#define PP2_LANGUAGE_LONG_GT(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_GT,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_GT(P,la,lt,lv,ra,rt,rv) IP2_LONG_GT_T(rt)(lv,rv)
#define IP2_LONG_GT_T(t) IP2_LONG_GT_##t
#define IP2_LONG_GT_Int(lv,rv) (,Bool,PP2_ARBITRARY_GREATER(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_GT_Long(lv,rv) (,Bool,PP2_ARBITRARY_GREATER(lv,rv))

#define PP2_DEF_Long_leq PP2_VM_FN(PP2_LANGUAGE_LONG_LEQ,2)
#define PP2_DEF_Long_lte PP2_VM_FN(PP2_LANGUAGE_LONG_LEQ,2)
#define PP2_LANGUAGE_LONG_LEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_LEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_LEQ(P,la,lt,lv,ra,rt,rv) IP2_LONG_LEQ_T(rt)(lv,rv)
#define IP2_LONG_LEQ_T(t) IP2_LONG_LEQ_##t
#define IP2_LONG_LEQ_Int(lv,rv) (,Bool,PP2_ARBITRARY_LESS_EQUAL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_LEQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_LESS_EQUAL(lv,rv))

#define PP2_DEF_Long_geq PP2_VM_FN(PP2_LANGUAGE_LONG_GEQ,2)
#define PP2_DEF_Long_gte PP2_VM_FN(PP2_LANGUAGE_LONG_GEQ,2)
#define PP2_LANGUAGE_LONG_GEQ(P,r0,r1,r2,lhs_obj,rhs_obj,...) (,/*r0=*/IP2_FX(LANGUAGE_LONG_GEQ,(,PP2_OPEN P##lhs_obj,PP2_OPEN P##rhs_obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_LONG_GEQ(P,la,lt,lv,ra,rt,rv) IP2_LONG_GEQ_T(rt)(lv,rv)
#define IP2_LONG_GEQ_T(t) IP2_LONG_GEQ_##t
#define IP2_LONG_GEQ_Int(lv,rv) (,Bool,PP2_ARBITRARY_GREATER_EQUAL(lv,PP2_ARBITRARY_PROMOTE(rv)))
#define IP2_LONG_GEQ_Long(lv,rv) (,Bool,PP2_ARBITRARY_GREATER_EQUAL(lv,rv))

#endif
