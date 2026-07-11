/** @file */
#ifndef PP2_LANGUAGE_BASIC_VARIABLE_H
#define PP2_LANGUAGE_BASIC_VARIABLE_H

#include "pp2/language/basic/detail/variable_tables.h"
#include "pp2/language/basic/detail/name.h"
#include "pp2/language/basic/nil.h"
#include "pp2/language/basic/return.h"
#include "pp2/language/compiler.h"

#include "pp2/machine/stack/load.h"
#include "pp2/machine/stack/store.h"

/* Declare a multi-character variable name host-side. The name is spelled as its
 * characters, since a single token cannot be taken apart:
 *
 *   #define PP2_DEF_total PP2_VAR(t,o,t,a,l)
 *
 * after which bare `total` is a variable in every position, exactly like the
 * built-in single letters. The address is the char-seq (t)(o)(t)(a)(l); load
 * and store compare addresses character by character (see frame_walk.h), so
 * there is no slot table and no limit on distinct names. */
#define PP2_VAR(...) )PP2_COMPILE_LANGUAGE_VAR(PP2_CHARSEQ(__VA_ARGS__),

/* The in-language `var (...)` keyword: a variable whose name is written inline as
 * a run of space-separated characters, no host-side declaration needed.
 *
 *   var (t o t a l) (5)         assigns 5 to total
 *   print(var (t o t a l))      reads it back
 *
 * `var` is compiled like any other bare token, so PP2_DEF_var is pasted with the
 * name group trailing it (see IP2_LANGUAGE_COMPILE); being function-like, it takes
 * that group as its argument and leaves whatever follows as the right-hand side,
 * exactly as the single-letter PP2_DEF_<c> entries do. PP2_SPACED turns the run
 * into the char-seq address (t)(o)(t)(a)(l) at compile time, so `var (...)` costs
 * no more at run time than a built-in letter. Names draw from the alphabet
 * a-z A-Z 0-9 _ and run to 40 characters (see name.h). */
#define PP2_DEF_var(name) )PP2_COMPILE_LANGUAGE_VAR(PP2_SPACED(name),

#define PP2_INSN_8PP2_LANGUAGE_VAR(P,r0,r1,r2,addr,rhs_stx,...) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(PP2_INSN_,IP2_LANGUAGE_VAR_TEST_IF_STORE P##rhs_stx) \
        (, \
         P##r0,P##r1,P##r2, \
         P##addr,P##value, \
         P##__VA_ARGS__ \
        )

#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(P,...) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE_I(P, \
            __VA_ARGS__, \
            8IP2_LANGUAGE_VAR_LOAD \
        )
#define IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE_I(P,_,insn,...) P##insn
#define IP2_LANGUAGE_VAR_TEST_IF_STORE(...) ,8IP2_LANGUAGE_VAR_STORE,


/* An assignment is done for its effect, so it answers with nil. 8PP2_STACK_STORE
 * clears r0 once the value is in the frame, and the nil goes in after it. */
#define PP2_INSN_8IP2_LANGUAGE_VAR_STORE(P,r0,r1,r2,addr,value,...) \
                                        (, \
                                         P##r0,P##r1,P##r2, \
                                         IP2_LANGUAGE_VAR_STORE_OPEN P##value,8PP2_STACK_STORE,P##addr, \
                                         8PP2_LANGUAGE_LOAD_NIL, \
                                         P##__VA_ARGS__ \
                                        )
#define IP2_LANGUAGE_VAR_STORE_OPEN(value) PP2_COMPILE(value)

#define PP2_INSN_8IP2_LANGUAGE_VAR_LOAD(P,r0,r1,r2,addr,method,...) \
                                       (, \\
                                        P##r0,P##r1,P##r2, \
                                        8PP2_STACK_LOAD,P##addr,PP2_COMPILE_LANGUAGE_RETURN(P##method), \
                                        P##__VA_ARGS__ \
                                       )


#define PP2_COMPILE_LANGUAGE_VAR(addr,rhs_stx) \
        IP2_LANGUAGE_VAR_CHOOSE_LOAD_STORE(,IP2_LANGUAGE_VAR_TEST_IF_STORE rhs_stx),addr,rhs_stx

#endif