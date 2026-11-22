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

// FUNCTION: 0x100d0c50 size=0x5
#include "CVariantSaveDataOps.h"
CVariantSaveDataOps g_106e70dc;
// END FUNCTION

// FUNCTION: 0x100d1160 size=0xa
#define PCD_INITIALIZERS
#include "Pool.h"
Pool g_106e6f9c(8, 256, 0);
// END FUNCTION
