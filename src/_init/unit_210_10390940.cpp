// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10390940 size=0x5
inline int pcd_initial_1093b960() { return 0x450; }
int g_1093b960 = pcd_initial_1093b960();
// END FUNCTION

// FUNCTION: 0x10390980 size=0xa
#include "ConVar.h"
ConVar g_1093bc10("ming_xiao_throw_base", "150.0", 0, "Set this var to override the throw base.");
// END FUNCTION

// FUNCTION: 0x10390a10 size=0xa
#include "ConVar.h"
ConVar g_1093bbc8("ming_xiao_throw_power", ".0040", 0, "Set this var to override the throw power.");
// END FUNCTION

// FUNCTION: 0x10390aa0 size=0xa
#include "ConVar.h"
ConVar g_1093b9f8("ming_xiao_throw_hds", ".0005", 0, "Set this var to override the throw height to distance scalar.");
// END FUNCTION

// FUNCTION: 0x10390b30 size=0xa
#include "ConVar.h"
ConVar g_1093ba88("ming_xiao_pickup", "1", 0, "Set this to 1 to allow ming xiao to pickup and throw bodies.");
// END FUNCTION
