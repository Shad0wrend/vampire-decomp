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
