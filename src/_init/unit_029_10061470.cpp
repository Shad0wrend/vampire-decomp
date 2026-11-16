// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10061470 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c24b0;
extern char g_106c2648[];
ServerClassReg g_106c2494("CTEEnergySplash", &g_106c24b0, g_106c2648);
// END FUNCTION

// FUNCTION: 0x10061520 size=0xa
#include "SendTable.h"
SendTable g_106c24b0;
// END FUNCTION

// FUNCTION: 0x100615a0 size=0x5
int sub_100615e0(void);
int g_106c24ac = ((int (*)(int))sub_100615e0)(0);
// END FUNCTION

// FUNCTION: 0x10061720 size=0xa
#define PCD_INITIALIZERS
#include "CTEEnergySplash.h"
CTEEnergySplash g_106c2620("Energy Splash");
// END FUNCTION
