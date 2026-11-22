// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004b070 size=0xc
#include "CThermalMaterialProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CThermalMaterialProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x1004b170 size=0x3
#include "CThermalMaterialProxy.h"
void CThermalMaterialProxy::vfunc1(int a0)
{
}
// END FUNCTION
