// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101ba9f0 size=0x1e
#include "CheckImage.h"

// VC6 writes CheckImage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CheckImage *pcd_emit_101ba9f0() { return new CheckImage; }

// TARGET: ??_GCheckImage@@UAEPAXI@Z
// END FUNCTION
