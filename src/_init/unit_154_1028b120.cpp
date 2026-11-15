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

// FUNCTION: 0x1028bb70 size=0xa
#include "ConVar.h"
ConVar g_10924a18("debug_melee_advance_combatmove_dist", "100", 0, "How close a melee combatant needs to be to player in order to do the combat move.  Outside of this distance they will run to close the distance.");
// END FUNCTION

// FUNCTION: 0x1028bc00 size=0xa
#include "ConVar.h"
ConVar g_10924508("debug_player_on_head", "3", 0, "What should I do if the player is on my head?  0 - run only : 1 - allow dive : 2 - allow fall.", true, 0.0f, true, 3.0f);
// END FUNCTION

// FUNCTION: 0x1028bca0 size=0xa
#include "ConVar.h"
ConVar g_10924d20("debug_track_under_ground", "0", 0, "Tracks guys falling underground");
// END FUNCTION

// FUNCTION: 0x1028bd30 size=0xa
#include "ConVar.h"
ConVar g_10924298("ent_trace_doors", "0", 0, "When ent_trace is on, this will dump info about doors also.");
// END FUNCTION

// FUNCTION: 0x1028bdc0 size=0xa
#include "ConVar.h"
ConVar g_10924a68("ent_trace_conditions", "1", 0, "When ent_trace is on, this will dump info about conditions also.");
// END FUNCTION

// FUNCTION: 0x1028be50 size=0xa
#include "ConVar.h"
ConVar g_10924938("ent_trace_hints", "0", 0, "When ent_trace is on, this will dump info about hints also.");
// END FUNCTION

// FUNCTION: 0x1028bee0 size=0xa
#include "ConVar.h"
ConVar g_10924ed8("ent_trace_melee", "0", 0, "When ent_trace is on, this will dump info about melee also.");
// END FUNCTION

// FUNCTION: 0x1028bf70 size=0xa
#include "ConVar.h"
ConVar g_109243e8("ent_trace_sound", "0", 0, "When ent_trace is on, this will dump info about sounds also.");
// END FUNCTION

// FUNCTION: 0x1028c000 size=0xa
#include "ConVar.h"
ConVar g_109249d0("ent_trace_frenzy", "0", 0, "When ent_trace is on, this will dump info about frenzying also.");
// END FUNCTION

// FUNCTION: 0x1028c090 size=0xa
#include "ConVar.h"
ConVar g_109242e0("ent_trace_scripted", "0", 0, "When ent_trace is on, this will dump info about scripted sequences also.");
// END FUNCTION

// FUNCTION: 0x1028c120 size=0xa
#include "ConVar.h"
ConVar g_10924ab0("ent_trace_moveshoot", "0", 0, "When ent_trace is on, this will dump info about moving and shooting also.");
// END FUNCTION

// FUNCTION: 0x1028c1b0 size=0xa
#include "ConVar.h"
ConVar g_10923fa0("ent_trace_status", "0", 0, "When ent_trace is on, this will dump info about status also.");
// END FUNCTION

// FUNCTION: 0x1028c240 size=0xa
#include "ConVar.h"
ConVar g_109243a0("ent_trace_idealact", "0", 0, "When ent_trace is on, this will dump info about the ideal activity being changed also.");
// END FUNCTION

// FUNCTION: 0x1028c2d0 size=0xa
#include "ConVar.h"
ConVar g_10923d90("ent_trace_nav", "0", 0, "When ent_trace is on, this will dump info about failed navigation.");
// END FUNCTION

// FUNCTION: 0x1028c360 size=0xa
#include "ConVar.h"
ConVar g_10924078("ent_trace_patrolpath", "0", 0, "When ent_trace is on, this will dump info about patrol paths.");
// END FUNCTION

// FUNCTION: 0x1028c3f0 size=0xa
#include "ConVar.h"
ConVar g_109241f8("dialog_facial_debug", "0", 0, "Turns on debug text for the NPC you are talking to.");
// END FUNCTION

// FUNCTION: 0x1028c480 size=0xa
#include "ConVar.h"
ConVar g_10924f20("debug_show_body_targets", "0", 0, "Turns on display of body targets for selected NPCs.", true, 0.0f, true, 1.0f);
// END FUNCTION
