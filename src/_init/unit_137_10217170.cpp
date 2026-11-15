// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10217170 size=0xa
#include "ConVar.h"
ConVar g_1074f710("trace_terminals", "0", 0);
// END FUNCTION

// FUNCTION: 0x10217270 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1074f6ec;
extern char g_105af258[];
ServerClassReg g_1074f380("CBaseTerminal", &g_1074f6ec, g_105af258);
// END FUNCTION
