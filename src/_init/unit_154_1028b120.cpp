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

// FUNCTION: 0x1028c520 size=0xa
#include "ConVar.h"
ConVar g_109248f0("debug_allow_dodge", "0", 0, "Allows or disallows NPC dodging when no cover nodes are found.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1028c5c0 size=0xa
#include "ConVar.h"
ConVar g_10923d38("debug_allow_fake_reload", "1", 0, "Allows or disallows faked NPC reloading.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1028c660 size=0xa
#include "ConVar.h"
ConVar g_10924af8("debug_allow_non_idle_auto_sk", "1", 0, "Allows or disallows automatic stealth kills when target is not in idle state.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1028c700 size=0xa
#include "ConVar.h"
ConVar g_10924f70("debug_allow_move_facing", "1", 0, "If this is on, NPCs will move facing the NPC when they run for cover.");
// END FUNCTION

// FUNCTION: 0x1028c790 size=0xa
#include "ConVar.h"
ConVar g_10923cf0("debug_allow_mf_turn", "0", 0, "If this is on, NPCs will turn to look behind them periodically when they run for cover.");
// END FUNCTION

// FUNCTION: 0x1028c820 size=0xa
#include "ConVar.h"
ConVar g_10924478("debug_allow_npc_hunting", "0", 0, "Set this to 1 to allow NPCs to do their 'scouring the area' hunting state.");
// END FUNCTION

// FUNCTION: 0x1028c8b0 size=0xa
#include "ConVar.h"
ConVar g_10924848("debug_show_npc_pos", "0", 0, "Set this to 1 to show all of the NPC's stored positions.");
// END FUNCTION

// FUNCTION: 0x1028c940 size=0xa
#include "ConVar.h"
ConVar g_10923ec8("debug_view_cone", "0", 0, "Set to 1 to turn show the complex viewcon in viewcone mode");
// END FUNCTION

// FUNCTION: 0x1028c9d0 size=0xa
#include "ConVar.h"
ConVar g_10923f58("debug_alert_aggressive", "0", 0, "Set to true to have alert states use the aggressive animations.");
// END FUNCTION

// FUNCTION: 0x1028ca60 size=0xa
#include "ConVar.h"
ConVar g_10924030("debug_hunting_aggressive", "1", 0, "Set to true to have hunting states use the aggressive animations.");
// END FUNCTION

// FUNCTION: 0x1028caf0 size=0xa
#include "ConVar.h"
ConVar g_10924d68("debug_force_anim", "0", 0, "Set to 1 to force walk anims to use run instead, or 2 to force run to walk.");
// END FUNCTION

// FUNCTION: 0x1028cbc0 size=0x5
#include "CAI_NPCPatrolPathSaveRestoreOps.h"
CAI_NPCPatrolPathSaveRestoreOps g_10924a5c;
// END FUNCTION

// FUNCTION: 0x1028cd30 size=0x5
int * sub_1028cd70(void);
int * g_10924628 = ((int * (*)(int))sub_1028cd70)(0);
// END FUNCTION

// FUNCTION: 0x1028d1b0 size=0xa
#define PCD_INITIALIZERS
#include "CUnknown100eb490.h"
CUnknown100eb490 g_10924980;
// END FUNCTION

// FUNCTION: 0x10291b40 size=0xa
#include "ConVar.h"
ConVar g_109240d0("temp_cover_enemy_x", "-12.3", 0, "");
// END FUNCTION

// FUNCTION: 0x10291bd0 size=0xa
#include "ConVar.h"
ConVar g_10924160("temp_cover_enemy_y", "32.6", 0, "");
// END FUNCTION

// FUNCTION: 0x10291c60 size=0xa
#include "ConVar.h"
ConVar g_10924df8("temp_cover_hint_x", "-59.2", 0, "");
// END FUNCTION

// FUNCTION: 0x10291cf0 size=0xa
#include "ConVar.h"
ConVar g_10924e40("temp_cover_hint_y", "25.6", 0, "");
// END FUNCTION

// FUNCTION: 0x10291d80 size=0xa
#include "ConVar.h"
ConVar g_10924550("temp_cover_npc_x", "-83.2", 0, "");
// END FUNCTION

// FUNCTION: 0x10291e10 size=0xa
#include "ConVar.h"
ConVar g_10924598("temp_cover_npc_y", "57.6", 0, "");
// END FUNCTION

// FUNCTION: 0x10297c50 size=0xa
#include "ConVar.h"
ConVar g_10924c90("debug_turn_scalar", ".15", 0, "Set this var to override turn animation speed.");
// END FUNCTION

// FUNCTION: 0x1029bb90 size=0xa
#include "ConVar.h"
ConVar g_10923fe8("debug_npc_map", "0", 0, "Set this to true and an overlay map of all NPCs will be drawn");
// END FUNCTION

// FUNCTION: 0x1029bc20 size=0xa
#include "ConVar.h"
ConVar g_10923de8("debug_npc_map_xscale", "16384", 0, "Set this to scale the overlay map up or down");
// END FUNCTION

// FUNCTION: 0x1029bcb0 size=0xa
#include "ConVar.h"
ConVar g_10923e38("debug_npc_map_yscale", "16384", 0, "Set this to scale the overlay map up or down");
// END FUNCTION

// FUNCTION: 0x1029fe30 size=0xa
#include "ConVar.h"
ConVar g_109245e0("npc_hit_buildup_amount", "2", 0);
// END FUNCTION

// FUNCTION: 0x102b9720 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_10924248(false);
// END FUNCTION

// FUNCTION: 0x102c5800 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10924338;
extern char g_105d174c[];
ServerClassReg g_109248d4("CAI_BaseNPCTroika", &g_10924338, g_105d174c);
// END FUNCTION

// FUNCTION: 0x102c58b0 size=0xa
#include "SendTable.h"
SendTable g_10924338;
// END FUNCTION

// FUNCTION: 0x102c5930 size=0x5
int sub_102c5970(void);
int g_10924334 = ((int (*)(int))sub_102c5970)(0);
// END FUNCTION
