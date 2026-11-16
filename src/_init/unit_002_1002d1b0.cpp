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

// FUNCTION: 0x10031a60 size=0xa
#include "ConVar.h"
ConVar g_106b8818("physics_impact_sound_max", "1.0", 0, "For physics impact sounds, max volume.");
// END FUNCTION

// FUNCTION: 0x10031af0 size=0xa
#include "ConVar.h"
ConVar g_106b8860("physics_impact_sound_min", "0.1", 0, "For physics impact sounds, min volume, anything less than this is not played.");
// END FUNCTION

// FUNCTION: 0x10031b80 size=0x5
#define PCD_INITIALIZERS
#include "SoundTracker_t.h"
SoundTracker_t g_106b8698[8];
// END FUNCTION

// FUNCTION: 0x10031fd0 size=0xa
#include "ConVar.h"
ConVar g_106b8908("collision_shake_amp", "0.2", 0);
// END FUNCTION

// FUNCTION: 0x10032060 size=0xa
#include "ConVar.h"
ConVar g_106b88a8("collision_shake_freq", "0.5", 0);
// END FUNCTION

// FUNCTION: 0x100320f0 size=0xa
#include "ConVar.h"
ConVar g_106b8978("collision_shake_time", "0.5", 0);
// END FUNCTION

// FUNCTION: 0x10032990 size=0xa
#include "ConCommand.h"
void sub_10032880(void);
ConCommand g_106b894c("air_density", sub_10032880, "Changes the density of air for drag computations.", 0, 0);
// END FUNCTION
