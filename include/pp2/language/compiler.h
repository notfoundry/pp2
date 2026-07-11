#ifndef PP2_LANGUAGE_COMPILER_H
#define PP2_LANGUAGE_COMPILER_H

#include "pp2/machine/exception/throw.h"

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/control/if.h"
#include "pp2/primitive/detection/is_digit.h"
#include "pp2/primitive/introspection/is_tuple.h"
#include "pp2/primitive/punctuation/comma.h"
#include "pp2/primitive/seq/head.h"
#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/tuple/at.h"

#define PP2_COMPILE(stx) IP2_LANGUAGE_COMPILE_CHOOSE_EVAL_OR_LITERAL(IP2_LANGUAGE_COMPILE_TEST_IF_LITERAL stx)(stx)
#define IP2_LANGUAGE_COMPILE_CHOOSE_EVAL_OR_LITERAL(x) PP2_TUPLE_AT_2(IP2_LANGUAGE_COMPILE,x,_LITERAL,)
#define IP2_LANGUAGE_COMPILE_TEST_IF_LITERAL(...) ,

#define IP2_LANGUAGE_COMPILE(stx) IP2_LANGUAGE_COMPILE_I(((8PP2_THROW_EXCEPTION,8PP2_LANGUAGE_DEFINITION_EXCEPTION,stx),PP2_DEF_##stx))
#define IP2_LANGUAGE_COMPILE_I(tup) IP2_LANGUAGE_COMPILE_II tup
#define IP2_LANGUAGE_COMPILE_II(fail_cont,x) IP2_LANGUAGE_COMPILE_III(IP2_LANGUAGE_COMPILE_TEST_SUCCESS_##x,IP2_LANGUAGE_COMPILE_FAIL,) fail_cont
#define IP2_LANGUAGE_COMPILE_III(...) PP2_TUPLE_AT_1(,__VA_ARGS__)
#define IP2_LANGUAGE_COMPILE_TEST_SUCCESS_ ,PP2_EAT,
#define IP2_LANGUAGE_COMPILE_FAIL(...) __VA_ARGS__


/* An expression that opens with a parenthesised group is a literal, and the
 * shape of that leading group says which one. Split it off the syntax with
 * PP2_SEQ_SPLIT_HEAD, ask its shape, and hand the group and everything after
 * it to the matching builder. */
#define IP2_LANGUAGE_COMPILE_LITERAL(stx) IP2_FX(LANGUAGE_COMPILE_LITERAL_I,(,PP2_SEQ_SPLIT_HEAD stx))
#define IP2_LANGUAGE_COMPILE_LITERAL_I(P,lead,...) PP2_CAT(IP2_LANGUAGE_COMPILE_LIT_,IP2_LANGUAGE_LITERAL_KIND lead)(lead,__VA_ARGS__)

/* LONG when the group holds one decimal digit, QUOTE otherwise. Commas remain
 * quoted tokens: Lists use the ordinary explicit constructor `List(a,b,c)`.
 * A group holding a group is also a quote of that group, so `((1)(2))` stays a
 * Quote: the arbitrary layer spells a negative that way, but the literal
 * syntax does not claim it. */
#define IP2_LANGUAGE_LITERAL_KIND(...) IP2_LANGUAGE_LITERAL_KIND_SELECT(__VA_ARGS__,PP2_COMMA_1,)(__VA_ARGS__)
#define IP2_LANGUAGE_LITERAL_KIND_SELECT(x0,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_LITERAL_KIND_,m,MANY)
#define IP2_LANGUAGE_LITERAL_KIND_MANY(...) QUOTE
#define IP2_LANGUAGE_LITERAL_KIND_1(x) PP2_IS_TUPLE(x)(IP2_LANGUAGE_LITERAL_KIND_GROUP,IP2_LANGUAGE_LITERAL_KIND_TOKEN)(x)
#define IP2_LANGUAGE_LITERAL_KIND_GROUP(x) QUOTE
#define IP2_LANGUAGE_LITERAL_KIND_TOKEN(x) PP2_IS_DIGIT(x)(LONG,QUOTE)

#define IP2_LANGUAGE_COMPILE_LIT_QUOTE(lead,...) 8PP2_LOAD_CONST,(,Quote,lead),PP2_COMPILE_LANGUAGE_RETURN(__VA_ARGS__)

/* `(2)(5)(6)` is 256. A Long's value already IS a most-significant-first
 * sequence of single-digit groups, so the leading digit loads a Long directly
 * and each further group arrives as a call on it (see Long_call in long.h).
 * The literal costs one constant load plus one instruction per digit; nothing
 * is computed. */
#define IP2_LANGUAGE_COMPILE_LIT_LONG(lead,...) 8PP2_LOAD_CONST,(,Long,lead),PP2_COMPILE_LANGUAGE_RETURN(__VA_ARGS__)


#define PP2_COMPILE_UNSAFE(stx) IP2_LANGUAGE_COMPILE_UNSAFE((PP2_DEF_##stx))
#define IP2_LANGUAGE_COMPILE_UNSAFE(x) PP2_EAT x


#define PP2_COMPILE_OR_DEFAULT(stx,default) IP2_LANGUAGE_COMPILE_I((default,PP2_DEF_##stx))


#define PP2_INSN_8PP2_LANGUAGE_COMPILE(P,r0,r1,r2,stx,...) (,P##r0,P##r1,P##r2,PP2_COMPILE(P##stx),P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_COMPILE_UNSAFE(P,r0,r1,r2,stx,...) (,P##r0,P##r1,P##r2,PP2_COMPILE_UNSAFE(P##stx),P##__VA_ARGS__)
#define PP2_INSN_8PP2_LANGUAGE_COMPILE_OR_DEFAULT(P,r0,r1,r2,stx,default,...) (,P##r0,P##r1,P##r2,PP2_COMPILE_OR_DEFAULT(P##stx,P##default),P##__VA_ARGS__)

#endif
