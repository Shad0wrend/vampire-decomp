// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101baa10 size=0x1e
#include "vgui2__CheckButton.h"

// VC6 writes vgui2::CheckButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::CheckButton *pcd_emit_101baa10() { return new vgui2::CheckButton; }

// TARGET: ??_GCheckButton@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bad50 size=0x3
#include "vgui2__CheckButton.h"
void vgui2::CheckButton::vfunc166(int a0)
{
}
// END FUNCTION
