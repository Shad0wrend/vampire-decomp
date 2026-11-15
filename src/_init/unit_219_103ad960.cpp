// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ad960 size=0x5
inline int pcd_initial_1093c518() { return 0x450; }
int g_1093c518 = pcd_initial_1093c518();
// END FUNCTION

// FUNCTION: 0x103ad9a0 size=0xa
#include "ConVar.h"
ConVar g_1093c588("sheriff_force_teleport", "0", 0);
// END FUNCTION

// FUNCTION: 0x103adac0 size=0x5
int * sub_103adb00(void);
int * g_1093c5d0 = ((int * (*)(int))sub_103adb00)(0);
// END FUNCTION
