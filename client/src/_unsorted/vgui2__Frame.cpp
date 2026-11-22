// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b85b0 size=0x1e
#include "vgui2__Frame.h"

// VC6 writes vgui2::Frame's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Frame *pcd_emit_101b85b0() { return new vgui2::Frame; }

// TARGET: ??_GFrame@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b9120 size=0x7
#include "vgui2__Frame.h"
int vgui2::Frame::vfunc138()
{
    return *(int *)((char *)this + 0x88);
}
// END FUNCTION

// FUNCTION: 0x101b95e0 size=0x3
#include "vgui2__Frame.h"
void vgui2::Frame::vfunc91(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101b95f0 size=0x3
#include "vgui2__Frame.h"
void vgui2::Frame::vfunc94(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101b9600 size=0x1
#include "vgui2__Frame.h"
void vgui2::Frame::vfunc95()
{
}
// END FUNCTION

// FUNCTION: 0x101b9970 size=0x3
#include "vgui2__Frame.h"
void vgui2::Frame::vfunc93(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101b9ac0 size=0x6
#include "vgui2__Frame.h"
namespace lifted {
extern char g_102d8ee8;
}
int vgui2::Frame::vfunc102()
{
    return (int)&lifted::g_102d8ee8;
}
// END FUNCTION

// FUNCTION: 0x101b9b50 size=0x2b
#include "vgui2__Frame.h"
int vgui2::Frame::vfunc137(int a0, int a1, int a2, int a3)
{
    *(int *)((char *)this + 0xd4) = a0;
    *(int *)((char *)this + 0xd8) = a1;
    *(int *)((char *)this + 0xdc) = a2;
    *(int *)((char *)this + 0xe0) = a3;
    return a2;
}
// END FUNCTION
