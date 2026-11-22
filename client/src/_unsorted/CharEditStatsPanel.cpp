// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017d730 size=0x1e
#include "CharEditStatsPanel.h"

// VC6 writes CharEditStatsPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditStatsPanel *pcd_emit_1017d730() { return new CharEditStatsPanel; }

// TARGET: ??_GCharEditStatsPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10182440 size=0x1
#include "CharEditStatsPanel.h"
void CharEditStatsPanel::vfunc3()
{
}
// END FUNCTION
