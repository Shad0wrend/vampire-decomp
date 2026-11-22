// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010d870 size=0x1e
#include "CGaussianNoiseProxy.h"

// VC6 writes CGaussianNoiseProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CGaussianNoiseProxy *pcd_emit_1010d870() { return new CGaussianNoiseProxy; }

// TARGET: ??_GCGaussianNoiseProxy@@UAEPAXI@Z
// END FUNCTION
