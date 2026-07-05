/** @file */
#ifndef PP2_PRIMITIVE_SEQ_DETAIL_CLOSE_H
#define PP2_PRIMITIVE_SEQ_DETAIL_CLOSE_H

#include "pp2/primitive/punctuation/rparen.h"

/* Emits the trailing ')' that closes a binary-chain walk (one per element,
 * driven by the chain itself). */

#define PP2_SEQ_CLOSE(bin) PP2_SEQ_CLOSE_I bin

#define PP2_SEQ_CLOSE_I_ID() PP2_SEQ_CLOSE_I

#define PP2_SEQ_CLOSE_I(K,...) K(PP2_RPAREN PP2_SEQ_CLOSE_I_ID)

#endif
