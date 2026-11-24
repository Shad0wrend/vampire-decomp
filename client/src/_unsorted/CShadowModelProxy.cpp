// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d8350 size=0xc
#include "CShadowModelProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CShadowModelProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100d8390 size=0x105
#include "CShadowModelProxy.h"
struct IMatView {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10();
    virtual void *FindVar(const char *name, bool *found, bool complain);
};

// TARGET: CShadowModelProxy::vfunc0
bool CShadowModelProxy::vfunc0(void *a, void *b)
{
    IMatView *pMaterial = (IMatView *)a;
    bool foundVar;
    m_v4 = pMaterial->FindVar("$basetexture", &foundVar, false);
    if (!foundVar)
        return false;
    m_v8 = pMaterial->FindVar("$basetextureoffset", &foundVar, false);
    if (!foundVar)
        return false;
    m_vc = pMaterial->FindVar("$basetexturescale", &foundVar, false);
    if (!foundVar)
        return false;
    m_v10 = pMaterial->FindVar("$basetexturematrix", &foundVar, false);
    if (!foundVar)
        return false;
    m_v14 = pMaterial->FindVar("$falloffoffset", &foundVar, false);
    if (!foundVar)
        return false;
    m_v18 = pMaterial->FindVar("$falloffdistance", &foundVar, false);
    if (!foundVar)
        return false;
    m_v1c = pMaterial->FindVar("$falloffamount", &foundVar, false);
    return foundVar;
}
// END FUNCTION
