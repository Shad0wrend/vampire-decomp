// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f4a80 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1094800c;
extern char g_1067eea0[];
ServerClassReg g_10947564("CWeaponLockpick", &g_1094800c, g_1067eea0);
// END FUNCTION

// FUNCTION: 0x103f4b30 size=0xa
#include "SendTable.h"
SendTable g_1094800c;
// END FUNCTION

// FUNCTION: 0x103f4bb0 size=0x5
int sub_103f4bf0(void);
int g_10948008 = ((int (*)(int))sub_103f4bf0)(0);
// END FUNCTION

// FUNCTION: 0x103f4d90 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_109477a8(&CPrecacheRegister::PrecacheFn_Other, "item_g_lockpick");
// END FUNCTION

// FUNCTION: 0x103f50b0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109473a0;
extern char g_1067ef88[];
ServerClassReg g_10948c64("CWeaponUnarmed", &g_109473a0, g_1067ef88);
// END FUNCTION
