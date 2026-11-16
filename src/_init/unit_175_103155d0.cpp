// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103155d0 size=0x5
int * sub_10315610(void);
int * g_10936c60 = ((int * (*)(int))sub_10315610)(0);
// END FUNCTION

// FUNCTION: 0x1031a1c0 size=0xa
#include "ConVar.h"
ConVar g_10936de0("debug_no_damage", "0", 0, "If this is true, no one takes damage.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1031a260 size=0xa
#include "ConVar.h"
ConVar g_10937030("debug_feed_trace", "0", 0, "Turn this on to trace feeding in detail.");
// END FUNCTION

// FUNCTION: 0x1031a2f0 size=0xa
#include "ConVar.h"
ConVar g_10936d10("debug_show_melee_attack_boxes", "0", 0, "Show some attack boxes.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1031a390 size=0xa
#include "ConVar.h"
ConVar g_10937c88("debug_show_melee_attack_boxes_obstructed", "0", 0, "Show some attack boxes.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1031a430 size=0xa
#include "ConVar.h"
ConVar g_10936e98("debug_show_melee_attack_boxes_missed", "0", 0, "Show some attack boxes.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1031a4d0 size=0xa
#include "ConVar.h"
ConVar g_10937a88("debug_viewcone_back_dist", "40", 0, "Change the distance we bump back the view cone.");
// END FUNCTION

// FUNCTION: 0x1031a560 size=0x5
#include "CRelationshipSaveDataOps.h"
CRelationshipSaveDataOps g_10937a84;
// END FUNCTION

// FUNCTION: 0x1031a5c0 size=0x5
int * sub_1031a600(void);
int * g_10936edc = ((int * (*)(int))sub_1031a600)(0);
// END FUNCTION

// FUNCTION: 0x10321710 size=0xa
#include "SendTable.h"
SendTable g_10937c6c;
// END FUNCTION

// FUNCTION: 0x10321790 size=0x5
int sub_103217d0(void);
int g_10937c68 = ((int (*)(int))sub_103217d0)(0);
// END FUNCTION

// FUNCTION: 0x103218f0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10936dc4;
extern char g_10619d4c[];
ServerClassReg g_10936d54("CBaseCombatCharacter", &g_10936dc4, g_10619d4c);
// END FUNCTION

// FUNCTION: 0x103219a0 size=0xa
#include "SendTable.h"
SendTable g_10936dc4;
// END FUNCTION

// FUNCTION: 0x10321a20 size=0x5
int sub_10321a60(void);
int g_10936dc0 = ((int (*)(int))sub_10321a60)(0);
// END FUNCTION

// FUNCTION: 0x10322140 size=0x5
int sub_10322180(void);
int g_10936dbc = ((int (*)(int))sub_10322180)(0);
// END FUNCTION

// FUNCTION: 0x10324640 size=0xa
#include "ConVar.h"
ConVar g_10936e50("sv_draw_eye_orientation", "0", 0);
// END FUNCTION

// FUNCTION: 0x10326150 size=0xa
#include "ConVar.h"
ConVar g_10936f70("debug_view_cone_2d3d", "3", 0, "Set the view cone tests to be in 2d or 3d.", true, 2.0f, true, 3.0f);
// END FUNCTION

// FUNCTION: 0x10327a00 size=0xa
#include "ConVar.h"
ConVar g_109371c0("gib_xz_vel", "200.0", 0, "Gib Vel");
// END FUNCTION

// FUNCTION: 0x1032b170 size=0xa
#include "ConVar.h"
ConVar g_10936fb8("debug_force_scale", "3", 0);
// END FUNCTION

// FUNCTION: 0x1032b200 size=0xa
#include "ConVar.h"
ConVar g_10936f28("debug_upward_hit_force", ".1", 0);
// END FUNCTION

// FUNCTION: 0x1033ea00 size=0xa
#include "ConCommand.h"
void sub_1033e960(void);
ConCommand g_10936e24("frenzyplayer", sub_1033e960, "yeah, kick player into frenzy", 0, 0);
// END FUNCTION

// FUNCTION: 0x10342f00 size=0xa
#include "ConVar.h"
ConVar g_10936d78("meleedebug", "0", 0);
// END FUNCTION

// FUNCTION: 0x10342f90 size=0xa
#include "ConVar.h"
ConVar g_10936ee0("debug_allow_melee_ff", "0", 0);
// END FUNCTION

// FUNCTION: 0x10345500 size=0x5
extern const float g_1049e044;
extern const float g_10457f5c;
float g_10937b10 = g_10457f5c + g_1049e044;
// END FUNCTION

// FUNCTION: 0x10345fe0 size=0xa
#include "ConVar.h"
ConVar g_10937208("raw_attack_value_forced", "-1.0", 0);
// END FUNCTION

// FUNCTION: 0x103462f0 size=0xa
#include "ConVar.h"
ConVar g_10937078("defense_bonus_cap", "10", 0);
// END FUNCTION

// FUNCTION: 0x10346bb0 size=0xa
#include "ConVar.h"
ConVar g_10936cc8("melee_swing_completion_percent", "0.8", 0);
// END FUNCTION

// FUNCTION: 0x10346c40 size=0xa
#include "ConVar.h"
ConVar g_109370d0("melee_swish_sound_time_offset", "-0.1", 0);
// END FUNCTION

// FUNCTION: 0x10348690 size=0xa
#include "ConCommand.h"
void sub_10348560(void);
ConCommand g_10937acc("player_sequence", sub_10348560, "tells the local player to play a sequence", 0, 0);
// END FUNCTION

// FUNCTION: 0x10348800 size=0xa
#include "ConCommand.h"
void sub_10348720(void);
ConCommand g_10937004("burn_hitboxes", sub_10348720, "burns the char's hitboxes", 0, 0);
// END FUNCTION

// FUNCTION: 0x10348c10 size=0x5
extern float g_1049e050;
extern float g_1049e058;
float g_10936f6c = (240.0f - g_1049e050) / g_1049e058;
// END FUNCTION

// FUNCTION: 0x10348c60 size=0x5
extern float g_1049e05c;
extern float g_1049e064;
float g_10937b0c = (100.0f - g_1049e05c) / g_1049e064;
// END FUNCTION
