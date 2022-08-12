/** @file */
#ifndef PP2_PRIMITIVE_TUPLE_HIGHER_ORDER_COMPUTE_H
#define PP2_PRIMITIVE_TUPLE_HIGHER_ORDER_COMPUTE_H

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/tuple/partition.h"

#define PP2_TUPLE_COMPUTE(t,i,f,...) IP2_FX(TUPLE_COMPUTE_I,(,PP2_PRIMITIVE_CAT(PP2_TUPLE_PARTITION_,i) t,f,__VA_ARGS__))
#define IP2_TUPLE_COMPUTE_I(P,lhs,center,rhs,f,...) (,PP2_OPEN P##lhs f(,P##center,P##__VA_ARGS__) PP2_OPEN P##rhs)

#endif