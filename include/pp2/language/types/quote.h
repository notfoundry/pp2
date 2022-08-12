/** @file */
#ifndef PP2_LANGUAGE_TYPES_QUOTE_H
#define PP2_LANGUAGE_TYPES_QUOTE_H

#include "pp2/language/basic/object.h"
#include "pp2/language/definition/type.h"

#include "pp2/primitive/basic/cat.h"
#include "pp2/primitive/basic/invoke.h"
#include "pp2/primitive/tuple/open.h"

#define PP2_DEF_Quote PP2_TYPE(Quote,Any)

#define PP2_DEF_Quote_cat PP2_VM_FN(PP2_LANGUAGE_QUOTE_CAT,2)
#define PP2_LANGUAGE_QUOTE_CAT(P,r0,r1,r2,o0,o1,...) (,/*r0=*/IP2_FX(LANGUAGE_QUOTE_CAT,(,PP2_LANGUAGE_OBJECT_VALUE P##o0,PP2_LANGUAGE_OBJECT_VALUE P##o1)),P##r1,P##r2,P##__VA_ARGS__)
#define IP2_LANGUAGE_QUOTE_CAT(P,v0,v1) (,Quote,(PP2_CAT(PP2_OPEN P##v0, PP2_OPEN P##v1)))

#endif