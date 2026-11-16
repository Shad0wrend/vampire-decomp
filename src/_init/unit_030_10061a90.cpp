// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10061a90 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c2a5c;
extern char g_10542de0[];
ServerClassReg g_106c2a40("CTEExplosion", &g_106c2a5c, g_10542de0);
// END FUNCTION

// FUNCTION: 0x10061b40 size=0xa
#include "SendTable.h"
SendTable g_106c2a5c;
// END FUNCTION

// FUNCTION: 0x10061bc0 size=0x5
int sub_10061c00(void);
int g_106c2a58 = ((int (*)(int))sub_10061c00)(0);
// END FUNCTION

// FUNCTION: 0x10061e00 size=0xa
#define PCD_INITIALIZERS
#include "CTEExplosion.h"
CTEExplosion g_106c26b8("Explosion");
// END FUNCTION
