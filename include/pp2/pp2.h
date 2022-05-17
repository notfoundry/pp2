/** @file */
#ifndef PP2_H
#define PP2_H

#include "pp2/language/basic/block.h"

#include "pp2/machine/vm.h"
#include "pp2/machine/output.h"
#include "pp2/machine/insns/terminate.h"

/**
*
*/
#define PP2(...) PP2_MACHINE_OUTPUT(PP2_MACHINE(/*r0=*/,/*r1=*/(),/*r2=*/,PP2_LANGUAGE_BLOCK(__VA_ARGS__),8PP2_TERMINATE,))

#endif