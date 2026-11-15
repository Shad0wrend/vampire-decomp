// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1028b120 size=0x5
inline int pcd_initial_10923dd8() { return 0x450; }
int g_10923dd8 = pcd_initial_10923dd8();
// END FUNCTION

// FUNCTION: 0x1028b270 size=0xa
#include "ConVar.h"
ConVar g_10924430("defense_bonus_max_time", "3.0", 0);
// END FUNCTION

// FUNCTION: 0x1028b4a0 size=0xa
#include "ConVar.h"
ConVar g_10923f10("sk_basenpctroika_health", "10", 0);
// END FUNCTION

// FUNCTION: 0x1028b530 size=0xa
#include "ConVar.h"
ConVar g_10924db0("debug_test_schedule", "0", 0, "Forces the AI into test schedules.", true, 0.0f, true, 4.0f);
// END FUNCTION
