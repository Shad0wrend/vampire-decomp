// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b6e10 size=0x1e
#include "vgui2__PropertyDialog.h"

// VC6 writes vgui2::PropertyDialog's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::PropertyDialog *pcd_emit_101b6e10() { return new vgui2::PropertyDialog; }

// TARGET: ??_GPropertyDialog@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b6e40 size=0x7
#include "vgui2__PropertyDialog.h"
int vgui2::PropertyDialog::vfunc145()
{
    return *(int *)((char *)this + 0xe4);
}
// END FUNCTION

// FUNCTION: 0x101b71d0 size=0xd
#include "vgui2__PropertyDialog.h"
int vgui2::PropertyDialog::vfunc154(int a0)
{
    *(int *)((char *)this + 0xf0) = a0;
    return a0;
}
// END FUNCTION
