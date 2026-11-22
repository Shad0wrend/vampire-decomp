// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b57e0 size=0x15
#include "vgui2__KeyValues.h"
namespace lifted {
int sub_101ac930();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int); };
}
int vgui2::KeyValues::vfunc0()
{
    return ((lifted::V *)(lifted::sub_101ac930()))->f4(*(int *)((char *)this + 4));
}
// END FUNCTION

// FUNCTION: 0x101b5800 size=0x4
#include "vgui2__KeyValues.h"
int vgui2::KeyValues::vfunc1()
{
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x101b6430 size=0x4
#include "vgui2__KeyValues.h"
int vgui2::KeyValues::vfunc7()
{
    return *(int *)((char *)this + 0x18);
}
// END FUNCTION

// FUNCTION: 0x101b6440 size=0x4
#include "vgui2__KeyValues.h"
int vgui2::KeyValues::vfunc8()
{
    return *(int *)((char *)this + 0x14);
}
// END FUNCTION
