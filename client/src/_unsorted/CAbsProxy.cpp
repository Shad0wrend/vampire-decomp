// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010da80 size=0x1c
#include "CAbsProxy.h"

extern "C" double fabs(double);
#pragma intrinsic(fabs)

struct IMatVarView {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual float GetFloatValue();
};

// TARGET: CAbsProxy::vfunc1
void CAbsProxy::vfunc1(int)
{
    sub_100e33c0(fabs(((IMatVarView *)m_unk0c)->GetFloatValue()));
}
// END FUNCTION

// FUNCTION: 0x1010db00 size=0x1e
#include "CAbsProxy.h"

// VC6 writes CAbsProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CAbsProxy *pcd_emit_1010db00() { return new CAbsProxy; }

// TARGET: ??_GCAbsProxy@@UAEPAXI@Z
// END FUNCTION
