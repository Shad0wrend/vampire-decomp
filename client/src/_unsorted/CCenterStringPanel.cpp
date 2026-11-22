// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10164c20 size=0x5
#include "CCenterStringPanel.h"
bool CCenterStringPanel::vfunc25(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10164c30 size=0x1e
#include "CCenterStringPanel.h"

// VC6 writes CCenterStringPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CCenterStringPanel *pcd_emit_10164c30() { return new CCenterStringPanel; }

// TARGET: ??_GCCenterStringPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10164dd0 size=0x2b
#include "CCenterStringPanel.h"
int CCenterStringPanel::vfunc108(int a0, int a1, int a2, int a3)
{
    *(int *)((char *)this + 0x470) = a0;
    *(int *)((char *)this + 0x474) = a1;
    *(int *)((char *)this + 0x478) = a2;
    *(int *)((char *)this + 0x47c) = a3;
    return a2;
}
// END FUNCTION

// FUNCTION: 0x10164ef0 size=0xc
#include "CCenterStringPanel.h"
int CCenterStringPanel::vfunc111()
{
    *(char *)((char *)this + 0x5c) = 0;
    *(int *)((char *)this + 0x460) = 0;
    return 0;
}
// END FUNCTION
