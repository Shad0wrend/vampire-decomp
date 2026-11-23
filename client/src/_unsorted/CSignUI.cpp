// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100609c0 size=0xef
#include "CSignUI.h"
extern CSignUI *g_103eee40;
// TARGET: ??1CSignUI@@UAE@XZ
CSignUI::~CSignUI()
{
	sub_101a9ff0(0);
	sub_10060c30();
	g_103eee40 = 0;
}
// END FUNCTION
