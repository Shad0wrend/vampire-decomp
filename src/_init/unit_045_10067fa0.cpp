// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10067fa0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c59b0;
extern char g_10544e10[];
ServerClassReg g_106c59cc("CTESprite", &g_106c59b0, g_10544e10);
// END FUNCTION

// FUNCTION: 0x10068050 size=0xa
#include "SendTable.h"
SendTable g_106c59b0;
// END FUNCTION

// FUNCTION: 0x100680d0 size=0x5
int sub_10068110(void);
int g_106c59ac = ((int (*)(int))sub_10068110)(0);
// END FUNCTION

// FUNCTION: 0x10068300 size=0xa
#define PCD_INITIALIZERS
#include "CTESprite.h"
CTESprite g_106c59e4("Sprite");
// END FUNCTION
