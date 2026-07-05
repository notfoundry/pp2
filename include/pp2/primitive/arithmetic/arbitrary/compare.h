/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_COMPARE_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_COMPARE_H

#include "pp2/primitive/core.h"
#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/facilities/indirect.h"
#include "pp2/primitive/arithmetic/arbitrary/sign.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/fix.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/rel.h"
#include "pp2/primitive/arithmetic/arbitrary/detail/merge.h"

/* Three-way comparison. PP2_ARBITRARY_CMP(x,y) -> 0 if x<y, 1 if x==y, 2 if x>y.
 * The MSD-first FMERGE threads a running verdict: once a more significant column
 * decides <, it stays 0 (CMP_M_0); once it decides >, it stays 2 (CMP_M_2);
 * while equal it consults the single-digit relation (CMP_M_1). The six relations
 * are simple maps over the three-way result. */

#define PP2_ARBITRARY_CMP_INTERNAL(x, y) \
    PP2_SCAN(PP2_ARBITRARY_CMP_M(1) PP2_ARBITRARY_FMERGE(x, y, PP2_ARBITRARY_CMP_M, 0)(PP2_ARBITRARY_CMP_FIN))

#define PP2_ARBITRARY_CMP_M(x) PP2_ARBITRARY_CMP_M_ ## x
#define PP2_ARBITRARY_CMP_M_0(a, b) PP2_INDIRECT(0)
#define PP2_ARBITRARY_CMP_M_1(a, b) PP2_INDIRECT(PP2_ARBITRARY_REL(a, b))
#define PP2_ARBITRARY_CMP_M_2(a, b) PP2_INDIRECT(2)
#define PP2_ARBITRARY_CMP_FIN(state) state

/* sign-aware dispatch: any negative < any non-negative; both-negative reverses */
#define PP2_ARBITRARY_CMP(x, y) PP2_ARBITRARY_CMP_DISP(PP2_ARBITRARY_FIX(x), PP2_ARBITRARY_FIX(y))
#define PP2_ARBITRARY_CMP_DISP(x, y) PP2_ARBITRARY_CMP_CAT(PP2_ARBITRARY_SIGN(x)(,1,0), PP2_ARBITRARY_SIGN(y)(,1,0))(x, y)
#define PP2_ARBITRARY_CMP_CAT(a, b) PP2_ARBITRARY_CMP_CAT_I(a, b)
#define PP2_ARBITRARY_CMP_CAT_I(a, b) PP2_ARBITRARY_CMP_S_##a##b
#define PP2_ARBITRARY_CMP_S_00(x, y) PP2_ARBITRARY_CMP_INTERNAL(x, y)
#define PP2_ARBITRARY_CMP_S_01(x, y) 2
#define PP2_ARBITRARY_CMP_S_10(x, y) 0
#define PP2_ARBITRARY_CMP_S_11(x, y) PP2_ARBITRARY_CMP_INTERNAL(PP2_OPEN y, PP2_OPEN x)

/* derived relations: bare 0/1 tokens. The _MAP indirection forces CMP to expand
 * to a 0/1/2 token before it is pasted onto the relation prefix. */
#define PP2_ARBITRARY_LESS_EQUAL(x, y)    PP2_ARBITRARY_LEQ_MAP(PP2_ARBITRARY_CMP(x, y))
#define PP2_ARBITRARY_LESS(x, y)          PP2_ARBITRARY_LT_MAP(PP2_ARBITRARY_CMP(x, y))
#define PP2_ARBITRARY_GREATER_EQUAL(x, y) PP2_ARBITRARY_GEQ_MAP(PP2_ARBITRARY_CMP(x, y))
#define PP2_ARBITRARY_GREATER(x, y)       PP2_ARBITRARY_GT_MAP(PP2_ARBITRARY_CMP(x, y))
#define PP2_ARBITRARY_EQUAL(x, y)         PP2_ARBITRARY_EQ_MAP(PP2_ARBITRARY_CMP(x, y))
#define PP2_ARBITRARY_NOT_EQUAL(x, y)     PP2_ARBITRARY_NEQ_MAP(PP2_ARBITRARY_CMP(x, y))

#define PP2_ARBITRARY_LEQ_MAP(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_LEQ_,c)
#define PP2_ARBITRARY_LT_MAP(c)  PP2_PRIMITIVE_CAT(PP2_ARBITRARY_LT_, c)
#define PP2_ARBITRARY_GEQ_MAP(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_GEQ_,c)
#define PP2_ARBITRARY_GT_MAP(c)  PP2_PRIMITIVE_CAT(PP2_ARBITRARY_GT_, c)
#define PP2_ARBITRARY_EQ_MAP(c)  PP2_PRIMITIVE_CAT(PP2_ARBITRARY_EQ_, c)
#define PP2_ARBITRARY_NEQ_MAP(c) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_NEQ_,c)

#define PP2_ARBITRARY_LEQ_0 1
#define PP2_ARBITRARY_LEQ_1 1
#define PP2_ARBITRARY_LEQ_2 0
#define PP2_ARBITRARY_LT_0 1
#define PP2_ARBITRARY_LT_1 0
#define PP2_ARBITRARY_LT_2 0
#define PP2_ARBITRARY_GEQ_0 0
#define PP2_ARBITRARY_GEQ_1 1
#define PP2_ARBITRARY_GEQ_2 1
#define PP2_ARBITRARY_GT_0 0
#define PP2_ARBITRARY_GT_1 0
#define PP2_ARBITRARY_GT_2 1
#define PP2_ARBITRARY_EQ_0 0
#define PP2_ARBITRARY_EQ_1 1
#define PP2_ARBITRARY_EQ_2 0
#define PP2_ARBITRARY_NEQ_0 1
#define PP2_ARBITRARY_NEQ_1 0
#define PP2_ARBITRARY_NEQ_2 1

#endif
