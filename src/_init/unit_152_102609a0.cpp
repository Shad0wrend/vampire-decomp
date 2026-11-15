// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102609a0 size=0x5
inline int pcd_initial_1090fd60() { return 0x450; }
int g_1090fd60 = pcd_initial_1090fd60();
// END FUNCTION

// FUNCTION: 0x10264410 size=0x5
inline int pcd_initial_1090fd64() { return 0x450; }
int g_1090fd64 = pcd_initial_1090fd64();
// END FUNCTION

// FUNCTION: 0x10264b70 size=0x5
inline int pcd_initial_1090fdb4() { return 0x450; }
int g_1090fdb4 = pcd_initial_1090fdb4();
// END FUNCTION

// FUNCTION: 0x10264bb0 size=0xa
#include "ConVar.h"
ConVar g_109201a8("sk_npc_head", "2", 0);
// END FUNCTION

// FUNCTION: 0x10264c40 size=0xa
#include "ConVar.h"
ConVar g_1090fe70("sk_npc_chest", "1", 0);
// END FUNCTION

// FUNCTION: 0x10264cd0 size=0xa
#include "ConVar.h"
ConVar g_109204f0("sk_npc_stomach", "1", 0);
// END FUNCTION

// FUNCTION: 0x10264d60 size=0xa
#include "ConVar.h"
ConVar g_1090fdc0("sk_npc_arm", "1", 0);
// END FUNCTION

// FUNCTION: 0x10264df0 size=0xa
#include "ConVar.h"
ConVar g_10920238("sk_npc_leg", "1", 0);
// END FUNCTION

// FUNCTION: 0x10264e80 size=0xa
#include "ConVar.h"
ConVar g_1090feb8("debug_forced_bullet_damage", "-1", 0);
// END FUNCTION

// FUNCTION: 0x10264f10 size=0xa
#include "ConVar.h"
ConVar g_109201f0("debug_assert_on_missing_act", "0", 0, "Turn this on to assert on missing activities. By default they are just dumped to a file.");
// END FUNCTION

// FUNCTION: 0x10264fa0 size=0xa
#include "ConVar.h"
ConVar g_10920388("debug_hit_by_mode", "1", 0, "Set this to 1 to use alternate hit by door code.");
// END FUNCTION

// FUNCTION: 0x10265520 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_1090ff08(true);
// END FUNCTION

// FUNCTION: 0x10265640 size=0x5
#include "CAI_LocalIdSpace.h"
CAI_LocalIdSpace g_10920484(true);
// END FUNCTION

// FUNCTION: 0x1026d190 size=0xa
#include "ConVar.h"
ConVar g_10920440("footstep_normal_vol", "0.5", 128);
// END FUNCTION
