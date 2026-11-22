// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10059db0 size=0x20
#include "IPredictionSystem.h"

// VC6 writes IPredictionSystem's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
IPredictionSystem *pcd_emit_10059db0() { return new IPredictionSystem; }

// TARGET: ??_GIPredictionSystem@@UAEPAXI@Z
// END FUNCTION
