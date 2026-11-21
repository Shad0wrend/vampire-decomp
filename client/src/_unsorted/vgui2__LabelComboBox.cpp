// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bb0f0 size=0x1e
#include "vgui2__LabelComboBox.h"

// VC6 writes vgui2::LabelComboBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::LabelComboBox *pcd_emit_101bb0f0() { return new vgui2::LabelComboBox; }

// TARGET: ??_GLabelComboBox@vgui2@@UAEPAXI@Z
// END FUNCTION
