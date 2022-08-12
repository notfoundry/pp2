#ifndef PP2_MACHINE_H
#define PP2_MACHINE_H

#include "pp2/machine/exception/push_eh.h"
#include "pp2/machine/exception/throw.h"

#include "pp2/machine/goto/goto.h"
#include "pp2/machine/goto/label.h"

#include "pp2/machine/insns/emit.h"
#include "pp2/machine/insns/load.h"
#include "pp2/machine/insns/nop.h"
#include "pp2/machine/insns/terminate.h"

#include "pp2/machine/stack/load.h"
#include "pp2/machine/stack/pop.h"
#include "pp2/machine/stack/push.h"
#include "pp2/machine/stack/store.h"

#include "pp2/machine/context.h"
#include "pp2/machine/output.h"
#include "pp2/machine/vm.h"

#endif