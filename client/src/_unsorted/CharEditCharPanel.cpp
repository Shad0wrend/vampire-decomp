// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101766a0 size=0x1e
#include "CharEditCharPanel.h"

// VC6 writes CharEditCharPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditCharPanel *pcd_emit_101766a0() { return new CharEditCharPanel; }

// TARGET: ??_GCharEditCharPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10177a00 size=0x1
#include "CharEditCharPanel.h"
void CharEditCharPanel::vfunc119()
{
}
// END FUNCTION
