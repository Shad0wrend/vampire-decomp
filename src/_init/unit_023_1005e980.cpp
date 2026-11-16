// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005e980 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c1160;
extern char g_10541f38[];
ServerClassReg g_106c1144("CTEBreakModel", &g_106c1160, g_10541f38);
// END FUNCTION

// FUNCTION: 0x1005ea30 size=0xa
#include "SendTable.h"
SendTable g_106c1160;
// END FUNCTION

// FUNCTION: 0x1005eab0 size=0x5
int sub_1005eaf0(void);
int g_106c115c = ((int (*)(int))sub_1005eaf0)(0);
// END FUNCTION

// FUNCTION: 0x1005ed00 size=0xa
#define PCD_INITIALIZERS
#include "CTEBreakModel.h"
CTEBreakModel g_106c1180("Break Model");
// END FUNCTION
