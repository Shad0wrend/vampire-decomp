// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10060db0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c2398;
extern char g_105429b8[];
ServerClassReg g_106c23b4("CTEDynamicLight", &g_106c2398, g_105429b8);
// END FUNCTION

// FUNCTION: 0x10060e60 size=0xa
#include "SendTable.h"
SendTable g_106c2398;
// END FUNCTION

// FUNCTION: 0x10060ee0 size=0x5
int sub_10060f20(void);
int g_106c2394 = ((int (*)(int))sub_10060f20)(0);
// END FUNCTION

// FUNCTION: 0x10061130 size=0xa
#define PCD_INITIALIZERS
#include "CTEDynamicLight.h"
CTEDynamicLight g_106c2010("Dynamic Light");
// END FUNCTION
