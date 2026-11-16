// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1003c460 size=0xa
#include "ConVar.h"
ConVar g_106bd868("think_limit", "10", 8192, "Maximum think time in milliseconds, warning is printed if this is exceeded.");
// END FUNCTION

// FUNCTION: 0x1003c4f0 size=0xa
#define PCD_INITIALIZERS
#include "Pool.h"
Pool g_106bd904(20, 512, 0);
// END FUNCTION

// FUNCTION: 0x1003e210 size=0x5
// an empty inline constructor: the game's construct is a bare `ret`, no code names the global
struct CEmpty1003e210
{
	CEmpty1003e210() {}
};
CEmpty1003e210 g_empty_1003e210;
// END FUNCTION
