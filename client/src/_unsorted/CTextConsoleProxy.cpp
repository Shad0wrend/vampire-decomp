// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8520 size=0xc
#include "CTextConsoleProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CTextConsoleProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100c8530 size=0x1e
#include "CTextConsoleProxy.h"

// VC6 writes CTextConsoleProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTextConsoleProxy *pcd_emit_100c8530() { return new CTextConsoleProxy; }

// TARGET: ??_GCTextConsoleProxy@@UAEPAXI@Z
// END FUNCTION
