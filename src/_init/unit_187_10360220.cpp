// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10360220 size=0x5
inline int pcd_initial_1093a528() { return 0x450; }
int g_1093a528 = pcd_initial_1093a528();
// END FUNCTION

// FUNCTION: 0x10360260 size=0xa
#include "ConVar.h"
ConVar g_1093a590("asianvamp_force_jump_up", "0", 0);
// END FUNCTION

// FUNCTION: 0x10360470 size=0x5
int sub_103604b0(void);
int g_1093a5d4 = ((int (*)(int))sub_103604b0)(0);
// END FUNCTION
