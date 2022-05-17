/** @file */
#ifndef PP2_PRIMITIVE_BASIC_INVOKE_H
#define PP2_PRIMITIVE_BASIC_INVOKE_H


/**
*
*/
#define PP2_FX(f,x) PP2_##f x
/**
*
*/
#define PP2_FY(f,y) PP2_##f y
/**
*
*/
#define PP2_FZ(f,z) PP2_##f z
/**
*
*/
#define PP2_FW(f,w) PP2_##f w


/**
*
*/
#define IP2_FX(f,x) IP2_##f x
/**
*
*/
#define IP2_FY(f,y) IP2_##f y
/**
*
*/
#define IP2_FZ(f,z) IP2_##f z
/**
*
*/
#define IP2_FW(f,w) IP2_##f w


/**
*
*/
#define PP2_INVOKE(K,...) PP2_##K(,__VA_ARGS__

/**
*
*/
#define IP2_INVOKE(K,...) IP2_##K(,__VA_ARGS__

#endif