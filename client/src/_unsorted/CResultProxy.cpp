// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004a660 size=0xc
#include "CResultProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CResultProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100e32e0 size=0x1e
#include "CResultProxy.h"

// VC6 writes CResultProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CResultProxy *pcd_emit_100e32e0() { return new CResultProxy; }

// TARGET: ??_GCResultProxy@@UAEPAXI@Z
// END FUNCTION
