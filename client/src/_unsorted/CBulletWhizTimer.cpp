// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d9b50 size=0x8
#include "CBulletWhizTimer.h"

// TARGET: CBulletWhizTimer::vfunc2
void CBulletWhizTimer::vfunc2()
{
	m_unk08 = 0;
}
// END FUNCTION

// FUNCTION: 0x100d9b80 size=0x1e
#include "CBulletWhizTimer.h"
namespace lifted {
int sub_100f3f80();
int sub_101d1296(int);
}
CBulletWhizTimer * CBulletWhizTimer::vfunc8(unsigned int a0)
{
    int t0 = lifted::sub_100f3f80();
    if ((*(char *)&a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
