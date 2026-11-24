// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d1610 size=0x1e
#include "IGameSystem.h"
namespace lifted {
int sub_100f3f80();
int sub_101d1296(int);
}
IGameSystem * IGameSystem::vfunc8(unsigned int a0)
{
    int t0 = lifted::sub_100f3f80();
    if ((*(char *)&a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION

// FUNCTION: 0x100f3f80 size=0xe
#include "IGameSystem.h"
void sub_100f4060(IGameSystem *);
// TARGET: ??1IGameSystem@@UAE@XZ
IGameSystem::~IGameSystem() { sub_100f4060(this); }
// END FUNCTION
