// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101e4aa0 size=0xa
#include "ConVar.h"
ConVar g_10739cb0("debug_ranged_combat_level", "0", 0, "Set > 0 to override dice rolled for all ranged combat checks.");
// END FUNCTION

// FUNCTION: 0x101e4b30 size=0xa
#include "ConVar.h"
ConVar g_10739c68("debug_defense_level", "0", 0, "Set > 0 to override dice rolled for all defense checks.");
// END FUNCTION

// FUNCTION: 0x101e4bc0 size=0xa
#include "ConVar.h"
ConVar g_1073a100("debug_brawl_level", "0", 0, "Set > 0 to override dice rolled for all brawl checks.");
// END FUNCTION

// FUNCTION: 0x101e4c50 size=0xa
#include "ConVar.h"
ConVar g_10739bd8("debug_melee_combat_level", "0", 0, "Set > 0 to override dice rolled for all melee combat checks.");
// END FUNCTION

// FUNCTION: 0x101e4ce0 size=0xa
#include "ConVar.h"
ConVar g_10739c20("debug_soak_level", "0", 0, "Set > 0 to override dice rolled for all soak checks.");
// END FUNCTION

// FUNCTION: 0x101e4d70 size=0xa
#define PCD_INITIALIZERS
#include "CVFeatList_t.h"
CVFeatList_t g_10739d08;
// END FUNCTION
