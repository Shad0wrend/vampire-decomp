// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c6530 size=0x1e
#include "vgui2__ProgressBar.h"

// VC6 writes vgui2::ProgressBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ProgressBar *pcd_emit_101c6530() { return new vgui2::ProgressBar; }

// TARGET: ??_GProgressBar@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c6760 size=0x6
#include "vgui2__ProgressBar.h"
namespace lifted {
extern char g_102da8d0;
}
int vgui2::ProgressBar::vfunc102()
{
    return (int)&lifted::g_102da8d0;
}
// END FUNCTION
