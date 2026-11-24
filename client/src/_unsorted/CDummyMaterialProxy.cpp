// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e1920 size=0xc
#include "CDummyMaterialProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CDummyMaterialProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100e1930 size=0x1e
#include "CDummyMaterialProxy.h"

// VC6 writes CDummyMaterialProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CDummyMaterialProxy *pcd_emit_100e1930(const CDummyMaterialProxy &other) { return new CDummyMaterialProxy(other); }

// TARGET: ??_GCDummyMaterialProxy@@UAEPAXI@Z
// END FUNCTION
