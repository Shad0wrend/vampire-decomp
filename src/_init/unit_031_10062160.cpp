// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10062160 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c2d00;
extern char g_10543018[];
ServerClassReg g_106c2b40("CTEFizz", &g_106c2d00, g_10543018);
// END FUNCTION

// FUNCTION: 0x10062210 size=0xa
#include "SendTable.h"
SendTable g_106c2d00;
// END FUNCTION

// FUNCTION: 0x10062290 size=0x5
int sub_100622d0(void);
int g_106c2cfc = ((int (*)(int))sub_100622d0)(0);
// END FUNCTION

// FUNCTION: 0x10062410 size=0xa
#define PCD_INITIALIZERS
#include "CTEFizz.h"
CTEFizz g_106c2d1c("Fizz");
// END FUNCTION
