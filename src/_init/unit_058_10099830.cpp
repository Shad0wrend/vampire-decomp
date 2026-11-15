// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10099830 size=0xa
#include "ConVar.h"
ConVar g_106cfe50("ent_io_messages", "0", 0, "Set to true to show input  and output messages");
// END FUNCTION

// FUNCTION: 0x1009a150 size=0xa
#include "SendTable.h"
SendTable g_106cf138;
// END FUNCTION

// FUNCTION: 0x1009a1d0 size=0x5
int sub_1009a210(void);
int g_106cf134 = ((int (*)(int))sub_1009a210)(0);
// END FUNCTION

// FUNCTION: 0x1009a2b0 size=0xa
#include "SendTable.h"
SendTable g_106cfe98;
// END FUNCTION

// FUNCTION: 0x1009a330 size=0x5
int sub_1009a370(void);
int g_106cfe94 = ((int (*)(int))sub_1009a370)(0);
// END FUNCTION

// FUNCTION: 0x1009a440 size=0xa
#include "SendTable.h"
SendTable g_106cf1d4;
// END FUNCTION

// FUNCTION: 0x1009a4c0 size=0x5
int sub_1009a500(void);
int g_106cf1d0 = ((int (*)(int))sub_1009a500)(0);
// END FUNCTION

// FUNCTION: 0x1009a5f0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106cec14;
extern char g_106cff58[];
ServerClassReg g_106cfe10("CBaseEntity", &g_106cec14, g_106cff58);
// END FUNCTION

// FUNCTION: 0x1009a6a0 size=0xa
#include "SendTable.h"
SendTable g_106cec14;
// END FUNCTION

// FUNCTION: 0x1009a720 size=0x5
int sub_1009a760(void);
int g_106cec10 = ((int (*)(int))sub_1009a760)(0);
// END FUNCTION

// FUNCTION: 0x1009e3a0 size=0xa
#include "ConVar.h"
ConVar g_106cf420("ent_debugkeys", "", 0);
// END FUNCTION

// FUNCTION: 0x100a1df0 size=0x5
#include "CThinkContextsSaveDataOps.h"
CThinkContextsSaveDataOps g_106cf254;
// END FUNCTION
