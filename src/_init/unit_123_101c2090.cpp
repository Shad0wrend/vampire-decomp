// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c2090 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1072c81c;
extern char g_1072ca84[];
ServerClassReg g_1072c7fc("CSun", &g_1072c81c, g_1072ca84);
// END FUNCTION

// FUNCTION: 0x101c2140 size=0xa
#include "SendTable.h"
SendTable g_1072c81c;
// END FUNCTION

// FUNCTION: 0x101c21c0 size=0x5
int sub_101c2200(void);
int g_1072c818 = ((int (*)(int))sub_101c2200)(0);
// END FUNCTION
