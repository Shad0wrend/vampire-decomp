// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b8230 size=0x5
int sub_100b8270(void);
int g_106d0748 = ((int (*)(int))sub_100b8270)(0);
// END FUNCTION

// FUNCTION: 0x100b8340 size=0x5
int sub_100b8380(void);
int g_106d0c14 = ((int (*)(int))sub_100b8380)(0);
// END FUNCTION

// FUNCTION: 0x100b83b0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106d0874;
extern char g_1055a5a8[];
ServerClassReg g_106d091c("CBatSwarm", &g_106d0874, g_1055a5a8);
// END FUNCTION
