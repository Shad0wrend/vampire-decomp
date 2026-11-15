// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102e2c70 size=0xa
#include "ConVar.h"
ConVar g_10933e88("ai_moveprobe_debug", "0", 0);
// END FUNCTION

// FUNCTION: 0x102e2d00 size=0x5
int sub_102e2d40(void);
int g_10933e84 = ((int (*)(int))sub_102e2d40)(0);
// END FUNCTION

// FUNCTION: 0x102e3940 size=0xa
#include "ConVar.h"
ConVar g_10933ed0("npc_fail_route_hull", "0", 4, "Set this to true if you want to get a detailed look at where a hull trace failed.");
// END FUNCTION

// FUNCTION: 0x102e39d0 size=0xa
#include "ConVar.h"
ConVar g_10933e08("npc_fail_route_hull_granularity", "4", 4, "The number of lines per axis for this test (note, the number of line tests done is this number cubed).");
// END FUNCTION
