// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005ae80 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bf330;
extern char g_10540c28[];
ServerClassReg g_106bf34c("CTEBeamEntPoint", &g_106bf330, g_10540c28);
// END FUNCTION

// FUNCTION: 0x1005af30 size=0xa
#include "SendTable.h"
SendTable g_106bf330;
// END FUNCTION

// FUNCTION: 0x1005afb0 size=0x5
int sub_1005aff0(void);
int g_106bf32c = ((int (*)(int))sub_1005aff0)(0);
// END FUNCTION

// FUNCTION: 0x1005b160 size=0xa
#define PCD_INITIALIZERS
#include "CTEBeamEntPoint.h"
CTEBeamEntPoint g_106bf368("BeamEntPoint");
// END FUNCTION
