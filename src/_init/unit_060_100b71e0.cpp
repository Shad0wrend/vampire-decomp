// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b71e0 size=0x5
int * sub_100b7220(void);
int * g_106d0670 = ((int * (*)(int))sub_100b7220)(0);
// END FUNCTION

// FUNCTION: 0x100b7710 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106d0694;
extern char g_106d070c[];
ServerClassReg g_106d0678("CBaseNetworkable", &g_106d0694, g_106d070c);
// END FUNCTION
