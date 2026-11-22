// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bb780 size=0x1e
#include "vgui2__Slider.h"

// VC6 writes vgui2::Slider's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Slider *pcd_emit_101bb780() { return new vgui2::Slider; }

// TARGET: ??_GSlider@vgui2@@UAEPAXI@Z
// END FUNCTION
