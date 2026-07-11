/** @file */
#ifndef PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SPECIAL_H
#define PP2_PRIMITIVE_ARITHMETIC_ARBITRARY_DETAIL_SPECIAL_H

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/punctuation/rparen.h"

/* The sliding-window engine behind every arbitrary-precision walk.
 *
 * PP2_ARBITRARY_SPECIAL(elem) selects a pass-through for a real element and an
 * eater for the sentinel 00. Walkers drive a seq (e0)(e1)... by pasting each
 * element onto an alternating A/B co-routine (dodging blue-paint), and terminate
 * when the injected (00) is reached. PP2_ARBITRARY_SPECIAL_CLOSE emits one ')'
 * per element so a walk opened with a deferred '(' per element closes exactly.
 *
 * The elements are the decimal digits for the arithmetic layer, but the engine
 * itself is value-agnostic: only the 00 sentinel is distinguished. The string
 * layer drives char seqs (t)(o)(t)(a)(l) through the same walks (FMERGE,
 * IS_SHORTER), so the identifier characters -- letters and underscore -- are
 * registered here as pass-throughs alongside the digits. A single character is
 * never the two-character token 00, so the sentinel stays unambiguous. */

#define PP2_ARBITRARY_SPECIAL(digit) PP2_PRIMITIVE_CAT(PP2_ARBITRARY_SPECIAL_, digit)

#define PP2_ARBITRARY_SPECIAL_00(...)
#define PP2_ARBITRARY_SPECIAL_0(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_1(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_2(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_3(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_4(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_5(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_6(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_7(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_8(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_9(...) __VA_ARGS__

#define PP2_ARBITRARY_SPECIAL_a(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_b(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_c(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_d(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_e(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_f(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_g(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_h(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_i(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_j(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_k(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_l(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_m(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_n(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_o(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_p(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_q(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_r(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_s(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_t(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_u(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_v(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_w(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_x(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_y(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_z(...) __VA_ARGS__

#define PP2_ARBITRARY_SPECIAL_A(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_B(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_C(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_D(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_E(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_F(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_G(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_H(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_I(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_J(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_K(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_L(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_M(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_N(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_O(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_P(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_Q(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_R(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_S(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_T(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_U(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_V(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_W(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_X(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_Y(...) __VA_ARGS__
#define PP2_ARBITRARY_SPECIAL_Z(...) __VA_ARGS__

#define PP2_ARBITRARY_SPECIAL__(...) __VA_ARGS__

#define PP2_ARBITRARY_SPECIAL_CLOSE(x) PP2_ARBITRARY_SPECIAL_CLOSE_A x(00)

#define PP2_ARBITRARY_SPECIAL_CLOSE_A(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_RPAREN PP2_ARBITRARY_SPECIAL_CLOSE_B)
#define PP2_ARBITRARY_SPECIAL_CLOSE_B(digit) PP2_ARBITRARY_SPECIAL(digit)(PP2_RPAREN PP2_ARBITRARY_SPECIAL_CLOSE_A)

#endif
