/** @file */
#ifndef PP2_MACHINE_GOTO_GOTO_H
#define PP2_MACHINE_GOTO_GOTO_H

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/assoc/find.h"


#define PP2_INSN_8PP2_GOTO(P,r0,r1,r2,label,...) \
                          (, \
                           P##r0,P##r1,P##r2, \
                           IP2_FX( \
                               GOTO_FIND_CONTINUATION, \
                               (,P##r0,P##r1,P##r2,P##label,IP2_GOTO_CTX_GET_LABELS P##r1,(P##__VA_ARGS__)) \
                           ) \
                          )
#define IP2_GOTO_FIND_CONTINUATION(P,r0,r1,r2,label,labels,vm_insns) \
        PP2_FX( \
            OPEN, \
            PP2_ASSOC_FIND(P##labels,P##label,(8PP2_GOTO_LABEL_NOT_FOUND,P##vm_insns)) \
        )
#define IP2_GOTO_CTX_GET_LABELS(P,stack,labels,...) P##labels

#define PP2_INSN_8PP2_GOTO_LABEL_NOT_FOUND(P,r0,r1,r2,vm_insns,...) (,P##r0,P##r1,P##r2,P##__VA_ARGS__)

#endif