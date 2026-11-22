// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10178850 size=0x1e
#include "CharEditEquipPanel.h"

// VC6 writes CharEditEquipPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditEquipPanel *pcd_emit_10178850() { return new CharEditEquipPanel; }

// TARGET: ??_GCharEditEquipPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017a690 size=0x3
#include "CharEditEquipPanel.h"
void CharEditEquipPanel::vfunc124(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1017a7b0 size=0x6
#include "CharEditEquipPanel.h"
namespace lifted {
extern char g_102d0e80;
}
int CharEditEquipPanel::vfunc102()
{
    return (int)&lifted::g_102d0e80;
}
// END FUNCTION

// FUNCTION: 0x1017a7d0 size=0x1
#include "CharEditEquipPanel.h"
void CharEditEquipPanel::vfunc119()
{
}
// END FUNCTION
