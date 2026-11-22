// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100054f0 size=0x1e
#include "CPlasmaSpray.h"

// VC6 writes CPlasmaSpray's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPlasmaSpray *pcd_emit_100054f0() { return new CPlasmaSpray; }

// TARGET: ??_GCPlasmaSpray@@UAEPAXI@Z
// END FUNCTION
