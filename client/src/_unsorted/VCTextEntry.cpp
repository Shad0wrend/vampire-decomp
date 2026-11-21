// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10176380 size=0x1e
#include "VCTextEntry.h"

// VC6 writes VCTextEntry's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VCTextEntry *pcd_emit_10176380() { return new VCTextEntry; }

// TARGET: ??_GVCTextEntry@@UAEPAXI@Z
// END FUNCTION
