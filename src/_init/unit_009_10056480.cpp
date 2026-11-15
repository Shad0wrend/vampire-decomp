// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10056480 size=0x5
int sub_100564c0(void);
int g_106be160 = ((int (*)(int))sub_100564c0)(0);
// END FUNCTION

// FUNCTION: 0x100564f0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bdddc;
extern char g_1053f330[];
ServerClassReg g_106be148("CDynamicLight", &g_106bdddc, g_1053f330);
// END FUNCTION
