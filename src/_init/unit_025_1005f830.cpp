// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005f830 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c17e8;
extern char g_10542390[];
ServerClassReg g_106c17cc("CTEBubbles", &g_106c17e8, g_10542390);
// END FUNCTION

// FUNCTION: 0x1005f8e0 size=0xa
#include "SendTable.h"
SendTable g_106c17e8;
// END FUNCTION

// FUNCTION: 0x1005f960 size=0x5
int sub_1005f9a0(void);
int g_106c17e4 = ((int (*)(int))sub_1005f9a0)(0);
// END FUNCTION

// FUNCTION: 0x1005fb80 size=0xa
#define PCD_INITIALIZERS
#include "CTEBubbles.h"
CTEBubbles g_106c1798("Bubbles");
// END FUNCTION
