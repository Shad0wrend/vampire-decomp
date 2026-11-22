// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10012c10 size=0x1e
#include "C_OccultLockpicking.h"

// VC6 writes C_OccultLockpicking's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultLockpicking *pcd_emit_10012c10() { return new C_OccultLockpicking; }

// TARGET: ??_GC_OccultLockpicking@@UAEPAXI@Z
// END FUNCTION
