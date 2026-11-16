// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100666b0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c4cec;
extern char g_10544650[];
ServerClassReg g_106c4f2c("CTEPlayerDecal", &g_106c4cec, g_10544650);
// END FUNCTION

// FUNCTION: 0x10066760 size=0xa
#include "SendTable.h"
SendTable g_106c4cec;
// END FUNCTION

// FUNCTION: 0x100667e0 size=0x5
int sub_10066820(void);
int g_106c4ce8 = ((int (*)(int))sub_10066820)(0);
// END FUNCTION

// FUNCTION: 0x10066980 size=0xa
#define PCD_INITIALIZERS
#include "CTEPlayerDecal.h"
CTEPlayerDecal g_106c4d08("Player Decal");
// END FUNCTION
