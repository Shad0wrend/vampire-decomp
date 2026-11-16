// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005bb30 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bfa34;
extern char g_10541058[];
ServerClassReg g_106bfa50("CTEBeamLaser", &g_106bfa34, g_10541058);
// END FUNCTION

// FUNCTION: 0x1005bbe0 size=0xa
#include "SendTable.h"
SendTable g_106bfa34;
// END FUNCTION

// FUNCTION: 0x1005bc60 size=0x5
int sub_1005bca0(void);
int g_106bfa30 = ((int (*)(int))sub_1005bca0)(0);
// END FUNCTION

// FUNCTION: 0x1005bdb0 size=0xa
#define PCD_INITIALIZERS
#include "CTEBeamLaser.h"
CTEBeamLaser g_106bf890("BeamLaser");
// END FUNCTION
