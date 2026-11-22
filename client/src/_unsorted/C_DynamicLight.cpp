// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ae000 size=0x1e
#include "C_DynamicLight.h"

// VC6 writes C_DynamicLight's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_DynamicLight *pcd_emit_100ae000() { return new C_DynamicLight; }

// TARGET: ??_GC_DynamicLight@@UAEPAXI@Z
// END FUNCTION
