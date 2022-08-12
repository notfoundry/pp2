/** @file */
#ifndef PP2_PRIMITIVE_TUPLE_OPEN_H
#define PP2_PRIMITIVE_TUPLE_OPEN_H

/**
* Removes the parentheses surrounding the provided macro arguments, and substitutes the tokens contained
* between those parentheses into the macro replacement list without changing them.
*
* See \link PP2_SCAN \endlink for a comparison between these two macros.
*
* @param ... the token sequence to have the outermost parentheses stripped from
*/
#define PP2_OPEN(...) __VA_ARGS__

/**
* @param P
* @param ...
*/
#define PP2_QUOTE_OPEN(P,...) P##__VA_ARGS__

#endif