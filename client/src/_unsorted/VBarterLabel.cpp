// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016b180 size=0x1e
#include "VBarterLabel.h"

// VC6 writes VBarterLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VBarterLabel *pcd_emit_1016b180() { return new VBarterLabel; }

// TARGET: ??_GVBarterLabel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1016b2a0 size=0x26
#include "VBarterLabel.h"
namespace lifted {
extern char g_1027b3d0;
extern char g_104cfe38;
struct C100f0ed0 { int sub_100f0ed0(int); };
struct C1016d150 { int sub_1016d150(); };
int sub_101aa640();
}
void VBarterLabel::vfunc85()
{
    int t0 = lifted::sub_101aa640();
    *(char *)((char *)this + 0xb9) = 1;
    int t1 = ((lifted::C100f0ed0 *)((int)&lifted::g_104cfe38))->sub_100f0ed0((int)&lifted::g_1027b3d0);
    ((lifted::C1016d150 *)t1)->sub_1016d150();
}
// END FUNCTION

// FUNCTION: 0x1016b2d0 size=0x26
#include "VBarterLabel.h"
namespace lifted {
extern char g_1027b3d0;
extern char g_104cfe38;
struct C100f0ed0 { int sub_100f0ed0(int); };
struct C1016d150 { int sub_1016d150(); };
int sub_101aa650();
}
void VBarterLabel::vfunc86()
{
    int t0 = lifted::sub_101aa650();
    *(char *)((char *)this + 0xb9) = 0;
    int t1 = ((lifted::C100f0ed0 *)((int)&lifted::g_104cfe38))->sub_100f0ed0((int)&lifted::g_1027b3d0);
    ((lifted::C1016d150 *)t1)->sub_1016d150();
}
// END FUNCTION

// FUNCTION: 0x1016b550 size=0xa
#include "VBarterLabel.h"
void VBarterLabel::vfunc88(int a0)
{
    *(char *)((char *)this + 0xbb) = 1;
}
// END FUNCTION
