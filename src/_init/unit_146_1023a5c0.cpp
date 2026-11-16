// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1023a5c0 size=0xa
#include "ConVar.h"
ConVar g_10753298("host_speeds", "0", 0);
// END FUNCTION

// FUNCTION: 0x1023a670 size=0x5
int sub_1023a6b0(void);
int g_10752ee4 = ((int (*)(int))sub_1023a6b0)(0);
// END FUNCTION

// FUNCTION: 0x1023aed0 size=0x5
int sub_1023af10(void);
int g_107532e0 = ((int (*)(int))sub_1023af10)(0);
// END FUNCTION

// FUNCTION: 0x1023af40 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10752e68;
extern char g_105c2a40[];
ServerClassReg g_10752d44("CWorld", &g_10752e68, g_105c2a40);
// END FUNCTION

// FUNCTION: 0x1023aff0 size=0xa
#include "SendTable.h"
SendTable g_10752e68;
// END FUNCTION

// FUNCTION: 0x1023b070 size=0x5
int sub_1023b0b0(void);
int g_10752e64 = ((int (*)(int))sub_1023b0b0)(0);
// END FUNCTION

// FUNCTION: 0x1023b300 size=0xa
#include "ConVar.h"
void sub_1023b3a0(ConVar *, const char *);
ConVar g_10752e20("debug_area_type", "0", 0, "Set this var to true to have the area act as a safe are for NPCs.", sub_1023b3a0);
// END FUNCTION

// FUNCTION: 0x1023b460 size=0xa
#include "ConVar.h"
void sub_1023b500(ConVar *, const char *);
ConVar g_10752ea0("debug_cop_wait_area", "0", 0, "Set this var to true to have the area act as a safe zone for NPCs.", sub_1023b500);
// END FUNCTION

// FUNCTION: 0x1023d010 size=0x5
int * sub_1023d050(void);
int * g_107532e4 = ((int * (*)(int))sub_1023d050)(0);
// END FUNCTION

// FUNCTION: 0x1023e390 size=0xa
#include "ConVar.h"
ConVar g_10752dd8("damage_floaters", "1", 128, "Turns damage floaters above NPC's heads on(1) and off(0).");
// END FUNCTION

// FUNCTION: 0x1023e420 size=0xa
#include "ConVar.h"
ConVar g_10752c98("damage_floaters_queue_time", ".2", 0, "Minimum amount of time between the release of a damage floater on a particular NPC.");
// END FUNCTION

// FUNCTION: 0x1023eb30 size=0xa
#include "utlvector.h"
CUtlVector<int> g_10752e88;
// END FUNCTION

// FUNCTION: 0x1023ec20 size=0xa
#include "utlvector.h"
CUtlVector<int> g_10752dc4;
// END FUNCTION
