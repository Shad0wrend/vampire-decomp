// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017b330 size=0x1e
#include "VSlider.h"

// VC6 writes VSlider's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VSlider *pcd_emit_1017b330() { return new VSlider; }

// TARGET: ??_GVSlider@@UAEPAXI@Z
// END FUNCTION
