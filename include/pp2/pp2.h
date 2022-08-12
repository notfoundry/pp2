/** @file */
#ifndef PP2_H
#define PP2_H

#include "pp2/language.h"

#include "pp2/machine/vm.h"
#include "pp2/machine/context.h"
#include "pp2/machine/output.h"
#include "pp2/machine/insns/terminate.h"

/**
*
*/
#define PP2(...) \
        PP2_VM_OUTPUT( \
                      PP2_VM( \
                             /*r0=*/, \
                             /*r1=*/PP2_DEFAULT_LOCAL_CTX, \
                             /*r2=*/PP2_DEFAULT_VM_STATE, \
                             /*insn=*/ \
                                PP2_LANGUAGE_BLOCK(__VA_ARGS__), \
                                8PP2_TERMINATE,\
                      ) \
        )

#endif