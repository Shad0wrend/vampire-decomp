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
