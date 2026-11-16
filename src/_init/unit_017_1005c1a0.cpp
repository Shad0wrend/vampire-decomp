// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005c1a0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bfacc;
extern char g_10541248[];
ServerClassReg g_106bfaec("CTEBeamPoints", &g_106bfacc, g_10541248);
// END FUNCTION

// FUNCTION: 0x1005c250 size=0xa
#include "SendTable.h"
SendTable g_106bfacc;
// END FUNCTION

// FUNCTION: 0x1005c2d0 size=0x5
int sub_1005c310(void);
int g_106bfac8 = ((int (*)(int))sub_1005c310)(0);
// END FUNCTION

// FUNCTION: 0x1005c450 size=0xa
#define PCD_INITIALIZERS
#include "CTEBeamPoints.h"
CTEBeamPoints g_106bfb08("BeamPoints");
// END FUNCTION
