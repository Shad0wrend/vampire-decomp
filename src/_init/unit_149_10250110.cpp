// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102509a0 size=0xa
#include "ConVar.h"
ConVar g_10899bc0("vdebug_weapon_anims", "0", 8192, "Set this to true to get extra info.");
// END FUNCTION

// FUNCTION: 0x10250a30 size=0xa
#include "ConVar.h"
ConVar g_1088aef0("debug_infinite_ammo", "0", 8192, "Set this to 1 to give player infinite ammo.  Set to 2 to never need to reload.");
// END FUNCTION

// FUNCTION: 0x102566a0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1089a4f8;
extern char g_105c5bb8[];
ServerClassReg g_1088ae94("CBaseCombatWeapon", &g_1089a4f8, g_105c5bb8);
// END FUNCTION
