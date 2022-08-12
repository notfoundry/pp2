/** @file */
#ifndef PP2_PRIMITIVE_ASSOC_FIND_H
#define PP2_PRIMITIVE_ASSOC_FIND_H

#include "pp2/primitive/assoc/detail/find_tables.h"
#include "pp2/primitive/tuple/at.h"

#define PP2_ASSOC_FIND(aseq,key,default) IP2_ASSOC_FIND_I(default,IP2_LOOKUP_MATCH_UP_##key aseq)
#define IP2_ASSOC_FIND_I(default,lookup) PP2_TUPLE_AT_1(,lookup,default)

#endif