// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006b2d0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c753c;
extern char g_10545dc8[];
ServerClassReg g_106c7500("CTEWorldDecal", &g_106c753c, g_10545dc8);
// END FUNCTION

// FUNCTION: 0x1006b380 size=0xa
#include "SendTable.h"
SendTable g_106c753c;
// END FUNCTION

// FUNCTION: 0x1006b400 size=0x5
int sub_1006b440(void);
int g_106c7538 = ((int (*)(int))sub_1006b440)(0);
// END FUNCTION

// FUNCTION: 0x1006b560 size=0xa
#define PCD_INITIALIZERS
#include "CTEWorldDecal.h"
CTEWorldDecal g_106c751c("World Decal");
// END FUNCTION
