// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10080300 size=0x1e
#include "C_Beam.h"

// VC6 writes C_Beam's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_Beam *pcd_emit_10080300() { return new C_Beam; }

// TARGET: ??_GC_Beam@@UAEPAXI@Z
// END FUNCTION
