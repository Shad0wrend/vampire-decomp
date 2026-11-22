// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bb780 size=0x1e
#include "vgui2__Slider.h"

// VC6 writes vgui2::Slider's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Slider *pcd_emit_101bb780() { return new vgui2::Slider; }

// TARGET: ??_GSlider@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bb820 size=0x7
#include "vgui2__Slider.h"
int vgui2::Slider::vfunc108()
{
    return *(int *)((char *)this + 0x80);
}
// END FUNCTION

// FUNCTION: 0x101bbb10 size=0xa
#include "vgui2__Slider.h"
int vgui2::Slider::vfunc116(int a0)
{
    *(int *)((char *)this + 0x58) = a0;
    return a0;
}
// END FUNCTION
