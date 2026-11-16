// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005d520 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c0444;
extern char g_106c0464[];
ServerClassReg g_106c0428("CTEBeamSpline", &g_106c0444, g_106c0464);
// END FUNCTION

// FUNCTION: 0x1005d5d0 size=0xa
#include "SendTable.h"
SendTable g_106c0444;
// END FUNCTION

// FUNCTION: 0x1005d650 size=0x5
int sub_1005d690(void);
int g_106c0440 = ((int (*)(int))sub_1005d690)(0);
// END FUNCTION

// FUNCTION: 0x1005d7b0 size=0xa
#define PCD_INITIALIZERS
#include "CTEBeamSpline.h"
CTEBeamSpline g_106c0358("BeamSpline");
// END FUNCTION
