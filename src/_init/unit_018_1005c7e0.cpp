// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005c7e0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bfedc;
extern char g_10541440[];
ServerClassReg g_106bfec0("CTEBeamRing", &g_106bfedc, g_10541440);
// END FUNCTION

// FUNCTION: 0x1005c890 size=0xa
#include "SendTable.h"
SendTable g_106bfedc;
// END FUNCTION

// FUNCTION: 0x1005c910 size=0x5
int sub_1005c950(void);
int g_106bfed8 = ((int (*)(int))sub_1005c950)(0);
// END FUNCTION

// FUNCTION: 0x1005ca60 size=0xa
#define PCD_INITIALIZERS
#include "CTEBeamRing.h"
CTEBeamRing g_106bfd20("BeamRing");
// END FUNCTION
