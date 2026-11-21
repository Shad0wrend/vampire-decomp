// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017d550 size=0x1e
#include "VUnderscoreLabel.h"

// VC6 writes VUnderscoreLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VUnderscoreLabel *pcd_emit_1017d550() { return new VUnderscoreLabel; }

// TARGET: ??_GVUnderscoreLabel@@UAEPAXI@Z
// END FUNCTION
