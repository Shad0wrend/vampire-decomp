// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010c6c0 size=0x2b
#include "CAddProxy.h"
namespace lifted {
struct C100e34b0 { bool sub_100e34b0(int, int); };
}
bool CAddProxy::vfunc0(void* a0, void* a1)
{
    bool t0 = ((lifted::C100e34b0 *)this)->sub_100e34b0(*(int *)&a0, *(int *)&a1);
    if (t0 != 0) {
        if ((*(int *)((char *)this + 0x10)) != 0) {
            return 1;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1010c850 size=0x1e
#include "CAddProxy.h"

// VC6 writes CAddProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CAddProxy *pcd_emit_1010c850() { return new CAddProxy; }

// TARGET: ??_GCAddProxy@@UAEPAXI@Z
// END FUNCTION
