/** @file */
#ifndef PP2_LANGUAGE_IO_EMIT_H
#define PP2_LANGUAGE_IO_EMIT_H

#include "pp2/language/basic/nil.h"
#include "pp2/language/basic/object.h"
#include "pp2/language/basic/symbol.h"
#include "pp2/language/basic/return.h"

#include "pp2/machine/insns/emit.h"

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"

/* Emit an object's string form. Most values can ride through r0 while str()
 * runs. A Quote containing a comma cannot: opening it in r0 would split the
 * VM state tuple. Put its raw tokens directly in a parenthesised output record
 * instead, where commas are ordinary variadic payload tokens. */
#define PP2_INSN_8PP2_LANGUAGE_EMIT_OBJECT(P,r0,r1,r2,...) \
        IP2_FX(LANGUAGE_EMIT_OBJECT_SELECT,(,PP2_LANGUAGE_OBJECT_TYPE P##r0)) \
            (,P##r0,P##r1,P##r2,P##__VA_ARGS__)

#define IP2_LANGUAGE_EMIT_OBJECT_SELECT(P,type) \
        PP2_CAT(IP2_LANGUAGE_EMIT_OBJECT_,PP2_SYMBOL_EQ(type,Quote))

/* Printing is done for its effect, so it answers with nil rather than leaving r0
 * empty. 8PP2_EMIT_LITERAL clears r0 once the tokens are out, so the nil is loaded
 * after it; the Quote path never puts the object in r0 at all and so can just set
 * nil directly. */
#define IP2_LANGUAGE_EMIT_OBJECT_0(P,obj,r1,r2,...) \
        (,P##obj,P##r1,P##r2,8PP2_LANGUAGE_METHOD_CALL,str(),8PP2_EMIT_LITERAL,8PP2_LANGUAGE_LOAD_NIL,P##__VA_ARGS__)

#define IP2_LANGUAGE_EMIT_OBJECT_1(P,obj,r1,r2,...) \
        (,/*r0=*/PP2_LANGUAGE_NIL,P##r1,P##r2,P##__VA_ARGS__)(,8LITERAL,PP2_FX(OPEN,PP2_LANGUAGE_OBJECT_VALUE P##obj))

#endif
