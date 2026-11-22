// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001bd10 size=0x1e
#include "C_ItemGBrotherhoodFlyer.h"

// VC6 writes C_ItemGBrotherhoodFlyer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGBrotherhoodFlyer *pcd_emit_1001bd10() { return new C_ItemGBrotherhoodFlyer; }

// TARGET: ??_GC_ItemGBrotherhoodFlyer@@UAEPAXI@Z
// END FUNCTION
