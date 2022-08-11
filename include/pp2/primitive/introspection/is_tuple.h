/** @file */
#ifndef PP2_PRIMITIVE_INTROSPECTION_IS_TUPLE_H
#define PP2_PRIMITIVE_INTROSPECTION_IS_TUPLE_H

#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/control/if.h"

#define PP2_IS_TUPLE(x) IP2_IS_TUPLE_TEST_I(IP2_IS_TUPLE_TEST_DETECT_TUPLE x,1,0)
#define IP2_IS_TUPLE_TEST_I(...) PP2_TUPLE_AT_2(PP2_IF_,__VA_ARGS__)
#define IP2_IS_TUPLE_TEST_DETECT_TUPLE(...) ,

#endif