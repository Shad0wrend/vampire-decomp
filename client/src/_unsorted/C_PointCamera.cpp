// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100060d0 size=0x1e
#include "C_PointCamera.h"

// VC6 writes C_PointCamera's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_PointCamera *pcd_emit_100060d0() { return new C_PointCamera; }

// TARGET: ??_GC_PointCamera@@UAEPAXI@Z
// END FUNCTION
