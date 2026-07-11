/** @file */
#ifndef PP2_MACHINE_EXCEPTION_UNWIND_H
#define PP2_MACHINE_EXCEPTION_UNWIND_H

#include "pp2/machine/context.h"

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/seq/head.h"
#include "pp2/primitive/tuple/open.h"

/* Unwinding, one spill-stack entry at a time.
 *
 * A throw abandons the instruction stream it was running in, which discards all the
 * pending WORK for free, but the local context is a value in a register and does not
 * unwind by itself. So a throw hands over to this, which walks the spill stack from
 * the top and undoes each entry until it reaches an installed handler:
 *
 *   (8F,stack)  a callee's activation frame. Give the caller's stack back.
 *   (8A,args)   an argument list spilled to evaluate a nested call. Restore it.
 *   (8E,labels,handler)  a handler. Take its labels back and run its continuation.
 *   ()          the bottom. Nobody was catching, so the program ends.
 *
 * Restoring rather than snapshotting is what keeps the try scope's own writes. Each
 * 8F we pass hands back the stack as it stood when that call was made, so the LAST
 * one we reach -- the first frame entered after the try -- leaves us holding exactly
 * the try scope's locals, including everything it assigned before it threw. A throw
 * with no call in flight passes no 8F at all and simply keeps the live stack. Only
 * the callee frames are discarded, which is the whole point.
 *
 * This is a loop in the VM, not in the macro expander: each step re-issues
 * 8PP2_UNWIND_STEP into the instruction stream and the trampoline decodes it afresh.
 * So the depth it can unwind is unbounded and nothing here can be blue-painted.
 * It runs only on a throw, and only for as deep as the throw actually was. */
#define PP2_INSN_8PP2_UNWIND_STEP(P,r0,r1,r2,type,msg,...) \
        IP2_FX(UNWIND_OPEN,(,P##r0,P##r2,P##type,P##msg,PP2_OPEN P##r1))

/* r1 opens to `,stack,labels,arguments,registers,`, which hands this hop a fresh
 * empty P of its own. */
#define IP2_UNWIND_OPEN(P,r0,r2,type,msg,Q,stack,labels,arguments,registers,_) \
        IP2_FY(UNWIND_SPLIT,(,P##r0,P##r2,P##type,P##msg,P##stack,P##labels,P##arguments,PP2_SEQ_SPLIT_HEAD P##registers))

#define IP2_UNWIND_SPLIT(P,r0,r2,type,msg,stack,labels,arguments,entry,rest) \
        PP2_CAT(IP2_UNWIND_,IP2_UNWIND_TAG_OF P##entry) \
            (,P##r0,P##r2,P##type,P##msg,P##stack,P##labels,P##arguments,P##entry,P##rest)

/* The tag is the entry's first element. The bottom sentinel () has none, and an
 * empty tag pastes to IP2_UNWIND_, the uncaught case. */
#define IP2_UNWIND_TAG_OF(...) IP2_UNWIND_TAG_OF_I(__VA_ARGS__,)
#define IP2_UNWIND_TAG_OF_I(tag,...) tag


#define IP2_UNWIND_8F(P,r0,r2,type,msg,stack,labels,arguments,entry,rest) \
        (, \
         P##r0, \
         /*r1=*/(,IP2_UNTAG P##entry,P##labels,P##arguments,P##rest,), \
         P##r2, \
         8PP2_UNWIND_STEP,P##type,P##msg \
        )

/* A spilled argument list. Just drop it. The pending arguments are not restored from
 * these on the way past, because a throw catches the machine mid-expression and every
 * argument list between here and the handler belongs to a call that is now abandoned.
 * The handler's own entry carries the only argument list that still means anything. */
#define IP2_UNWIND_8A(P,r0,r2,type,msg,stack,labels,arguments,entry,rest) \
        (, \
         P##r0, \
         /*r1=*/(,P##stack,P##labels,P##arguments,P##rest,), \
         P##r2, \
         8PP2_UNWIND_STEP,P##type,P##msg \
        )

/* The handler. Labels and pending arguments come back from its snapshot, so a throw out
 * of a loop leaves no loop labels behind and a throw out of a half-built call leaves no
 * parked callee sitting in the argument list. The local stack is whatever the walk has
 * left us holding, which is the try scope's own -- assignments and all. The exception
 * lands in r0 as a Quote of the thrown TYPE(message) so a `catch (e)` can name it. The
 * entry is dropped on the way through, so a throw raised inside this handler walks past
 * it to the next handler out. */
#define IP2_UNWIND_8E(P,r0,r2,type,msg,stack,labels,arguments,entry,rest) \
        IP2_FZ(UNWIND_HANDLER,(,P##r2,P##type,P##msg,P##stack,P##rest,PP2_OPEN P##entry))

#define IP2_UNWIND_HANDLER(P,r2,type,msg,stack,rest,Q,eh_labels,eh_arguments,handler) \
        (, \
         /*r0=*/(,Quote,(P##type(P##msg))), \
         /*r1=*/(,P##stack,P##eh_labels,PP2_OPEN P##eh_arguments,P##rest,), \
         P##r2, \
         PP2_OPEN P##handler \
        )

/* Bottom of the spill stack: nothing was catching. End the program exactly as an
 * uncaught throw always has -- the `)` closes the VM's own paren so the machine trace
 * stops being eaten, and the exception leaves as one emitted literal. */
#define IP2_UNWIND_(P,r0,r2,type,msg,stack,labels,arguments,entry,rest) \
        )(,8LITERAL,P##type(P##msg))

#endif
