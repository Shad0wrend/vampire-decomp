// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005edc0 size=0x1e
#include "CItemInfo.h"

// VC6 writes CItemInfo's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CItemInfo *pcd_emit_1005edc0() { return new CItemInfo; }

// TARGET: ??_GCItemInfo@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005f030 size=0x1
#include "CItemInfo.h"
void CItemInfo::vfunc97()
{
}
// END FUNCTION
