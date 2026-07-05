/** @file */
#ifndef PP2_LANGUAGE_TYPES_SEQ_H
#define PP2_LANGUAGE_TYPES_SEQ_H

#include "pp2/language/basic/object.h"
#include "pp2/language/definition/const.h"
#include "pp2/language/definition/type.h"
#include "pp2/language/definition/vm_fn.h"

#include "pp2/machine/context.h"
#include "pp2/machine/insns/load.h"

#include "pp2/language/types/list.h"

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/detection/is_edible.h"
#include "pp2/primitive/seq/head.h"
#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/tuple/open.h"

/* Seq is the thin representation type: its value is a RAW paren-group seq,
 * (1)(2)(3), with no object structure inside the groups -- the shape PP2's
 * own substrates use (BigInt digit-seqs, the machine's argument list). List
 * is the first-class collection; a Seq only earns its keep next to a
 * representation, so it stays minimal: get in, look at the groups, get out.
 *
 * Construction: Seq (((1)(2)(3))) from a quoted raw seq (the quote's wrapping
 * parens are OPENed away); Seq (X) of a BigInt exposes its digit-seq (a
 * negative keeps its sign wrap and reads as one group); Seq of a Seq is
 * identity. The empty seq's value is no tokens at all. */

#define PP2_DEF_Seq PP2_TYPE(Seq,Any)
#define PP2_SYM_Seq(...) __VA_ARGS__

#define PP2_DEF_Seq_construct PP2_VM_FN(PP2_LANGUAGE_SEQ_CONSTRUCT,2)
#define PP2_LANGUAGE_SEQ_CONSTRUCT(P,r0,r1,r2,self,arg0,...) (,/*r0=*/IP2_FX(LANGUAGE_SEQ_CONSTRUCT,(,PP2_OPEN P##arg0)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_SEQ_CONSTRUCT(P,addr,type,value) IP2_SEQ_CONSTRUCT_T(type)(value)
#define IP2_SEQ_CONSTRUCT_T(t) IP2_SEQ_CONSTRUCT_##t
#define IP2_SEQ_CONSTRUCT_Quote(v) (,Seq,PP2_OPEN v)
#define IP2_SEQ_CONSTRUCT_Seq(v) (,Seq,v)
#define IP2_SEQ_CONSTRUCT_BigInt(v) (,Seq,v)

/* str: the raw seq is already a single token group chain with no bare
 * commas, so it renders verbatim. */
#define PP2_DEF_Seq_str PP2_VM_FN(PP2_LANGUAGE_SEQ_STR,1)
#define PP2_LANGUAGE_SEQ_STR(P,r0,r1,r2,obj,...) (,/*r0=*/IP2_FX(LANGUAGE_SEQ_STR,(,PP2_OPEN P##obj)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_SEQ_STR(P,addr,type,value) value

#define IP2_SEQ_DROP1(s) PP2_EAT s

#define PP2_DEF_Seq_empty PP2_VM_FN(PP2_LANGUAGE_SEQ_EMPTY,1)
#define PP2_LANGUAGE_SEQ_EMPTY(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Bool,IP2_FX(SEQ_EMPTY_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_SEQ_EMPTY_I(P,s) PP2_IS_EDIBLE(,s)(IP2_SEQ_EMPTY_,SOME,NONE)
#define IP2_SEQ_EMPTY_SOME 0
#define IP2_SEQ_EMPTY_NONE 1

/* head: the first group as a Quote object (PP2_SEQ_SPLIT_HEAD keeps the
 * group's wrap, so a comma-bearing group stays one unit); tail: the rest as
 * a Seq. head of the empty seq is garbage-in-garbage-out. */
#define PP2_DEF_Seq_head PP2_VM_FN(PP2_LANGUAGE_SEQ_HEAD,1)
#define PP2_LANGUAGE_SEQ_HEAD(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Quote,IP2_FX(SEQ_HEADG_GET,(,PP2_LANGUAGE_OBJECT_VALUE P##self))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
/* nested hop uses IP2_FY: IP2_FX is painted inside its own rescan */
#define IP2_SEQ_HEADG_GET(P,s) IP2_FY(SEQ_HEADG,(,PP2_SEQ_SPLIT_HEAD P##s))
#define IP2_SEQ_HEADG(P,g,...) P##g

#define PP2_DEF_Seq_tail PP2_VM_FN(PP2_LANGUAGE_SEQ_TAIL,1)
#define PP2_LANGUAGE_SEQ_TAIL(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Seq,IP2_FX(SEQ_TAILG,(,PP2_LANGUAGE_OBJECT_VALUE P##self))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_SEQ_TAILG(P,s) IP2_SEQ_DROP1(P##s)

/* push(q): append a Quote's token tuple as one new group at the end. */
#define PP2_DEF_Seq_push PP2_VM_FN(PP2_LANGUAGE_SEQ_PUSH,2)
#define PP2_LANGUAGE_SEQ_PUSH(P,r0,r1,r2,self,x,...) \
        (, \
         /*r0=*/(,Seq,IP2_FX(SEQ_PUSH_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self,PP2_LANGUAGE_OBJECT_VALUE P##x))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_SEQ_PUSH_I(P,s,g) P##s P##g

/* size: one group per machine round through the accumulator's own inc
 * method, so a long seq's count promotes to BigInt automatically. */
#define PP2_DEF_Seq_size PP2_VM_FN(PP2_LANGUAGE_SEQ_SIZE,1)
#define PP2_LANGUAGE_SEQ_SIZE(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Int,0),P##r1,P##r2, \
         8IP2_LANGUAGE_SEQ_SIZE_STEP,(PP2_LANGUAGE_OBJECT_VALUE P##self), \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_SEQ_SIZE_STEP(P,r0,r1,r2,rest,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(SEQ_SIZE_EMIT,P##rest) \
         P##__VA_ARGS__ \
        )
#define IP2_SEQ_SIZE_EMIT(...) IP2_SEQ_SIZE_EMIT_I(IP2_LIST_PROBE(__VA_ARGS__,),__VA_ARGS__)
#define IP2_SEQ_SIZE_EMIT_I(head,...) PP2_IS_EDIBLE(,head)(IP2_SEQ_SIZE_EMIT_,SOME,NONE)(__VA_ARGS__)
#define IP2_SEQ_SIZE_EMIT_NONE(...)
#define IP2_SEQ_SIZE_EMIT_SOME(...) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,inc (),8IP2_LANGUAGE_SEQ_SIZE_STEP,(PP2_EAT __VA_ARGS__),

/* to_list: one group per round becomes a Quote object pushed onto the
 * argument seq; the gather is List's own tuple-ize. */
#define PP2_DEF_Seq_to_list PP2_VM_FN(PP2_LANGUAGE_SEQ_TO_LIST,1)
#define PP2_LANGUAGE_SEQ_TO_LIST(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8IP2_LANGUAGE_SEQ_TO_LIST_STEP,(PP2_LANGUAGE_OBJECT_VALUE P##self), \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_SEQ_TO_LIST_STEP(P,r0,r1,r2,rest,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(SEQ_TO_LIST_EMIT,P##rest) \
         P##__VA_ARGS__ \
        )
#define IP2_SEQ_TO_LIST_EMIT(...) IP2_SEQ_TO_LIST_EMIT_I(IP2_LIST_PROBE(__VA_ARGS__,),__VA_ARGS__)
#define IP2_SEQ_TO_LIST_EMIT_I(head,...) PP2_IS_EDIBLE(,head)(IP2_SEQ_TO_LIST_EMIT_,SOME,NONE)(__VA_ARGS__)
#define IP2_SEQ_TO_LIST_EMIT_NONE(...) 8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_SEQ_TO_LIST_EMIT_SOME(...) 8PP2_LOCAL_CTX_PUSH_ARGUMENT,(,Quote,IP2_FY(SEQ_HEADG,(,PP2_SEQ_SPLIT_HEAD __VA_ARGS__))),8IP2_LANGUAGE_SEQ_TO_LIST_STEP,(PP2_EAT __VA_ARGS__),

#endif
