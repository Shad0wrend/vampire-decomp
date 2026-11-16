// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10067250 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c5388;
extern char g_10544a40[];
ServerClassReg g_106c53a4("CTESmoke", &g_106c5388, g_10544a40);
// END FUNCTION

// FUNCTION: 0x10067300 size=0xa
#include "SendTable.h"
SendTable g_106c5388;
// END FUNCTION

// FUNCTION: 0x10067380 size=0x5
int sub_100673c0(void);
int g_106c5384 = ((int (*)(int))sub_100673c0)(0);
// END FUNCTION

// FUNCTION: 0x10067530 size=0xa
#define PCD_INITIALIZERS
#include "CTESmoke.h"
CTESmoke g_106c5160("Smoke");
// END FUNCTION
