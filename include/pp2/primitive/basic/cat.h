/** @file */
#ifndef PP2_PRIMITIVE_BASIC_CAT_H
#define PP2_PRIMITIVE_BASIC_CAT_H

#define PP2_PRIMITIVE_CAT(a,...) a##__VA_ARGS__

#define PP2_CAT(a,...) PP2_PRIMITIVE_CAT(a,__VA_ARGS__)

#endif