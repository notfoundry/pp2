/** @file */ 
#ifndef PP2_PRIMITIVE_CORE_H
#define PP2_PRIMITIVE_CORE_H

/**
* Substitutes all of the provided macro arguments into the macro replacement list without changing them.
*
* This is typically used to force an additional scan over the tokens in the macro arguments,
* allowing additional macro expansions to take place if any are legal to perform.
* This only differs from \link PP2_OPEN \endlink in its intended use, as demonstrated:
* \code{.c}
* #define FOO(x) PP2_SCAN(x)
* #define BAR 123
* FOO(BAR PP2_BLOCK ()) // 123
*
* // compared to...
*
* #define FOO(x) PP2_OPEN x
* FOO((1,2,3)) // 1,2,3
* \endcode
*
* @param ... the token sequence to scan
*/
#define PP2_SCAN(...) __VA_ARGS__

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

/**
* Substitutes no tokens into the macro replacmeent list, effectively advancing the macro evaluator ahead
* by one token and performing a no-op.
*/
#define PP2_BLOCK

#endif