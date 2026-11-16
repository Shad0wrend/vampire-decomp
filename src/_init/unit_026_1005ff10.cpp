// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005ff10 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c18e0;
extern char g_105425a8[];
ServerClassReg g_106c1ba0("CTEBubbleTrail", &g_106c18e0, g_105425a8);
// END FUNCTION

// FUNCTION: 0x1005ffc0 size=0xa
#include "SendTable.h"
SendTable g_106c18e0;
// END FUNCTION

// FUNCTION: 0x10060040 size=0x5
int sub_10060080(void);
int g_106c18dc = ((int (*)(int))sub_10060080)(0);
// END FUNCTION

// FUNCTION: 0x10060260 size=0xa
#define PCD_INITIALIZERS
#include "CTEBubbleTrail.h"
CTEBubbleTrail g_106c18a8("Bubble Trail");
// END FUNCTION
