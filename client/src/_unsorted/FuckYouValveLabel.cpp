// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10170d60 size=0x1e
#include "FuckYouValveLabel.h"

// VC6 writes FuckYouValveLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
FuckYouValveLabel *pcd_emit_10170d60() { return new FuckYouValveLabel; }

// TARGET: ??_GFuckYouValveLabel@@UAEPAXI@Z
// END FUNCTION
