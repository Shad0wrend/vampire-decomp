// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1029bb90 size=0xa
#include "ConVar.h"
ConVar g_10923fe8("debug_npc_map", "0", 0, "Set this to true and an overlay map of all NPCs will be drawn");
// END FUNCTION

// FUNCTION: 0x1029bc20 size=0xa
#include "ConVar.h"
ConVar g_10923de8("debug_npc_map_xscale", "16384", 0, "Set this to scale the overlay map up or down");
// END FUNCTION

// FUNCTION: 0x1029bcb0 size=0xa
#include "ConVar.h"
ConVar g_10923e38("debug_npc_map_yscale", "16384", 0, "Set this to scale the overlay map up or down");
// END FUNCTION

// FUNCTION: 0x102c5800 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10924338;
extern char g_105d174c[];
ServerClassReg g_109248d4("CAI_BaseNPCTroika", &g_10924338, g_105d174c);
// END FUNCTION

// FUNCTION: 0x102c58b0 size=0xa
#include "SendTable.h"
SendTable g_10924338;
// END FUNCTION

// FUNCTION: 0x102c5930 size=0x5
int sub_102c5970(void);
int g_10924334 = ((int (*)(int))sub_102c5970)(0);
// END FUNCTION
