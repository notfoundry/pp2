/** @file */
#ifndef PP2_MACHINE_EXCEPTION_PUSH_EH_H
#define PP2_MACHINE_EXCEPTION_PUSH_EH_H

#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"

#define PP2_INSN_8PP2_PUSH_EXCEPTION_HANDLER(P,r0,r1,r2,type,handler,...) \
                                            (, \
                                             P##r0,P##r1, \
                                             /*r2=*/IP2_FX( \
                                                 PUSH_EXCEPTION_HANDLER_I, \
                                                 (P##type,P##handler,PP2_OPEN P##r2)\
                                             ), \
                                             P##__VA_ARGS__ \
                                            )

#define IP2_PUSH_EXCEPTION_HANDLER_I(type,handler,\
                                     P,heap,eh_stack,...) \
        (,P##heap,(,P##type,P##handler)P##eh_stack,P##__VA_ARGS__)

#endif