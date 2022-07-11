/** @file */
#ifndef PP2_LANGUAGE_STATEMENTS_FOR_H
#define PP2_LANGUAGE_STATEMENTS_FOR_H

#include "pp2/language/basic/block.h"

#include "pp2/primitive/tuple/at.h"

#define PP2_DEF_for(init_stx,cond_stx,update_stx) 8PP2_LANGUAGE_FOR,init_stx,cond_stx,update_stx,IP2_LANGUAGE_FOR_PARSE_BLOCK
#define IP2_LANGUAGE_FOR_PARSE_BLOCK(...) (__VA_ARGS__)

#define PP2_INSN_8PP2_LANGUAGE_FOR(P,r0,r1,r2,init_stx,cond_stx,update_stx,body_stx_tup,...) \
                                  (, \
                                   P##r0,P##r1,P##r2, \
                                   IP2_LANGUAGE_FOR_INLINE_INIT_IF_PRESENT( \
                                       IP2_LANGUAGE_FOR_TEST_IF_INIT_OMITTED P##init_stx () \
                                   )(P##init_stx) /* no comma */ \
                                   8PP2_LANGUAGE_WHILE_LOOP, \
                                   P##cond_stx, \
                                   IP2_LANGUAGE_FOR_MERGE_BODY_AND_UPDATE_IF_PRESENT( \
                                       IP2_LANGUAGE_FOR_TEST_IF_UPDATE_OMITTED P##update_stx () \
                                   )(,P##body_stx_tup,P##update_stx), \
                                   P##__VA_ARGS__ \
                                  )

#define IP2_LANGUAGE_FOR_INLINE_INIT_IF_PRESENT(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_LANGUAGE_FOR_WITH_INIT)
#define IP2_LANGUAGE_FOR_TEST_IF_INIT_OMITTED(...) ,IP2_LANGUAGE_FOR_WITHOUT_INIT,
#define IP2_LANGUAGE_FOR_WITH_INIT(init_stx) PP2_DEF_##init_stx,
#define IP2_LANGUAGE_FOR_WITHOUT_INIT()

#define IP2_LANGUAGE_FOR_MERGE_BODY_AND_UPDATE_IF_PRESENT(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_LANGUAGE_FOR_WITH_UPDATE)
#define IP2_LANGUAGE_FOR_TEST_IF_UPDATE_OMITTED(...) ,IP2_LANGUAGE_FOR_WITHOUT_UPDATE,
#define IP2_LANGUAGE_FOR_WITH_UPDATE(P,body_stx_tup,update_stx) (PP2_OPEN P##body_stx_tup,P##update_stx)
#define IP2_LANGUAGE_FOR_WITHOUT_UPDATE(P,body_stx_tup,_) P##body_stx_tup


#define PP2_INSN_8PP2_LANGUAGE_WHILE_LOOP(P,r0,r1,r2,cond_stx,body_stx_tup,...) \
        IP2_FY( \
               LANGUAGE_WHILE_LOOP_I, \
               (, \
                P##r0,P##r1,P##r2, \
                IP2_LANGUAGE_WHILE_LOOP_MERGE_COND_AND_BODY_IF_PRESENT( \
                    IP2_LANGUAGE_WHILE_LOOP_TEST_IF_COND_OMITTED P##cond_stx () \
                )(,P##body_stx_tup,P##cond_stx), \
                P##__VA_ARGS__ \
               ) \
        )
#define IP2_LANGUAGE_WHILE_LOOP_I(P,r0,r1,r2,body_stx_tup,...) \
                                 (, \
                                  P##r0, \
                                  /*r1=*/IP2_FX(LANGUAGE_WHILE_LOOP_PUSH_LABELS, (P##body_stx_tup,(P##__VA_ARGS__),PP2_OPEN P##r1)), \
                                  P##r2, \
                                  PP2_OPEN P##body_stx_tup \
                                )

#define IP2_LANGUAGE_WHILE_LOOP_PUSH_LABELS(body,epilogue,P,stack,labels,...) (,P##stack,(,0,P##epilogue)(,1,P##body)P##labels,P##__VA_ARGS__)

#define IP2_LANGUAGE_WHILE_LOOP_MERGE_COND_AND_BODY_IF_PRESENT(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_LANGUAGE_WHILE_LOOP_CONDITIONAL)
#define IP2_LANGUAGE_WHILE_LOOP_TEST_IF_COND_OMITTED(...) ,IP2_LANGUAGE_WHILE_LOOP_UNCONDITIONAL,
#define IP2_LANGUAGE_WHILE_LOOP_CONDITIONAL(P,body_stx_tup,cond_stx) (PP2_DEF_##cond_stx,8PP2_LANGUAGE_WHILE_LOOP_BRANCH,PP2_LANGUAGE_BLOCK P##body_stx_tup,8PP2_GOTO,1,)
#define IP2_LANGUAGE_WHILE_LOOP_UNCONDITIONAL(P,body_stx_tup,_) (PP2_LANGUAGE_BLOCK P##body_stx_tup,8PP2_GOTO,1,)

#define PP2_INSN_8PP2_LANGUAGE_WHILE_LOOP_BRANCH(P,r0,r1,r2,...) (,/*r0=*/,P##r1,P##r2,IP2_LANGUAGE_WHILE_LOOP_BRANCH_SELECT P##r0 (,P##__VA_ARGS__))

#define IP2_LANGUAGE_WHILE_LOOP_BRANCH_SELECT(obj_addr,obj_type,obj_value) IP2_LANGUAGE_WHILE_LOOP_BRANCH_##obj_value
#define IP2_LANGUAGE_WHILE_LOOP_BRANCH_1(P,...) P##__VA_ARGS__
#define IP2_LANGUAGE_WHILE_LOOP_BRANCH_0(P,...) 8PP2_GOTO,0,

#endif