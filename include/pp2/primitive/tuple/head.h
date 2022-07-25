#ifndef PP2_PRIMITIVE_TUPLE_HEAD_H
#define PP2_PRIMITIVE_TUPLE_HEAD_H

#define PP2_TUPLE_HEAD(x,...) x

#define PP2_QUOTE_TUPLE_HEAD(P,x,...) P##x


#define PP2_SPLIT_TUPLE_HEAD(x,...) x,(__VA_ARGS__)

#define PP2_QUOTE_SPLIT_TUPLE_HEAD(P,x,...) P##x,(P##__VA_ARGS__)

#endif