// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10067830 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c55e0;
extern char g_10544c20[];
ServerClassReg g_106c55fc("CTESparks", &g_106c55e0, g_10544c20);
// END FUNCTION

// FUNCTION: 0x100678e0 size=0xa
#include "SendTable.h"
SendTable g_106c55e0;
// END FUNCTION

// FUNCTION: 0x10067960 size=0x5
int sub_100679a0(void);
int g_106c55dc = ((int (*)(int))sub_100679a0)(0);
// END FUNCTION

// FUNCTION: 0x10067af0 size=0xa
#define PCD_INITIALIZERS
#include "CTESparks.h"
CTESparks g_106c5618("Sparks");
// END FUNCTION
