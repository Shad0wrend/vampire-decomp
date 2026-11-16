// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c2b50 size=0x5
#define PCD_INITIALIZERS
#include "CDerived101c2b90.h"
CDerived101c2b90 g_1072cb10;
// END FUNCTION

// FUNCTION: 0x101c2f50 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1072cc74;
extern char g_1059cb80[];
ServerClassReg g_1072cc90("CTEParticleSystem", &g_1072cc74, g_1059cb80);
// END FUNCTION

// FUNCTION: 0x101c3000 size=0xa
#include "SendTable.h"
SendTable g_1072cc74;
// END FUNCTION

// FUNCTION: 0x101c3080 size=0x5
int sub_101c30c0(void);
int g_1072cc70 = ((int (*)(int))sub_101c30c0)(0);
// END FUNCTION
