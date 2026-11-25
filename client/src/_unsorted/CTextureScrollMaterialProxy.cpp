// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1013a1a0 size=0xc
#include "CTextureScrollMaterialProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CTextureScrollMaterialProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x1013a1e0 size=0x75
#include "CTextureScrollMaterialProxy.h"
#include "CKeyValuesX.h"

struct IMaterialView
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10();
    virtual void *FindVar(const char *name, bool *found, bool complain);
};

bool CTextureScrollMaterialProxy::vfunc0(void *pMaterial, void *pKeyValues)
{
    CKeyValuesX *pKV = (CKeyValuesX *)pKeyValues;
    const char *pVar = pKV->sub_10128590("textureScrollVar", "");
    if (!pVar)
        return false;
    bool bFound;
    m_pVar = ((IMaterialView *)pMaterial)->FindVar(pVar, &bFound, false);
    if (!bFound)
        return false;
    m_flRate = pKV->sub_10128540("textureScrollRate", 1.0f);
    m_flAngle = pKV->sub_10128540("textureScrollAngle", 0.0f);
    return true;
}
// END FUNCTION
