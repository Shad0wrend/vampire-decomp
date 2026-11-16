// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10062720 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c2f34;
extern char g_10543218[];
ServerClassReg g_106c2dc4("CTEFogRipple", &g_106c2f34, g_10543218);
// END FUNCTION

// FUNCTION: 0x100627d0 size=0xa
#include "SendTable.h"
SendTable g_106c2f34;
// END FUNCTION

// FUNCTION: 0x10062850 size=0x5
int sub_10062890(void);
int g_106c2f30 = ((int (*)(int))sub_10062890)(0);
// END FUNCTION

// FUNCTION: 0x100629d0 size=0xa
#define PCD_INITIALIZERS
#include "CTEFogRipple.h"
CTEFogRipple g_106c2da0("FogRipple");
// END FUNCTION
