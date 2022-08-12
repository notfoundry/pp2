/** @file */
#ifndef PP2_PRIMITIVE_CONTROL_IF_H
#define PP2_PRIMITIVE_CONTROL_IF_H

#include "pp2/primitive/basic/cat.h"

#define PP2_IF(...) PP2_PRIMITIVE_CAT(PP2_IF_,__VA_ARGS__)
#define PP2_IF_0(t,...) __VA_ARGS__
#define PP2_IF_1(t,...) t

#endif