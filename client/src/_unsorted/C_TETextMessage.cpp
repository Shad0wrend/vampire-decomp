// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003fbc0 size=0x1e
#include "C_TETextMessage.h"

// VC6 writes C_TETextMessage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TETextMessage *pcd_emit_1003fbc0() { return new C_TETextMessage; }

// TARGET: ??_GC_TETextMessage@@UAEPAXI@Z
// END FUNCTION
