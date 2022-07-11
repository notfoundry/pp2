/** @file */
#ifndef PP2_MACHINE_EXCEPTION_THROW_H
#define PP2_MACHINE_EXCEPTION_THROW_H

#include "pp2/primitive/assoc/find.h"

#define PP2_INSN_8PP2_THROW_EXCEPTION(P,r0,r1,r2,type,...) (,P##r0,P##r1,P##r2,PP2_ASSOC_FIND(),P##__VA_ARGS__)

#endif