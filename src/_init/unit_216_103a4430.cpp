// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a4430 size=0x5
inline int pcd_initial_1093c0f0() { return 0x450; }
int g_1093c0f0 = pcd_initial_1093c0f0();
// END FUNCTION

// FUNCTION: 0x103a4d70 size=0x5
inline int pcd_initial_1093c0f8() { return 0x450; }
int g_1093c0f8 = pcd_initial_1093c0f8();
// END FUNCTION

// FUNCTION: 0x103a4db0 size=0xa
#include "ConVar.h"
ConVar g_1093c1f0("sabbat_gunman_speed_scalar", "3.0", 0, "Determines how much faster than normal a sabbat gunman will move.");
// END FUNCTION

// FUNCTION: 0x103a4e40 size=0xa
#include "ConVar.h"
ConVar g_1093c100("sabbat_gunman_speed_threshold", "0.1", 0, "Determines how fast the guy needs to be going to scale the speed.");
// END FUNCTION

// FUNCTION: 0x103a4ed0 size=0xa
#include "ConVar.h"
ConVar g_1093c148("sabbat_gunman_speed_trails", "3", 0, "Determines what level of motion trails to use for a speedy guy.");
// END FUNCTION

// FUNCTION: 0x103a4f80 size=0x5
int sub_103a4fc0(void);
int g_1093c18c = ((int (*)(int))sub_103a4fc0)(0);
// END FUNCTION

// FUNCTION: 0x103a5110 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_1093c190(false);
// END FUNCTION
