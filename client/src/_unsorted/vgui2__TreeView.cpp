// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bc700 size=0x1e
#include "vgui2__TreeView.h"

// VC6 writes vgui2::TreeView's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TreeView *pcd_emit_101bc700() { return new vgui2::TreeView; }

// TARGET: ??_GTreeView@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bd3d0 size=0x7
#include "vgui2__TreeView.h"
int vgui2::TreeView::vfunc108()
{
    return *(int *)((char *)this + 0x90);
}
// END FUNCTION

// FUNCTION: 0x101bd870 size=0x7
#include "vgui2__TreeView.h"
int vgui2::TreeView::vfunc119()
{
    return *(int *)((char *)this + 0x94);
}
// END FUNCTION

// FUNCTION: 0x101bd980 size=0x2d
#include "vgui2__TreeView.h"
namespace lifted {
struct C101aa090 { int sub_101aa090(int, int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
void vgui2::TreeView::vfunc11(int a0, int a1)
{
    ((lifted::C101aa090 *)this)->sub_101aa090(a0, a1);
    ((lifted::V *)this)->f57(0, 0);
    ((lifted::V *)this)->f6();
}
// END FUNCTION

// FUNCTION: 0x101be0e0 size=0x17
#include "vgui2__TreeView.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
int vgui2::TreeView::vfunc122()
{
    ((lifted::V *)this)->f57(0, 0);
    return ((lifted::V *)this)->f6();
}
// END FUNCTION

// FUNCTION: 0x101be150 size=0x6
#include "vgui2__TreeView.h"
namespace lifted {
extern char g_102d95c0;
}
int vgui2::TreeView::vfunc102()
{
    return (int)&lifted::g_102d95c0;
}
// END FUNCTION
