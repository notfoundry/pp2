/** @file */
#ifndef PP2_LANGUAGE_STATEMENTS_FOR_H
#define PP2_LANGUAGE_STATEMENTS_FOR_H

#include "pp2/language/statements/while.h"

#include "pp2/primitive/tuple/at.h"

#define PP2_DEF_for(init_stx,cond_stx,update_stx) )PP2_COMPILE_LANGUAGE_FOR(init_stx,cond_stx,update_stx,

#define PP2_COMPILE_LANGUAGE_FOR(init_stx,cond_stx,update_stx,body_stx_tup) \
        IP2_COMPILE_LANGUAGE_FOR_INLINE_INIT_IF_PRESENT( \
            IP2_COMPILE_LANGUAGE_FOR_TEST_IF_INIT_OMITTED init_stx () \
        )(init_stx) /*no comma*/ \
        PP2_COMPILE_LANGUAGE_WHILE( \
            cond_stx, \
            IP2_COMPILE_LANGUAGE_FOR_MERGE_BODY_AND_UPDATE_IF_PRESENT( \
                IP2_COMPILE_LANGUAGE_FOR_TEST_IF_UPDATE_OMITTED update_stx () \
            )(,body_stx_tup,update_stx) \
        )

#define IP2_COMPILE_LANGUAGE_FOR_INLINE_INIT_IF_PRESENT(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_COMPILE_LANGUAGE_FOR_WITH_INIT)
#define IP2_COMPILE_LANGUAGE_FOR_TEST_IF_INIT_OMITTED(...) ,IP2_COMPILE_LANGUAGE_FOR_WITHOUT_INIT,
#define IP2_COMPILE_LANGUAGE_FOR_WITH_INIT(init_stx) 8PP2_LANGUAGE_COMPILE,init_stx,
#define IP2_COMPILE_LANGUAGE_FOR_WITHOUT_INIT()

#define IP2_COMPILE_LANGUAGE_FOR_MERGE_BODY_AND_UPDATE_IF_PRESENT(...) PP2_TUPLE_AT_1(,__VA_ARGS__,IP2_COMPILE_LANGUAGE_FOR_WITH_UPDATE)
#define IP2_COMPILE_LANGUAGE_FOR_TEST_IF_UPDATE_OMITTED(...) ,IP2_COMPILE_LANGUAGE_FOR_WITHOUT_UPDATE,
#define IP2_COMPILE_LANGUAGE_FOR_WITH_UPDATE(P,body_stx_tup,update_stx) (PP2_OPEN P##body_stx_tup,P##update_stx)
#define IP2_COMPILE_LANGUAGE_FOR_WITHOUT_UPDATE(P,body_stx_tup,_) P##body_stx_tup

#endif