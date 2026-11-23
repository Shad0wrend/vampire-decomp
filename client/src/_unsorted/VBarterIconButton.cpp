// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016ae60 size=0x1e
#include "VBarterIconButton.h"

// VC6 writes VBarterIconButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VBarterIconButton *pcd_emit_1016ae60(const VBarterIconButton &other) { return new VBarterIconButton(other); }

// TARGET: ??_GVBarterIconButton@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1016afb0 size=0x11
#include "VBarterIconButton.h"
namespace lifted {
int sub_101aa640();
}
void VBarterIconButton::vfunc85()
{
    int t0 = lifted::sub_101aa640();
    *(char *)((char *)this + 0xb8) = 1;
}
// END FUNCTION

// FUNCTION: 0x1016aff0 size=0xa
#include "VBarterIconButton.h"
void VBarterIconButton::vfunc87(int a0)
{
    *(char *)((char *)this + 0xb9) = 1;
}
// END FUNCTION

// FUNCTION: 0x1016b000 size=0x14
#include "VBarterIconButton.h"
void VBarterIconButton::vfunc89(int a0)
{
    *(int *)((char *)this + 0xbc) = 6;
    *(char *)((char *)this + 0xb9) = 0;
}
// END FUNCTION
