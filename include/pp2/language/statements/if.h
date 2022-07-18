/** @file */
#ifndef PP2_LANGUAGE_STATEMENTS_IF_H
#define PP2_LANGUAGE_STATEMENTS_IF_H

#include "pp2/language/basic/block.h"
#include "pp2/language/definition/basic.h"
#include "pp2/primitive/seq/head.h"

#define PP2_DEF_if(cond_stx) PP2_BASIC_DEF(8PP2_LANGUAGE_IF,cond_stx,PP2_SEQ_SPLIT_HEAD)


#define PP2_INSN_8PP2_LANGUAGE_IF(P,r0,r1,r2,cond_stx,if_branch,else_branch,...) \
                                 (,\
                                  P##r0,P##r1,P##r2, \
                                  PP2_COMPILE(cond_stx), \
                                  8PP2_LANGUAGE_IF_BRANCH,P##if_branch,P##else_branch, \
                                  P##__VA_ARGS__ \
                                 )

#define PP2_INSN_8PP2_LANGUAGE_IF_BRANCH(P,r0,r1,r2,if_branch,else_branch,...) \
                                        (, \
                                         /*r0=*/,P##r1,P##r2, \
                                         IP2_LANGUAGE_IF_BRANCH_SELECT P##r0 (,P##if_branch,P##else_branch), \
                                         P##__VA_ARGS__ \
                                        )

#define PP2_INSN_8PP2_LANGUAGE_ELSE(P,r0,r1,r2,else_branch,...) \
                                   (, \
                                    P##r0,P##r1,P##r2, \
                                    IP2_LANGUAGE_ELSE_TEST_IF_COND(IP2_LANGUAGE_ELSE_DETECT_BLOCK P##else_branch), \
                                    P##__VA_ARGS__, \
                                   )

#define PP2_INSN_8PP2_LANGUAGE_ELSE_IF(P,r0,r1,r2,if_branch,...) \
                                      (, \
                                       P##r0,P##r1,P##r2, \
                                       PP2_COMPILE(if_branch), \
                                       P##__VA_ARGS__, \
                                      )

#define IP2_LANGUAGE_IF_BRANCH_SELECT(obj_addr,obj_type,obj_value) IP2_LANGUAGE_IF_BRANCH_##obj_value
#define IP2_LANGUAGE_IF_BRANCH_1(P,if_branch,else_branch)  PP2_LANGUAGE_BLOCK P##if_branch
#define IP2_LANGUAGE_IF_BRANCH_0(P,if_branch,else_branch) IP2_LANGUAGE_ELSE_MATCH_##else_branch

#define IP2_LANGUAGE_ELSE_MATCH_else 8PP2_LANGUAGE_ELSE,

#define IP2_LANGUAGE_ELSE_DETECT_BLOCK(...) 0BLOCK_DETECTED,PP2_LANGUAGE_BLOCK(__VA_ARGS__)
#define IP2_LANGUAGE_ELSE_TEST_IF_COND(...) IP2_LANGUAGE_ELSE_TEST_IF_COND_I(__VA_ARGS__)
#define IP2_LANGUAGE_ELSE_TEST_IF_COND_I(suffix,...) IP2_LANGUAGE_ELSE_TEST_IF_COND_II_##suffix __VA_ARGS__
#define IP2_LANGUAGE_ELSE_TEST_IF_COND_II_IP2_LANGUAGE_ELSE_DETECT_BLOCK 8PP2_LANGUAGE_ELSE_IF,
#define IP2_LANGUAGE_ELSE_TEST_IF_COND_II_0BLOCK_DETECTED

#endif