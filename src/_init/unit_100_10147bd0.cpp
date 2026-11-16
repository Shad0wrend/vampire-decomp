// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10147bd0 size=0x5
int * sub_10147c10(void);
int * g_1071a320 = ((int * (*)(int))sub_10147c10)(0);
// END FUNCTION

// FUNCTION: 0x10147ff0 size=0xa
#include "ConVar.h"
ConVar g_1071a328("vdebug_physicshand_mode", "2", 0, "");
// END FUNCTION

// FUNCTION: 0x10148080 size=0xa
#include "ConVar.h"
ConVar g_10721a18("debug_physics_lift_height", "20", 0, "");
// END FUNCTION

// FUNCTION: 0x10148110 size=0xa
#include "ConVar.h"
ConVar g_1071a378("debug_physics_drag_dist", "64", 0, "");
// END FUNCTION

// FUNCTION: 0x101481a0 size=0xa
#include "ConVar.h"
ConVar g_1071a4a0("debug_physics_throw_velocity", "20", 0, "");
// END FUNCTION

// FUNCTION: 0x10148230 size=0xa
#include "ConVar.h"
ConVar g_1071a448("debug_physics_hand", "0", 0, "Turns on/off physics hand debugging info");
// END FUNCTION

// FUNCTION: 0x101484b0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_1071a48c(&CPrecacheRegister::PrecacheFn_Other, "gravity_pellet");
// END FUNCTION

// FUNCTION: 0x10148520 size=0x5
int * sub_10148560(void);
int * g_1071a498 = ((int * (*)(int))sub_10148560)(0);
// END FUNCTION

// FUNCTION: 0x1014a170 size=0x5
// an empty inline constructor: the game's construct is a bare `ret`, no code names the global
struct CEmpty1014a170
{
	CEmpty1014a170() {}
};
CEmpty1014a170 g_empty_1014a170;
// END FUNCTION

// FUNCTION: 0x1014ea70 size=0xa
#include "ConCommand.h"
void sub_1014e520(void);
ConCommand g_1071a3c4("collision_test", sub_1014e520, "Tests collision system", 0, 0);
// END FUNCTION
