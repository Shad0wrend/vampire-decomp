// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100624e0 size=0x1e
#include "CStealth.h"

// VC6 writes CStealth's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CStealth *pcd_emit_100624e0() { return new CStealth; }

// TARGET: ??_GCStealth@@UAEPAXI@Z
// END FUNCTION
