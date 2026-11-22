// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016ae60 size=0x1e
#include "VBarterIconButton.h"

// VC6 writes VBarterIconButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VBarterIconButton *pcd_emit_1016ae60() { return new VBarterIconButton; }

// TARGET: ??_GVBarterIconButton@@UAEPAXI@Z
// END FUNCTION
