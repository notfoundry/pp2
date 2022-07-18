/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_CONST_H
#define PP2_LANGUAGE_DEFINITION_CONST_H

#include "pp2/machine/insns/load.h"

#define PP2_CONST(type,value) )PP2_COMPILE_CONST(type,value,

#define PP2_COMPILE_CONST(type,value,rhs_stx) 8PP2_LOAD_CONST,(,type,value),PP2_COMPILE_LANGUAGE_RETURN(rhs_stx)

#endif