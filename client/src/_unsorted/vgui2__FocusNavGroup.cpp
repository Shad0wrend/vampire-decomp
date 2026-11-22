// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c3100 size=0xa
#include "vgui2__FocusNavGroup.h"
bool vgui2::FocusNavGroup::vfunc8(char a0)
{
    *(char *)((char *)this + 0x10) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

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

// FUNCTION: 0x101c32a0 size=0x8
#include "vgui2__FocusNavGroup.h"
namespace lifted {
struct C101ac670 { int sub_101ac670(); };
}
int vgui2::FocusNavGroup::vfunc6()
{
    return ((lifted::C101ac670 *)((int)this + 0xc))->sub_101ac670();
}
// END FUNCTION

// FUNCTION: 0x101c32b0 size=0x8
#include "vgui2__FocusNavGroup.h"
namespace lifted {
struct C101ac6b0 { int sub_101ac6b0(); };
}
int vgui2::FocusNavGroup::vfunc7()
{
    return ((lifted::C101ac6b0 *)((int)this + 0xc))->sub_101ac6b0();
}
// END FUNCTION
