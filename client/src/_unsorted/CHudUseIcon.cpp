// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005e100 size=0x1e
#include "CHudUseIcon.h"

// VC6 writes CHudUseIcon's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudUseIcon *pcd_emit_1005e100(const CHudUseIcon &other) { return new CHudUseIcon(other); }

// TARGET: ??_GCHudUseIcon@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005e120 size=0x7c
#include "CHudUseIcon.h"
extern int g_103eede0;
// TARGET: ??1CHudUseIcon@@UAE@XZ
CHudUseIcon::~CHudUseIcon()
{
	g_103eede0 = 0;
	sub_101a9ff0(0);
	delete m_pChild1;
	delete m_pChild2;
	delete m_pChild3;
	delete m_pChild4;
	delete m_pChild5;
}
// END FUNCTION
