// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bae50 size=0x1e
#include "vgui2__LabelComboBoxButton.h"

// VC6 writes vgui2::LabelComboBoxButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::LabelComboBoxButton *pcd_emit_101bae50() { return new vgui2::LabelComboBoxButton; }

// TARGET: ??_GLabelComboBoxButton@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101baf70 size=0x5
#include "vgui2__LabelComboBoxButton.h"
int vgui2::LabelComboBoxButton::vfunc164(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION
