// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100331f0 size=0xa
#include "ConVar.h"
ConVar g_106bbaa0("npc_vphysics", "0", 0);
// END FUNCTION

// FUNCTION: 0x10033280 size=0x5
#define PCD_INITIALIZERS
#include "CPhysicsMovedEntities.h"
CPhysicsMovedEntities g_106b8a98;
// END FUNCTION

// FUNCTION: 0x10035bb0 size=0xa
#define PCD_INITIALIZERS
#include "CPhysicsPushedEntities.h"
CPhysicsPushedEntities g_106bbae4;
// END FUNCTION

// FUNCTION: 0x1003a580 size=0xa
#include "ConVar.h"
ConVar g_106bbb10("sv_teststepsimulation", "1", 0);
// END FUNCTION
