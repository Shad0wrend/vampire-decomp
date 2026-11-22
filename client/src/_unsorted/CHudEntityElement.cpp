// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bc2f0 size=0x1e
#include "CHudEntityElement.h"

// VC6 writes CHudEntityElement's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudEntityElement *pcd_emit_100bc2f0() { return new CHudEntityElement; }

// TARGET: ??_GCHudEntityElement@@UAEPAXI@Z
// END FUNCTION
