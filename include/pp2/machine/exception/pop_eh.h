/** @file */
#ifndef PP2_MACHINE_EXCEPTION_POP_EH_H
#define PP2_MACHINE_EXCEPTION_POP_EH_H

#include "pp2/machine/context.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/tuple/open.h"

/* Uninstall the innermost handler, run when a protected body finishes without throwing.
 *
 * Dropping the front entry is enough. Everything the body pushed onto the spill stack
 * -- activation frames, spilled argument lists -- is strictly balanced and has already
 * been popped by the time the body ends, so the handler this try installed is back on
 * top. r0 is left alone: it still holds whatever the body produced, which is the value
 * of the try. */
#define PP2_INSN_8PP2_POP_EXCEPTION_HANDLER(P,r0,r1,r2,...) \
                                           (, \
                                            P##r0, \
                                            /*r1=*/IP2_FX(POP_EXCEPTION_HANDLER_I,(PP2_OPEN P##r1)), \
                                            P##r2, \
                                            P##__VA_ARGS__ \
                                           )

#define IP2_POP_EXCEPTION_HANDLER_I(P,stack,labels,arguments,registers,_) \
        (,P##stack,P##labels,P##arguments,/*registers=*/PP2_EAT P##registers,)

#endif
