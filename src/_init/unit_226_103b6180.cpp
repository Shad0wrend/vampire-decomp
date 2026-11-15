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
