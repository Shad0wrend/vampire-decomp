// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10377720 size=0x5
inline int pcd_initial_1093af5c() { return 0x450; }
int g_1093af5c = pcd_initial_1093af5c();
// END FUNCTION

// FUNCTION: 0x10377760 size=0xa
#include "ConVar.h"
ConVar g_1093af60("gargoyle_obstruction_lookahead", "24", 0, "Set this var to override the lookahead for obstructing physics objects.");
// END FUNCTION

// FUNCTION: 0x103777f0 size=0xa
#include "ConVar.h"
ConVar g_1093b050("gargoyle_obstruction_z", "75", 0, "Set this var to override the z push for obstructing physics objects.");
// END FUNCTION
