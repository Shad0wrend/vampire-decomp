// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010c870 size=0x2b
#include "CSubtractProxy.h"
namespace lifted {
struct C100e34b0 { bool sub_100e34b0(int, int); };
}
bool CSubtractProxy::vfunc0(void* a0, void* a1)
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

// FUNCTION: 0x1010ca00 size=0x1e
#include "CSubtractProxy.h"

// VC6 writes CSubtractProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSubtractProxy *pcd_emit_1010ca00() { return new CSubtractProxy; }

// TARGET: ??_GCSubtractProxy@@UAEPAXI@Z
// END FUNCTION
