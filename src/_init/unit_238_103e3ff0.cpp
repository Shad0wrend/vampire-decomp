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

// FUNCTION: 0x103e41d0 size=0xa
#include "SendTable.h"
SendTable g_10941664;
// END FUNCTION

// FUNCTION: 0x103e4250 size=0x5
int sub_103e4290(void);
int g_10941660 = ((int (*)(int))sub_103e4290)(0);
// END FUNCTION

// FUNCTION: 0x103e4480 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_109424f0(&CPrecacheRegister::PrecacheFn_Other, "item_w_baseball_bat");
// END FUNCTION

// FUNCTION: 0x103e44d0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10940dc4;
extern char g_10667844[];
ServerClassReg g_109424fc("CWeaponMelee_BushHook", &g_10940dc4, g_10667844);
// END FUNCTION

// FUNCTION: 0x103e4580 size=0xa
#include "SendTable.h"
SendTable g_10940dc4;
// END FUNCTION

// FUNCTION: 0x103e4600 size=0x5
int sub_103e4640(void);
int g_10940dc0 = ((int (*)(int))sub_103e4640)(0);
// END FUNCTION
