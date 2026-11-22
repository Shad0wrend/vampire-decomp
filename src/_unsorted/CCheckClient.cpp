// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d1760 size=0x1f
#include "CCheckClient.h"
void CCheckClient::vfunc2()
{
    *(int *)((char *)this + 0x2008) = -1;
    *(int *)((char *)this + 0x200c) = 1;
    *(int *)((char *)this + 0x2010) = -1082130432;
}
// END FUNCTION

// FUNCTION: 0x101d17d0 size=0x1e
#include "CCheckClient.h"

// VC6 writes CCheckClient's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CCheckClient *pcd_emit_101d17d0() { return new CCheckClient; }

// TARGET: ??_GCCheckClient@@UAEPAXI@Z
// END FUNCTION
