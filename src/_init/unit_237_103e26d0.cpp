// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e26d0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1094072c;
extern char g_10665df0[];
ServerClassReg g_10940998("CWeaponRanged_FlameThrower", &g_1094072c, g_10665df0);
// END FUNCTION

// FUNCTION: 0x103e2780 size=0xa
#include "SendTable.h"
SendTable g_1094072c;
// END FUNCTION

// FUNCTION: 0x103e2800 size=0x5
int sub_103e2840(void);
int g_10940728 = ((int (*)(int))sub_103e2840)(0);
// END FUNCTION

// FUNCTION: 0x103e2a80 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10940748(&CPrecacheRegister::PrecacheFn_Other, "item_w_flamethrower");
// END FUNCTION
