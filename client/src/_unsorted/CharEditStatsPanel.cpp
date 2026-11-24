// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017d730 size=0x1e
#include "CharEditStatsPanel.h"

// VC6 writes CharEditStatsPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditStatsPanel *pcd_emit_1017d730(const CharEditStatsPanel &other) { return new CharEditStatsPanel(other); }

// TARGET: ??_GCharEditStatsPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10182330 size=0x21
#include "CharEditStatsPanel.h"
int sub_1016a6b0();
void CharEditStatsPanel::vfunc123()
{
	int n = sub_1016a6b0();
	vfunc33(n);
	sub_101aa0a0(1000);
}
// END FUNCTION

// FUNCTION: 0x10182440 size=0x1
#include "CharEditStatsPanel.h"
void CharEditStatsPanel::vfunc3()
{
}
// END FUNCTION

// FUNCTION: 0x101824d0 size=0x6
#include "CharEditStatsPanel.h"
namespace lifted {
extern char g_102d1750;
}
int CharEditStatsPanel::vfunc102()
{
    return (int)&lifted::g_102d1750;
}
// END FUNCTION
