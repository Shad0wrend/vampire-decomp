// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c68c0 size=0x1e
#include "vgui2__MessageBox.h"

// VC6 writes vgui2::MessageBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::MessageBox *pcd_emit_101c68c0() { return new vgui2::MessageBox; }

// TARGET: ??_GMessageBox@vgui2@@UAEPAXI@Z
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
