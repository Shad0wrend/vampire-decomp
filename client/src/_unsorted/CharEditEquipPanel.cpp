// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10178850 size=0x1e
#include "CharEditEquipPanel.h"

// VC6 writes CharEditEquipPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditEquipPanel *pcd_emit_10178850() { return new CharEditEquipPanel; }

// TARGET: ??_GCharEditEquipPanel@@UAEPAXI@Z
// END FUNCTION
