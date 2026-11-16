// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a57c0 size=0x5
inline int pcd_initial_1093c2ac() { return 0x450; }
int g_1093c2ac = pcd_initial_1093c2ac();
// END FUNCTION

// FUNCTION: 0x103a5800 size=0x5
extern const float g_104c3cf4;
extern const float g_104c3d2c;
float g_1093c340 = g_104c3d2c * g_104c3cf4;
// END FUNCTION

// FUNCTION: 0x103a5850 size=0x5
extern float g_104c3cf8;
float g_1093c33c = 33.0f / g_104c3cf8;
// END FUNCTION

// FUNCTION: 0x103a58a0 size=0xa
#include "ConVar.h"
ConVar g_1093c2f8("andrei_force_charge_attack", "0", 0);
// END FUNCTION

// FUNCTION: 0x103a5930 size=0xa
#include "ConVar.h"
ConVar g_1093c348("andrei_force_awaken", "0", 0);
// END FUNCTION

// FUNCTION: 0x103a59c0 size=0xa
#include "ConVar.h"
ConVar g_1093c390("andrei_force_jump_attack", "0", 0);
// END FUNCTION

// FUNCTION: 0x103a5a50 size=0xa
#include "ConVar.h"
ConVar g_1093c2b0("andrei_force_player_collision", "0", 0);
// END FUNCTION

// FUNCTION: 0x103a5b70 size=0x5
int sub_103a5bb0(void);
int g_1093c2a8 = ((int (*)(int))sub_103a5bb0)(0);
// END FUNCTION

// FUNCTION: 0x103a5d20 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_1093c3f0(false);
// END FUNCTION

// FUNCTION: 0x103a5e10 size=0x5
#include "CAI_LocalIdSpace.h"
CAI_LocalIdSpace g_1093c3d4(false);
// END FUNCTION
