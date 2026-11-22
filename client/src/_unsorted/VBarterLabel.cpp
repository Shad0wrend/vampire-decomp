// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016b180 size=0x1e
#include "VBarterLabel.h"

// VC6 writes VBarterLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VBarterLabel *pcd_emit_1016b180() { return new VBarterLabel; }

// TARGET: ??_GVBarterLabel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1016b550 size=0xa
#include "VBarterLabel.h"
void VBarterLabel::vfunc88(int a0)
{
    *(char *)((char *)this + 0xbb) = 1;
}
// END FUNCTION
