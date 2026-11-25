// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004a3c0 size=0xd4
#include "CTextureTransformProxy.h"
#include "CKeyValuesX.h"
struct IMaterialV { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void *FindVar(const char *name, bool *found, bool complain); };
bool CTextureTransformProxy::vfunc0(void *pMaterial, void *pKeyValues)
{
	IMaterialV *mat = (IMaterialV *)pMaterial;
	CKeyValuesX *kv = (CKeyValuesX *)pKeyValues;
	m_pCenterVar = 0;
	m_pScaleVar = 0;
	m_pRotateVar = 0;
	m_pTranslateVar = 0;
	bool bFoundVar;
	const char *pVarName = kv->sub_10128590("centerVar", "");
	if (pVarName && pVarName[0])
		m_pCenterVar = mat->FindVar(pVarName, &bFoundVar, false);
	pVarName = kv->sub_10128590("scaleVar", "");
	if (pVarName && pVarName[0])
		m_pScaleVar = mat->FindVar(pVarName, &bFoundVar, false);
	pVarName = kv->sub_10128590("rotateVar", "");
	if (pVarName && pVarName[0])
		m_pRotateVar = mat->FindVar(pVarName, &bFoundVar, false);
	pVarName = kv->sub_10128590("translateVar", "");
	if (pVarName && pVarName[0])
		m_pTranslateVar = mat->FindVar(pVarName, &bFoundVar, false);
	return CResultProxy::vfunc0(pMaterial, pKeyValues);
}
// END FUNCTION

// FUNCTION: 0x1004a670 size=0x1e
#include "CTextureTransformProxy.h"

// VC6 writes CTextureTransformProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTextureTransformProxy *pcd_emit_1004a670() { return new CTextureTransformProxy; }

// TARGET: ??_GCTextureTransformProxy@@UAEPAXI@Z
// END FUNCTION
