/** @file */
#ifndef PP2_MACHINE_GOTO_LABEL_H
#define PP2_MACHINE_GOTO_LABEL_H

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"

#define PP2_INSN_8PP2_LABEL(P,r0,r1,r2,label,body,...) \
                                (, \
                                    P##r0, \
                                    /*r1=*/IP2_FX( \
                                        LABEL_I, \
                                        (P##label,P##body,PP2_OPEN P##r1)\
                                    ), \
                                    P##r2, \
                                    P##__VA_ARGS__ \
                                )

#define IP2_LABEL_I(label,body,\
                    P,stack,labels,...) \
        (,P##stack,(,P##label,P##body)P##labels,P##__VA_ARGS__)

#endif