// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bdb10 size=0x1e
#include "C_OrnamentProp.h"

// VC6 writes C_OrnamentProp's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OrnamentProp *pcd_emit_100bdb10() { return new C_OrnamentProp; }

// TARGET: ??_GC_OrnamentProp@@UAEPAXI@Z
// END FUNCTION
