/** @file */
#ifndef PP2_MACHINE_EXCEPTION_THROW_H
#define PP2_MACHINE_EXCEPTION_THROW_H

#include "pp2/primitive/assoc/find.h"

#define PP2_INSN_8PP2_THROW_EXCEPTION(P,r0,r1,r2,type,msg,...) )(,8LITERAL,P##type(P##msg))

#endif