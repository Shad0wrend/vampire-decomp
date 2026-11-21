// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100cab70 size=0x1e
#include "CCamoMaterialProxy.h"

// VC6 writes CCamoMaterialProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CCamoMaterialProxy *pcd_emit_100cab70() { return new CCamoMaterialProxy; }

// TARGET: ??_GCCamoMaterialProxy@@UAEPAXI@Z
// END FUNCTION
