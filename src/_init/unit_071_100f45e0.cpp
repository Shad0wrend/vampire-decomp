// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f45e0 size=0x5
int sub_100f4620(void);
int g_106eb418 = ((int (*)(int))sub_100f4620)(0);
// END FUNCTION

// FUNCTION: 0x100f5100 size=0x5
int sub_100f5140(void);
int g_106eb534 = ((int (*)(int))sub_100f5140)(0);
// END FUNCTION

// FUNCTION: 0x100f5170 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106eb3fc;
extern char g_10565c34[];
ServerClassReg g_106eb41c("CEntityFlame", &g_106eb3fc, g_10565c34);
// END FUNCTION

// FUNCTION: 0x100f5220 size=0xa
#include "SendTable.h"
SendTable g_106eb3fc;
// END FUNCTION

// FUNCTION: 0x100f52a0 size=0x5
int sub_100f52e0(void);
int g_106eb3f8 = ((int (*)(int))sub_100f52e0)(0);
// END FUNCTION
