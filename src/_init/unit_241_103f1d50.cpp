// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f1d50 size=0x5
int sub_103f1d90(void);
int g_10943134 = ((int (*)(int))sub_103f1d90)(0);
// END FUNCTION

// FUNCTION: 0x103f2a70 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10943138(&CPrecacheRegister::PrecacheFn_Other, "item_d_holy_light");
// END FUNCTION

// FUNCTION: 0x103f2c70 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10943278;
extern char g_1067e9e8[];
ServerClassReg g_109433a8("CWeaponIArmor", &g_10943278, g_1067e9e8);
// END FUNCTION

// FUNCTION: 0x103f2d20 size=0xa
#include "SendTable.h"
SendTable g_10943278;
// END FUNCTION
