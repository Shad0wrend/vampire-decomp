// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c78f0 size=0x1e
#include "vgui2__ComboBox.h"

// VC6 writes vgui2::ComboBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ComboBox *pcd_emit_101c78f0() { return new vgui2::ComboBox; }

// TARGET: ??_GComboBox@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c7b20 size=0x1
#include "vgui2__ComboBox.h"
void vgui2::ComboBox::vfunc178()
{
}
// END FUNCTION

// FUNCTION: 0x101c7b30 size=0xb
#include "vgui2__ComboBox.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual int f22(); };
}
int vgui2::ComboBox::vfunc180()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x12c)))->f22();
}
// END FUNCTION

// FUNCTION: 0x101c81b0 size=0x6
#include "vgui2__ComboBox.h"
namespace lifted {
extern char g_102dabf0;
}
int vgui2::ComboBox::vfunc102()
{
    return (int)&lifted::g_102dabf0;
}
// END FUNCTION

// FUNCTION: 0x101c81d0 size=0x3
#include "vgui2__ComboBox.h"
void vgui2::ComboBox::vfunc173(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101c81e0 size=0x3
#include "vgui2__ComboBox.h"
void vgui2::ComboBox::vfunc174(int a0)
{
}
// END FUNCTION
