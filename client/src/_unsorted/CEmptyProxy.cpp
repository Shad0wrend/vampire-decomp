// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010db70 size=0x5
#include "CEmptyProxy.h"
bool CEmptyProxy::vfunc0(void* a0, void* a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1010db80 size=0x3
#include "CEmptyProxy.h"
void CEmptyProxy::vfunc1(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1010db90 size=0xc
#include "CEmptyProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CEmptyProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION
