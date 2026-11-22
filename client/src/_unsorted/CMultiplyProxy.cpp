// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010ca20 size=0x2b
#include "CMultiplyProxy.h"
namespace lifted {
struct C100e34b0 { bool sub_100e34b0(int, int); };
}
bool CMultiplyProxy::vfunc0(void* a0, void* a1)
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

// FUNCTION: 0x1010cbb0 size=0x1e
#include "CMultiplyProxy.h"

// VC6 writes CMultiplyProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CMultiplyProxy *pcd_emit_1010cbb0() { return new CMultiplyProxy; }

// TARGET: ??_GCMultiplyProxy@@UAEPAXI@Z
// END FUNCTION
