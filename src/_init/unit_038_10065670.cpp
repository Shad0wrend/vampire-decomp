// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10065670 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c480c;
extern char g_10544020[];
ServerClassReg g_106c4744("CTEInspectionFX", &g_106c480c, g_10544020);
// END FUNCTION

// FUNCTION: 0x10065720 size=0xa
#include "SendTable.h"
SendTable g_106c480c;
// END FUNCTION

// FUNCTION: 0x100657a0 size=0x5
int sub_100657e0(void);
int g_106c4808 = ((int (*)(int))sub_100657e0)(0);
// END FUNCTION

// FUNCTION: 0x100658b0 size=0xa
#define PCD_INITIALIZERS
#include "CTEInspectionFX.h"
CTEInspectionFX g_106c4828("InspectionFX");
// END FUNCTION
