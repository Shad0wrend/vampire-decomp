// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005db00 size=0x1e
#include "CHudTimerUI.h"

// VC6 writes CHudTimerUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudTimerUI *pcd_emit_1005db00(const CHudTimerUI &other) { return new CHudTimerUI(other); }

// TARGET: ??_GCHudTimerUI@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005db20 size=0x22
#include "CHudTimerUI.h"
CHudTimerUI::~CHudTimerUI()
{
	sub_101a9ff0(0);
}
// END FUNCTION
