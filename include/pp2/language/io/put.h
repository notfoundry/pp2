#ifndef PP2_LANGUAGE_IO_PUT_H
#define PP2_LANGUAGE_IO_PUT_H

#include "pp2/language/compiler.h"
#include "pp2/language/basic/return.h"

#include "pp2/machine/insns/emit.h"

#define PP2_DEF_put(stx) PP2_PRIMITIVE(8PP2_LANGUAGE_PUT,stx)

#define PP2_INSN_8PP2_LANGUAGE_PUT(P,r0,r1,r2,stx,...) (,/*r0=*/P##r0,/*r1=*/P##r1,/*r2=*/P##r2,PP2_COMPILE(stx),8PP2_LANGUAGE_METHOD_CALL,str(),8PP2_EMIT_LITERAL,P##__VA_ARGS__)

#endif