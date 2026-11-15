// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037e300 size=0x5
inline int pcd_initial_1093b1e8() { return 0x450; }
int g_1093b1e8 = pcd_initial_1093b1e8();
// END FUNCTION

// FUNCTION: 0x1037e340 size=0xa
#include "ConVar.h"
ConVar g_1093b238("hengeyokai_obstruction_lookahead", "24", 0, "Set this var to override the lookahead for obstructing physics objects.");
// END FUNCTION

// FUNCTION: 0x1037e3d0 size=0xa
#include "ConVar.h"
ConVar g_1093b1f0("hengeyokai_obstruction_z", "75", 0, "Set this var to override the z push for obstructing physics objects.");
// END FUNCTION

// FUNCTION: 0x1037e460 size=0xa
#include "ConVar.h"
ConVar g_1093b298("hengeyokai_obstruction_scalar", "5", 0, "Set this var to override the forward push for obstructing physics objects.");
// END FUNCTION

// FUNCTION: 0x1037e510 size=0x5
int sub_1037e550(void);
int g_1093b234 = ((int (*)(int))sub_1037e550)(0);
// END FUNCTION

// FUNCTION: 0x1037e580 size=0xa
#include "ConVar.h"
ConVar g_1093b2e0("hengeyokai_stun", "0", 0);
// END FUNCTION

// FUNCTION: 0x1037e930 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_1093b328(false);
// END FUNCTION
