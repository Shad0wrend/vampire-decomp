// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100cab60 size=0xc
#include "CCamoMaterialProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CCamoMaterialProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100cab70 size=0x1e
#include "CCamoMaterialProxy.h"

// VC6 writes CCamoMaterialProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CCamoMaterialProxy *pcd_emit_100cab70() { return new CCamoMaterialProxy; }

// TARGET: ??_GCCamoMaterialProxy@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100cabd0 size=0x5
#include "CCamoMaterialProxy.h"
bool CCamoMaterialProxy::vfunc0(void* a0, void* a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100cb0a0 size=0x34
#include "CCamoMaterialProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual int f12(int); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual int f18(); };
}
void CCamoMaterialProxy::vfunc1(int a0)
{
    if ((*(int *)((char *)this + 0xc)) != 0) {
        *(int *)((char *)this + 0x348) = a0;
        if (a0 != 0) {
            int t0 = ((lifted::V *)(((lifted::V *)(*(int *)((char *)this + 0xc)))->f18()))->f12(0);
            *(int *)((char *)this + 0x348) = 0;
        }
    }
}
// END FUNCTION
