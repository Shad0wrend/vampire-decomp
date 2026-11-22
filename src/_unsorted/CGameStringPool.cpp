// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042bf20 size=0x8
#include "CGameStringPool.h"

// TARGET: CGameStringPool::vfunc5
void CGameStringPool::vfunc5()
{
	sub_101bfb00();
}
// END FUNCTION

// FUNCTION: 0x1042bf90 size=0x2e
#include "CGameStringPool.h"

// VC6 writes CGameStringPool's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CGameStringPool *pcd_emit_1042bf90() { return new CGameStringPool; }

// TARGET: ??_GCGameStringPool@@UAEPAXI@Z
// END FUNCTION
