// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012f750 size=0x5
// an empty inline constructor: the game's construct is a bare `ret`, no code names the global
struct CEmpty1012f750
{
	CEmpty1012f750() {}
};
CEmpty1012f750 g_empty_1012f750;
// END FUNCTION

// FUNCTION: 0x1012f910 size=0x5
#define PCD_INITIALIZERS
#include "CPositionInterpolator_Linear.h"
CPositionInterpolator_Linear g_1070c4c0;
// END FUNCTION

// FUNCTION: 0x1012fa80 size=0x5
#define PCD_INITIALIZERS
#include "CPositionInterpolator_CatmullRom.h"
CPositionInterpolator_CatmullRom g_1070c58c;
// END FUNCTION
