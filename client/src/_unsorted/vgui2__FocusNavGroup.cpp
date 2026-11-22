// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c31f0 size=0x8
#include "vgui2__FocusNavGroup.h"
namespace lifted {
struct C101ac670 { int sub_101ac670(); };
}
int vgui2::FocusNavGroup::vfunc2()
{
    return ((lifted::C101ac670 *)((int)this + 4))->sub_101ac670();
}
// END FUNCTION
