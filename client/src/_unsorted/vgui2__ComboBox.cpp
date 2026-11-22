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
