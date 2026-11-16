// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100ccf20 size=0x5
int sub_100ccf60(void);
int g_106e6ff4 = ((int (*)(int))sub_100ccf60)(0);
// END FUNCTION

// FUNCTION: 0x100cd190 size=0xa
#define PCD_INITIALIZERS
#include "Pool.h"
Pool g_106e6fc8(32, 512, 1);
// END FUNCTION

// FUNCTION: 0x100cd720 size=0x5
int * sub_100cd760(void);
int * g_106e6f98 = ((int * (*)(int))sub_100cd760)(0);
// END FUNCTION

// FUNCTION: 0x100cd9a0 size=0x5
#include "CEventsSaveDataOps.h"
CEventsSaveDataOps g_106e70d8;
// END FUNCTION

// FUNCTION: 0x100cf6a0 size=0xa
#include "ConCommand.h"
void sub_100cf680(void);
ConCommand g_106e70b0("debug_dump_eventqueue", sub_100cf680, "Dumps a list of the current event queue.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100cfe80 size=0x5
#include "CEQ_SaveRestoreBlockHandler.h"
CEQ_SaveRestoreBlockHandler g_106e70a8;
// END FUNCTION

// FUNCTION: 0x100cffc0 size=0x5
#include "CPyObjStrSaveRestoreDataOps.h"
CPyObjStrSaveRestoreDataOps g_106e6ffc;
// END FUNCTION

// FUNCTION: 0x100d01b0 size=0x5
#include "CVTSDependencySaveRestoreDataOps.h"
CVTSDependencySaveRestoreDataOps g_106e6ff8;
// END FUNCTION

// FUNCTION: 0x100d0c50 size=0x5
#include "CVariantSaveDataOps.h"
CVariantSaveDataOps g_106e70dc;
// END FUNCTION
