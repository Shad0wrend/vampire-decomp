// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a1b50 size=0x5
inline int pcd_initial_1093bf60() { return 0x450; }
int g_1093bf60 = pcd_initial_1093bf60();
// END FUNCTION

// FUNCTION: 0x103a1b90 size=0xa
#include "ConVar.h"
ConVar g_1093bf68("sk_vpedestrian_health", "10", 0);
// END FUNCTION

// FUNCTION: 0x103a1c40 size=0x5
int sub_103a1c80(void);
int g_1093bff8 = ((int (*)(int))sub_103a1c80)(0);
// END FUNCTION

// FUNCTION: 0x103a1e70 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_1093bfb0(false);
// END FUNCTION
