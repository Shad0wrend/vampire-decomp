// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1015a5a0 size=0xa
#include "ConVar.h"
ConVar g_107258d8("debug_show_cs_acts", "0", 0, "Set to true to display criminal and supernatural act info.");
// END FUNCTION

// FUNCTION: 0x1015a630 size=0xa
#include "ConVar.h"
void sub_101622d0(ConVar *, const char *);
ConVar g_10725f00("debug_show_alert_states", "0", 0, "Set to true to display info about cops & hunter alert states.", sub_101622d0);
// END FUNCTION

// FUNCTION: 0x1015a6d0 size=0xa
#include "ConVar.h"
ConVar g_10725118("knockback_no_attack_time", "1.0", 0, "Duration of time that the player cannot get attacked after getting up from a knockback.");
// END FUNCTION

// FUNCTION: 0x1015a760 size=0xa
#include "ConVar.h"
ConVar g_107251a8("player_damage_kick_knockback_scalar", "10.0", 0, "Intensity of view kick when hit into knockback");
// END FUNCTION

// FUNCTION: 0x1015a7f0 size=0xa
#include "ConVar.h"
ConVar g_10725fb8("pl_autopickup_wpns", "0", 0, "Determines whether players are allowed to auto-pickup weapons.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1015a890 size=0xa
#include "ConVar.h"
ConVar g_10725ca0("physicsshadowupdate_render", "0", 0);
// END FUNCTION

// FUNCTION: 0x1015a920 size=0xa
#include "ConVar.h"
ConVar g_10725e70("sv_aim", "0", 384, "Autoaim state");
// END FUNCTION

// FUNCTION: 0x1015a9b0 size=0xa
#include "ConVar.h"
ConVar g_10725e28("sk_player_head", "2", 0);
// END FUNCTION

// FUNCTION: 0x1015aa40 size=0xa
#include "ConVar.h"
ConVar g_10725c10("sk_player_chest", "1", 0);
// END FUNCTION

// FUNCTION: 0x1015aad0 size=0xa
#include "ConVar.h"
ConVar g_10725d30("sk_player_stomach", "1", 0);
// END FUNCTION

// FUNCTION: 0x1015ab60 size=0xa
#include "ConVar.h"
ConVar g_10725b58("sk_player_arm", "1", 0);
// END FUNCTION

// FUNCTION: 0x1015abf0 size=0xa
#include "ConVar.h"
ConVar g_10725990("sk_player_leg", "1", 0);
// END FUNCTION

// FUNCTION: 0x1015ac80 size=0x5
int sub_1015acc0(void);
int g_107239c4 = ((int (*)(int))sub_1015acc0)(0);
// END FUNCTION

// FUNCTION: 0x1015acf0 size=0x5
int sub_1015ad30(void);
int g_10725b28 = ((int (*)(int))sub_1015ad30)(0);
// END FUNCTION

// FUNCTION: 0x1015ad60 size=0x5
int sub_1015ada0(void);
int g_10723978 = ((int (*)(int))sub_1015ada0)(0);
// END FUNCTION

// FUNCTION: 0x1015add0 size=0x5
int sub_1015ae10(void);
int g_107255dc = ((int (*)(int))sub_1015ae10)(0);
// END FUNCTION

// FUNCTION: 0x1015ae40 size=0x5
int sub_1015ae80(void);
int g_10725f6c = ((int (*)(int))sub_1015ae80)(0);
// END FUNCTION

// FUNCTION: 0x1015aed0 size=0x5
int * sub_1015af10(void);
int * g_10725b24 = ((int * (*)(int))sub_1015af10)(0);
// END FUNCTION

// FUNCTION: 0x10160050 size=0x5
extern float g_1046fb0c;
float g_10725c9c = 0.285f / g_1046fb0c;
// END FUNCTION

// FUNCTION: 0x10160940 size=0xa
#include "ConVar.h"
ConVar g_107255e8("melee_flinch_time", "1.0", 0, "Duration of time for melee flinch viewkick.");
// END FUNCTION

// FUNCTION: 0x101609d0 size=0xa
#include "ConVar.h"
ConVar g_10725630("melee_flinch_big_time", "5.0", 0, "Duration of time for melee super flinch viewkick.");
// END FUNCTION

// FUNCTION: 0x101673e0 size=0xa
#include "ConVar.h"
ConVar g_10725ce8("player_use_arc", "30", 0);
// END FUNCTION

// FUNCTION: 0x10168f00 size=0xa
#include "ConVar.h"
ConVar g_10725a00("debug_ratfeed_drawcone", "0", 0);
// END FUNCTION

// FUNCTION: 0x10168f90 size=0xa
#include "ConVar.h"
ConVar g_10725040("rat_feed_arc", "90", 0);
// END FUNCTION

// FUNCTION: 0x10169020 size=0xa
#include "ConVar.h"
ConVar g_10725ae0("rat_feed_radius", "120", 0);
// END FUNCTION

// FUNCTION: 0x10169840 size=0xa
#include "ConVar.h"
ConVar g_10725848("scarednpc_time", "180.0", 0);
// END FUNCTION

// FUNCTION: 0x101698d0 size=0xa
#include "ConVar.h"
ConVar g_10725160("scarednpc_count", "3", 0);
// END FUNCTION

// FUNCTION: 0x1016d140 size=0xa
#include "ConVar.h"
ConVar g_10725bc8("default_clan", "player_brujah", 128);
// END FUNCTION

// FUNCTION: 0x1016d1d0 size=0xa
#include "ConVar.h"
ConVar g_10725d98("default_gender", "1", 128);
// END FUNCTION

// FUNCTION: 0x1016e5c0 size=0xa
#include "ConCommand.h"
void sub_1016e0c0(void);
ConCommand g_10725a44("reset_character_collide", sub_1016e0c0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10171020 size=0xa
#include "ConVar.h"
ConVar g_10725de0("sv_suppress_viewpunch", "0", 8192);
// END FUNCTION

// FUNCTION: 0x10178fc0 size=0x5
int sub_10179000(void);
int g_10725214 = ((int (*)(int))sub_10179000)(0);
// END FUNCTION

// FUNCTION: 0x101791b0 size=0xa
#include "SendTable.h"
SendTable g_10725d78;
// END FUNCTION

// FUNCTION: 0x10179230 size=0x5
int sub_10179270(void);
int g_10725d74 = ((int (*)(int))sub_10179270)(0);
// END FUNCTION

// FUNCTION: 0x10179370 size=0xa
#include "SendTable.h"
SendTable g_10725088;
// END FUNCTION

// FUNCTION: 0x101793f0 size=0x5
int sub_10179430(void);
int g_10725084 = ((int (*)(int))sub_10179430)(0);
// END FUNCTION

// FUNCTION: 0x101796d0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10725a70;
extern char g_10583860[];
ServerClassReg g_10725674("CBasePlayer", &g_10725a70, g_10583860);
// END FUNCTION

// FUNCTION: 0x10179780 size=0xa
#include "SendTable.h"
SendTable g_10725a70;
// END FUNCTION

// FUNCTION: 0x10179800 size=0x5
int sub_10179840(void);
int g_10725a6c = ((int (*)(int))sub_10179840)(0);
// END FUNCTION

// FUNCTION: 0x1017db10 size=0xa
#include "ConVar.h"
ConVar g_10724ff8("pl_supernatural_level", "-1", 0, "Sets the player's supernatural level for testing.", true, -1.0f, true, 5.0f);
// END FUNCTION

// FUNCTION: 0x1017dbb0 size=0xa
#include "ConVar.h"
ConVar g_10725948("pl_criminal_level", "-1", 0, "Sets the player's criminal level for testing.", true, -1.0f, true, 5.0f);
// END FUNCTION

// FUNCTION: 0x1017dc50 size=0xa
#include "ConVar.h"
ConVar g_107250d0("pl_investigate_level", "-1", 0, "Sets the player's investigate level for testing.", true, -1.0f, true, 5.0f);
// END FUNCTION

// FUNCTION: 0x1017dcf0 size=0xa
#include "ConVar.h"
ConVar g_10725eb8("pl_min_act_timer", "5", 0, "Controls the minimum amount of time a player is flagged for commiting a criminal or supernatural act.");
// END FUNCTION

// FUNCTION: 0x1017e9d0 size=0xa
#include "ConVar.h"
ConVar g_10725c58("debug_cop_grace_time", "30", 0, "Set the time after a player's initial criminal act where additional acts are ignore");
// END FUNCTION

// FUNCTION: 0x1017ea60 size=0xa
#include "ConVar.h"
ConVar g_107257b8("debug_response_timer_min", "5.0", 0, "Sets the minimum amount of time we will wait after an offense to send WC outputs and spawn cops.");
// END FUNCTION

// FUNCTION: 0x1017eaf0 size=0xa
#include "ConVar.h"
ConVar g_10725890("debug_response_timer_max", "7.5", 0, "Sets the maximum amount of time we will wait after an offense to send WC outputs and spawn cops.");
// END FUNCTION

// FUNCTION: 0x1017eb80 size=0xa
#include "ConVar.h"
ConVar g_10725f70("debug_heightened_alert_expire_time", "40.0", 0, "Determines how long NPC's stay in heightened alert mode.");
// END FUNCTION

// FUNCTION: 0x1017f380 size=0xa
#include "ConVar.h"
ConVar g_10723980("debug_masquerade_timer", "300", 0, "Determines how long of a grace period the player has after violating the masquerade, so that you don't wipe yourself after a single spree.");
// END FUNCTION

// FUNCTION: 0x1017f410 size=0xa
#include "ConVar.h"
ConVar g_10725800("debug_supernatural_cop_spawn", "0", 0, "Enable this if you want supernatural acts to spawn cops.");
// END FUNCTION

// FUNCTION: 0x10180190 size=0xa
#include "ConCommand.h"
void sub_10180150(void);
ConCommand g_1072578c("log_character", sub_10180150, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180250 size=0xa
#include "ConCommand.h"
void sub_10180220(void);
ConCommand g_10725a8c("player_mobilize", sub_10180220, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180310 size=0xa
#include "ConCommand.h"
void sub_101802e0(void);
ConCommand g_10725f44("player_immobilize", sub_101802e0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180740 size=0xa
#include "ConCommand.h"
void sub_101803a0(void);
ConCommand g_10725b2c("teleport_player", sub_101803a0, "Teleports the player to a named entity, or to an X Y Z coordinate", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180950 size=0xa
#include "ConCommand.h"
void sub_101807d0(void);
ConCommand g_107250a4("shaky_hands", sub_101807d0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180a60 size=0xa
#include "ConCommand.h"
void sub_101809e0(void);
ConCommand g_1072591c("infobar_message", sub_101809e0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180c80 size=0xa
#include "ConCommand.h"
void sub_10180af0(void);
ConCommand g_10725ab4("remove_extraneous_entities", sub_10180af0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180de0 size=0xa
#include "ConCommand.h"
void sub_10180d10(void);
ConCommand g_10725b9c("remove_entities_by_class", sub_10180d10, "deletes all entities of the give classname (i.e. 'env_sprite' )", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180fb0 size=0xa
#include "ConCommand.h"
void sub_10180e70(void);
ConCommand g_10724ec8("remove_entities_by_name", sub_10180e70, "Deletes all entities that match the give name, can use wildcards, (i.e. 'rope_*')", 0, 0);
// END FUNCTION

// FUNCTION: 0x10181060 size=0xa
#include "ConCommand.h"
void sub_10181040(void);
ConCommand g_107259d8("remove_discipline_effects", sub_10181040, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x101814f0 size=0xa
#include "ConCommand.h"
void sub_101812f0(void);
ConCommand g_107251ec("dump_activity_lists", sub_101812f0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10183420 size=0xa
#include "ConCommand.h"
void sub_10183470(void);
ConCommand g_107255b4("credits", sub_10183470, 0, 0, 0);
// END FUNCTION
