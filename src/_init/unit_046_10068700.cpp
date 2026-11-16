// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10068700 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c5d8c;
extern char g_10545198[];
ServerClassReg g_106c5ad0("CTESpriteSpray", &g_106c5d8c, g_10545198);
// END FUNCTION

// FUNCTION: 0x100687b0 size=0xa
#include "SendTable.h"
SendTable g_106c5d8c;
// END FUNCTION

// FUNCTION: 0x10068830 size=0x5
int sub_10068870(void);
int g_106c5d88 = ((int (*)(int))sub_10068870)(0);
// END FUNCTION

// FUNCTION: 0x10068a30 size=0xa
#define PCD_INITIALIZERS
#include "CTESpriteSpray.h"
CTESpriteSpray g_106c5da8("Sprite Spray");
// END FUNCTION
