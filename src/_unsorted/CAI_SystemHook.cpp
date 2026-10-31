// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102cc3f0 size=0xa
#include "CAI_SystemHook.h"
namespace lifted {
extern char g_10936b68;
struct C1000d323 { int sub_1000d323(); };
}
int CAI_SystemHook::vfunc2()
{
    return ((lifted::C1000d323 *)((int)&lifted::g_10936b68))->sub_1000d323();
}
// END FUNCTION

// FUNCTION: 0x102cc480 size=0x1e
#include "CAI_SystemHook.h"

// TARGET: CAI_SystemHook::vfunc8
CAI_SystemHook *CAI_SystemHook::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
