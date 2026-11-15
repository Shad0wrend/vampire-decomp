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

// FUNCTION: 0x1028b5d0 size=0xa
#include "ConVar.h"
ConVar g_10924678("debug_test_switch1", "0", 0, "Toggles stuff for the test task.");
// END FUNCTION

// FUNCTION: 0x1028b660 size=0xa
#include "ConVar.h"
ConVar g_10924630("debug_test_switch2", "0", 0, "Toggles stuff for the test task.");
// END FUNCTION

// FUNCTION: 0x1028b6f0 size=0xa
#include "ConVar.h"
ConVar g_109247e8("debug_turning", "0", 0, "Toggles turn animations.");
// END FUNCTION

// FUNCTION: 0x1028b780 size=0xa
#include "ConVar.h"
ConVar g_10923e80("debug_turning_speed", "90", 0, "Toggles turn animations.");
// END FUNCTION

// FUNCTION: 0x1028b810 size=0xa
#include "ConVar.h"
ConVar g_10924890("debug_circle_dist_override", "0", 0, "Overrides the distance guys want to be outside the melee combat.");
// END FUNCTION

// FUNCTION: 0x1028b8a0 size=0xa
#include "ConVar.h"
ConVar g_10924798("debug_vision_line", "0", 0, "Set this to 1 to show a line from NPCs to player when they can see the player through an object.");
// END FUNCTION

// FUNCTION: 0x1028b930 size=0xa
#include "ConVar.h"
ConVar g_10924cd8("debug_hint_los", "0", 0, "Set this to 1 to show a line from any hints the NPCs try to use to their target when they do a LOS check.");
// END FUNCTION

// FUNCTION: 0x1028b9c0 size=0xa
#include "ConVar.h"
ConVar g_109241a8("debug_cs_los", "0", 0, "Set this to 1 to show a line from NPCs to static Crimina & Supernatural acts they are testing vision on.");
// END FUNCTION

// FUNCTION: 0x1028ba50 size=0xa
#include "ConVar.h"
ConVar g_109244c0("debug_weapon_shoot_pos", "0", 0, "Set this to 1 to show the weapon shoot positions for the NPCs.");
// END FUNCTION

// FUNCTION: 0x1028bae0 size=0xa
#include "ConVar.h"
ConVar g_10924358("debug_show_npc_skeletons", "0", 0, "Set this to 1 to show the server-side skeletons for the NPCs.");
// END FUNCTION
