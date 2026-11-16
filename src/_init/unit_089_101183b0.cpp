// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101183b0 size=0x5
int * sub_101183f0(void);
int * g_1070b068 = ((int * (*)(int))sub_101183f0)(0);
// END FUNCTION

// FUNCTION: 0x10119300 size=0xa
#include "ConVar.h"
ConVar g_1070b180("sv_showhitboxes", "-1", 256, "Send server-side hitboxes for specified entity to client (NOTE:  this uses lots of bandwidth, use on listen server only).");
// END FUNCTION

// FUNCTION: 0x101193e0 size=0xa
#include "ConVar.h"
ConVar g_1070b1d8("entity_debug_stats", "0", 0);
// END FUNCTION

// FUNCTION: 0x10119470 size=0xa
#include "ConVar.h"
ConVar g_1070b078("sneak_debug_stats", "0", 0);
// END FUNCTION

// FUNCTION: 0x10119500 size=0xa
#include "ConVar.h"
ConVar g_1070b0f0("movement_debug_stats", "0", 0);
// END FUNCTION

// FUNCTION: 0x10119590 size=0xa
#include "ConVar.h"
ConVar g_1070b138("combat_debug_stats", "0", 0);
// END FUNCTION

// FUNCTION: 0x10119620 size=0x5
inline int pcd_initial_1070b070() { return 0xffffffff; }
int g_1070b070 = pcd_initial_1070b070();
// END FUNCTION

// FUNCTION: 0x10119660 size=0xa
#include "utlvector.h"
CUtlVector<int> g_1070b0bc;
// END FUNCTION

// FUNCTION: 0x1011a050 size=0x5
#define PCD_INITIALIZERS
#include "InterfaceReg.h"
void * sub_1011a0a0(void);
InterfaceReg g_1070b1c8(sub_1011a0a0, "ServerGameDLL002");
// END FUNCTION

// FUNCTION: 0x1011a450 size=0xa
#include "utlvector.h"
CUtlVector<int> g_1070b0d0;
// END FUNCTION

// FUNCTION: 0x1011bd90 size=0x5
#define PCD_INITIALIZERS
#include "InterfaceReg.h"
void * sub_1011bde0(void);
InterfaceReg g_1070b0e4(sub_1011bde0, "ServerGameEnts001");
// END FUNCTION
