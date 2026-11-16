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

// FUNCTION: 0x10267460 size=0x5
extern float g_104994ac;
float g_1090fe0c = 0.11f - g_104994ac;
// END FUNCTION

// FUNCTION: 0x102674b0 size=0x5
extern float g_1090fe0c;
extern float g_104454c4;
extern float g_104994ac;
float g_1090fe30 = g_104454c4 * g_1090fe0c + g_104994ac;
// END FUNCTION

// FUNCTION: 0x10267500 size=0x5
extern float g_1090fe0c;
extern float g_104994ac;
float g_1090fe44 = 0.5f * g_1090fe0c + g_104994ac;
// END FUNCTION

// FUNCTION: 0x1026d190 size=0xa
#include "ConVar.h"
ConVar g_10920440("footstep_normal_vol", "0.5", 128);
// END FUNCTION

// FUNCTION: 0x1026d220 size=0xa
#include "ConVar.h"
ConVar g_10920280("footstep_normal_dist", "256", 128);
// END FUNCTION

// FUNCTION: 0x1026d2b0 size=0xa
#include "ConVar.h"
ConVar g_10920160("footstep_heavy_vol", "0.85", 128);
// END FUNCTION

// FUNCTION: 0x1026d340 size=0xa
#include "ConVar.h"
ConVar g_109204a8("footstep_heavy_dist", "512", 128);
// END FUNCTION

// FUNCTION: 0x1026d3d0 size=0xa
#include "ConVar.h"
ConVar g_109203f8("footstep_npc_use_templates", "1", 0);
// END FUNCTION

// FUNCTION: 0x10270360 size=0xa
#include "ConVar.h"
ConVar g_109202c8("debug_sound_occlusion", "1", 0, "Set this to 1 to allow certain objects & the world to occlude sounds.");
// END FUNCTION

// FUNCTION: 0x10277c70 size=0xa
#include "ConVar.h"
ConVar g_10920340("ai_report_task_timings_on_limit", "0", 128);
// END FUNCTION

// FUNCTION: 0x10277d00 size=0xa
#include "ConVar.h"
ConVar g_1090fd70("ai_think_limit_label", "0", 128);
// END FUNCTION

// FUNCTION: 0x1027a7e0 size=0x5
int * sub_1027a820(void);
int * g_1090ff50 = ((int * (*)(int))sub_1027a820)(0);
// END FUNCTION

// FUNCTION: 0x1027ba40 size=0x5
int sub_1027ba80(void);
int g_109204ec = ((int (*)(int))sub_1027ba80)(0);
// END FUNCTION

// FUNCTION: 0x1027bab0 size=0x5
int sub_1027baf0(void);
int g_109201ec = ((int (*)(int))sub_1027baf0)(0);
// END FUNCTION

// FUNCTION: 0x1027bbf0 size=0x5
int sub_1027bc30(void);
int g_109201a4 = ((int (*)(int))sub_1027bc30)(0);
// END FUNCTION
