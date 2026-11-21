// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e1930 size=0x1e
#include "CDummyMaterialProxy.h"

// VC6 writes CDummyMaterialProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CDummyMaterialProxy *pcd_emit_100e1930() { return new CDummyMaterialProxy; }

// TARGET: ??_GCDummyMaterialProxy@@UAEPAXI@Z
// END FUNCTION
