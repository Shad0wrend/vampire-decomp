// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cc520 size=0xc0
#include "CBaseEntity.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "CBaseHandle.h"

struct datamap_t;
struct typedescription_t {
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	void *pSaveRestoreOps;
	void *inputFunc;
	datamap_t *td;
	int fieldSizeInBytes;
	int unk;
};
struct datamap_t {
	typedescription_t *dataDesc;
	int dataNumFields;
	const char *dataClassName;
	datamap_t *baseMap;
	bool chains_validated;
	bool packed_offsets_computed;
	int packed_size;
};
struct ISaveStub {
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual void WriteFields(const char *name, void *data, datamap_t *map, typedescription_t *fields, int count);
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void WriteInt(int *data, int count);
};
struct VecStub {
	int *m_pBase;
	int pad[2];
	int m_size;
};
struct FieldInfoStub {
	VecStub *pField;
};

class CBaseEntity;

typedef CUtlVector<CHandle<CBaseEntity> > HandleVec;

// TARGET: CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity> > >,12>::vfunc0
void CUtlVectorDataOps<HandleVec, 12>::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	typedescription_t td = { 12, "elems", {0, 0}, 1, 2, 0, 0, 0, 0 };
	datamap_t map = { &td, 1, "uv", 0, false, false, 0 };
	VecStub *pVec = ((FieldInfoStub *)fieldInfo)->pField;
	int nElems = pVec->m_size;
	((ISaveStub *)pSave)->WriteInt(&nElems, 1);
	if (nElems) {
		td.fieldSize = (unsigned short)nElems;
		((ISaveStub *)pSave)->WriteFields("elems", pVec->m_pBase, &map, &td, 1);
	}
}
// END FUNCTION

// FUNCTION: 0x101cc610 size=0xe1
#include "CBaseEntity.h"
#include "utlrbtree.h"
#include "CUtlVectorDataOps.h"
#include "RestoreSlots.h"
#include "SaveRestoreFieldInfo_t.h"
#include "utlvector.h"

typedef CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity> > > CUtlVectorEntHandles;

inline LocalDataMap *DeduceArrayTypeDatamap_EntHandles() { return 0; }

// TARGET: CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity> > >,12>::vfunc1
void CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity> > >,12>::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestoreV)
{
	LocalDataMap *pArrayTypeDatamap = DeduceArrayTypeDatamap_EntHandles();
	LocalFieldDesc dataDesc = { 12, "elems", {0, 0}, 1, 2, 0, 0, 0, pArrayTypeDatamap };
	LocalDataMap dataMap = { &dataDesc, 1, "uv", 0, false, false, 0 };
	CUtlVectorEntHandles *pUtlVector = (CUtlVectorEntHandles *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	RestoreSlots *pRestore = (RestoreSlots *)pRestoreV;
	int nElems = pRestore->ReadCount();
	pUtlVector->SetCount(nElems);
	if (pArrayTypeDatamap == 0) {
		if (nElems) {
			dataDesc.fieldSize = nElems;
			pRestore->ReadFields("elems", &((*pUtlVector)[0]), &dataMap, &dataDesc, 1);
		}
	} else {
		for (int i = 0; i < pUtlVector->Count(); i++)
			pRestore->ReadElement(&pUtlVector->Element(i), pArrayTypeDatamap);
	}
}
// END FUNCTION

// FUNCTION: 0x101cc740 size=0x10
#include "CBaseEntity.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity> > >,12>::vfunc3
template<> void CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity> > >,12>::vfunc3(SaveRestoreFieldInfo_t *pFieldData)
{
	((CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity> > > *)*(void **)pFieldData)->RemoveAll();
}
// END FUNCTION

// FUNCTION: 0x101cc760 size=0x13
#include "CBaseEntity.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"

template <class T> class CHandle;
class CBaseEntity;

// TARGET: CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity> > >,12>::vfunc2
template <class VEC, int N>
bool CUtlVectorDataOps<VEC, N>::vfunc2(SaveRestoreFieldInfo_t *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}

template class CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity> > >,12>;
// END FUNCTION
