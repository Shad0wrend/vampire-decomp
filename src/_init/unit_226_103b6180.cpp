// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b6180 size=0x5
inline int pcd_initial_1093ca3c() { return 0x450; }
int g_1093ca3c = pcd_initial_1093ca3c();
// END FUNCTION

// FUNCTION: 0x103b61c0 size=0xa
#include "ConVar.h"
ConVar g_1093cc80("sk_vtzimisce_health", "10", 0);
// END FUNCTION

// FUNCTION: 0x103b6250 size=0xa
#include "ConVar.h"
ConVar g_1093cf48("tzimisce_pickup", "1", 0, "Set to 1 to allow Tzimisce creation to pickup and throw bodies.");
// END FUNCTION

// FUNCTION: 0x103b62e0 size=0xa
#include "ConVar.h"
ConVar g_1093cce0("tzimisce_pounce", "1", 0, "Set to 1 to allow Tzimisce creation to do pounce attack.");
// END FUNCTION

// FUNCTION: 0x103b6370 size=0xa
#include "ConVar.h"
ConVar g_1093cf00("tzimisce_act_override", "0", 0, "Set this var to override the activities with a set thingy stuff stuff.");
// END FUNCTION

// FUNCTION: 0x103b6400 size=0xa
#include "ConVar.h"
ConVar g_1093ca88("tzimisce_throw_power", ".007", 0, "Set this var to override the throw power.");
// END FUNCTION

// FUNCTION: 0x103b6490 size=0xa
#include "ConVar.h"
ConVar g_1093ca40("tzimisce_throw_hds", ".0008", 0, "Set this var to override the throw height to distance scalar.");
// END FUNCTION

// FUNCTION: 0x103b6520 size=0xa
#include "ConVar.h"
ConVar g_1093c9f8("tzimisce_turn_scalar", ".15", 0, "Set this var to override turn animation speed.");
// END FUNCTION
