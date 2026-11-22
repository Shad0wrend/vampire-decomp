// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1025e1d0 size=0x5
inline int pcd_initial_1090fc00() { return 0x450; }
int g_1090fc00 = pcd_initial_1090fc00();
// END FUNCTION

// FUNCTION: 0x1025e210 size=0xa
#include "ConVar.h"
ConVar g_1090fc08("flex_minplayertime", "5", 0);
// END FUNCTION

// FUNCTION: 0x1025e2a0 size=0xa
#include "ConVar.h"
ConVar g_1090fc98("flex_maxplayertime", "7", 0);
// END FUNCTION

// FUNCTION: 0x1025e330 size=0xa
#include "ConVar.h"
ConVar g_1090fce0("flex_minawaytime", "0.5", 0);
// END FUNCTION

// FUNCTION: 0x1025e3c0 size=0xa
#include "ConVar.h"
ConVar g_1090fc50("flex_maxawaytime", "1.0", 0);
// END FUNCTION
