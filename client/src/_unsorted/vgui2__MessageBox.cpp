// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c68c0 size=0x1e
#include "vgui2__MessageBox.h"

// VC6 writes vgui2::MessageBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::MessageBox *pcd_emit_101c68c0() { return new vgui2::MessageBox; }

// TARGET: ??_GMessageBox@vgui2@@UAEPAXI@Z
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
