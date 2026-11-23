// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100609a0 size=0x1e
#include "CSignUI.h"

// VC6 writes CSignUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSignUI *pcd_emit_100609a0() { return new CSignUI; }

// TARGET: ??_GCSignUI@@UAEPAXI@Z
// END FUNCTION

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
