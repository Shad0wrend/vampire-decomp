// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034ab70 size=0x5
int * sub_1034abb0(void);
int * g_10938034 = ((int * (*)(int))sub_1034abb0)(0);
// END FUNCTION

// FUNCTION: 0x1034bde0 size=0x5
int sub_1034be20(void);
int g_1093803c = ((int (*)(int))sub_1034be20)(0);
// END FUNCTION

// FUNCTION: 0x1034ca10 size=0x5
int sub_1034ca50(void);
int g_10938048 = ((int (*)(int))sub_1034ca50)(0);
// END FUNCTION

// FUNCTION: 0x1034d450 size=0x5
int * sub_1034d490(void);
int * g_10938050 = ((int * (*)(int))sub_1034d490)(0);
// END FUNCTION

// FUNCTION: 0x1034e4b0 size=0x5
int sub_1034e4f0(void);
int g_1093805c = ((int (*)(int))sub_1034e4f0)(0);
// END FUNCTION

// FUNCTION: 0x1034efa0 size=0xa
#include "ConVar.h"
ConVar g_109380c0("sv_autojump", "0", 0);
// END FUNCTION

// FUNCTION: 0x1034f030 size=0xa
#include "ConVar.h"
ConVar g_10938490("speed_walk", "100", 0);
// END FUNCTION

// FUNCTION: 0x1034f0c0 size=0xa
#include "ConVar.h"
ConVar g_10938138("speed_runbase", "225", 0);
// END FUNCTION

// FUNCTION: 0x1034f150 size=0xa
#include "ConVar.h"
ConVar g_10938400("speed_runbonusathletics", "5", 0);
// END FUNCTION

// FUNCTION: 0x1034f250 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_109380b0(&CPrecacheRegister::PrecacheFn_Other, "player");
// END FUNCTION

// FUNCTION: 0x1034f2c0 size=0x5
int sub_1034f300(void);
int g_1093830c = ((int (*)(int))sub_1034f300)(0);
// END FUNCTION

// FUNCTION: 0x1034f4e0 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown10938124.h"
CUnknown10938124 g_10938124(1, 12.5f);
// END FUNCTION

// FUNCTION: 0x1034f530 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown10938124.h"
CUnknown10938124 g_1093812c(2, 0.555f);
// END FUNCTION

// FUNCTION: 0x1034f580 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10938108;
extern char g_10626910[];
ServerClassReg g_109383e4("CHL2_Player", &g_10938108, g_10626910);
// END FUNCTION

// FUNCTION: 0x1034f630 size=0xa
#include "SendTable.h"
SendTable g_10938108;
// END FUNCTION

// FUNCTION: 0x1034f6b0 size=0x5
int sub_1034f6f0(void);
int g_10938104 = ((int (*)(int))sub_1034f6f0)(0);
// END FUNCTION

// FUNCTION: 0x10351320 size=0x5
#include "CPhysicsPlayerCallback.h"
CPhysicsPlayerCallback g_1093827c;
// END FUNCTION

// FUNCTION: 0x10351580 size=0xa
#include "ConVar.h"
ConVar g_109384d8("debug_stealth_light", "-1", 0, "Overrides the light on the player for stealth calculations (-1 = off, 0 = min light, 10 = max light).", true, -1.0f, true, 10.0f);
// END FUNCTION

// FUNCTION: 0x10351620 size=0xa
#include "ConVar.h"
ConVar g_109383a0("debug_stealth_show_light", "0", 0, "Shows the light on the player.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x103516c0 size=0xa
#include "ConVar.h"
ConVar g_10938358("worldlight_max", "1.0", 0);
// END FUNCTION

// FUNCTION: 0x10351750 size=0xa
#include "ConVar.h"
ConVar g_10938310("worldlight_min", "0.0", 0);
// END FUNCTION

// FUNCTION: 0x10352ac0 size=0xa
#include "ConVar.h"
ConVar g_109382c8("player_damage_kick_scalar", "0.15", 0);
// END FUNCTION
