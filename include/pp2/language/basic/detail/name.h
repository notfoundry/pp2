/** @file */
#ifndef PP2_LANGUAGE_BASIC_DETAIL_NAME_H
#define PP2_LANGUAGE_BASIC_DETAIL_NAME_H

#include "pp2/primitive/punctuation/comma.h"
#include "pp2/primitive/tuple/at.h"

/* Build a char-seq address from comma-separated characters:
 * PP2_CHARSEQ(t,o,t,a,l) -> (t)(o)(t)(a)(l). Used by PP2_VAR to declare a
 * multi-character variable name host-side. Bounded at 40 characters. */
#define PP2_CHARSEQ(...) IP2_CHARSEQ_OVL(__VA_ARGS__,PP2_COMMA_40, PP2_COMMA_39, PP2_COMMA_38, PP2_COMMA_37, PP2_COMMA_36, PP2_COMMA_35, PP2_COMMA_34, PP2_COMMA_33, PP2_COMMA_32, PP2_COMMA_31, PP2_COMMA_30, PP2_COMMA_29, PP2_COMMA_28, PP2_COMMA_27, PP2_COMMA_26, PP2_COMMA_25, PP2_COMMA_24, PP2_COMMA_23, PP2_COMMA_22, PP2_COMMA_21, PP2_COMMA_20, PP2_COMMA_19, PP2_COMMA_18, PP2_COMMA_17, PP2_COMMA_16, PP2_COMMA_15, PP2_COMMA_14, PP2_COMMA_13, PP2_COMMA_12, PP2_COMMA_11, PP2_COMMA_10, PP2_COMMA_9, PP2_COMMA_8, PP2_COMMA_7, PP2_COMMA_6, PP2_COMMA_5, PP2_COMMA_4, PP2_COMMA_3, PP2_COMMA_2, PP2_COMMA_1,)(__VA_ARGS__)

#define IP2_CHARSEQ_OVL(x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,m,...) PP2_TUPLE_AT_1(IP2_CHARSEQ_,m,41_OR_MORE)
#define IP2_CHARSEQ_1(c0) (c0)
#define IP2_CHARSEQ_2(c0,c1) (c0)(c1)
#define IP2_CHARSEQ_3(c0,c1,c2) (c0)(c1)(c2)
#define IP2_CHARSEQ_4(c0,c1,c2,c3) (c0)(c1)(c2)(c3)
#define IP2_CHARSEQ_5(c0,c1,c2,c3,c4) (c0)(c1)(c2)(c3)(c4)
#define IP2_CHARSEQ_6(c0,c1,c2,c3,c4,c5) (c0)(c1)(c2)(c3)(c4)(c5)
#define IP2_CHARSEQ_7(c0,c1,c2,c3,c4,c5,c6) (c0)(c1)(c2)(c3)(c4)(c5)(c6)
#define IP2_CHARSEQ_8(c0,c1,c2,c3,c4,c5,c6,c7) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)
#define IP2_CHARSEQ_9(c0,c1,c2,c3,c4,c5,c6,c7,c8) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)
#define IP2_CHARSEQ_10(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)
#define IP2_CHARSEQ_11(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)
#define IP2_CHARSEQ_12(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)
#define IP2_CHARSEQ_13(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)
#define IP2_CHARSEQ_14(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)
#define IP2_CHARSEQ_15(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)
#define IP2_CHARSEQ_16(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)
#define IP2_CHARSEQ_17(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)
#define IP2_CHARSEQ_18(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)
#define IP2_CHARSEQ_19(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)
#define IP2_CHARSEQ_20(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)
#define IP2_CHARSEQ_21(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)
#define IP2_CHARSEQ_22(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)
#define IP2_CHARSEQ_23(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)
#define IP2_CHARSEQ_24(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)
#define IP2_CHARSEQ_25(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)
#define IP2_CHARSEQ_26(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)
#define IP2_CHARSEQ_27(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)
#define IP2_CHARSEQ_28(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)
#define IP2_CHARSEQ_29(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)
#define IP2_CHARSEQ_30(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)
#define IP2_CHARSEQ_31(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)
#define IP2_CHARSEQ_32(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)
#define IP2_CHARSEQ_33(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)
#define IP2_CHARSEQ_34(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)
#define IP2_CHARSEQ_35(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)
#define IP2_CHARSEQ_36(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)
#define IP2_CHARSEQ_37(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)(c36)
#define IP2_CHARSEQ_38(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36,c37) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)(c36)(c37)
#define IP2_CHARSEQ_39(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36,c37,c38) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)(c36)(c37)(c38)
#define IP2_CHARSEQ_40(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36,c37,c38,c39) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)(c36)(c37)(c38)(c39)
#define IP2_CHARSEQ_41_OR_MORE(c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36,c37,c38,c39,...) (c0)(c1)(c2)(c3)(c4)(c5)(c6)(c7)(c8)(c9)(c10)(c11)(c12)(c13)(c14)(c15)(c16)(c17)(c18)(c19)(c20)(c21)(c22)(c23)(c24)(c25)(c26)(c27)(c28)(c29)(c30)(c31)(c32)(c33)(c34)(c35)(c36)(c37)(c38)(c39) PP2_NAME_TOO_LONG

/* ---- PP2_SPACED: a space-separated name -> a char-seq, at compile time ----
 * PP2_SPACED(t e s t) -> (t)(e)(s)(t). Backs the in-language `var (...)` keyword
 * (see variable.h). A whitespace-separated run is the one thing a macro cannot
 * split -- there is no comma to break on -- so each character is pasted onto
 * IP2_SPACED_WRAP_, which rewrites it as `(c),CONT,`. Argument pre-expansion in the
 * re-split step turns that injected comma into a real argument boundary, handing
 * the character off as a group and leaving the tail bare for the next peel. No
 * reach-forward, no paren balancing. The sentinel IP2_SPACED_END wraps to `,STOP,`.
 *
 * A CAT-peel nests each step inside the last, so hide-sets accumulate down the
 * chain and ANY macro shared between steps is blue-painted on re-entry (the 2-name
 * A/B alternation the arbitrary engine uses only survives a flat sibling walk over
 * a pre-grouped seq, which a bare run is not). So every macro on the path is
 * distinct per depth: IP2_SPACED_<k> re-splits, _C_<k> dispatches on the marker,
 * _CONT_<k> peels the next character, _STOP_<k> returns the finished seq. The hot
 * path is three expansions per character. Characters must come from the registered
 * alphabet (a-z A-Z 0-9 _); past 40 characters yields PP2_NAME_TOO_LONG. */
#define PP2_SPACED(...) IP2_SPACED_1(,IP2_SPACED_WRAP_##__VA_ARGS__ IP2_SPACED_END)

#define IP2_SPACED_1(acc,rest) IP2_SPACED_C_1(acc,rest)
#define IP2_SPACED_C_1(acc,head,marker,...) IP2_SPACED_##marker##_1(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_1(acc,head,...) acc
#define IP2_SPACED_CONT_1(acc,head,...) IP2_SPACED_2(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_2(acc,rest) IP2_SPACED_C_2(acc,rest)
#define IP2_SPACED_C_2(acc,head,marker,...) IP2_SPACED_##marker##_2(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_2(acc,head,...) acc
#define IP2_SPACED_CONT_2(acc,head,...) IP2_SPACED_3(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_3(acc,rest) IP2_SPACED_C_3(acc,rest)
#define IP2_SPACED_C_3(acc,head,marker,...) IP2_SPACED_##marker##_3(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_3(acc,head,...) acc
#define IP2_SPACED_CONT_3(acc,head,...) IP2_SPACED_4(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_4(acc,rest) IP2_SPACED_C_4(acc,rest)
#define IP2_SPACED_C_4(acc,head,marker,...) IP2_SPACED_##marker##_4(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_4(acc,head,...) acc
#define IP2_SPACED_CONT_4(acc,head,...) IP2_SPACED_5(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_5(acc,rest) IP2_SPACED_C_5(acc,rest)
#define IP2_SPACED_C_5(acc,head,marker,...) IP2_SPACED_##marker##_5(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_5(acc,head,...) acc
#define IP2_SPACED_CONT_5(acc,head,...) IP2_SPACED_6(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_6(acc,rest) IP2_SPACED_C_6(acc,rest)
#define IP2_SPACED_C_6(acc,head,marker,...) IP2_SPACED_##marker##_6(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_6(acc,head,...) acc
#define IP2_SPACED_CONT_6(acc,head,...) IP2_SPACED_7(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_7(acc,rest) IP2_SPACED_C_7(acc,rest)
#define IP2_SPACED_C_7(acc,head,marker,...) IP2_SPACED_##marker##_7(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_7(acc,head,...) acc
#define IP2_SPACED_CONT_7(acc,head,...) IP2_SPACED_8(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_8(acc,rest) IP2_SPACED_C_8(acc,rest)
#define IP2_SPACED_C_8(acc,head,marker,...) IP2_SPACED_##marker##_8(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_8(acc,head,...) acc
#define IP2_SPACED_CONT_8(acc,head,...) IP2_SPACED_9(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_9(acc,rest) IP2_SPACED_C_9(acc,rest)
#define IP2_SPACED_C_9(acc,head,marker,...) IP2_SPACED_##marker##_9(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_9(acc,head,...) acc
#define IP2_SPACED_CONT_9(acc,head,...) IP2_SPACED_10(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_10(acc,rest) IP2_SPACED_C_10(acc,rest)
#define IP2_SPACED_C_10(acc,head,marker,...) IP2_SPACED_##marker##_10(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_10(acc,head,...) acc
#define IP2_SPACED_CONT_10(acc,head,...) IP2_SPACED_11(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_11(acc,rest) IP2_SPACED_C_11(acc,rest)
#define IP2_SPACED_C_11(acc,head,marker,...) IP2_SPACED_##marker##_11(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_11(acc,head,...) acc
#define IP2_SPACED_CONT_11(acc,head,...) IP2_SPACED_12(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_12(acc,rest) IP2_SPACED_C_12(acc,rest)
#define IP2_SPACED_C_12(acc,head,marker,...) IP2_SPACED_##marker##_12(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_12(acc,head,...) acc
#define IP2_SPACED_CONT_12(acc,head,...) IP2_SPACED_13(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_13(acc,rest) IP2_SPACED_C_13(acc,rest)
#define IP2_SPACED_C_13(acc,head,marker,...) IP2_SPACED_##marker##_13(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_13(acc,head,...) acc
#define IP2_SPACED_CONT_13(acc,head,...) IP2_SPACED_14(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_14(acc,rest) IP2_SPACED_C_14(acc,rest)
#define IP2_SPACED_C_14(acc,head,marker,...) IP2_SPACED_##marker##_14(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_14(acc,head,...) acc
#define IP2_SPACED_CONT_14(acc,head,...) IP2_SPACED_15(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_15(acc,rest) IP2_SPACED_C_15(acc,rest)
#define IP2_SPACED_C_15(acc,head,marker,...) IP2_SPACED_##marker##_15(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_15(acc,head,...) acc
#define IP2_SPACED_CONT_15(acc,head,...) IP2_SPACED_16(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_16(acc,rest) IP2_SPACED_C_16(acc,rest)
#define IP2_SPACED_C_16(acc,head,marker,...) IP2_SPACED_##marker##_16(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_16(acc,head,...) acc
#define IP2_SPACED_CONT_16(acc,head,...) IP2_SPACED_17(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_17(acc,rest) IP2_SPACED_C_17(acc,rest)
#define IP2_SPACED_C_17(acc,head,marker,...) IP2_SPACED_##marker##_17(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_17(acc,head,...) acc
#define IP2_SPACED_CONT_17(acc,head,...) IP2_SPACED_18(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_18(acc,rest) IP2_SPACED_C_18(acc,rest)
#define IP2_SPACED_C_18(acc,head,marker,...) IP2_SPACED_##marker##_18(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_18(acc,head,...) acc
#define IP2_SPACED_CONT_18(acc,head,...) IP2_SPACED_19(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_19(acc,rest) IP2_SPACED_C_19(acc,rest)
#define IP2_SPACED_C_19(acc,head,marker,...) IP2_SPACED_##marker##_19(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_19(acc,head,...) acc
#define IP2_SPACED_CONT_19(acc,head,...) IP2_SPACED_20(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_20(acc,rest) IP2_SPACED_C_20(acc,rest)
#define IP2_SPACED_C_20(acc,head,marker,...) IP2_SPACED_##marker##_20(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_20(acc,head,...) acc
#define IP2_SPACED_CONT_20(acc,head,...) IP2_SPACED_21(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_21(acc,rest) IP2_SPACED_C_21(acc,rest)
#define IP2_SPACED_C_21(acc,head,marker,...) IP2_SPACED_##marker##_21(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_21(acc,head,...) acc
#define IP2_SPACED_CONT_21(acc,head,...) IP2_SPACED_22(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_22(acc,rest) IP2_SPACED_C_22(acc,rest)
#define IP2_SPACED_C_22(acc,head,marker,...) IP2_SPACED_##marker##_22(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_22(acc,head,...) acc
#define IP2_SPACED_CONT_22(acc,head,...) IP2_SPACED_23(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_23(acc,rest) IP2_SPACED_C_23(acc,rest)
#define IP2_SPACED_C_23(acc,head,marker,...) IP2_SPACED_##marker##_23(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_23(acc,head,...) acc
#define IP2_SPACED_CONT_23(acc,head,...) IP2_SPACED_24(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_24(acc,rest) IP2_SPACED_C_24(acc,rest)
#define IP2_SPACED_C_24(acc,head,marker,...) IP2_SPACED_##marker##_24(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_24(acc,head,...) acc
#define IP2_SPACED_CONT_24(acc,head,...) IP2_SPACED_25(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_25(acc,rest) IP2_SPACED_C_25(acc,rest)
#define IP2_SPACED_C_25(acc,head,marker,...) IP2_SPACED_##marker##_25(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_25(acc,head,...) acc
#define IP2_SPACED_CONT_25(acc,head,...) IP2_SPACED_26(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_26(acc,rest) IP2_SPACED_C_26(acc,rest)
#define IP2_SPACED_C_26(acc,head,marker,...) IP2_SPACED_##marker##_26(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_26(acc,head,...) acc
#define IP2_SPACED_CONT_26(acc,head,...) IP2_SPACED_27(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_27(acc,rest) IP2_SPACED_C_27(acc,rest)
#define IP2_SPACED_C_27(acc,head,marker,...) IP2_SPACED_##marker##_27(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_27(acc,head,...) acc
#define IP2_SPACED_CONT_27(acc,head,...) IP2_SPACED_28(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_28(acc,rest) IP2_SPACED_C_28(acc,rest)
#define IP2_SPACED_C_28(acc,head,marker,...) IP2_SPACED_##marker##_28(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_28(acc,head,...) acc
#define IP2_SPACED_CONT_28(acc,head,...) IP2_SPACED_29(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_29(acc,rest) IP2_SPACED_C_29(acc,rest)
#define IP2_SPACED_C_29(acc,head,marker,...) IP2_SPACED_##marker##_29(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_29(acc,head,...) acc
#define IP2_SPACED_CONT_29(acc,head,...) IP2_SPACED_30(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_30(acc,rest) IP2_SPACED_C_30(acc,rest)
#define IP2_SPACED_C_30(acc,head,marker,...) IP2_SPACED_##marker##_30(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_30(acc,head,...) acc
#define IP2_SPACED_CONT_30(acc,head,...) IP2_SPACED_31(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_31(acc,rest) IP2_SPACED_C_31(acc,rest)
#define IP2_SPACED_C_31(acc,head,marker,...) IP2_SPACED_##marker##_31(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_31(acc,head,...) acc
#define IP2_SPACED_CONT_31(acc,head,...) IP2_SPACED_32(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_32(acc,rest) IP2_SPACED_C_32(acc,rest)
#define IP2_SPACED_C_32(acc,head,marker,...) IP2_SPACED_##marker##_32(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_32(acc,head,...) acc
#define IP2_SPACED_CONT_32(acc,head,...) IP2_SPACED_33(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_33(acc,rest) IP2_SPACED_C_33(acc,rest)
#define IP2_SPACED_C_33(acc,head,marker,...) IP2_SPACED_##marker##_33(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_33(acc,head,...) acc
#define IP2_SPACED_CONT_33(acc,head,...) IP2_SPACED_34(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_34(acc,rest) IP2_SPACED_C_34(acc,rest)
#define IP2_SPACED_C_34(acc,head,marker,...) IP2_SPACED_##marker##_34(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_34(acc,head,...) acc
#define IP2_SPACED_CONT_34(acc,head,...) IP2_SPACED_35(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_35(acc,rest) IP2_SPACED_C_35(acc,rest)
#define IP2_SPACED_C_35(acc,head,marker,...) IP2_SPACED_##marker##_35(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_35(acc,head,...) acc
#define IP2_SPACED_CONT_35(acc,head,...) IP2_SPACED_36(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_36(acc,rest) IP2_SPACED_C_36(acc,rest)
#define IP2_SPACED_C_36(acc,head,marker,...) IP2_SPACED_##marker##_36(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_36(acc,head,...) acc
#define IP2_SPACED_CONT_36(acc,head,...) IP2_SPACED_37(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_37(acc,rest) IP2_SPACED_C_37(acc,rest)
#define IP2_SPACED_C_37(acc,head,marker,...) IP2_SPACED_##marker##_37(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_37(acc,head,...) acc
#define IP2_SPACED_CONT_37(acc,head,...) IP2_SPACED_38(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_38(acc,rest) IP2_SPACED_C_38(acc,rest)
#define IP2_SPACED_C_38(acc,head,marker,...) IP2_SPACED_##marker##_38(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_38(acc,head,...) acc
#define IP2_SPACED_CONT_38(acc,head,...) IP2_SPACED_39(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_39(acc,rest) IP2_SPACED_C_39(acc,rest)
#define IP2_SPACED_C_39(acc,head,marker,...) IP2_SPACED_##marker##_39(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_39(acc,head,...) acc
#define IP2_SPACED_CONT_39(acc,head,...) IP2_SPACED_40(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_40(acc,rest) IP2_SPACED_C_40(acc,rest)
#define IP2_SPACED_C_40(acc,head,marker,...) IP2_SPACED_##marker##_40(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_40(acc,head,...) acc
#define IP2_SPACED_CONT_40(acc,head,...) IP2_SPACED_41(acc head,IP2_SPACED_WRAP_##__VA_ARGS__)

#define IP2_SPACED_41(acc,rest) IP2_SPACED_C_41(acc,rest)
#define IP2_SPACED_C_41(acc,head,marker,...) IP2_SPACED_##marker##_41(acc,head,__VA_ARGS__)
#define IP2_SPACED_STOP_41(acc,head,...) acc
#define IP2_SPACED_CONT_41(acc,head,...) PP2_NAME_TOO_LONG

#define IP2_SPACED_WRAP_a (a),CONT,
#define IP2_SPACED_WRAP_b (b),CONT,
#define IP2_SPACED_WRAP_c (c),CONT,
#define IP2_SPACED_WRAP_d (d),CONT,
#define IP2_SPACED_WRAP_e (e),CONT,
#define IP2_SPACED_WRAP_f (f),CONT,
#define IP2_SPACED_WRAP_g (g),CONT,
#define IP2_SPACED_WRAP_h (h),CONT,
#define IP2_SPACED_WRAP_i (i),CONT,
#define IP2_SPACED_WRAP_j (j),CONT,
#define IP2_SPACED_WRAP_k (k),CONT,
#define IP2_SPACED_WRAP_l (l),CONT,
#define IP2_SPACED_WRAP_m (m),CONT,
#define IP2_SPACED_WRAP_n (n),CONT,
#define IP2_SPACED_WRAP_o (o),CONT,
#define IP2_SPACED_WRAP_p (p),CONT,
#define IP2_SPACED_WRAP_q (q),CONT,
#define IP2_SPACED_WRAP_r (r),CONT,
#define IP2_SPACED_WRAP_s (s),CONT,
#define IP2_SPACED_WRAP_t (t),CONT,
#define IP2_SPACED_WRAP_u (u),CONT,
#define IP2_SPACED_WRAP_v (v),CONT,
#define IP2_SPACED_WRAP_w (w),CONT,
#define IP2_SPACED_WRAP_x (x),CONT,
#define IP2_SPACED_WRAP_y (y),CONT,
#define IP2_SPACED_WRAP_z (z),CONT,
#define IP2_SPACED_WRAP_A (A),CONT,
#define IP2_SPACED_WRAP_B (B),CONT,
#define IP2_SPACED_WRAP_C (C),CONT,
#define IP2_SPACED_WRAP_D (D),CONT,
#define IP2_SPACED_WRAP_E (E),CONT,
#define IP2_SPACED_WRAP_F (F),CONT,
#define IP2_SPACED_WRAP_G (G),CONT,
#define IP2_SPACED_WRAP_H (H),CONT,
#define IP2_SPACED_WRAP_I (I),CONT,
#define IP2_SPACED_WRAP_J (J),CONT,
#define IP2_SPACED_WRAP_K (K),CONT,
#define IP2_SPACED_WRAP_L (L),CONT,
#define IP2_SPACED_WRAP_M (M),CONT,
#define IP2_SPACED_WRAP_N (N),CONT,
#define IP2_SPACED_WRAP_O (O),CONT,
#define IP2_SPACED_WRAP_P (P),CONT,
#define IP2_SPACED_WRAP_Q (Q),CONT,
#define IP2_SPACED_WRAP_R (R),CONT,
#define IP2_SPACED_WRAP_S (S),CONT,
#define IP2_SPACED_WRAP_T (T),CONT,
#define IP2_SPACED_WRAP_U (U),CONT,
#define IP2_SPACED_WRAP_V (V),CONT,
#define IP2_SPACED_WRAP_W (W),CONT,
#define IP2_SPACED_WRAP_X (X),CONT,
#define IP2_SPACED_WRAP_Y (Y),CONT,
#define IP2_SPACED_WRAP_Z (Z),CONT,
#define IP2_SPACED_WRAP_0 (0),CONT,
#define IP2_SPACED_WRAP_1 (1),CONT,
#define IP2_SPACED_WRAP_2 (2),CONT,
#define IP2_SPACED_WRAP_3 (3),CONT,
#define IP2_SPACED_WRAP_4 (4),CONT,
#define IP2_SPACED_WRAP_5 (5),CONT,
#define IP2_SPACED_WRAP_6 (6),CONT,
#define IP2_SPACED_WRAP_7 (7),CONT,
#define IP2_SPACED_WRAP_8 (8),CONT,
#define IP2_SPACED_WRAP_9 (9),CONT,
#define IP2_SPACED_WRAP__ (_),CONT,
#define IP2_SPACED_WRAP_IP2_SPACED_END ,STOP,


#endif
