// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10004dd0 size=0x3
#include "IParticleEffect.h"
void IParticleEffect::vfunc1(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10004de0 size=0x1
#include "IParticleEffect.h"
void IParticleEffect::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x10004df0 size=0x1
#include "IParticleEffect.h"
void IParticleEffect::vfunc4()
{
}
// END FUNCTION

// FUNCTION: 0x10004e00 size=0x3
#include "IParticleEffect.h"
void IParticleEffect::vfunc5(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10004e10 size=0x1c
#include "IParticleEffect.h"
int IParticleEffect::vfunc7(int a0, int a1)
{
    int t0 = *(int *)((char *)a0 + 0xc);
    *(int *)((char *)a1) = t0;
    int t1 = *(int *)((char *)a0 + 0x10);
    *(int *)((char *)a1 + 4) = t1;
    int t2 = *(int *)((char *)a0 + 0x14);
    *(int *)((char *)a1 + 8) = t2;
    return t2;
}
// END FUNCTION

// FUNCTION: 0x10004e30 size=0x20
#include "IParticleEffect.h"
namespace lifted {
extern char g_101e5584;
int sub_101d1296(int);
}
void * IParticleEffect::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_101e5584;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
