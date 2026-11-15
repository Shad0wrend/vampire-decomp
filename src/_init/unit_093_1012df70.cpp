// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012df70 size=0x5
int sub_1012dfb0(void);
int g_1070bfbc = ((int (*)(int))sub_1012dfb0)(0);
// END FUNCTION

// FUNCTION: 0x1012dfe0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1070bfc8;
extern char g_105744e8[];
ServerClassReg g_1070bfa4("CHudCounter", &g_1070bfc8, g_105744e8);
// END FUNCTION

// FUNCTION: 0x1012e090 size=0xa
#include "SendTable.h"
SendTable g_1070bfc8;
// END FUNCTION

// FUNCTION: 0x1012e110 size=0x5
int sub_1012e150(void);
int g_1070bfc4 = ((int (*)(int))sub_1012e150)(0);
// END FUNCTION
