// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10107240 size=0xc
#include "CLampHaloProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CLampHaloProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x10107280 size=0x23
#include "CLampHaloProxy.h"
struct IMatV { virtual int v0(); virtual int v1(); virtual int v2(); virtual int v3(); virtual int v4(); virtual int v5(); virtual int v6(); virtual int v7(); virtual int v8(); virtual int v9(); virtual int v10(); virtual int FindVar(const char *, void *, bool); };
// TARGET: ?vfunc0@CLampHaloProxy@@UAE_NPAX0@Z
bool CLampHaloProxy::vfunc0(void *a, void *b) { IMatV *m = (IMatV *)a; m_unk4 = m->FindVar("$alpha", &a, true); return *(bool *)&a; }
// END FUNCTION
