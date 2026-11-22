// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b36f0 size=0x1e
#include "vgui2__Button.h"

// VC6 writes vgui2::Button's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Button *pcd_emit_101b36f0() { return new vgui2::Button; }

// TARGET: ??_GButton@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b3850 size=0x7
#include "vgui2__Button.h"
bool vgui2::Button::vfunc146()
{
    return *(bool *)((char *)this + 0xbd);
}
// END FUNCTION

// FUNCTION: 0x101b38a0 size=0x7
#include "vgui2__Button.h"
bool vgui2::Button::vfunc139()
{
    return *(bool *)((char *)this + 0xb8);
}
// END FUNCTION

// FUNCTION: 0x101b38e0 size=0x7
#include "vgui2__Button.h"
bool vgui2::Button::vfunc144()
{
    return *(bool *)((char *)this + 0xba);
}
// END FUNCTION

// FUNCTION: 0x101b41b0 size=0x23
#include "vgui2__Button.h"
namespace lifted {
extern char g_102d8c04;
extern char g_10679600;
int sub_101b3290();
int sub_101d3192(int, int, int, int);
}
int vgui2::Button::vfunc77()
{
    lifted::sub_101d3192((int)&lifted::g_10679600, 0x400, (int)&lifted::g_102d8c04, lifted::sub_101b3290());
    return (int)&lifted::g_10679600;
}
// END FUNCTION

// FUNCTION: 0x101b4620 size=0x6
#include "vgui2__Button.h"
namespace lifted {
extern char g_102d8b28;
}
int vgui2::Button::vfunc102()
{
    return (int)&lifted::g_102d8b28;
}
// END FUNCTION
