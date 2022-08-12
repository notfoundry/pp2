#ifndef PP2_PRIMITIVE_SEQ_TAIL_H
#define PP2_PRIMITIVE_SEQ_TAIL_H

#include "pp2/primitive/seq/head.h"
#include "pp2/primitive/tuple/at.h"

#define PP2_SEQ_TAIL(seq) IP2_SEQ_TAIL_I(PP2_SEQ_SPLIT_HEAD seq)
#define IP2_SEQ_TAIL_I(x) PP2_TUPLE_AT_1(,x)

#endif
