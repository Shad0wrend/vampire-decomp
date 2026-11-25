// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e3460 size=0x16
#include "CFunctionProxy.h"
// TARGET: ??0CFunctionProxy@@QAE@XZ
CResultProxy::CResultProxy()
{
	*(int *)((char *)this + 4) = 0;
}
CFunctionProxy::CFunctionProxy()
{
	m_unk0c = 0;
	m_unk10 = 0;
}
// END FUNCTION

// FUNCTION: 0x100e3480 size=0x1e
#include "CFunctionProxy.h"

// VC6 writes CFunctionProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFunctionProxy *pcd_emit_100e3480(const CFunctionProxy &other) { return new CFunctionProxy(other); }

// TARGET: ??_GCFunctionProxy@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100e34b0 size=0xa8
#include "CFunctionProxy.h"
#include "CKeyValuesX.h"
struct MatView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
	virtual int FindVar(const char *name, bool *found, bool complain);
};
// TARGET: CFunctionProxy::vfunc0
bool CFunctionProxy::vfunc0(void *pMaterial, void *pKeyValues)
{
	if (!CResultProxy::vfunc0(pMaterial, pKeyValues))
		return false;
	MatView *mat = (MatView *)pMaterial;
	CKeyValuesX *kv = (CKeyValuesX *)pKeyValues;
	const char *pSrcVar1 = kv->sub_10128590("srcVar1", "");
	if (!pSrcVar1)
		return false;
	bool foundVar;
	m_unk0c = mat->FindVar(pSrcVar1, &foundVar, true);
	if (!foundVar)
		return false;
	const char *pSrcVar2 = kv->sub_10128590("srcVar2", "");
	if (pSrcVar2 && *pSrcVar2) {
		m_unk10 = mat->FindVar(pSrcVar2, &foundVar, true);
		if (!foundVar)
			return false;
	} else {
		m_unk10 = 0;
	}
	return true;
}
// END FUNCTION
