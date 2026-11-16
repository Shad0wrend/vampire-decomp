// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005e1c0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c0d18;
extern char g_10541cc0[];
ServerClassReg g_106c0cfc("CTEBloodStream", &g_106c0d18, g_10541cc0);
// END FUNCTION

// FUNCTION: 0x1005e270 size=0xa
#include "SendTable.h"
SendTable g_106c0d18;
// END FUNCTION

// FUNCTION: 0x1005e2f0 size=0x5
int sub_1005e330(void);
int g_106c0d14 = ((int (*)(int))sub_1005e330)(0);
// END FUNCTION

// FUNCTION: 0x1005e540 size=0xa
#define PCD_INITIALIZERS
#include "CTEBloodStream.h"
CTEBloodStream g_106c0cc4("Blood Stream");
// END FUNCTION
