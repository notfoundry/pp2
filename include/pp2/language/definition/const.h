/** @file */
#ifndef PP2_LANGUAGE_DEFINITION_CONST_H
#define PP2_LANGUAGE_DEFINITION_CONST_H

#include "pp2/machine/insns/load.h"

#define PP2_CONST(type,value) 8PP2_LOAD_CONST,(,type,value),8PP2_LANGUAGE_RETURN,

#endif