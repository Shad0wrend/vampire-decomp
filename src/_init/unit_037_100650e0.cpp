// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100650e0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c44f8;
extern char g_10543e40[];
ServerClassReg g_106c4514("CTEImpact", &g_106c44f8, g_10543e40);
// END FUNCTION

// FUNCTION: 0x10065190 size=0xa
#include "SendTable.h"
SendTable g_106c44f8;
// END FUNCTION

// FUNCTION: 0x10065210 size=0x5
int sub_10065250(void);
int g_106c44f4 = ((int (*)(int))sub_10065250)(0);
// END FUNCTION

// FUNCTION: 0x100653b0 size=0xa
#define PCD_INITIALIZERS
#include "CTEImpact.h"
CTEImpact g_106c44c8("Impact");
// END FUNCTION
