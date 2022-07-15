/** @file */
#ifndef PP2_LANGUAGE_STATEMENTS_WHILE_H
#define PP2_LANGUAGE_STATEMENTS_WHILE_H

#include "pp2/language/basic/block.h"

#include "pp2/machine/goto/goto.h"
#include "pp2/machine/goto/label.h"

#include "pp2/primitive/tuple/at.h"

#define PP2_DEF_while(cond_stx) PP2_COMPILE_LANGUAGE_WHILE(cond_stx,

#define PP2_COMPILE_LANGUAGE_WHILE(cond_stx,body_stx_tup) \
        8PP2_LANGUAGE_LOOP, \
        IP2_COMPILE_LANGUAGE_WHILE_MERGE_COND_AND_BODY_IF_PRESENT( \
            IP2_COMPILE_LANGUAGE_WHILE_TEST_IF_COND_OMITTED cond_stx () \
        )(,body_stx_tup,cond_stx)

#define IP2_COMPILE_LANGUAGE_WHILE_MERGE_COND_AND_BODY_IF_PRESENT(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_COMPILE_LANGUAGE_WHILE_CONDITIONAL)
#define IP2_COMPILE_LANGUAGE_WHILE_TEST_IF_COND_OMITTED(...) ,IP2_COMPILE_LANGUAGE_WHILE_UNCONDITIONAL,
#define IP2_COMPILE_LANGUAGE_WHILE_CONDITIONAL(P,body_stx_tup,cond_stx) \
        ( \
         PP2_DEF_##cond_stx), \
         8PP2_LANGUAGE_WHILE_LOOP_BRANCH, \
         8PP2_LANGUAGE_BLOCK,P##body_stx_tup, \
         8PP2_GOTO,1, \
        )
#define IP2_COMPILE_LANGUAGE_WHILE_UNCONDITIONAL(P,body_stx_tup,_) \
        ( \
         8PP2_LANGUAGE_BLOCK,P##body_stx_tup, \
         8PP2_GOTO,1, \
        )


#define PP2_INSN_8PP2_LANGUAGE_LOOP(P,r0,r1,r2,body_stx_tup,...) \
                                   (, \
                                    P##r0, \
                                    /*r1=*/IP2_FX(LANGUAGE_WHILE_LOOP_PUSH_LABELS, (P##body_stx_tup,(P##__VA_ARGS__),PP2_OPEN P##r1)), \
                                    P##r2, \
                                    PP2_OPEN P##body_stx_tup \
                                   )

#define IP2_LANGUAGE_WHILE_LOOP_PUSH_LABELS(body,epilogue,P,stack,labels,...) (,P##stack,(,0,P##epilogue)(,1,P##body)P##labels,P##__VA_ARGS__)


#define PP2_INSN_8PP2_LANGUAGE_WHILE_LOOP_BRANCH(P,r0,r1,r2,...) \
                                                (, \
                                                 /*r0=*/,P##r1,P##r2, \
                                                 IP2_LANGUAGE_WHILE_LOOP_BRANCH_SELECT P##r0 (,P##__VA_ARGS__) \
                                                )

#define IP2_LANGUAGE_WHILE_LOOP_BRANCH_SELECT(obj_addr,obj_type,obj_value) IP2_LANGUAGE_WHILE_LOOP_BRANCH_##obj_value
#define IP2_LANGUAGE_WHILE_LOOP_BRANCH_1(P,...) P##__VA_ARGS__
#define IP2_LANGUAGE_WHILE_LOOP_BRANCH_0(P,...) 8PP2_GOTO,0,

#endif