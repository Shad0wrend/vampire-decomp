// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1023a5c0 size=0xa
#include "ConVar.h"
ConVar g_10753298("host_speeds", "0", 0);
// END FUNCTION

// FUNCTION: 0x1023a670 size=0x5
int sub_1023a6b0(void);
int g_10752ee4 = ((int (*)(int))sub_1023a6b0)(0);
// END FUNCTION

// FUNCTION: 0x1023aed0 size=0x5
int sub_1023af10(void);
int g_107532e0 = ((int (*)(int))sub_1023af10)(0);
// END FUNCTION

// FUNCTION: 0x1023af40 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10752e68;
extern char g_105c2a40[];
ServerClassReg g_10752d44("CWorld", &g_10752e68, g_105c2a40);
// END FUNCTION

// FUNCTION: 0x1023aff0 size=0xa
#include "SendTable.h"
SendTable g_10752e68;
// END FUNCTION

// FUNCTION: 0x1023b070 size=0x5
int sub_1023b0b0(void);
int g_10752e64 = ((int (*)(int))sub_1023b0b0)(0);
// END FUNCTION
