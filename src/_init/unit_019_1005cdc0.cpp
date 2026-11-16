// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005cdc0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bff5c;
extern char g_10541628[];
ServerClassReg g_106c0178("CTEBeamRingPoint", &g_106bff5c, g_10541628);
// END FUNCTION

// FUNCTION: 0x1005ce70 size=0xa
#include "SendTable.h"
SendTable g_106bff5c;
// END FUNCTION

// FUNCTION: 0x1005cef0 size=0x5
int sub_1005cf30(void);
int g_106bff58 = ((int (*)(int))sub_1005cf30)(0);
// END FUNCTION

// FUNCTION: 0x1005d090 size=0xa
#define PCD_INITIALIZERS
#include "CTEBeamRingPoint.h"
CTEBeamRingPoint g_106c0120("BeamRingPoint");
// END FUNCTION
