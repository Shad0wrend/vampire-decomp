// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100575b0 size=0x1e
#include "CHudManager.h"

// VC6 writes CHudManager's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudManager *pcd_emit_100575b0() { return new CHudManager; }

// TARGET: ??_GCHudManager@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10057640 size=0x1
#include "CHudManager.h"
void CHudManager::vfunc112()
{
}
// END FUNCTION
