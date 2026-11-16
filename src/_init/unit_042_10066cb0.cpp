// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10066cb0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c4fc4;
extern char g_10544848[];
ServerClassReg g_106c5100("CTEShowLine", &g_106c4fc4, g_10544848);
// END FUNCTION

// FUNCTION: 0x10066d60 size=0xa
#include "SendTable.h"
SendTable g_106c4fc4;
// END FUNCTION

// FUNCTION: 0x10066de0 size=0x5
int sub_10066e20(void);
int g_106c4fc0 = ((int (*)(int))sub_10066e20)(0);
// END FUNCTION

// FUNCTION: 0x10066f20 size=0xa
#define PCD_INITIALIZERS
#include "CTEShowLine.h"
CTEShowLine g_106c50dc("Show Line");
// END FUNCTION
