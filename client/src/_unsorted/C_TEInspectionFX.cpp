// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003a190 size=0x1e
#include "C_TEInspectionFX.h"

// VC6 writes C_TEInspectionFX's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEInspectionFX *pcd_emit_1003a190() { return new C_TEInspectionFX; }

// TARGET: ??_GC_TEInspectionFX@@UAEPAXI@Z
// END FUNCTION
