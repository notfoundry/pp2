/** @file */
#ifndef PP2_MACHINE_EXCEPTION_PUSH_EH_H
#define PP2_MACHINE_EXCEPTION_PUSH_EH_H

#include "pp2/machine/context.h"

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"

/* Install an exception handler by pushing it onto the spill stack, tagged 8E, in
 * among the activation frames and spilled argument lists it will have to unwind past.
 *
 * Living on that one stack is what makes the nesting come out right for free. Handlers
 * shadow one another because the stack is a LIFO, so a throw meets the innermost first.
 * A throw is popping frames off the same stack it is looking for a handler on, so it
 * cannot pass a handler without having already restored everything the handler's scope
 * expects to see. And nothing has to be kept in step with anything else, because there
 * is only the one structure.
 *
 * The entry carries three things: the handler continuation, and snapshots of the labels
 * and the pending arguments as they stand here.
 *
 * Those two are snapshotted and the local stack deliberately is NOT, and the difference
 * is the whole distinction the semantics turn on. The local stack is what the program
 * SAYS -- the try body's assignments are real and a throw must not undo them -- so it is
 * recovered by restoring activation frames on the way out (see unwind.h), which discards
 * only the callee's locals and keeps the try scope's own. Labels and pending arguments
 * are what the machine happens to be in the MIDDLE of -- a half-walked loop, a half-built
 * call whose operands are still parked -- and at the moment of a throw that state is
 * meaningless debris. Keeping it would hand the handler a stale parked callee. So they
 * are restored to what they were when the try began.
 *
 * See PP2_INSN_8PP2_POP_EXCEPTION_HANDLER for the matching pop and unwind.h for the walk. */
#define PP2_INSN_8PP2_PUSH_EXCEPTION_HANDLER(P,r0,r1,r2,handler,...) \
                                            (, \
                                             P##r0, \
                                             /*r1=*/IP2_FX(PUSH_EXCEPTION_HANDLER_I,(P##handler,PP2_OPEN P##r1)), \
                                             P##r2, \
                                             P##__VA_ARGS__ \
                                            )

#define IP2_PUSH_EXCEPTION_HANDLER_I(handler,\
                                     P,stack,labels,arguments,registers,_) \
        (,P##stack,P##labels,P##arguments,/*registers=*/(8E,P##labels,(P##arguments),P##handler)P##registers,)

#endif
