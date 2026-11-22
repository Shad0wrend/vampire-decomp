// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1008e710 size=0x1e
#include "C_AI_BaseNPC.h"

// VC6 writes C_AI_BaseNPC's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_AI_BaseNPC *pcd_emit_1008e710() { return new C_AI_BaseNPC; }

// TARGET: ??_GC_AI_BaseNPC@@UAEPAXI@Z
// END FUNCTION
