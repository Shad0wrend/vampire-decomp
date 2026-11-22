// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10049140 size=0x1e
#include "CLightRays.h"

// VC6 writes CLightRays's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CLightRays *pcd_emit_10049140() { return new CLightRays; }

// TARGET: ??_GCLightRays@@UAEPAXI@Z
// END FUNCTION
