// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006ab20 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c71f0;
extern char g_10545bb8[];
ServerClassReg g_106c720c("CTEUserTracer", &g_106c71f0, g_10545bb8);
// END FUNCTION

// FUNCTION: 0x1006abd0 size=0xa
#include "SendTable.h"
SendTable g_106c71f0;
// END FUNCTION

// FUNCTION: 0x1006ac50 size=0x5
int sub_1006ac90(void);
int g_106c71ec = ((int (*)(int))sub_1006ac90)(0);
// END FUNCTION

// FUNCTION: 0x1006ae30 size=0xa
#define PCD_INITIALIZERS
#include "CTEUserTracer.h"
CTEUserTracer g_106c71b8("UserTracer");
// END FUNCTION
