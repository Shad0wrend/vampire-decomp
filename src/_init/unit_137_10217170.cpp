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

// FUNCTION: 0x10217320 size=0xa
#include "SendTable.h"
SendTable g_1074f6ec;
// END FUNCTION

// FUNCTION: 0x102173a0 size=0x5
int sub_102173e0(void);
int g_1074f6e8 = ((int (*)(int))sub_102173e0)(0);
// END FUNCTION

// FUNCTION: 0x10217610 size=0x5
int sub_10217650(void);
int g_1074f70c = ((int (*)(int))sub_10217650)(0);
// END FUNCTION

// FUNCTION: 0x10219730 size=0x5
int * sub_10219770(void);
int * g_1074f37c = ((int * (*)(int))sub_10219770)(0);
// END FUNCTION

// FUNCTION: 0x1021d6f0 size=0x5
int * sub_1021d730(void);
int * g_1074f398 = ((int * (*)(int))sub_1021d730)(0);
// END FUNCTION
