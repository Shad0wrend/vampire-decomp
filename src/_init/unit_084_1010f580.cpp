// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010f580 size=0x5
int sub_1010f5c0(void);
int g_10709988 = ((int (*)(int))sub_1010f5c0)(0);
// END FUNCTION

// FUNCTION: 0x1010faa0 size=0x5
int sub_1010fae0(void);
int g_107099a4 = ((int (*)(int))sub_1010fae0)(0);
// END FUNCTION

// FUNCTION: 0x1010fb10 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1070996c;
extern char g_1056f488[];
ServerClassReg g_1070998c("CBreakableSurface", &g_1070996c, g_1056f488);
// END FUNCTION

// FUNCTION: 0x1010fbc0 size=0xa
#include "SendTable.h"
SendTable g_1070996c;
// END FUNCTION
