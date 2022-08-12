#ifndef PP2_PRIMITIVE_SEQ_HEAD_H
#define PP2_PRIMITIVE_SEQ_HEAD_H

#include "pp2/primitive/tuple/at.h"

#define PP2_SEQ_HEAD(seq) IP2_SEQ_HEAD_I(,PP2_SEQ_OPEN_SPLIT_HEAD seq)
#define IP2_SEQ_HEAD_I(P,x) PP2_TUPLE_AT_0(,x)

#define PP2_SEQ_SPLIT_HEAD(...) (__VA_ARGS__),

#define PP2_SEQ_OPEN_SPLIT_HEAD(...) __VA_ARGS__,

#endif