// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100586e0 size=0x1e
#include "CHudManagerPanel.h"

// VC6 writes CHudManagerPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudManagerPanel *pcd_emit_100586e0() { return new CHudManagerPanel; }

// TARGET: ??_GCHudManagerPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10058e60 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C10057960 { int sub_10057960(); };
}
int CHudManagerPanel::vfunc10()
{
    return ((lifted::C10057960 *)(*(int *)((char *)this + 4)))->sub_10057960();
}
// END FUNCTION

// FUNCTION: 0x10058e70 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C100577f0 { int sub_100577f0(); };
}
int CHudManagerPanel::vfunc9()
{
    return ((lifted::C100577f0 *)(*(int *)((char *)this + 4)))->sub_100577f0();
}
// END FUNCTION
