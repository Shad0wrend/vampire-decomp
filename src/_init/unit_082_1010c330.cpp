// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010c630 size=0xa
#include "utllinkedlist.h"
CUtlLinkedList<int, unsigned short> g_10709680;
// END FUNCTION

// FUNCTION: 0x1010ccc0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_107098c8;
extern char g_1056e150[];
ServerClassReg g_107096ac("CFuncAreaPortalWindow", &g_107098c8, g_1056e150);
// END FUNCTION
