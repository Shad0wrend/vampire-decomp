// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10055a00 size=0x1e
#include "CHudInfo.h"

// VC6 writes CHudInfo's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudInfo *pcd_emit_10055a00(const CHudInfo &other) { return new CHudInfo(other); }

// TARGET: ??_GCHudInfo@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10055a20 size=0x22
#include "CHudInfo.h"
CHudInfo::~CHudInfo()
{
	sub_101a9ff0(0);
}
// END FUNCTION
