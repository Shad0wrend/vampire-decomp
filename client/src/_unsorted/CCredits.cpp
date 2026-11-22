// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004dd20 size=0x1e
#include "CCredits.h"

// VC6 writes CCredits's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CCredits *pcd_emit_1004dd20() { return new CCredits; }

// TARGET: ??_GCCredits@@UAEPAXI@Z
// END FUNCTION
