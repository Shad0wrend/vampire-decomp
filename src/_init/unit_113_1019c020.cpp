// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019c020 size=0xa
#include "ConVar.h"
ConVar g_1072b3a8("debug_total_mass_divisor", "4", 8192);
// END FUNCTION

// FUNCTION: 0x1019cd60 size=0xa
#define PCD_INITIALIZERS
#include "IPredictionSystem.h"
IPredictionSystem g_1072b3fc;
// END FUNCTION

// FUNCTION: 0x1019d760 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1072b968;
extern char g_1072b99c[];
ServerClassReg g_1072b984("CRopeKeyframe", &g_1072b968, g_1072b99c);
// END FUNCTION

// FUNCTION: 0x1019d810 size=0xa
#include "SendTable.h"
SendTable g_1072b968;
// END FUNCTION

// FUNCTION: 0x1019d890 size=0x5
int sub_1019d8d0(void);
int g_1072b964 = ((int (*)(int))sub_1019d8d0)(0);
// END FUNCTION

// FUNCTION: 0x1019dc10 size=0x5
int sub_1019dc50(void);
int g_1072b960 = ((int (*)(int))sub_1019dc50)(0);
// END FUNCTION
