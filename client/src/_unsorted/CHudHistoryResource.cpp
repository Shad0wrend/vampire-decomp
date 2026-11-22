// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100f0110 size=0x1e
#include "CHudHistoryResource.h"

// VC6 writes CHudHistoryResource's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudHistoryResource *pcd_emit_100f0110() { return new CHudHistoryResource; }

// TARGET: ??_GCHudHistoryResource@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100f0430 size=0x21
#include "CHudHistoryResource.h"
// TARGET: CHudHistoryResource::sub_100f0430
bool CHudHistoryResource::sub_100f0430()
{
	return CHudElement::sub_100f05b0() && *(int *)((char *)this + 0x134) != 0;
}
// END FUNCTION

// FUNCTION: 0x100f0460 size=0x3
#include "CHudHistoryResource.h"
void CHudHistoryResource::vfunc5(int a0)
{
}
// END FUNCTION
