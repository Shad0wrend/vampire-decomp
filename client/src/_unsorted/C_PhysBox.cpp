// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bcc30 size=0x1e
#include "C_PhysBox.h"

// VC6 writes C_PhysBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_PhysBox *pcd_emit_100bcc30() { return new C_PhysBox; }

// TARGET: ??_GC_PhysBox@@UAEPAXI@Z
// END FUNCTION
