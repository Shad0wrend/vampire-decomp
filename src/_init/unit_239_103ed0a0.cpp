// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ed0a0 size=0x5
int sub_103ed0e0(void);
int g_10942edc = ((int (*)(int))sub_103ed0e0)(0);
// END FUNCTION

// FUNCTION: 0x103edf90 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10942d24;
extern char g_1067cadc[];
ServerClassReg g_10942ee4("CWeaponIThrownGrenade", &g_10942d24, g_1067cadc);
// END FUNCTION

// FUNCTION: 0x103ee040 size=0xa
#include "SendTable.h"
SendTable g_10942d24;
// END FUNCTION
