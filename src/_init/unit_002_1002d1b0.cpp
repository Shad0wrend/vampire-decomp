// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002d1b0 size=0xa
#include "ConVar.h"
ConVar g_106b8650("phys_pushscale", "1", 0);
// END FUNCTION

// FUNCTION: 0x1002d240 size=0xa
#include "ConVar.h"
ConVar g_106b85c0("phys_timescale", "1", 0);
// END FUNCTION

// FUNCTION: 0x1002d2d0 size=0xa
#include "ConVar.h"
ConVar g_106b8608("phys_speeds", "0", 0);
// END FUNCTION

// FUNCTION: 0x1002d360 size=0xa
#define PCD_INITIALIZERS
#include "CCollisionEvent.h"
CCollisionEvent g_106b86d8;
// END FUNCTION

// FUNCTION: 0x1002d520 size=0x5
#include "CObjectEvent.h"
CObjectEvent g_106b8694;
// END FUNCTION

// FUNCTION: 0x1002d5b0 size=0xa
#define PCD_INITIALIZERS
#include "CPhysicsHook.h"
CPhysicsHook g_106b88ec;
// END FUNCTION

// FUNCTION: 0x10032990 size=0xa
#include "ConCommand.h"
void sub_10032880(void);
ConCommand g_106b894c("air_density", sub_10032880, "Changes the density of air for drag computations.", 0, 0);
// END FUNCTION
