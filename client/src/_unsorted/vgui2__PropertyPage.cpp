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

// FUNCTION: 0x101bb4e0 size=0x2c
#include "vgui2__PropertyPage.h"
namespace lifted {
extern char g_102d8bc0;
int __stdcall sub_101ab490(int);
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual int f60(int); };
}
int vgui2::PropertyPage::vfunc74(int a0)
{
    lifted::sub_101ab490(a0);
    return ((lifted::V *)this)->f60(((lifted::V *)a0)->f3((int)&lifted::g_102d8bc0));
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
