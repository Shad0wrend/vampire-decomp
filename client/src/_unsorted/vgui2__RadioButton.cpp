// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c5d30 size=0x1e
#include "vgui2__RadioButton.h"

// VC6 writes vgui2::RadioButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::RadioButton *pcd_emit_101c5d30() { return new vgui2::RadioButton; }

// TARGET: ??_GRadioButton@vgui2@@UAEPAXI@Z
// END FUNCTION
