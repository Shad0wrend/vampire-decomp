// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10163b10 size=0x1e
#include "CBasePanel.h"

// VC6 writes CBasePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CBasePanel *pcd_emit_10163b10() { return new CBasePanel; }

// TARGET: ??_GCBasePanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10163ea0 size=0xa
#include "CBasePanel.h"
void CBasePanel::vfunc111(int a0)
{
    *(char *)((char *)this + 0x16c) = 1;
}
// END FUNCTION

// FUNCTION: 0x10164150 size=0x1
#include "CBasePanel.h"
void CBasePanel::vfunc2()
{
}
// END FUNCTION
