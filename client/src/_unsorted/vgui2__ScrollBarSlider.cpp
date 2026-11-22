// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c9e50 size=0x1e
#include "vgui2__ScrollBarSlider.h"

// VC6 writes vgui2::ScrollBarSlider's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ScrollBarSlider *pcd_emit_101c9e50() { return new vgui2::ScrollBarSlider; }

// TARGET: ??_GScrollBarSlider@vgui2@@UAEPAXI@Z
// END FUNCTION
