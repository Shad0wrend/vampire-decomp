// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010c330 size=0x5
int sub_1010c370(void);
int g_1070967c = ((int (*)(int))sub_1010c370)(0);
// END FUNCTION

// FUNCTION: 0x1010ccc0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_107098c8;
extern char g_1056e150[];
ServerClassReg g_107096ac("CFuncAreaPortalWindow", &g_107098c8, g_1056e150);
// END FUNCTION
