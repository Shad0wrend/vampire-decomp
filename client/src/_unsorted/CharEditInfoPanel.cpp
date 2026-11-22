// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017b530 size=0x1e
#include "CharEditInfoPanel.h"

// VC6 writes CharEditInfoPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditInfoPanel *pcd_emit_1017b530() { return new CharEditInfoPanel; }

// TARGET: ??_GCharEditInfoPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017c560 size=0x1
#include "CharEditInfoPanel.h"
void CharEditInfoPanel::vfunc119()
{
}
// END FUNCTION
