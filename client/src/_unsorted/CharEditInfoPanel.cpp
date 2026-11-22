// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017b530 size=0x1e
#include "CharEditInfoPanel.h"

// VC6 writes CharEditInfoPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditInfoPanel *pcd_emit_1017b530() { return new CharEditInfoPanel; }

// TARGET: ??_GCharEditInfoPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017c3a0 size=0x3
#include "CharEditInfoPanel.h"
void CharEditInfoPanel::vfunc124(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1017c530 size=0x6
#include "CharEditInfoPanel.h"
namespace lifted {
extern char g_102d1340;
}
int CharEditInfoPanel::vfunc102()
{
    return (int)&lifted::g_102d1340;
}
// END FUNCTION

// FUNCTION: 0x1017c560 size=0x1
#include "CharEditInfoPanel.h"
void CharEditInfoPanel::vfunc119()
{
}
// END FUNCTION
