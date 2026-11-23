// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100057a0 size=0x1e
#include "C_PlasmaBeamNode.h"

// VC6 writes C_PlasmaBeamNode's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_PlasmaBeamNode *pcd_emit_100057a0() { return new C_PlasmaBeamNode; }

// TARGET: ??_GC_PlasmaBeamNode@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10005800 size=0x16
#include "C_PlasmaBeamNode.h"
namespace lifted {
struct C10118080 { int sub_10118080(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual int f9(); };
}
void C_PlasmaBeamNode::vfunc37()
{
    int t0 = *(int *)((char *)this + 0x414);
    ((lifted::C10118080 *)t0)->sub_10118080(((lifted::V *)this)->f9());
}
// END FUNCTION

// FUNCTION: 0x10005c00 size=0x6
#include "C_PlasmaBeamNode.h"
namespace lifted {
extern char g_10271d90;
}
int C_PlasmaBeamNode::vfunc16()
{
    return (int)&lifted::g_10271d90;
}
// END FUNCTION

// FUNCTION: 0x10005c10 size=0x3
#include "C_PlasmaBeamNode.h"
int C_PlasmaBeamNode::vfunc15()
{
    return 0;
}
// END FUNCTION
