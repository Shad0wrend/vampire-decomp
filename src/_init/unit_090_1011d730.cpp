// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011d730 size=0xa
#include "ConVar.h"
ConVar g_1070b5a0("dispcoll_drawplane", "0", 0);
// END FUNCTION

// FUNCTION: 0x1011d7c0 size=0xa
#include "ConVar.h"
ConVar g_1070b2d0("footstep_pc_vol", "0.5", 8576, "PC Step sound volume");
// END FUNCTION

// FUNCTION: 0x1011d850 size=0xa
#include "ConVar.h"
ConVar g_1070b750("force_unstick", "0", 8192);
// END FUNCTION

// FUNCTION: 0x101242c0 size=0x5
// an empty inline constructor: the game's construct is a bare `ret`, no code names the global
struct CEmpty101242c0
{
	CEmpty101242c0() {}
};
CEmpty101242c0 g_empty_101242c0;
// END FUNCTION

// FUNCTION: 0x10125d20 size=0xa
#include "ConVar.h"
ConVar g_1070b708("fall_threshold", "200", 8192);
// END FUNCTION
