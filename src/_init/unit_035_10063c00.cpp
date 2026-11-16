// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10063c00 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c39f8;
extern char g_10543918[];
ServerClassReg g_106c3c8c("CTEGlowSprite", &g_106c39f8, g_10543918);
// END FUNCTION

// FUNCTION: 0x10063cb0 size=0xa
#include "SendTable.h"
SendTable g_106c39f8;
// END FUNCTION

// FUNCTION: 0x10063d30 size=0x5
int sub_10063d70(void);
int g_106c39f4 = ((int (*)(int))sub_10063d70)(0);
// END FUNCTION

// FUNCTION: 0x10063f10 size=0xa
#define PCD_INITIALIZERS
#include "CTEGlowSprite.h"
CTEGlowSprite g_106c3a14("GlowSprite");
// END FUNCTION
