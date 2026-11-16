// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10065b10 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c4978;
extern char g_10544220[];
ServerClassReg g_106c49a8("CTEKillPlayerAttachments", &g_106c4978, g_10544220);
// END FUNCTION

// FUNCTION: 0x10065bc0 size=0xa
#include "SendTable.h"
SendTable g_106c4978;
// END FUNCTION

// FUNCTION: 0x10065c40 size=0x5
int sub_10065c80(void);
int g_106c4974 = ((int (*)(int))sub_10065c80)(0);
// END FUNCTION

// FUNCTION: 0x10065d70 size=0xa
#define PCD_INITIALIZERS
#include "CTEKillPlayerAttachments.h"
CTEKillPlayerAttachments g_106c4994("KillPlayerAttachments");
// END FUNCTION
