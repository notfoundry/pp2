/** @file */
#ifndef PP2_MACHINE_EXCEPTION_THROW_H
#define PP2_MACHINE_EXCEPTION_THROW_H

#include "pp2/machine/exception/unwind.h"

/* Throw. An exception is a type token and a message.
 *
 * The whole of the throw is here: drop the instruction stream and start unwinding.
 * Dropping the stream (not forwarding `...`) is what abandons the rest of the try
 * body and everything that was pending after it -- in this VM the instruction stream
 * IS the continuation, so discarding the work costs nothing and needs no bookkeeping.
 * What is left is the local context, which is a value in a register and has to be
 * walked back down to the handler; 8PP2_UNWIND_STEP does that, and ends the program
 * if it finds no handler. See unwind.h. */
#define PP2_INSN_8PP2_THROW_EXCEPTION(P,r0,r1,r2,type,msg,...) \
        (,P##r0,P##r1,P##r2,8PP2_UNWIND_STEP,P##type,P##msg)

#endif
