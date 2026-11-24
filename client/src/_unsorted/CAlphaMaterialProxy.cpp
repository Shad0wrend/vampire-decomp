// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10078e20 size=0xc
#include "CAlphaMaterialProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CAlphaMaterialProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x10078e60 size=0x23
#include "CAlphaMaterialProxy.h"
struct IMatV { virtual int v0(); virtual int v1(); virtual int v2(); virtual int v3(); virtual int v4(); virtual int v5(); virtual int v6(); virtual int v7(); virtual int v8(); virtual int v9(); virtual int v10(); virtual int FindVar(const char *, void *, bool); };
// TARGET: ?vfunc0@CAlphaMaterialProxy@@UAE_NPAX0@Z
bool CAlphaMaterialProxy::vfunc0(void *a, void *b) { IMatV *m = (IMatV *)a; m_unk4 = m->FindVar("$alpha", &a, false); return *(bool *)&a; }
// END FUNCTION

// FUNCTION: 0x10078e90 size=0x31
#include "CAlphaMaterialProxy.h"
struct AlphaVarView { virtual void v0(); virtual void v1(); virtual void SetFloatValue(float f); };
struct AlphaEntView { char pad[0x53]; unsigned char m_nAlpha; };
// TARGET: CAlphaMaterialProxy::vfunc1
void CAlphaMaterialProxy::vfunc1(int pRend)
{
	if (!pRend)
		return;
	AlphaEntView *pEnt = (AlphaEntView *)(pRend - 4);
	if (!pEnt)
		return;
	AlphaVarView *pVar = (AlphaVarView *)m_unk4;
	if (!pVar)
		return;
	pVar->SetFloatValue((float)pEnt->m_nAlpha);
}
// END FUNCTION
