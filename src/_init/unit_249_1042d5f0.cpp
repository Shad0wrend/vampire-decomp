// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042e110 size=0x5
int sub_1042e150(void);
int g_109f0284 = ((int (*)(int))sub_1042e150)(0);
// END FUNCTION

// FUNCTION: 0x1042e1a0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109f028c;
extern char g_106af054[];
ServerClassReg g_109f02a8("CSprite", &g_109f028c, g_106af054);
// END FUNCTION

// FUNCTION: 0x1042e250 size=0xa
#include "SendTable.h"
SendTable g_109f028c;
// END FUNCTION
