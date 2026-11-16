// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10065f30 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c4c0c;
extern char g_10544458[];
ServerClassReg g_106c4c54("CTEMuzzleFlash", &g_106c4c0c, g_10544458);
// END FUNCTION

// FUNCTION: 0x10065fe0 size=0xa
#include "SendTable.h"
SendTable g_106c4c0c;
// END FUNCTION

// FUNCTION: 0x10066060 size=0x5
int sub_100660a0(void);
int g_106c4c08 = ((int (*)(int))sub_100660a0)(0);
// END FUNCTION

// FUNCTION: 0x10066210 size=0xa
#define PCD_INITIALIZERS
#include "CTEMuzzleFlash.h"
CTEMuzzleFlash g_106c4c28("MuzzleFlash");
// END FUNCTION
