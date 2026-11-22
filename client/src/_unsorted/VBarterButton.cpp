// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016cda0 size=0x1e
#include "VBarterButton.h"

// VC6 writes VBarterButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VBarterButton *pcd_emit_1016cda0() { return new VBarterButton; }

// TARGET: ??_GVBarterButton@@UAEPAXI@Z
// END FUNCTION
