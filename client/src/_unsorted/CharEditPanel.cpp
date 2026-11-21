// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10171370 size=0x1e
#include "CharEditPanel.h"

// VC6 writes CharEditPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditPanel *pcd_emit_10171370() { return new CharEditPanel; }

// TARGET: ??_GCharEditPanel@@UAEPAXI@Z
// END FUNCTION
