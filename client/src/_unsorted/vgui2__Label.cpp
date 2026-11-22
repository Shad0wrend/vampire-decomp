// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b2080 size=0x1e
#include "vgui2__Label.h"

// VC6 writes vgui2::Label's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Label *pcd_emit_101b2080() { return new vgui2::Label; }

// TARGET: ??_GLabel@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b2390 size=0xf
#include "vgui2__Label.h"
short vgui2::Label::vfunc120(short a0)
{
    *(short *)((char *)this + 0xac) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b2a70 size=0xd
#include "vgui2__Label.h"
int vgui2::Label::vfunc113(int a0)
{
    *(int *)((char *)this + 0x90) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b2a80 size=0xd
#include "vgui2__Label.h"
int vgui2::Label::vfunc114(int a0)
{
    *(int *)((char *)this + 0x94) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b2a90 size=0xf
#include "vgui2__Label.h"
int vgui2::Label::vfunc115(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x90);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b2aa0 size=0xf
#include "vgui2__Label.h"
int vgui2::Label::vfunc116(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x94);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b2ab0 size=0x4
#include "vgui2__Label.h"
int vgui2::Label::vfunc127()
{
    return *(int *)((char *)this + 0x5c);
}
// END FUNCTION

// FUNCTION: 0x101b2c80 size=0x4
#include "vgui2__Label.h"
int vgui2::Label::vfunc126()
{
    return *(int *)((char *)this + 0x6c);
}
// END FUNCTION

// FUNCTION: 0x101b33a0 size=0xd
#include "vgui2__Label.h"
int vgui2::Label::vfunc136(int a0)
{
    *(int *)((char *)this + 0xb4) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b33b0 size=0x7
#include "vgui2__Label.h"
int vgui2::Label::vfunc137()
{
    return *(int *)((char *)this + 0xb4);
}
// END FUNCTION

// FUNCTION: 0x101b3470 size=0x6
#include "vgui2__Label.h"
namespace lifted {
extern char g_102d88f0;
}
int vgui2::Label::vfunc102()
{
    return (int)&lifted::g_102d88f0;
}
// END FUNCTION
