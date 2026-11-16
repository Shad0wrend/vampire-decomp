// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005b550 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bf7f4;
extern char g_10540e70[];
ServerClassReg g_106bf810("CTEBeamEnts", &g_106bf7f4, g_10540e70);
// END FUNCTION

// FUNCTION: 0x1005b600 size=0xa
#include "SendTable.h"
SendTable g_106bf7f4;
// END FUNCTION

// FUNCTION: 0x1005b680 size=0x5
int sub_1005b6c0(void);
int g_106bf7f0 = ((int (*)(int))sub_1005b6c0)(0);
// END FUNCTION

// FUNCTION: 0x1005b7d0 size=0xa
#define PCD_INITIALIZERS
#include "CTEBeamEnts.h"
CTEBeamEnts g_106bf7a0("BeamEnts");
// END FUNCTION
