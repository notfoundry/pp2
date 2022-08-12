/** @file */
#ifndef PP2_PRIMITIVE_INTROSPECTION_IS_NESTABLE_H
#define PP2_PRIMITIVE_INTROSPECTION_IS_NESTABLE_H

#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/control/if.h"

#define PP2_IS_NESTABLE(m0,m1) IP2_IS_NESTABLE_I(m0(m1)(,),0,1)
#define IP2_IS_NESTABLE_I(...) PP2_TUPLE_AT_2(PP2_IF_,__VA_ARGS__)

#endif