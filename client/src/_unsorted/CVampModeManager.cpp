// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10162320 size=0x1e
#include "CVampModeManager.h"

// VC6 writes CVampModeManager's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVampModeManager *pcd_emit_10162320() { return new CVampModeManager; }

// TARGET: ??_GCVampModeManager@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101623f0 size=0x3
#include "CVampModeManager.h"
void CVampModeManager::vfunc6(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10162420 size=0x1
#include "CVampModeManager.h"
void CVampModeManager::vfunc3()
{
}
// END FUNCTION
