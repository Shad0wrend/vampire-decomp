// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c5d10 size=0x1e
#include "RadioImage.h"

// VC6 writes RadioImage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
RadioImage *pcd_emit_101c5d10() { return new RadioImage; }

// TARGET: ??_GRadioImage@@UAEPAXI@Z
// END FUNCTION
