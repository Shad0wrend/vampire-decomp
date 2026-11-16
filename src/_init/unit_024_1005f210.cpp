// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005f210 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c1470;
extern char g_10542190[];
ServerClassReg g_106c128c("CTEBSPDecal", &g_106c1470, g_10542190);
// END FUNCTION

// FUNCTION: 0x1005f2c0 size=0xa
#include "SendTable.h"
SendTable g_106c1470;
// END FUNCTION

// FUNCTION: 0x1005f340 size=0x5
int sub_1005f380(void);
int g_106c146c = ((int (*)(int))sub_1005f380)(0);
// END FUNCTION

// FUNCTION: 0x1005f4d0 size=0xa
#define PCD_INITIALIZERS
#include "CTEBSPDecal.h"
CTEBSPDecal g_106c144c("BSP Decal");
// END FUNCTION
