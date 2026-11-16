// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005db50 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c04ec;
extern char g_106c08ac[];
ServerClassReg g_106c0890("CTEBloodSprite", &g_106c04ec, g_106c08ac);
// END FUNCTION

// FUNCTION: 0x1005dc00 size=0xa
#include "SendTable.h"
SendTable g_106c04ec;
// END FUNCTION

// FUNCTION: 0x1005dc80 size=0x5
int sub_1005dcc0(void);
int g_106c04e8 = ((int (*)(int))sub_1005dcc0)(0);
// END FUNCTION

// FUNCTION: 0x1005dec0 size=0xa
#define PCD_INITIALIZERS
#include "CTEBloodSprite.h"
CTEBloodSprite g_106c0850("Blood Sprite");
// END FUNCTION
