// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1012bcc0 size=0x5
#include "CUtlVectorDataOps.h"

struct SaveRestoreBlockHeader_t;

// TARGET: CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc4
bool CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc4(SaveRestoreFieldInfo_t *fieldInfo, const char *szValue)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1012c200 size=0xc4
#include "CSaveRestoreBlockSet.h"
#include "datamap.h"
#include "ISave.h"
#include "CUtlVectorDataOps.h"

struct DMExt	// datamap_t with the trailing members the game's compiler keeps (chain flags, packed size)
{
	typedescription_t *dataDesc;
	int dataNumFields;
	const char *dataClassName;
	datamap_t *baseMap;
	bool chainsValidated;
	bool packedOffsetsComputed;
	int packedSize;
};

// TARGET: CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc0
void CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	typedef CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> > VEC;
	extern datamap_t g_102c36d8;
	extern char g_102c3b2c[];
	extern char g_102c3b30[];
	typedescription_t dataDesc = { 9, g_102c3b30, { 0, 0 }, 1, 2, 0, 0, 0, &g_102c36d8 };
	DMExt dm;
	dm.dataDesc = &dataDesc;
	dm.dataNumFields = 1;
	dm.dataClassName = g_102c3b2c;
	dm.baseMap = 0;
	dm.chainsValidated = false;
	dm.packedOffsetsComputed = false;
	dm.packedSize = 0;
	VEC *pUtlVector = (VEC *)fieldInfo->pField;
	int nElems = pUtlVector->Count();
	pSave->vfunc10(&nElems, 1);
	for (int i = 0; i < nElems; i++)
		pSave->vfunc2(pUtlVector->Base() + i, (const char *)&dm);
}
// END FUNCTION

// FUNCTION: 0x1012c2d0 size=0xc4
#include "CUtlVectorDataOps.h"
#include "CUtlVector40.h"
#include "UtlVec40.h"
#include "SaveRestoreFieldInfo_t.h"
struct SaveRestoreBlockHeader_t;
extern char g_102c36d8[];
extern char g_102c3b2c[];
struct RestoreTD
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	void *pOps;
	void *inputFunc;
	void *td;
	int sizeInBytes;
	int unk;
};
struct RestoreDM
{
	RestoreTD *dataDesc;
	int dataNumFields;
	const char *dataClassName;
	void *baseMap;
	char b0;
	char b1;
	int n;
};
class IRestoreView
{
public:
	virtual void v0();
	virtual void v1();
	virtual int v2(void *pData, RestoreDM *pMap);
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual int v14();
};
// TARGET: ?vfunc1@?$CUtlVectorDataOps@V?$CUtlVector@USaveRestoreBlockHeader_t@@V?$CUtlMemory@USaveRestoreBlockHeader_t@@@@@@$08@@UAEXPAUSaveRestoreFieldInfo_t@@PAVIRestore@@@Z
void CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore)
{
	IRestoreView *r = (IRestoreView *)pRestore;
	RestoreTD td = { 9, "elems", 0, 0, 1, 2, 0, 0, 0, g_102c36d8 };
	RestoreDM dm = { &td, 1, g_102c3b2c, 0, 0, 0, 0 };
	CUtlVector40 *pVec = (CUtlVector40 *)fieldInfo->pField;
	int n = r->v14();
	pVec->m_size = 0;
	if (n != 0) {
		pVec->sub_1012c570(n);
		((UtlVec40 *)pVec)->sub_1012c600(0, n);
		for (int i = 0; i < n; i++)
			r->v2(pVec->m_pMemory + i * 0x28, &dm);
	}
}
// END FUNCTION

// FUNCTION: 0x1012c3b0 size=0x13
#include "CUtlVectorDataOps.h"
struct SaveRestoreBlockHeader_t;
struct CUnknownVecView { int m_unk0; int m_unk4; int m_unk8; int m_nSize; };
bool CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc2(SaveRestoreFieldInfo_t *fieldInfo)
{
	CUnknownVecView *pVec = *(CUnknownVecView **)fieldInfo;
	return pVec->m_nSize == 0;
}
// END FUNCTION
