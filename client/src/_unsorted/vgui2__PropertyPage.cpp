// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bb3b0 size=0x1e
#include "vgui2__PropertyPage.h"

// VC6 writes vgui2::PropertyPage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::PropertyPage *pcd_emit_101bb3b0() { return new vgui2::PropertyPage; }

// TARGET: ??_GPropertyPage@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bb400 size=0x1
#include "vgui2__PropertyPage.h"
void vgui2::PropertyPage::vfunc118()
{
}
// END FUNCTION

// FUNCTION: 0x101bb410 size=0x1
#include "vgui2__PropertyPage.h"
void vgui2::PropertyPage::vfunc119()
{
}
// END FUNCTION

// FUNCTION: 0x101bb420 size=0x1
#include "vgui2__PropertyPage.h"
void vgui2::PropertyPage::vfunc120()
{
}
// END FUNCTION

// FUNCTION: 0x101bb430 size=0x1
#include "vgui2__PropertyPage.h"
void vgui2::PropertyPage::vfunc121()
{
}
// END FUNCTION

// FUNCTION: 0x101bb440 size=0x8
#include "vgui2__PropertyPage.h"
namespace lifted {
struct C101ac6b0 { int sub_101ac6b0(); };
}
int vgui2::PropertyPage::vfunc122()
{
    return ((lifted::C101ac6b0 *)((int)this + 0x78))->sub_101ac6b0();
}
// END FUNCTION

// FUNCTION: 0x101bb690 size=0x6
#include "vgui2__PropertyPage.h"
namespace lifted {
extern char g_102d9500;
}
int vgui2::PropertyPage::vfunc102()
{
    return (int)&lifted::g_102d9500;
}
// END FUNCTION
