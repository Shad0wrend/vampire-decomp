// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c7690 size=0x1e
#include "vgui2__ComboBoxButton.h"

// VC6 writes vgui2::ComboBoxButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ComboBoxButton *pcd_emit_101c7690() { return new vgui2::ComboBoxButton; }

// TARGET: ??_GComboBoxButton@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c77b0 size=0x5
#include "vgui2__ComboBoxButton.h"
int vgui2::ComboBoxButton::vfunc164(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION
