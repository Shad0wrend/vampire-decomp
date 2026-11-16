// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101287c0 size=0xa
#include "ConVar.h"
ConVar g_1070b9c8("debug_explosion_trace", "0", 0);
// END FUNCTION

// FUNCTION: 0x10129800 size=0x5
int sub_10129840(void);
int g_1070ba20 = ((int (*)(int))sub_10129840)(0);
// END FUNCTION

// FUNCTION: 0x1012b710 size=0x5
// an empty inline constructor: the game's construct is a bare `ret`, no code names the global
struct CEmpty1012b710
{
	CEmpty1012b710() {}
};
CEmpty1012b710 g_empty_1012b710;
// END FUNCTION

// FUNCTION: 0x1012cd10 size=0xa
#include "SendTable.h"
SendTable g_1070ba68;
// END FUNCTION

// FUNCTION: 0x1012cd90 size=0x5
int sub_1012cdd0(void);
int g_1070ba64 = ((int (*)(int))sub_1012cdd0)(0);
// END FUNCTION

// FUNCTION: 0x1012cea0 size=0x5
int sub_1012cee0(void);
int g_1070bb30 = ((int (*)(int))sub_1012cee0)(0);
// END FUNCTION
