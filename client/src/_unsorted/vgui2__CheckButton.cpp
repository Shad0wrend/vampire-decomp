// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101baa10 size=0x1e
#include "vgui2__CheckButton.h"

// VC6 writes vgui2::CheckButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::CheckButton *pcd_emit_101baa10() { return new vgui2::CheckButton; }

// TARGET: ??_GCheckButton@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bab90 size=0x5
#include "vgui2__CheckButton.h"
int vgui2::CheckButton::vfunc164(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101bad50 size=0x3
#include "vgui2__CheckButton.h"
void vgui2::CheckButton::vfunc166(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101badd0 size=0x6
#include "vgui2__CheckButton.h"
namespace lifted {
extern char g_102d9288;
}
int vgui2::CheckButton::vfunc102()
{
    return (int)&lifted::g_102d9288;
}
// END FUNCTION
