// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10164190 size=0x1e
#include "CHudLabel.h"

// VC6 writes CHudLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudLabel *pcd_emit_10164190() { return new CHudLabel; }

// TARGET: ??_GCHudLabel@@UAEPAXI@Z
// END FUNCTION
