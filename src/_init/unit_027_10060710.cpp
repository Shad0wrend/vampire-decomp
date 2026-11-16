// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10060710 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c1c78;
extern char g_105427a0[];
ServerClassReg g_106c1c58("CTEDecal", &g_106c1c78, g_105427a0);
// END FUNCTION

// FUNCTION: 0x100607c0 size=0xa
#include "SendTable.h"
SendTable g_106c1c78;
// END FUNCTION

// FUNCTION: 0x10060840 size=0x5
int sub_10060880(void);
int g_106c1c74 = ((int (*)(int))sub_10060880)(0);
// END FUNCTION

// FUNCTION: 0x10060a40 size=0xa
#define PCD_INITIALIZERS
#include "CTEDecal.h"
CTEDecal g_106c1f38("Entity Decal");
// END FUNCTION
