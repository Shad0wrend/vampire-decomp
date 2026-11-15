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
