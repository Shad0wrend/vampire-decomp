// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10057620 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown10057680.h"
CUnknown10057680 g_106be530;
// END FUNCTION

// FUNCTION: 0x10057b80 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106be544;
extern char g_1053ff28[];
ServerClassReg g_106be568("CSteamJet", &g_106be544, g_1053ff28);
// END FUNCTION

// FUNCTION: 0x10057c30 size=0xa
#include "SendTable.h"
SendTable g_106be544;
// END FUNCTION

// FUNCTION: 0x10057cb0 size=0x5
int sub_10057cf0(void);
int g_106be540 = ((int (*)(int))sub_10057cf0)(0);
// END FUNCTION

// FUNCTION: 0x10058070 size=0x5
int sub_100580b0(void);
int g_106be560 = ((int (*)(int))sub_100580b0)(0);
// END FUNCTION
