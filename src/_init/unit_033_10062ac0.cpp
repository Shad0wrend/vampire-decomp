// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10062ac0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c2fe0;
extern char g_10543408[];
ServerClassReg g_106c2ffc("CTEFootprintDecal", &g_106c2fe0, g_10543408);
// END FUNCTION

// FUNCTION: 0x10062b70 size=0xa
#include "SendTable.h"
SendTable g_106c2fe0;
// END FUNCTION

// FUNCTION: 0x10062bf0 size=0x5
int sub_10062c30(void);
int g_106c2fdc = ((int (*)(int))sub_10062c30)(0);
// END FUNCTION

// FUNCTION: 0x10062dd0 size=0xa
#define PCD_INITIALIZERS
#include "CTEFootprintDecal.h"
CTEFootprintDecal g_106c2fac("Footprint Decal");
// END FUNCTION
