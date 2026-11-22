// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b87f0 size=0x3
#include "vgui2__MenuButton.h"
void vgui2::MenuButton::vfunc166(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101b8800 size=0x3
#include "vgui2__MenuButton.h"
void vgui2::MenuButton::vfunc167(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101c95b0 size=0x1e
#include "vgui2__MenuButton.h"

// VC6 writes vgui2::MenuButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::MenuButton *pcd_emit_101c95b0() { return new vgui2::MenuButton; }

// TARGET: ??_GMenuButton@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c9620 size=0x3
#include "vgui2__MenuButton.h"
void vgui2::MenuButton::vfunc163(int a0, int a1, int a2, int a3)
{
}
// END FUNCTION

// FUNCTION: 0x101c9af0 size=0x6
#include "vgui2__MenuButton.h"
namespace lifted {
extern char g_102dadc8;
}
int vgui2::MenuButton::vfunc102()
{
    return (int)&lifted::g_102dadc8;
}
// END FUNCTION
