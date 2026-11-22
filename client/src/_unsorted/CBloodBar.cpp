// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004c690 size=0x1e
#include "CBloodBar.h"

// VC6 writes CBloodBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CBloodBar *pcd_emit_1004c690() { return new CBloodBar; }

// TARGET: ??_GCBloodBar@@UAEPAXI@Z
// END FUNCTION
