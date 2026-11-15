// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10097d00 size=0x5
int sub_10097d40(void);
int g_106ce630 = ((int (*)(int))sub_10097d40)(0);
// END FUNCTION

// FUNCTION: 0x10097d90 size=0xa
#include "SendTable.h"
SendTable g_106ce614;
// END FUNCTION

// FUNCTION: 0x10097e10 size=0x5
int sub_10097e50(void);
int g_106ce610 = ((int (*)(int))sub_10097e50)(0);
// END FUNCTION

// FUNCTION: 0x10097fb0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106ce7fc;
extern char g_10551660[];
ServerClassReg g_106ce634("CBaseAnimatingOverlay", &g_106ce7fc, g_10551660);
// END FUNCTION
