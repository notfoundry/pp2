/** @file */
#ifndef PP2_PRIMITIVE_STRING_CHAR_H
#define PP2_PRIMITIVE_STRING_CHAR_H

#include "pp2/primitive/tuple/at.h"

/**
* Equality of two single character tokens, yielding 1 or 0.
*
* This is \link PP2_SYMBOL_EQ \endlink specialised to a private character
* alphabet: each admissible character is registered once as
* `PP2_CHAR_TAG_<c>(...) __VA_ARGS__`, and equality is the same blue-paint
* identity test. `ta (tb) (0,1)` yields `tb` painted (arity 1) when the two
* characters match and the trailing `(0,1)` otherwise, so the arity of the
* result is the answer.
*
* Both characters must be drawn from the registered alphabet (the ASCII
* identifier characters: `a`-`z`, `A`-`Z`, `0`-`9` and `_`). An unregistered
* character expands to nothing, which reads as equal, so only ever call this on
* alphabet characters.
*/
#define PP2_CHAR_EQ(a,b) IP2_CHAR_EQ_I(PP2_CHAR_TAG_##a,PP2_CHAR_TAG_##b)
#define IP2_CHAR_EQ_I(ta,tb) IP2_CHAR_EQ_II(ta (tb) (0,1))
#define IP2_CHAR_EQ_II(...) IP2_CHAR_EQ_PICK(__VA_ARGS__,0,1)
#define IP2_CHAR_EQ_PICK(_1,_2,_3,...) _3

#define PP2_CHAR_TAG_a(...) __VA_ARGS__
#define PP2_CHAR_TAG_b(...) __VA_ARGS__
#define PP2_CHAR_TAG_c(...) __VA_ARGS__
#define PP2_CHAR_TAG_d(...) __VA_ARGS__
#define PP2_CHAR_TAG_e(...) __VA_ARGS__
#define PP2_CHAR_TAG_f(...) __VA_ARGS__
#define PP2_CHAR_TAG_g(...) __VA_ARGS__
#define PP2_CHAR_TAG_h(...) __VA_ARGS__
#define PP2_CHAR_TAG_i(...) __VA_ARGS__
#define PP2_CHAR_TAG_j(...) __VA_ARGS__
#define PP2_CHAR_TAG_k(...) __VA_ARGS__
#define PP2_CHAR_TAG_l(...) __VA_ARGS__
#define PP2_CHAR_TAG_m(...) __VA_ARGS__
#define PP2_CHAR_TAG_n(...) __VA_ARGS__
#define PP2_CHAR_TAG_o(...) __VA_ARGS__
#define PP2_CHAR_TAG_p(...) __VA_ARGS__
#define PP2_CHAR_TAG_q(...) __VA_ARGS__
#define PP2_CHAR_TAG_r(...) __VA_ARGS__
#define PP2_CHAR_TAG_s(...) __VA_ARGS__
#define PP2_CHAR_TAG_t(...) __VA_ARGS__
#define PP2_CHAR_TAG_u(...) __VA_ARGS__
#define PP2_CHAR_TAG_v(...) __VA_ARGS__
#define PP2_CHAR_TAG_w(...) __VA_ARGS__
#define PP2_CHAR_TAG_x(...) __VA_ARGS__
#define PP2_CHAR_TAG_y(...) __VA_ARGS__
#define PP2_CHAR_TAG_z(...) __VA_ARGS__

#define PP2_CHAR_TAG_A(...) __VA_ARGS__
#define PP2_CHAR_TAG_B(...) __VA_ARGS__
#define PP2_CHAR_TAG_C(...) __VA_ARGS__
#define PP2_CHAR_TAG_D(...) __VA_ARGS__
#define PP2_CHAR_TAG_E(...) __VA_ARGS__
#define PP2_CHAR_TAG_F(...) __VA_ARGS__
#define PP2_CHAR_TAG_G(...) __VA_ARGS__
#define PP2_CHAR_TAG_H(...) __VA_ARGS__
#define PP2_CHAR_TAG_I(...) __VA_ARGS__
#define PP2_CHAR_TAG_J(...) __VA_ARGS__
#define PP2_CHAR_TAG_K(...) __VA_ARGS__
#define PP2_CHAR_TAG_L(...) __VA_ARGS__
#define PP2_CHAR_TAG_M(...) __VA_ARGS__
#define PP2_CHAR_TAG_N(...) __VA_ARGS__
#define PP2_CHAR_TAG_O(...) __VA_ARGS__
#define PP2_CHAR_TAG_P(...) __VA_ARGS__
#define PP2_CHAR_TAG_Q(...) __VA_ARGS__
#define PP2_CHAR_TAG_R(...) __VA_ARGS__
#define PP2_CHAR_TAG_S(...) __VA_ARGS__
#define PP2_CHAR_TAG_T(...) __VA_ARGS__
#define PP2_CHAR_TAG_U(...) __VA_ARGS__
#define PP2_CHAR_TAG_V(...) __VA_ARGS__
#define PP2_CHAR_TAG_W(...) __VA_ARGS__
#define PP2_CHAR_TAG_X(...) __VA_ARGS__
#define PP2_CHAR_TAG_Y(...) __VA_ARGS__
#define PP2_CHAR_TAG_Z(...) __VA_ARGS__

#define PP2_CHAR_TAG_0(...) __VA_ARGS__
#define PP2_CHAR_TAG_1(...) __VA_ARGS__
#define PP2_CHAR_TAG_2(...) __VA_ARGS__
#define PP2_CHAR_TAG_3(...) __VA_ARGS__
#define PP2_CHAR_TAG_4(...) __VA_ARGS__
#define PP2_CHAR_TAG_5(...) __VA_ARGS__
#define PP2_CHAR_TAG_6(...) __VA_ARGS__
#define PP2_CHAR_TAG_7(...) __VA_ARGS__
#define PP2_CHAR_TAG_8(...) __VA_ARGS__
#define PP2_CHAR_TAG_9(...) __VA_ARGS__

#define PP2_CHAR_TAG__(...) __VA_ARGS__

#endif
