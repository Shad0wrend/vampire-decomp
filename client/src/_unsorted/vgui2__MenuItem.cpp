// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c6c50 size=0x1e
#include "vgui2__MenuItem.h"

// VC6 writes vgui2::MenuItem's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::MenuItem *pcd_emit_101c6c50() { return new vgui2::MenuItem; }

// TARGET: ??_GMenuItem@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c70e0 size=0xf
#include "vgui2__MenuItem.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual int f31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual int f81(); };
}
void vgui2::MenuItem::vfunc81()
{
    ((lifted::V *)(((lifted::V *)this)->f31()))->f81();
}
// END FUNCTION

// FUNCTION: 0x101c7480 size=0x5
#include "vgui2__MenuItem.h"
int vgui2::MenuItem::vfunc164(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101c7650 size=0x6
#include "vgui2__MenuItem.h"
namespace lifted {
extern char g_102daaa8;
}
int vgui2::MenuItem::vfunc102()
{
    return (int)&lifted::g_102daaa8;
}
// END FUNCTION
