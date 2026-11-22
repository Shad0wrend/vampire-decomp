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
