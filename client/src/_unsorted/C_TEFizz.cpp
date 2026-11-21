// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10037040 size=0x1e
#include "C_TEFizz.h"

// VC6 writes C_TEFizz's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEFizz *pcd_emit_10037040() { return new C_TEFizz; }

// TARGET: ??_GC_TEFizz@@UAEPAXI@Z
// END FUNCTION
