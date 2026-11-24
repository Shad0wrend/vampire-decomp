// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101665e0 size=0xe
#include "CViewportClientSystem.h"
namespace lifted {
extern int g_105f99d8;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual int f5(); };
}
bool CViewportClientSystem::vfunc0()
{
    ((lifted::V *)lifted::g_105f99d8)->f5();
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101665f0 size=0x1
#include "CViewportClientSystem.h"
void CViewportClientSystem::vfunc1()
{
}
// END FUNCTION

// FUNCTION: 0x10166600 size=0x1
#include "CViewportClientSystem.h"
void CViewportClientSystem::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x10166610 size=0x1
#include "CViewportClientSystem.h"
void CViewportClientSystem::vfunc3()
{
}
// END FUNCTION

// FUNCTION: 0x10166620 size=0x1
#include "CViewportClientSystem.h"
void CViewportClientSystem::vfunc4()
{
}
// END FUNCTION

// FUNCTION: 0x10166630 size=0x1
#include "CViewportClientSystem.h"
void CViewportClientSystem::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x10166640 size=0x1
#include "CViewportClientSystem.h"
void CViewportClientSystem::vfunc6()
{
}
// END FUNCTION

// FUNCTION: 0x10166650 size=0x3
#include "CViewportClientSystem.h"

// TARGET: CViewportClientSystem::vfunc7
void CViewportClientSystem::vfunc7(int)
{
}
// END FUNCTION

// FUNCTION: 0x10166680 size=0x1e
#include "CViewportClientSystem.h"
namespace lifted {
int sub_100f3f80();
int sub_101d1296(int);
}
CViewportClientSystem * CViewportClientSystem::vfunc8(unsigned int a0)
{
    int t0 = lifted::sub_100f3f80();
    if ((*(char *)&a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
