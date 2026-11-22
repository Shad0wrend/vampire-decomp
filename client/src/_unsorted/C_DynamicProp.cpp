// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bd8e0 size=0x1e
#include "C_DynamicProp.h"

// VC6 writes C_DynamicProp's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_DynamicProp *pcd_emit_100bd8e0() { return new C_DynamicProp; }

// TARGET: ??_GC_DynamicProp@@UAEPAXI@Z
// END FUNCTION
