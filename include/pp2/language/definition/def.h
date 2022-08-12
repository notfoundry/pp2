/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_DEF_H
#define PP2_LANGUAGE_DEFINITION_DEF_H

#include "pp2/language/basic/return.h"
#include "pp2/language/compiler.h"

#define PP2_DEF(stx) )PP2_COMPILE_DEF(stx,
#define PP2_COMPILE_DEF(stx,rhs_stx) 8PP2_LANGUAGE_COMPILE,stx,PP2_COMPILE_LANGUAGE_RETURN(rhs_stx)

#endif