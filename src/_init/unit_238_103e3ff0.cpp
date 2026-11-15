// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e4090 size=0xa
#include "ConVar.h"
ConVar g_10940d68("debug_melee_frenzy_speed_scale", "1.25", 0);
// END FUNCTION

// FUNCTION: 0x103e4120 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941664;
extern char g_10666898[];
ServerClassReg g_10941d04("CWeaponMelee_BaseballBat", &g_10941664, g_10666898);
// END FUNCTION
