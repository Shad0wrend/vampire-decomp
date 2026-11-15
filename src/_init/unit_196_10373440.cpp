// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10373440 size=0x5
inline int pcd_initial_1093acd0() { return 0x450; }
int g_1093acd0 = pcd_initial_1093acd0();
// END FUNCTION

// FUNCTION: 0x103735a0 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_1093acd8(false);
// END FUNCTION

// FUNCTION: 0x10373690 size=0x5
#include "CAI_LocalIdSpace.h"
CAI_LocalIdSpace g_1093ad64(false);
// END FUNCTION

// FUNCTION: 0x103740a0 size=0xa
#include "ConVar.h"
ConVar g_1093ad20("debug_dog_turn_scalar", ".15", 0, "Set this var to override turn animation speed.");
// END FUNCTION
