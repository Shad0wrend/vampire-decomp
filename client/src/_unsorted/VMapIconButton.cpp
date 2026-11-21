// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10187000 size=0x1e
#include "VMapIconButton.h"

// VC6 writes VMapIconButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VMapIconButton *pcd_emit_10187000() { return new VMapIconButton; }

// TARGET: ??_GVMapIconButton@@UAEPAXI@Z
// END FUNCTION
