// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012e510 size=0x5
int sub_1012e550(void);
int g_1070c0a4 = ((int (*)(int))sub_1012e550)(0);
// END FUNCTION

// FUNCTION: 0x1012e750 size=0x5
int sub_1012e790(void);
int g_1070c3f0 = ((int (*)(int))sub_1012e790)(0);
// END FUNCTION

// FUNCTION: 0x1012e7c0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1070c06c;
extern char g_10574b60[];
ServerClassReg g_1070c08c("CHudEntity", &g_1070c06c, g_10574b60);
// END FUNCTION

// FUNCTION: 0x1012e870 size=0xa
#include "SendTable.h"
SendTable g_1070c06c;
// END FUNCTION

// FUNCTION: 0x1012e8f0 size=0x5
int sub_1012e930(void);
int g_1070c068 = ((int (*)(int))sub_1012e930)(0);
// END FUNCTION
