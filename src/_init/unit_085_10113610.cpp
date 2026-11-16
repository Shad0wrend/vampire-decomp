// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10113610 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10709dac;
extern char g_1070a53c[];
ServerClassReg g_10709dc8("CFunc_Dust", &g_10709dac, g_1070a53c);
// END FUNCTION

// FUNCTION: 0x101136c0 size=0xa
#include "SendTable.h"
SendTable g_10709dac;
// END FUNCTION

// FUNCTION: 0x10113740 size=0x5
int sub_10113780(void);
int g_10709da8 = ((int (*)(int))sub_10113780)(0);
// END FUNCTION

// FUNCTION: 0x10113ac0 size=0x5
int sub_10113b00(void);
int g_1070a320 = ((int (*)(int))sub_10113b00)(0);
// END FUNCTION

// FUNCTION: 0x101140f0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1070a4d4;
extern char g_1056fd14[];
ServerClassReg g_1070a4f4("CTEDust", &g_1070a4d4, g_1056fd14);
// END FUNCTION

// FUNCTION: 0x101141a0 size=0xa
#include "SendTable.h"
SendTable g_1070a4d4;
// END FUNCTION

// FUNCTION: 0x10114220 size=0x5
int sub_10114260(void);
int g_1070a4d0 = ((int (*)(int))sub_10114260)(0);
// END FUNCTION

// FUNCTION: 0x101143c0 size=0xa
#define PCD_INITIALIZERS
#include "CTEDust.h"
CTEDust g_1070a50c("Dust");
// END FUNCTION

// FUNCTION: 0x10114560 size=0x5
int sub_101145a0(void);
int g_1070a4cc = ((int (*)(int))sub_101145a0)(0);
// END FUNCTION
