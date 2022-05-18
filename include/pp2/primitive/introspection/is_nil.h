/** @file */
#ifndef PP2_PRIMITIVE_INTROSPECTION_IS_NIL_H
#define PP2_PRIMITIVE_INTROSPECTION_IS_NIL_H

#include "pp2/primitive/introspection/is_tuple.h"
#include "pp2/primitive/control/if.h"

#define PP2_IS_NIL(x) PP2_IF(PP2_IS_TUPLE(x))(0,PP2_IS_TUPLE(x()))

#define PP2_IS_NIL_NON_TUPLE(x) PP2_IS_TUPLE(x())

#endif