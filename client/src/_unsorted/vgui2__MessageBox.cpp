// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c68c0 size=0x1e
#include "vgui2__MessageBox.h"

// VC6 writes vgui2::MessageBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::MessageBox *pcd_emit_101c68c0() { return new vgui2::MessageBox; }

// TARGET: ??_GMessageBox@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c6aa0 size=0x4f
#include "vgui2__MessageBox.h"
namespace lifted {
extern char g_104a5450;
struct C101ac8b0 { int sub_101ac8b0(); };
struct C101b9260 { int sub_101b9260(); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual int f7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual int f18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual int f26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual int f43(int); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual int f71(); };
}
int vgui2::MessageBox::vfunc130()
{
    ((lifted::V *)(((lifted::C101ac8b0 *)this)->sub_101ac8b0()))->f26();
    ((lifted::C101b9260 *)this)->sub_101b9260();
    int t0 = ((lifted::V *)(*(int *)((char *)this + 0xec)))->f7();
    if (t0 != 0) {
        ((lifted::V *)this)->f43(((lifted::V *)(*(int *)((char *)this + 0xec)))->f18());
    }
    lifted::g_104a5450 = 1;
    return ((lifted::V *)this)->f71();
}
// END FUNCTION

// FUNCTION: 0x101c6af0 size=0x18
#include "vgui2__MessageBox.h"
namespace lifted {
extern char g_102d82ac;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual int f14(int, int); };
}
int vgui2::MessageBox::vfunc146(int a0)
{
    return ((lifted::V *)(*(int *)((char *)this + 0xec)))->f14((int)&lifted::g_102d82ac, a0);
}
// END FUNCTION

// FUNCTION: 0x101c6b50 size=0x13
#include "vgui2__MessageBox.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(float); };
}
int vgui2::MessageBox::vfunc147(float a0)
{
    return ((lifted::V *)(*(int *)((char *)this + 0xe4)))->f21(a0);
}
// END FUNCTION

// FUNCTION: 0x101c6bf0 size=0x6
#include "vgui2__MessageBox.h"
namespace lifted {
extern char g_102da960;
}
int vgui2::MessageBox::vfunc102()
{
    return (int)&lifted::g_102da960;
}
// END FUNCTION
