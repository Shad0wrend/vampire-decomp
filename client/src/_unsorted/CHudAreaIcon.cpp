// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10051d20 size=0x1e
#include "CHudAreaIcon.h"

// VC6 writes CHudAreaIcon's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudAreaIcon *pcd_emit_10051d20() { return new CHudAreaIcon; }

// TARGET: ??_GCHudAreaIcon@@UAEPAXI@Z
// END FUNCTION
