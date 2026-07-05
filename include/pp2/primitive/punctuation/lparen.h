/** @file */
#ifndef PP2_PRIMITIVE_PUNCTUATION_LPAREN_H
#define PP2_PRIMITIVE_PUNCTUATION_LPAREN_H

/**
*/
#define PP2_LPAREN (

/**
* Yields an unmatched left parenthesis when called, but only after a rescan.
* Used with \link PP2_DEFER \endlink to place a `(` that must not pair eagerly
* during the sliding-window walks in the arbitrary-precision arithmetic.
*/
#define PP2_LPAREN_ID() PP2_LPAREN

#endif