// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10068da0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c6590;
extern char g_105453a0[];
ServerClassReg g_106c65ac("CTETextMessage", &g_106c6590, g_105453a0);
// END FUNCTION

// FUNCTION: 0x10068e50 size=0xa
#include "SendTable.h"
SendTable g_106c6590;
// END FUNCTION

// FUNCTION: 0x10068ed0 size=0x5
int sub_10068f10(void);
int g_106c658c = ((int (*)(int))sub_10068f10)(0);
// END FUNCTION

// FUNCTION: 0x10069290 size=0xa
#define PCD_INITIALIZERS
#include "CTETextMessage.h"
CTETextMessage g_106c5e80("TextMessage");
// END FUNCTION
