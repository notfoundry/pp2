/** @file */
#ifndef PP2_LANGUAGE_TYPES_LIST_H
#define PP2_LANGUAGE_TYPES_LIST_H

#include "pp2/language/basic/object.h"
#include "pp2/language/basic/symbol.h"
#include "pp2/language/definition/const.h"
#include "pp2/language/definition/type.h"
#include "pp2/language/definition/vm_fn.h"

#include "pp2/machine/context.h"
#include "pp2/machine/insns/load.h"

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/detection/is_edible.h"
#include "pp2/primitive/punctuation/comma.h"
#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/tuple/drop.h"
#include "pp2/primitive/tuple/eat.h"
#include "pp2/primitive/tuple/open.h"

#define PP2_DEF_List PP2_TYPE(List,Any)
#define PP2_SYM_List(...) __VA_ARGS__

/* A List's value is a plain tuple of compiled objects, (e0,...,en-1); the
 * empty list is (). Elements are always parenthesised object tuples, so
 * emptiness is decided by edibility of the first item. Every operation over
 * an arbitrary number of elements works in chunks of at most 8 and
 * reschedules itself as an instruction, so long lists ride the machine's
 * unbounded fuel rather than any fixed-depth macro recursion. */

#define IP2_LIST_PROBE(x0,...) x0

/* List(a0,...,an): variadic construction. The constructor's body is a single
 * instruction that reads the whole argument seq from the local context (self
 * first), eats self, and tuple-izes the rest in one prescan walk, so no
 * fixed-arity VM_FN splice is involved. */
#define PP2_DEF_List_construct PP2_CONST(Fn,(,8IP2_LANGUAGE_LIST_CONSTRUCT))
#define PP2_INSN_8IP2_LANGUAGE_LIST_CONSTRUCT(P,r0,r1,r2,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_CONSTRUCT_VALUE,(,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
/* The FX hop expands the argument seq before the walk name meets it: a
 * function-like macro passed over by the scanner while its parens are still
 * hidden behind an unexpanded name is never revisited. */
#define IP2_LIST_CONSTRUCT_VALUE(P,seq) IP2_LIST_TUPLEIZE(PP2_EAT P##seq)

#define IP2_LIST_TUPLEIZE(seq) (PP2_REVERSE_CAT(0,IP2_LIST_TUPLEIZE_A seq))
#define IP2_LIST_TUPLEIZE_A(x) x IP2_LIST_TUPLEIZE_B
#define IP2_LIST_TUPLEIZE_B(x) ,x IP2_LIST_TUPLEIZE_C
#define IP2_LIST_TUPLEIZE_C(x) ,x IP2_LIST_TUPLEIZE_B
#define IP2_LIST_TUPLEIZE_A0
#define IP2_LIST_TUPLEIZE_B0
#define IP2_LIST_TUPLEIZE_C0

/* str: (e0, e1, ..., en-1) -- a parenthesised, comma-separated rendering, so
 * the result stays one paren group (a bare comma in r0 would split the
 * machine state tuple) and the user can PP2_OPEN it wherever bare elements
 * are wanted (initialisers, argument lists, parameter lists). Each element
 * renders through its own str method; results accumulate on the argument
 * seq, SPILL/UNSPILL bracketing each call so it runs on a clean argument
 * list. The schedule starts by clearing the stale receiver argument. */
#define PP2_DEF_List_str PP2_VM_FN(8PP2_LANGUAGE_LIST_STR,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_STR(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8IP2_LANGUAGE_LIST_STR_SCHEDULE,PP2_LANGUAGE_OBJECT_VALUE P##self, \
         P##__VA_ARGS__ \
        )

#define PP2_INSN_8IP2_LANGUAGE_LIST_STR_SCHEDULE(P,r0,r1,r2,elems,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_STR_EMIT(P##elems) \
         P##__VA_ARGS__ \
        )

/* PP2_IS_EDIBLE pastes its subject unexpanded, so the head probe must be
 * forced through one plain-substitution hop before the edibility test. */
#define IP2_LIST_STR_EMIT(elems) IP2_LIST_STR_EMIT_I(IP2_LIST_PROBE elems,elems)
#define IP2_LIST_STR_EMIT_I(head,elems) PP2_IS_EDIBLE(,head)(IP2_LIST_STR_EMIT_,SOME,NONE)(elems)
#define IP2_LIST_STR_EMIT_NONE(elems) 8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_SOME(elems) IP2_LIST_STR_EMIT_COUNT(PP2_OPEN elems)
#define IP2_LIST_STR_EMIT_COUNT(...) \
        IP2_LIST_STR_EMIT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(__VA_ARGS__)
#define IP2_LIST_STR_EMIT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_STR_EMIT_,m,9_OR_MORE)

#define IP2_LIST_STR_BUNDLE(e) 8PP2_ARGS_SPILL,8PP2_LOAD_CONST,e,8PP2_LANGUAGE_METHOD_CALL,str(),8PP2_ARGS_UNSPILL_PUSH

#define IP2_LIST_STR_EMIT_1(e0) IP2_LIST_STR_BUNDLE(e0),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_2(e0,e1) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_3(e0,e1,e2) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_4(e0,e1,e2,e3) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_5(e0,e1,e2,e3,e4) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),IP2_LIST_STR_BUNDLE(e4),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_6(e0,e1,e2,e3,e4,e5) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),IP2_LIST_STR_BUNDLE(e4),IP2_LIST_STR_BUNDLE(e5),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_7(e0,e1,e2,e3,e4,e5,e6) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),IP2_LIST_STR_BUNDLE(e4),IP2_LIST_STR_BUNDLE(e5),IP2_LIST_STR_BUNDLE(e6),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_8(e0,e1,e2,e3,e4,e5,e6,e7) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),IP2_LIST_STR_BUNDLE(e4),IP2_LIST_STR_BUNDLE(e5),IP2_LIST_STR_BUNDLE(e6),IP2_LIST_STR_BUNDLE(e7),8IP2_LANGUAGE_LIST_STR_FINISH,
#define IP2_LIST_STR_EMIT_9_OR_MORE(e0,e1,e2,e3,e4,e5,e6,e7,...) IP2_LIST_STR_BUNDLE(e0),IP2_LIST_STR_BUNDLE(e1),IP2_LIST_STR_BUNDLE(e2),IP2_LIST_STR_BUNDLE(e3),IP2_LIST_STR_BUNDLE(e4),IP2_LIST_STR_BUNDLE(e5),IP2_LIST_STR_BUNDLE(e6),IP2_LIST_STR_BUNDLE(e7),8IP2_LANGUAGE_LIST_STR_SCHEDULE,(__VA_ARGS__),

#define PP2_INSN_8IP2_LANGUAGE_LIST_STR_FINISH(P,r0,r1,r2,...) \
        (, \
         /*r0=*/IP2_FX(LIST_STR_FINISH_JOIN,(,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1)), \
         PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_STR_FINISH_JOIN(P,seq) IP2_LIST_TUPLEIZE(P##seq)

/* size: chunked count through the machine's own arithmetic. Each step folds
 * up to 8 elements into the accumulator held in r0 with one `plus` method
 * call, so the count rides the Int literal tables until 127 and promotes to
 * Long automatically past the wall. */
#define PP2_DEF_List_size PP2_VM_FN(8PP2_LANGUAGE_LIST_SIZE,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_SIZE(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Int,0),P##r1,P##r2, \
         8IP2_LANGUAGE_LIST_SIZE_STEP,PP2_LANGUAGE_OBJECT_VALUE P##self, \
         P##__VA_ARGS__ \
        )

#define PP2_INSN_8IP2_LANGUAGE_LIST_SIZE_STEP(P,r0,r1,r2,elems,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_SIZE_EMIT(P##elems) \
         P##__VA_ARGS__ \
        )

#define IP2_LIST_SIZE_EMIT(elems) IP2_LIST_SIZE_EMIT_I(IP2_LIST_PROBE elems,elems)
#define IP2_LIST_SIZE_EMIT_I(head,elems) PP2_IS_EDIBLE(,head)(IP2_LIST_SIZE_EMIT_,SOME,NONE)(elems)
#define IP2_LIST_SIZE_EMIT_NONE(elems)
#define IP2_LIST_SIZE_EMIT_SOME(elems) IP2_LIST_SIZE_EMIT_COUNT(PP2_OPEN elems)
#define IP2_LIST_SIZE_EMIT_COUNT(...) \
        IP2_LIST_SIZE_EMIT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(__VA_ARGS__)
#define IP2_LIST_SIZE_EMIT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_SIZE_EMIT_,m,9_OR_MORE)

#define IP2_LIST_SIZE_EMIT_1(e0) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (1),
#define IP2_LIST_SIZE_EMIT_2(e0,e1) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (2),
#define IP2_LIST_SIZE_EMIT_3(e0,e1,e2) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (3),
#define IP2_LIST_SIZE_EMIT_4(e0,e1,e2,e3) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (4),
#define IP2_LIST_SIZE_EMIT_5(e0,e1,e2,e3,e4) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (5),
#define IP2_LIST_SIZE_EMIT_6(e0,e1,e2,e3,e4,e5) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (6),
#define IP2_LIST_SIZE_EMIT_7(e0,e1,e2,e3,e4,e5,e6) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (7),
#define IP2_LIST_SIZE_EMIT_8(e0,e1,e2,e3,e4,e5,e6,e7) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (8),
#define IP2_LIST_SIZE_EMIT_9_OR_MORE(e0,e1,e2,e3,e4,e5,e6,e7,...) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_METHOD_CALL,plus (8),8IP2_LANGUAGE_LIST_SIZE_STEP,(__VA_ARGS__),

/* at(i): drop-table pick. The index must be a literal Int (the table covers
 * 0..127); an out-of-range index is garbage-in-garbage-out, like division by
 * zero in the arbitrary layer. */
#define PP2_DEF_List_at PP2_VM_FN(8PP2_LANGUAGE_LIST_AT,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_AT(P,r0,r1,r2,self,idx,...) \
        (, \
         /*r0=*/IP2_FX(LIST_AT_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self,PP2_LANGUAGE_OBJECT_VALUE P##idx)), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
/* A written call site fixes its argument count before prescan, so PP2_OPEN
 * must pass through a variadic hop for its commas to be live where the drop
 * table is invoked. */
#define IP2_LIST_AT_I(P,elems,i) IP2_LIST_AT_II(PP2_CAT(PP2_TUPLE_DROP_,i),PP2_OPEN P##elems)
#define IP2_LIST_AT_II(drop,...) IP2_LIST_AT_III(drop(,__VA_ARGS__))
#define IP2_LIST_AT_III(...) IP2_LIST_PROBE(__VA_ARGS__)

#define PP2_DEF_List_head PP2_VM_FN(8PP2_LANGUAGE_LIST_HEAD,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_HEAD(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/IP2_FX(LIST_HEAD_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self)), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_HEAD_I(P,elems) IP2_LIST_PROBE P##elems

#define PP2_DEF_List_tail PP2_VM_FN(8PP2_LANGUAGE_LIST_TAIL,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_TAIL(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_TAIL_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_TAIL_I(P,elems) IP2_LIST_TAIL_II(PP2_OPEN P##elems)
#define IP2_LIST_TAIL_II(...) (PP2_TUPLE_DROP_1(,__VA_ARGS__))

/* push/push_front: one variadic paste builds the new element tuple; the only
 * case split is whether the old list was empty (no separating comma). */
#define PP2_DEF_List_push PP2_VM_FN(8PP2_LANGUAGE_LIST_PUSH,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_PUSH(P,r0,r1,r2,self,x,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_PUSH_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self,P##x))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_PUSH_I(P,elems,x) IP2_LIST_PUSH_II(IP2_LIST_PROBE P##elems,P##elems,P##x)
#define IP2_LIST_PUSH_II(head,elems,x) PP2_IS_EDIBLE(,head)(IP2_LIST_PUSH_,SOME,NONE)(elems,x)
#define IP2_LIST_PUSH_SOME(elems,x) (PP2_OPEN elems,x)
#define IP2_LIST_PUSH_NONE(elems,x) (x)

#define PP2_DEF_List_push_front PP2_VM_FN(8PP2_LANGUAGE_LIST_PUSH_FRONT,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_PUSH_FRONT(P,r0,r1,r2,self,x,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_PUSH_FRONT_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self,P##x))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_PUSH_FRONT_I(P,elems,x) IP2_LIST_PUSH_FRONT_II(IP2_LIST_PROBE P##elems,P##elems,P##x)
#define IP2_LIST_PUSH_FRONT_II(head,elems,x) PP2_IS_EDIBLE(,head)(IP2_LIST_PUSH_FRONT_,SOME,NONE)(elems,x)
#define IP2_LIST_PUSH_FRONT_SOME(elems,x) (x,PP2_OPEN elems)
#define IP2_LIST_PUSH_FRONT_NONE(elems,x) (x)

/* append: four-way paste dispatch on the emptiness of each side. */
#define PP2_DEF_List_append PP2_VM_FN(8PP2_LANGUAGE_LIST_APPEND,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_APPEND(P,r0,r1,r2,self,rhs,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_APPEND_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self,PP2_LANGUAGE_OBJECT_VALUE P##rhs))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_APPEND_I(P,a,b) IP2_LIST_APPEND_II(IP2_LIST_PROBE P##a,IP2_LIST_PROBE P##b,P##a,P##b)
#define IP2_LIST_APPEND_II(ha,hb,a,b) IP2_LIST_APPEND_CAT(PP2_IS_EDIBLE(,ha)(,S,N),PP2_IS_EDIBLE(,hb)(,S,N))(a,b)
#define IP2_LIST_APPEND_CAT(x,y) IP2_LIST_APPEND_CAT_I(x,y)
#define IP2_LIST_APPEND_CAT_I(x,y) IP2_LIST_APPEND_##x##y
#define IP2_LIST_APPEND_SS(a,b) (PP2_OPEN a,PP2_OPEN b)
#define IP2_LIST_APPEND_SN(a,b) a
#define IP2_LIST_APPEND_NS(a,b) b
#define IP2_LIST_APPEND_NN(a,b) ()

#define PP2_DEF_List_empty PP2_VM_FN(8PP2_LANGUAGE_LIST_EMPTY,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_EMPTY(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/(,Bool,IP2_FX(LIST_EMPTY_I,(,PP2_LANGUAGE_OBJECT_VALUE P##self))), \
         P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_EMPTY_I(P,elems) IP2_LIST_EMPTY_II(IP2_LIST_PROBE P##elems)
#define IP2_LIST_EMPTY_II(head) PP2_IS_EDIBLE(,head)(IP2_LIST_EMPTY_,SOME,NONE)
#define IP2_LIST_EMPTY_SOME 0
#define IP2_LIST_EMPTY_NONE 1

/* reverse: chunked machine loop. Each step reverses up to 8 elements with a
 * fixed paste and prepends them onto the accumulator threaded as an insn
 * operand. */
#define PP2_DEF_List_reverse PP2_VM_FN(8PP2_LANGUAGE_LIST_REVERSE,1)
#define PP2_INSN_8PP2_LANGUAGE_LIST_REVERSE(P,r0,r1,r2,self,...) \
        (, \
         P##r0,P##r1,P##r2, \
         8IP2_LANGUAGE_LIST_REV_STEP,PP2_LANGUAGE_OBJECT_VALUE P##self,(), \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_REV_STEP(P,r0,r1,r2,rest,acc,...) \
        (, \
         /*r0=*/IP2_LIST_REV_R0(P##rest,P##acc), \
         P##r1,P##r2, \
         IP2_LIST_REV_NEXT(P##rest,P##acc) \
         P##__VA_ARGS__ \
        )

/* r0 line: the finished List when at most 8 elements remain, empty otherwise. */
#define IP2_LIST_REV_R0(rest,acc) IP2_LIST_REV_R0_I(IP2_LIST_PROBE rest,rest,acc)
#define IP2_LIST_REV_R0_I(head,rest,acc) PP2_IS_EDIBLE(,head)(IP2_LIST_REV_R0_,SOME,NONE)(rest,acc)
#define IP2_LIST_REV_R0_NONE(rest,acc) (,List,acc)
#define IP2_LIST_REV_R0_SOME(rest,acc) IP2_LIST_REV_R0_COUNT(acc,PP2_OPEN rest)
#define IP2_LIST_REV_R0_COUNT(acc,...) \
        IP2_LIST_REV_R0_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(acc,__VA_ARGS__)
#define IP2_LIST_REV_R0_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_REV_R0_,m,9_OR_MORE)

#define IP2_LIST_REV_JOIN(acc,...) IP2_LIST_REV_JOIN_I(IP2_LIST_PROBE acc,acc,__VA_ARGS__)
#define IP2_LIST_REV_JOIN_I(head,acc,...) PP2_IS_EDIBLE(,head)(IP2_LIST_REV_JOIN_,SOME,NONE)(acc,__VA_ARGS__)
#define IP2_LIST_REV_JOIN_SOME(acc,...) (__VA_ARGS__,PP2_OPEN acc)
#define IP2_LIST_REV_JOIN_NONE(acc,...) (__VA_ARGS__)

#define IP2_LIST_REV_R0_1(acc,e0) (,List,IP2_LIST_REV_JOIN(acc,e0))
#define IP2_LIST_REV_R0_2(acc,e0,e1) (,List,IP2_LIST_REV_JOIN(acc,e1,e0))
#define IP2_LIST_REV_R0_3(acc,e0,e1,e2) (,List,IP2_LIST_REV_JOIN(acc,e2,e1,e0))
#define IP2_LIST_REV_R0_4(acc,e0,e1,e2,e3) (,List,IP2_LIST_REV_JOIN(acc,e3,e2,e1,e0))
#define IP2_LIST_REV_R0_5(acc,e0,e1,e2,e3,e4) (,List,IP2_LIST_REV_JOIN(acc,e4,e3,e2,e1,e0))
#define IP2_LIST_REV_R0_6(acc,e0,e1,e2,e3,e4,e5) (,List,IP2_LIST_REV_JOIN(acc,e5,e4,e3,e2,e1,e0))
#define IP2_LIST_REV_R0_7(acc,e0,e1,e2,e3,e4,e5,e6) (,List,IP2_LIST_REV_JOIN(acc,e6,e5,e4,e3,e2,e1,e0))
#define IP2_LIST_REV_R0_8(acc,e0,e1,e2,e3,e4,e5,e6,e7) (,List,IP2_LIST_REV_JOIN(acc,e7,e6,e5,e4,e3,e2,e1,e0))
#define IP2_LIST_REV_R0_9_OR_MORE(acc,e0,e1,e2,e3,e4,e5,e6,e7,...)

/* continuation line: reschedule with the first 8 folded in when more remain. */
#define IP2_LIST_REV_NEXT(rest,acc) IP2_LIST_REV_NEXT_I(IP2_LIST_PROBE rest,rest,acc)
#define IP2_LIST_REV_NEXT_I(head,rest,acc) PP2_IS_EDIBLE(,head)(IP2_LIST_REV_NEXT_,SOME,NONE)(rest,acc)
#define IP2_LIST_REV_NEXT_NONE(rest,acc)
#define IP2_LIST_REV_NEXT_SOME(rest,acc) IP2_LIST_REV_NEXT_COUNT(acc,PP2_OPEN rest)
#define IP2_LIST_REV_NEXT_COUNT(acc,...) \
        IP2_LIST_REV_NEXT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(acc,__VA_ARGS__)
#define IP2_LIST_REV_NEXT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_REV_NEXT_,m,9_OR_MORE)
#define IP2_LIST_REV_NEXT_1(acc,e0)
#define IP2_LIST_REV_NEXT_2(acc,e0,e1)
#define IP2_LIST_REV_NEXT_3(acc,e0,e1,e2)
#define IP2_LIST_REV_NEXT_4(acc,e0,e1,e2,e3)
#define IP2_LIST_REV_NEXT_5(acc,e0,e1,e2,e3,e4)
#define IP2_LIST_REV_NEXT_6(acc,e0,e1,e2,e3,e4,e5)
#define IP2_LIST_REV_NEXT_7(acc,e0,e1,e2,e3,e4,e5,e6)
#define IP2_LIST_REV_NEXT_8(acc,e0,e1,e2,e3,e4,e5,e6,e7)
#define IP2_LIST_REV_NEXT_9_OR_MORE(acc,e0,e1,e2,e3,e4,e5,e6,e7,...) 8IP2_LANGUAGE_LIST_REV_STEP,(__VA_ARGS__),IP2_LIST_REV_JOIN(acc,e7,e6,e5,e4,e3,e2,e1,e0),

/* eq(other): other is a List of the same length whose elements are pairwise eq.
 * One pair per machine round, walking both element tuples together and exiting
 * on the first mismatch. Each round delegates to the left element's own eq, so
 * a list of lists compares by recursing into this same handler. */
#define PP2_DEF_List_eq PP2_VM_FN(8PP2_LANGUAGE_LIST_EQ,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_EQ(P,r0,r1,r2,self,other,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(LANGUAGE_LIST_EQ_ENTER,(,P##self,P##other,PP2_LANGUAGE_OBJECT_TYPE P##other)) \
         P##__VA_ARGS__ \
        )
#define IP2_LANGUAGE_LIST_EQ_ENTER(P,self,other,other_type) \
        PP2_CAT(IP2_LIST_EQ_ENTER_,PP2_SYMBOL_EQ(List,other_type))(self,other)
#define IP2_LIST_EQ_ENTER_0(self,other) 8PP2_LOAD_CONST,(,Bool,0),
#define IP2_LIST_EQ_ENTER_1(self,other) \
        8IP2_LANGUAGE_LIST_EQ_STEP,PP2_LANGUAGE_OBJECT_VALUE self,PP2_LANGUAGE_OBJECT_VALUE other,

#define PP2_INSN_8IP2_LANGUAGE_LIST_EQ_STEP(P,r0,r1,r2,lrest,rrest,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_EQ_EMIT(P##lrest,P##rrest) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_EQ_EMIT(l,r) IP2_LIST_EQ_EMIT_I(IP2_LIST_PROBE l,IP2_LIST_PROBE r,l,r)
#define IP2_LIST_EQ_EMIT_I(lh,rh,l,r) PP2_IS_EDIBLE(,lh)(IP2_LIST_EQ_LEFT_,SOME,NONE)(lh,rh,l,r)
#define IP2_LIST_EQ_LEFT_SOME(lh,rh,l,r) PP2_IS_EDIBLE(,rh)(IP2_LIST_EQ_PAIR_,SOME,NONE)(lh,rh,l,r)
#define IP2_LIST_EQ_LEFT_NONE(lh,rh,l,r) PP2_IS_EDIBLE(,rh)(IP2_LIST_EQ_DRAINED_,SOME,NONE)(lh,rh,l,r)
/* left drained: equal only if the right drained too */
#define IP2_LIST_EQ_DRAINED_NONE(lh,rh,l,r) 8PP2_LOAD_CONST,(,Bool,1),
#define IP2_LIST_EQ_DRAINED_SOME(lh,rh,l,r) 8PP2_LOAD_CONST,(,Bool,0),
/* left has an element, right ran out: the right list is shorter */
#define IP2_LIST_EQ_PAIR_NONE(lh,rh,l,r) 8PP2_LOAD_CONST,(,Bool,0),
#define IP2_LIST_EQ_PAIR_SOME(lh,rh,l,r) \
        8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
        8PP2_LOAD_CONST,lh, \
        8PP2_LANGUAGE_METHOD_CALL,eq, \
        8PP2_LOCAL_CTX_PUSH_ARGUMENT,rh, \
        8PP2_LANGUAGE_FN_CALL_IMPL, \
        8IP2_LANGUAGE_LIST_EQ_NEXT,IP2_LIST_EQ_TAIL(PP2_OPEN l),IP2_LIST_EQ_TAIL(PP2_OPEN r),
#define IP2_LIST_EQ_TAIL(...) (PP2_TUPLE_DROP_1(,__VA_ARGS__))
#define PP2_INSN_8IP2_LANGUAGE_LIST_EQ_NEXT(P,r0,r1,r2,lrest,rrest,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(LIST_EQ_NEXT_I,(,PP2_LANGUAGE_OBJECT_VALUE P##r0))(P##lrest,P##rrest) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_EQ_NEXT_I(P,b) IP2_LIST_EQ_NEXT_II(b)
#define IP2_LIST_EQ_NEXT_II(b) IP2_LIST_EQ_NEXT_##b
/* a mismatched pair leaves the false in r0, which is the answer */
#define IP2_LIST_EQ_NEXT_0(lrest,rrest)
#define IP2_LIST_EQ_NEXT_1(lrest,rrest) 8IP2_LANGUAGE_LIST_EQ_STEP,lrest,rrest,


/* contains(x): one element per machine round with early exit on a hit. Each
 * round calls the element's own eq method with the pre-evaluated probe
 * object: METHOD_CALL with a bare method name binds the method Fn into r0
 * without invoking it, so the argument object can be pushed directly and the
 * call fired with FN_CALL_IMPL, keeping receiver-first argument order. */
#define PP2_DEF_List_contains PP2_VM_FN(8PP2_LANGUAGE_LIST_CONTAINS,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_CONTAINS(P,r0,r1,r2,self,x,...) \
        (, \
         P##r0,P##r1,P##r2, \
         8IP2_LANGUAGE_LIST_CONTAINS_STEP,PP2_LANGUAGE_OBJECT_VALUE P##self,P##x, \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_CONTAINS_STEP(P,r0,r1,r2,rest,x,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_CONTAINS_EMIT(P##rest,P##x) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_CONTAINS_EMIT(rest,x) IP2_LIST_CONTAINS_EMIT_I(IP2_LIST_PROBE rest,rest,x)
#define IP2_LIST_CONTAINS_EMIT_I(head,rest,x) PP2_IS_EDIBLE(,head)(IP2_LIST_CONTAINS_EMIT_,SOME,NONE)(head,rest,x)
#define IP2_LIST_CONTAINS_EMIT_NONE(head,rest,x) 8PP2_LOAD_CONST,(,Bool,0),
#define IP2_LIST_CONTAINS_EMIT_SOME(head,rest,x) \
        8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
        8PP2_LOAD_CONST,head, \
        8PP2_LANGUAGE_METHOD_CALL,eq, \
        8PP2_LOCAL_CTX_PUSH_ARGUMENT,x, \
        8PP2_LANGUAGE_FN_CALL_IMPL, \
        8IP2_LANGUAGE_LIST_CONTAINS_NEXT,IP2_LIST_CONTAINS_TAIL(PP2_OPEN rest),x,
#define IP2_LIST_CONTAINS_TAIL(...) (PP2_TUPLE_DROP_1(,__VA_ARGS__))
#define PP2_INSN_8IP2_LANGUAGE_LIST_CONTAINS_NEXT(P,r0,r1,r2,rest,x,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_FX(LIST_CONTAINS_NEXT_I,(,PP2_LANGUAGE_OBJECT_VALUE P##r0))(P##rest,P##x) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_CONTAINS_NEXT_I(P,b) IP2_LIST_CONTAINS_NEXT_II(b)
#define IP2_LIST_CONTAINS_NEXT_II(b) IP2_LIST_CONTAINS_NEXT_##b
#define IP2_LIST_CONTAINS_NEXT_1(rest,x)
#define IP2_LIST_CONTAINS_NEXT_0(rest,x) 8IP2_LANGUAGE_LIST_CONTAINS_STEP,rest,x,

/* map(fn): call fn on each element (pre-evaluated object pushed as the
 * argument, the Fn object loaded into r0 and fired with FN_CALL_IMPL),
 * results accumulate on the argument seq under SPILL/UNSPILL brackets and
 * gather into a new List, chunked 8 per machine round. */
#define IP2_LIST_MAP_B(e,fn) 8PP2_ARGS_SPILL,8PP2_LOCAL_CTX_PUSH_ARGUMENT,e,8PP2_LOAD_CONST,fn,8PP2_LANGUAGE_FN_CALL_IMPL,8PP2_ARGS_UNSPILL_PUSH

#define PP2_DEF_List_map PP2_VM_FN(8PP2_LANGUAGE_LIST_MAP,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_MAP(P,r0,r1,r2,self,fn,...) \
        (, \
         /*r0=*/,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8IP2_LANGUAGE_LIST_MAP_SCHEDULE,PP2_LANGUAGE_OBJECT_VALUE P##self,P##fn, \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_MAP_SCHEDULE(P,r0,r1,r2,elems,fn,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_MAP_EMIT(P##elems,P##fn) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_MAP_EMIT(elems,fn) IP2_LIST_MAP_EMIT_I(IP2_LIST_PROBE elems,elems,fn)
#define IP2_LIST_MAP_EMIT_I(head,elems,fn) PP2_IS_EDIBLE(,head)(IP2_LIST_MAP_EMIT_,SOME,NONE)(elems,fn)
#define IP2_LIST_MAP_EMIT_NONE(elems,fn) 8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_SOME(elems,fn) IP2_LIST_MAP_EMIT_COUNT(fn,PP2_OPEN elems)
#define IP2_LIST_MAP_EMIT_COUNT(fn,...) \
        IP2_LIST_MAP_EMIT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(fn,__VA_ARGS__)
#define IP2_LIST_MAP_EMIT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_MAP_EMIT_,m,9_OR_MORE)
#define IP2_LIST_MAP_EMIT_1(fn,e0) IP2_LIST_MAP_B(e0,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_2(fn,e0,e1) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_3(fn,e0,e1,e2) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_4(fn,e0,e1,e2,e3) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_5(fn,e0,e1,e2,e3,e4) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),IP2_LIST_MAP_B(e4,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_6(fn,e0,e1,e2,e3,e4,e5) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),IP2_LIST_MAP_B(e4,fn),IP2_LIST_MAP_B(e5,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_7(fn,e0,e1,e2,e3,e4,e5,e6) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),IP2_LIST_MAP_B(e4,fn),IP2_LIST_MAP_B(e5,fn),IP2_LIST_MAP_B(e6,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_8(fn,e0,e1,e2,e3,e4,e5,e6,e7) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),IP2_LIST_MAP_B(e4,fn),IP2_LIST_MAP_B(e5,fn),IP2_LIST_MAP_B(e6,fn),IP2_LIST_MAP_B(e7,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_MAP_EMIT_9_OR_MORE(fn,e0,e1,e2,e3,e4,e5,e6,e7,...) IP2_LIST_MAP_B(e0,fn),IP2_LIST_MAP_B(e1,fn),IP2_LIST_MAP_B(e2,fn),IP2_LIST_MAP_B(e3,fn),IP2_LIST_MAP_B(e4,fn),IP2_LIST_MAP_B(e5,fn),IP2_LIST_MAP_B(e6,fn),IP2_LIST_MAP_B(e7,fn),8IP2_LANGUAGE_LIST_MAP_SCHEDULE,(__VA_ARGS__),fn,

#define PP2_INSN_8IP2_LANGUAGE_LIST_MAP_FINISH(P,r0,r1,r2,...) \
        (, \
         /*r0=*/(,List,IP2_FX(LIST_MAP_GATHER,(,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1))), \
         PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2, \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_MAP_GATHER(P,seq) IP2_LIST_TUPLEIZE(P##seq)

/* fold(fn, init): fn(acc, elem) threads through r0; FN_CALL_PUSH_ARG pushes
 * the running accumulator, so no spill bracketing is needed. */
#define IP2_LIST_FOLD_B(e,fn) 8PP2_LOCAL_CTX_CLEAR_ARGUMENTS,8PP2_LANGUAGE_FN_CALL_PUSH_ARG,8PP2_LOCAL_CTX_PUSH_ARGUMENT,e,8PP2_LOAD_CONST,fn,8PP2_LANGUAGE_FN_CALL_IMPL

#define PP2_DEF_List_fold PP2_VM_FN(8PP2_LANGUAGE_LIST_FOLD,3)
#define PP2_INSN_8PP2_LANGUAGE_LIST_FOLD(P,r0,r1,r2,self,fn,init,...) \
        (, \
         /*r0=*/P##init,P##r1,P##r2, \
         8IP2_LANGUAGE_LIST_FOLD_SCHEDULE,PP2_LANGUAGE_OBJECT_VALUE P##self,P##fn, \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_FOLD_SCHEDULE(P,r0,r1,r2,elems,fn,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_FOLD_EMIT(P##elems,P##fn) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_FOLD_EMIT(elems,fn) IP2_LIST_FOLD_EMIT_I(IP2_LIST_PROBE elems,elems,fn)
#define IP2_LIST_FOLD_EMIT_I(head,elems,fn) PP2_IS_EDIBLE(,head)(IP2_LIST_FOLD_EMIT_,SOME,NONE)(elems,fn)
#define IP2_LIST_FOLD_EMIT_NONE(elems,fn)
#define IP2_LIST_FOLD_EMIT_SOME(elems,fn) IP2_LIST_FOLD_EMIT_COUNT(fn,PP2_OPEN elems)
#define IP2_LIST_FOLD_EMIT_COUNT(fn,...) \
        IP2_LIST_FOLD_EMIT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(fn,__VA_ARGS__)
#define IP2_LIST_FOLD_EMIT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_FOLD_EMIT_,m,9_OR_MORE)
#define IP2_LIST_FOLD_EMIT_1(fn,e0) IP2_LIST_FOLD_B(e0,fn),
#define IP2_LIST_FOLD_EMIT_2(fn,e0,e1) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),
#define IP2_LIST_FOLD_EMIT_3(fn,e0,e1,e2) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),
#define IP2_LIST_FOLD_EMIT_4(fn,e0,e1,e2,e3) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),
#define IP2_LIST_FOLD_EMIT_5(fn,e0,e1,e2,e3,e4) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),IP2_LIST_FOLD_B(e4,fn),
#define IP2_LIST_FOLD_EMIT_6(fn,e0,e1,e2,e3,e4,e5) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),IP2_LIST_FOLD_B(e4,fn),IP2_LIST_FOLD_B(e5,fn),
#define IP2_LIST_FOLD_EMIT_7(fn,e0,e1,e2,e3,e4,e5,e6) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),IP2_LIST_FOLD_B(e4,fn),IP2_LIST_FOLD_B(e5,fn),IP2_LIST_FOLD_B(e6,fn),
#define IP2_LIST_FOLD_EMIT_8(fn,e0,e1,e2,e3,e4,e5,e6,e7) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),IP2_LIST_FOLD_B(e4,fn),IP2_LIST_FOLD_B(e5,fn),IP2_LIST_FOLD_B(e6,fn),IP2_LIST_FOLD_B(e7,fn),
#define IP2_LIST_FOLD_EMIT_9_OR_MORE(fn,e0,e1,e2,e3,e4,e5,e6,e7,...) IP2_LIST_FOLD_B(e0,fn),IP2_LIST_FOLD_B(e1,fn),IP2_LIST_FOLD_B(e2,fn),IP2_LIST_FOLD_B(e3,fn),IP2_LIST_FOLD_B(e4,fn),IP2_LIST_FOLD_B(e5,fn),IP2_LIST_FOLD_B(e6,fn),IP2_LIST_FOLD_B(e7,fn),8IP2_LANGUAGE_LIST_FOLD_SCHEDULE,(__VA_ARGS__),fn,

/* filter(fn): map's bundle, but the spill frame is closed by a KEEP
 * instruction that pushes the original element only when fn said true. */
#define IP2_LIST_FILTER_B(e,fn) 8PP2_ARGS_SPILL,8PP2_LOCAL_CTX_PUSH_ARGUMENT,e,8PP2_LOAD_CONST,fn,8PP2_LANGUAGE_FN_CALL_IMPL,8IP2_LANGUAGE_LIST_FILTER_KEEP,e

#define PP2_DEF_List_filter PP2_VM_FN(8PP2_LANGUAGE_LIST_FILTER,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_FILTER(P,r0,r1,r2,self,fn,...) \
        (, \
         /*r0=*/,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8IP2_LANGUAGE_LIST_FILTER_SCHEDULE,PP2_LANGUAGE_OBJECT_VALUE P##self,P##fn, \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_FILTER_SCHEDULE(P,r0,r1,r2,elems,fn,...) \
        (, \
         P##r0,P##r1,P##r2, \
         IP2_LIST_FILTER_EMIT(P##elems,P##fn) \
         P##__VA_ARGS__ \
        )
#define IP2_LIST_FILTER_EMIT(elems,fn) IP2_LIST_FILTER_EMIT_I(IP2_LIST_PROBE elems,elems,fn)
#define IP2_LIST_FILTER_EMIT_I(head,elems,fn) PP2_IS_EDIBLE(,head)(IP2_LIST_FILTER_EMIT_,SOME,NONE)(elems,fn)
#define IP2_LIST_FILTER_EMIT_NONE(elems,fn) 8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_SOME(elems,fn) IP2_LIST_FILTER_EMIT_COUNT(fn,PP2_OPEN elems)
#define IP2_LIST_FILTER_EMIT_COUNT(fn,...) \
        IP2_LIST_FILTER_EMIT_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(fn,__VA_ARGS__)
#define IP2_LIST_FILTER_EMIT_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LIST_FILTER_EMIT_,m,9_OR_MORE)
#define IP2_LIST_FILTER_EMIT_1(fn,e0) IP2_LIST_FILTER_B(e0,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_2(fn,e0,e1) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_3(fn,e0,e1,e2) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_4(fn,e0,e1,e2,e3) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_5(fn,e0,e1,e2,e3,e4) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),IP2_LIST_FILTER_B(e4,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_6(fn,e0,e1,e2,e3,e4,e5) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),IP2_LIST_FILTER_B(e4,fn),IP2_LIST_FILTER_B(e5,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_7(fn,e0,e1,e2,e3,e4,e5,e6) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),IP2_LIST_FILTER_B(e4,fn),IP2_LIST_FILTER_B(e5,fn),IP2_LIST_FILTER_B(e6,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_8(fn,e0,e1,e2,e3,e4,e5,e6,e7) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),IP2_LIST_FILTER_B(e4,fn),IP2_LIST_FILTER_B(e5,fn),IP2_LIST_FILTER_B(e6,fn),IP2_LIST_FILTER_B(e7,fn),8IP2_LANGUAGE_LIST_MAP_FINISH,
#define IP2_LIST_FILTER_EMIT_9_OR_MORE(fn,e0,e1,e2,e3,e4,e5,e6,e7,...) IP2_LIST_FILTER_B(e0,fn),IP2_LIST_FILTER_B(e1,fn),IP2_LIST_FILTER_B(e2,fn),IP2_LIST_FILTER_B(e3,fn),IP2_LIST_FILTER_B(e4,fn),IP2_LIST_FILTER_B(e5,fn),IP2_LIST_FILTER_B(e6,fn),IP2_LIST_FILTER_B(e7,fn),8IP2_LANGUAGE_LIST_FILTER_SCHEDULE,(__VA_ARGS__),fn,

#define PP2_INSN_8IP2_LANGUAGE_LIST_FILTER_KEEP(P,r0,r1,r2,e,...) \
        IP2_FX(LIST_FILTER_KEEP_I,(,PP2_LANGUAGE_OBJECT_VALUE P##r0))(,P##r1,P##r2,P##e,P##__VA_ARGS__)
#define IP2_LIST_FILTER_KEEP_I(P,b) IP2_LIST_FILTER_KEEP_II(b)
#define IP2_LIST_FILTER_KEEP_II(b) IP2_LIST_FILTER_KEEP_##b
#define IP2_LIST_FILTER_KEEP_1(P,r1,r2,e,...) (,,PP2_LOCAL_CTX_UNSPILL_PUSH_ARGUMENT(P##r1,P##e),P##r2,P##__VA_ARGS__)
#define IP2_LIST_FILTER_KEEP_0(P,r1,r2,e,...) (,,IP2_LIST_FILTER_UNSPILL P##r1,P##r2,P##__VA_ARGS__)
/* restore the spilled argument frame without pushing anything. IP2_UNTAG, not
 * PP2_OPEN: entries on the spill stack carry a kind tag (see context.h), so opening
 * one raw would spill its `8A,` into the local context as an extra field. */
#define IP2_LIST_FILTER_UNSPILL(P,stack,labels,arguments,registers,_) IP2_FX(LIST_FILTER_UNSPILL_I,(,P##stack,P##labels,PP2_SEQ_SPLIT_HEAD P##registers))
#define IP2_LIST_FILTER_UNSPILL_I(P,stack,labels,frame,rest) (,P##stack,P##labels,/*arguments=*/IP2_UNTAG P##frame,/*registers=*/P##rest,)

/* each(fn): map's traversal for effect only; returns the receiver. */
#define PP2_DEF_List_each PP2_VM_FN(8PP2_LANGUAGE_LIST_EACH,2)
#define PP2_INSN_8PP2_LANGUAGE_LIST_EACH(P,r0,r1,r2,self,fn,...) \
        (, \
         /*r0=*/,P##r1,P##r2, \
         8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
         8IP2_LANGUAGE_LIST_MAP_SCHEDULE,PP2_LANGUAGE_OBJECT_VALUE P##self,P##fn, \
         8IP2_LANGUAGE_LIST_EACH_FINISH,P##self, \
         P##__VA_ARGS__ \
        )
#define PP2_INSN_8IP2_LANGUAGE_LIST_EACH_FINISH(P,r0,r1,r2,self,...) \
        (, \
         /*r0=*/P##self, \
         PP2_LOCAL_CTX_CLEAR_ARGUMENTS P##r1,P##r2, \
         P##__VA_ARGS__ \
        )

#endif
