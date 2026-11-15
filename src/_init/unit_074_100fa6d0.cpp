// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fa6d0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10708dcc;
extern char g_105669c8[];
ServerClassReg g_10708e20("CEnvParticle", &g_10708dcc, g_105669c8);
// END FUNCTION

// FUNCTION: 0x100fa780 size=0xa
#include "SendTable.h"
SendTable g_10708dcc;
// END FUNCTION

// FUNCTION: 0x100fa800 size=0x5
int sub_100fa840(void);
int g_10708dc8 = ((int (*)(int))sub_100fa840)(0);
// END FUNCTION

// FUNCTION: 0x100face0 size=0x5
int sub_100fad20(void);
int g_10708df4 = ((int (*)(int))sub_100fad20)(0);
// END FUNCTION

// FUNCTION: 0x100fb8f0 size=0xa
#include "ConVar.h"
ConVar g_107083d8("particle_scale", "1.0", 384);
// END FUNCTION

// FUNCTION: 0x100fbf80 size=0x5
int sub_100fbfc0(void);
int g_10708dec = ((int (*)(int))sub_100fbfc0)(0);
// END FUNCTION

// FUNCTION: 0x100fc630 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10708dfc;
extern char g_10566edc[];
ServerClassReg g_1070871c("CFuncParticle", &g_10708dfc, g_10566edc);
// END FUNCTION

// FUNCTION: 0x100fc6e0 size=0xa
#include "SendTable.h"
SendTable g_10708dfc;
// END FUNCTION

// FUNCTION: 0x100fc760 size=0x5
int sub_100fc7a0(void);
int g_10708df8 = ((int (*)(int))sub_100fc7a0)(0);
// END FUNCTION

// FUNCTION: 0x100fc9f0 size=0x5
int sub_100fca30(void);
int g_107083d0 = ((int (*)(int))sub_100fca30)(0);
// END FUNCTION
