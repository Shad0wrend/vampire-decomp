// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10250110 size=0xa
#define PCD_INITIALIZERS
#include "CWeaponList.h"
CWeaponList g_1088ae58;
// END FUNCTION

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

// FUNCTION: 0x10256770 size=0x5
int * sub_102567b0(void);
int * g_1089a518 = ((int * (*)(int))sub_102567b0)(0);
// END FUNCTION

// FUNCTION: 0x102569b0 size=0xa
#include "SendTable.h"
SendTable g_1089a520;
// END FUNCTION

// FUNCTION: 0x10256a30 size=0x5
int sub_10256a70(void);
int g_1089a51c = ((int (*)(int))sub_10256a70)(0);
// END FUNCTION

// FUNCTION: 0x10256b60 size=0xa
#include "SendTable.h"
SendTable g_1088aeb0;
// END FUNCTION

// FUNCTION: 0x10256be0 size=0x5
int sub_10256c20(void);
int g_1088aeac = ((int (*)(int))sub_10256c20)(0);
// END FUNCTION

// FUNCTION: 0x10256dc0 size=0xa
#include "SendTable.h"
SendTable g_1089a4f8;
// END FUNCTION

// FUNCTION: 0x10256e40 size=0x5
int sub_10256e80(void);
int g_1089a4f4 = ((int (*)(int))sub_10256e80)(0);
// END FUNCTION
