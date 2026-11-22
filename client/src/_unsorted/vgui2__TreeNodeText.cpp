// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bcb70 size=0x29
#include "vgui2__TreeNodeText.h"
namespace lifted {
int __stdcall sub_101ace00(int);
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual int f54(int); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual int f60(int); };
}
int vgui2::TreeNodeText::vfunc74(int a0)
{
    lifted::sub_101ace00(a0);
    ((lifted::V *)this)->f60(0);
    return ((lifted::V *)this)->f54(2);
}
// END FUNCTION

// FUNCTION: 0x101bcba0 size=0x10
#include "vgui2__TreeNodeText.h"
namespace lifted {
struct C101b1760 { int sub_101b1760(); };
struct C101b1840 { int sub_101b1840(); };
}
void vgui2::TreeNodeText::vfunc80()
{
    ((lifted::C101b1840 *)this)->sub_101b1840();
    ((lifted::C101b1760 *)this)->sub_101b1760();
}
// END FUNCTION

// FUNCTION: 0x101bcbb0 size=0x10
#include "vgui2__TreeNodeText.h"
namespace lifted {
struct C101acf10 { int sub_101acf10(); };
struct C101b1780 { int sub_101b1780(); };
}
void vgui2::TreeNodeText::vfunc81()
{
    ((lifted::C101acf10 *)this)->sub_101acf10();
    ((lifted::C101b1780 *)this)->sub_101b1780();
}
// END FUNCTION

// FUNCTION: 0x101bcc80 size=0x1e
#include "vgui2__TreeNodeText.h"

// VC6 writes vgui2::TreeNodeText's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TreeNodeText *pcd_emit_101bcc80() { return new vgui2::TreeNodeText; }

// TARGET: ??_GTreeNodeText@vgui2@@UAEPAXI@Z
// END FUNCTION
