// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102cc3f0 size=0xa
#include "CAI_SystemHook.h"
namespace lifted {
extern char g_10936b68;
struct C1000d323 { int sub_1000d323(); };
}
void CAI_SystemHook::vfunc2()
{
    ((lifted::C1000d323 *)((int)&lifted::g_10936b68))->sub_1000d323();
}
// END FUNCTION

// FUNCTION: 0x102cc410 size=0x1e
#include "CAI_SystemHook.h"
namespace lifted {
extern char g_10936b68;
int sub_10003616();
struct C10006b59 { int sub_10006b59(); };
struct C1000cb2b { int sub_1000cb2b(); };
int sub_100158cf();
}
void CAI_SystemHook::vfunc5()
{
    lifted::sub_100158cf();
    ((lifted::C1000cb2b *)((int)&lifted::g_10936b68))->sub_1000cb2b();
    lifted::sub_10003616();
    ((lifted::C10006b59 *)((int)&lifted::g_10936b68))->sub_10006b59();
}
// END FUNCTION

// FUNCTION: 0x102cc480 size=0x1e
#include "CAI_SystemHook.h"

// VC6 writes CAI_SystemHook's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CAI_SystemHook *pcd_emit_102cc480() { return new CAI_SystemHook; }

// TARGET: ??_GCAI_SystemHook@@UAEPAXI@Z
// END FUNCTION
