// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006a640 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c7118;
extern char g_105459c8[];
ServerClassReg g_106c7138("CTETracer", &g_106c7118, g_105459c8);
// END FUNCTION

// FUNCTION: 0x1006a6f0 size=0xa
#include "SendTable.h"
SendTable g_106c7118;
// END FUNCTION

// FUNCTION: 0x1006a770 size=0x5
int sub_1006a7b0(void);
int g_106c7114 = ((int (*)(int))sub_1006a7b0)(0);
// END FUNCTION

// FUNCTION: 0x1006a910 size=0xa
#define PCD_INITIALIZERS
#include "CTETracer.h"
CTETracer g_106c6f48("Tracer");
// END FUNCTION
