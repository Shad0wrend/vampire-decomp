// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010dbc0 size=0x8f
#include "CLessOrEqualProxy.h"
#include "CKeyValuesX.h"
struct IMatView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
	virtual void *FindVar(const char *name, bool *pFound, bool bComplain); };
bool CLessOrEqualProxy::vfunc0(void *pMaterial, void *pKeyValues)
{
	CKeyValuesX *kv = (CKeyValuesX *)pKeyValues;
	IMatView *mat = (IMatView *)pMaterial;
	const char *pLessEqualVar = kv->sub_10128590("lessEqualVar", "");
	if (!pLessEqualVar)
		return false;
	bool foundVar;
	m_pLessVar = mat->FindVar(pLessEqualVar, &foundVar, true);
	if (!foundVar)
		return false;
	const char *pGreaterVar = kv->sub_10128590("greaterVar", "");
	if (!pGreaterVar)
		return false;
	m_pGreaterVar = mat->FindVar(pGreaterVar, &foundVar, true);
	if (!foundVar)
		return false;
	bool ok = CFunctionProxy::vfunc0(pMaterial, pKeyValues);
	ok = ok && m_unk10;
	return ok;
}
// END FUNCTION

// FUNCTION: 0x1010dda0 size=0x1e
#include "CLessOrEqualProxy.h"

// VC6 writes CLessOrEqualProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CLessOrEqualProxy *pcd_emit_1010dda0() { return new CLessOrEqualProxy; }

// TARGET: ??_GCLessOrEqualProxy@@UAEPAXI@Z
// END FUNCTION
