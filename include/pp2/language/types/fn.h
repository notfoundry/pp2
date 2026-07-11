/** @file */
#ifndef PP2_LANGUAGE_TYPES_FN_H
#define PP2_LANGUAGE_TYPES_FN_H

#include "pp2/language/compiler.h"
#include "pp2/language/basic/return.h"
#include "pp2/language/basic/object.h"
#include "pp2/language/definition/type.h"
#include "pp2/language/definition/vm_fn.h"

#include "pp2/machine/context.h"
#include "pp2/machine/insns/nop.h"

#include "pp2/primitive/punctuation/comma.h"
#include "pp2/primitive/introspection/is_tuple.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/tuple/open.h"
#include "pp2/primitive/tuple/at.h"
#include "pp2/primitive/seq/head.h"

#define PP2_DEF_Fn PP2_TYPE(Fn,Any)
#define PP2_SYM_Fn(...) __VA_ARGS__

/* Fn(params, body): build a function from its constituent data -- a parameter
 * list and a quote holding the body -- exactly as the `fn (params) (body)`
 * literal would. This VM's functions capture no lexical environment, so params
 * + body are the whole of a Fn; there is no closure to pass. The body is
 * unwrapped to its raw token tuple and handed, with the parameter names, to the
 * same 8PP2_LANGUAGE_FN builder the fn keyword uses, so parameter binding,
 * framing and the body block all go through one path.
 *
 * The parameter list comes either way round:
 *
 *     Fn ((x, y), (x plus (y)))               one quote holding both names
 *     Fn (List ((x), (y)), (x plus (y)))      a List of quoted names
 *
 * The quote form is direct and carries any number of names. The explicit List
 * form is useful when parameter names are already first-class Quote values. */
#define PP2_DEF_Fn_construct PP2_VM_FN(8PP2_LANGUAGE_FN_CONSTRUCT,3)
#define PP2_INSN_8PP2_LANGUAGE_FN_CONSTRUCT(P,r0,r1,r2,self,params_q,body_q,...) \
        (, \
         /*r0=*/, \
         P##r1,P##r2, \
         8PP2_LANGUAGE_FN, \
         IP2_FX(LANGUAGE_FN_CONSTRUCT_PARAMS,(,PP2_LANGUAGE_OBJECT_TYPE P##params_q,P##params_q)), \
         PP2_LANGUAGE_OBJECT_VALUE P##body_q, \
         P##__VA_ARGS__ \
        )

/* one paste on the parameter object's type: a Quote already holds the raw
 * parameter tokens, a List holds one Quote per name */
#define IP2_LANGUAGE_FN_CONSTRUCT_PARAMS(P,type,obj) IP2_LANGUAGE_FN_CONSTRUCT_PARAMS_##type(P##obj)
#define IP2_LANGUAGE_FN_CONSTRUCT_PARAMS_Quote(obj) PP2_LANGUAGE_OBJECT_VALUE obj
#define IP2_LANGUAGE_FN_CONSTRUCT_PARAMS_List(obj) IP2_LANGUAGE_FN_PARAMS_JOIN(PP2_LANGUAGE_OBJECT_VALUE obj)

/* join the element quotes back into the bare, comma-separated parameter list
 * the fn builder expects. An empty List is a function of no parameters. */
#define IP2_LANGUAGE_FN_PARAMS_JOIN(elems) IP2_LANGUAGE_FN_PARAMS_JOIN_I(IP2_LANGUAGE_FN_PARAMS_PROBE elems,elems)
#define IP2_LANGUAGE_FN_PARAMS_PROBE(x0,...) x0
#define IP2_LANGUAGE_FN_PARAMS_JOIN_I(head,elems) PP2_IS_TUPLE(head)(IP2_LANGUAGE_FN_PARAMS_SOME,IP2_LANGUAGE_FN_PARAMS_NONE)(elems)
#define IP2_LANGUAGE_FN_PARAMS_NONE(elems) ()
#define IP2_LANGUAGE_FN_PARAMS_SOME(elems) (IP2_LANGUAGE_FN_PARAMS_OVERLOAD elems)

#define IP2_LANGUAGE_FN_PARAMS_OVERLOAD(...) \
        IP2_LANGUAGE_FN_PARAMS_SELECT( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(,__VA_ARGS__)
#define IP2_LANGUAGE_FN_PARAMS_SELECT(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_FN_PARAMS_,m,9_OR_MORE)

/* a quote's value keeps its wrapping parens, so the name needs one OPEN */
#define IP2_LANGUAGE_FN_PARAMS_NAME(e) PP2_FX(OPEN,PP2_LANGUAGE_OBJECT_VALUE e)

#define IP2_LANGUAGE_FN_PARAMS_1(P,e0) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0)
#define IP2_LANGUAGE_FN_PARAMS_2(P,e0,e1) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1)
#define IP2_LANGUAGE_FN_PARAMS_3(P,e0,e1,e2) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2)
#define IP2_LANGUAGE_FN_PARAMS_4(P,e0,e1,e2,e3) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2),IP2_LANGUAGE_FN_PARAMS_NAME(P##e3)
#define IP2_LANGUAGE_FN_PARAMS_5(P,e0,e1,e2,e3,e4) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2),IP2_LANGUAGE_FN_PARAMS_NAME(P##e3),IP2_LANGUAGE_FN_PARAMS_NAME(P##e4)
#define IP2_LANGUAGE_FN_PARAMS_6(P,e0,e1,e2,e3,e4,e5) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2),IP2_LANGUAGE_FN_PARAMS_NAME(P##e3),IP2_LANGUAGE_FN_PARAMS_NAME(P##e4),IP2_LANGUAGE_FN_PARAMS_NAME(P##e5)
#define IP2_LANGUAGE_FN_PARAMS_7(P,e0,e1,e2,e3,e4,e5,e6) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2),IP2_LANGUAGE_FN_PARAMS_NAME(P##e3),IP2_LANGUAGE_FN_PARAMS_NAME(P##e4),IP2_LANGUAGE_FN_PARAMS_NAME(P##e5),IP2_LANGUAGE_FN_PARAMS_NAME(P##e6)
#define IP2_LANGUAGE_FN_PARAMS_8(P,e0,e1,e2,e3,e4,e5,e6,e7) IP2_LANGUAGE_FN_PARAMS_NAME(P##e0),IP2_LANGUAGE_FN_PARAMS_NAME(P##e1),IP2_LANGUAGE_FN_PARAMS_NAME(P##e2),IP2_LANGUAGE_FN_PARAMS_NAME(P##e3),IP2_LANGUAGE_FN_PARAMS_NAME(P##e4),IP2_LANGUAGE_FN_PARAMS_NAME(P##e5),IP2_LANGUAGE_FN_PARAMS_NAME(P##e6),IP2_LANGUAGE_FN_PARAMS_NAME(P##e7)
/* Rejoining more than eight names would need a second overload family, and the
 * quote form already carries any number, so this stops rather than truncating.
 * The failure token reaches the output the way PP2_VM_FAILURE does. */
#define IP2_LANGUAGE_FN_PARAMS_9_OR_MORE(P,...) PP2_LANGUAGE_FN_PARAMS_FAILURE

#define PP2_DEF_Fn_call )PP2_COMPILE_LANGUAGE_FN_CALL(,
#define PP2_COMPILE_LANGUAGE_FN_CALL(P,args_tup) \
        IP2_COMPILE_LANGUAGE_FN_CALL_CHOOSE_PTR_OR_CALL( \
            IP2_COMPILE_LANGUAGE_FN_CALL_TEST_IF_CALL P##args_tup\
        )(,P##args_tup)

#define IP2_COMPILE_LANGUAGE_FN_CALL(P,args_tup) IP2_FW(COMPILE_LANGUAGE_FN_CALL_I,(,PP2_SEQ_SPLIT_HEAD P##args_tup))
#define IP2_COMPILE_LANGUAGE_FN_CALL_I(P,args_tup,rhs_stx) 8PP2_LANGUAGE_FN_CALL,P##args_tup,PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx)
#define IP2_COMPILE_LANGUAGE_FN_CALL_PTR(P,rhs_stx) 8PP2_LANGUAGE_FN_PTR,PP2_COMPILE_LANGUAGE_RETURN(P##rhs_stx)

#define IP2_COMPILE_LANGUAGE_FN_CALL_CHOOSE_PTR_OR_CALL(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_COMPILE_LANGUAGE_FN_CALL_PTR)
#define IP2_COMPILE_LANGUAGE_FN_CALL_TEST_IF_CALL(...) ,IP2_COMPILE_LANGUAGE_FN_CALL,


#define PP2_INSN_8PP2_LANGUAGE_FN_PTR(P,r0,r1,r2,...) \
                                     (, \
                                      /*r0=*/(,Fn,(,8PP2_LANGUAGE_FN_PTR_CALL,PP2_LOCAL_CTX_GET_ARGUMENTS P##r1)), \
                                      /*r1=*/P##r1, \
                                      /*r2=*/P##r2, \
                                      8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
                                      P##__VA_ARGS__ \
                                     )

#define PP2_INSN_8PP2_LANGUAGE_FN_PTR_CALL(P,r0,r1,r2,ptr,...) \
                                          (, \
                                           /*r0=*/P##ptr,\
                                           /*r1=*/P##r1, \
                                           /*r2=*/P##r2, \
                                           8PP2_LANGUAGE_FN_CALL_IMPL, \
                                           P##__VA_ARGS__ \
                                          )

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL(P,r0,r1,r2,args_tup,...) \
                                      (, \
                                       /*r0=*/, \
                                       /*r1=*/P##r1, \
                                       /*r2=*/P##r2, \
                                       PP2_LANGUAGE_FN_PARSE_ARGS P##args_tup, \
                                       8IP2_LANGUAGE_FN_CALL, \
                                       P##__VA_ARGS__ \
                                      )

#define PP2_INSN_8IP2_LANGUAGE_FN_CALL(P,r0,r1,r2,...) \
                                      (, \
                                       /*r0=*/PP2_LOCAL_CTX_GET_ARGUMENTS_HEAD P##r1, \
                                       /*r1=*/PP2_LOCAL_CTX_POP_ARGUMENT P##r1, \
                                       /*r2=*/P##r2, \
                                       8PP2_LANGUAGE_FN_CALL_IMPL, \
                                       P##__VA_ARGS__ \
                                      )

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL_IMPL(P,r0,r1,r2,...) \
                                           (, \
                                            /*r0=*/, \
                                            /*r1=*/P##r1, \
                                            /*r2=*/P##r2, \
                                            IP2_LANGUAGE_FN_CALL_OPEN P##r0, \
                                            8PP2_LOCAL_CTX_CLEAR_ARGUMENTS, \
                                            P##__VA_ARGS__ \
                                           )

#define IP2_LANGUAGE_FN_CALL_OPEN(fn_addr,fn_type,fn_value) PP2_QUOTE_OPEN fn_value

#define PP2_INSN_8PP2_LANGUAGE_FN_PARSE_ARGS(P,r0,r1,r2,args_tup,...) (,P##r0,P##r1,P##r2,PP2_LANGUAGE_FN_PARSE_ARGS P##args_tup,P##__VA_ARGS__)
#define PP2_LANGUAGE_FN_PARSE_ARGS(...) \
        IP2_LANGUAGE_FN_CALL_PARSE_ARGS_OVERLOAD( \
            __VA_ARGS__, \
            PP2_COMMA_8, \
            PP2_COMMA_7, \
            PP2_COMMA_6, \
            PP2_COMMA_5, \
            PP2_COMMA_4, \
            PP2_COMMA_3, \
            PP2_COMMA_2, \
            PP2_COMMA_1, \
        )(,__VA_ARGS__)
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_OVERLOAD(x0,x1,x2,x3,x4,x5,x6,x7,m,...) PP2_TUPLE_AT_1(IP2_LANGUAGE_FN_CALL_PARSE_ARGS_,m,9_OR_MORE)

#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_0(P,_) 8PP2_NOP

#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1(P,a0) PP2_IS_TUPLE(P##a0)(IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1_QUOTE,IP2_LANGUAGE_FN_CALL_PARSE_ARGS_CHOOSE_0_OR_1_ARG(IP2_LANGUAGE_FN_CALL_TEST_IF_0_ARGS P##a0 ()))(,P##a0)
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1_SYNTAX(P,a0) 8PP2_ARGS_SPILL,IP2_LANGUAGE_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1_QUOTE(P,a0) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_CHOOSE_0_OR_1_ARG(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_LANGUAGE_FN_CALL_PARSE_ARGS_1_SYNTAX)
#define IP2_LANGUAGE_FN_CALL_TEST_IF_0_ARGS() ,IP2_LANGUAGE_FN_CALL_PARSE_ARGS_0,

#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_2(P,a0,a1) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_3(P,a0,a1,a2) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_4(P,a0,a1,a2,a3) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_5(P,a0,a1,a2,a3,a4) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a4),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_6(P,a0,a1,a2,a3,a4,a5) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a4),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a5),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_7(P,a0,a1,a2,a3,a4,a5,a6) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a4),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a5),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a6),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_8(P,a0,a1,a2,a3,a4,a5,a6,a7) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a4),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a5),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a6),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a7),8PP2_ARGS_UNSPILL_PUSH
#define IP2_LANGUAGE_FN_CALL_PARSE_ARGS_9_OR_MORE(P,a0,a1,a2,a3,a4,a5,a6,a7,...) 8PP2_ARGS_SPILL,PP2_COMPILE(P##a0),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a1),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a2),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a3),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a4),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a5),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a6),8PP2_ARGS_UNSPILL_PUSH,8PP2_ARGS_SPILL,PP2_COMPILE(P##a7),8PP2_ARGS_UNSPILL_PUSH,8PP2_LANGUAGE_FN_PARSE_ARGS,(P##__VA_ARGS__)

#define PP2_INSN_8PP2_LANGUAGE_FN_CALL_PUSH_ARG(P,r0,r1,r2,...) \
                                               (, \
                                                /*r0=*/, \
                                                /*r1=*/PP2_LOCAL_CTX_PUSH_ARGUMENT(P##r1,P##r0), \
                                                /*r2=*/P##r2, \
                                                P##__VA_ARGS__ \
                                               )

#endif
