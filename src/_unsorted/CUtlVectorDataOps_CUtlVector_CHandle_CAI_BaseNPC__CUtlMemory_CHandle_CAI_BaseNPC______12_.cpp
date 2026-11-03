// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102cde90 size=0xc0
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

typedef CUtlVector<CHandle<CAI_BaseNPC> > NpcHandleVec;

void CUtlVectorDataOps<NpcHandleVec, 12>::vfunc0(void *fieldInfo, void *pSave)
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

// FUNCTION: 0x102ce0b0 size=0x10
#include "CUtlVectorDataOps.h"
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<CHandle<CAI_BaseNPC>,CUtlMemory<CHandle<CAI_BaseNPC> > >,12>::vfunc3
template<> int CUtlVectorDataOps<CUtlVector<CHandle<CAI_BaseNPC>,CUtlMemory<CHandle<CAI_BaseNPC> > >,12>::vfunc3(void *pFieldData)
{
	VecHead *pVec = *(VecHead **)pFieldData;
	pVec->m_size = 0;
	return (int)pVec;
}
// END FUNCTION

// FUNCTION: 0x102ce0d0 size=0x13
#include "CUtlVectorDataOps.h"
#include "ehandle.h"

class CAI_BaseNPC;

template <>
bool CUtlVectorDataOps<CUtlVector<CHandle<CAI_BaseNPC>,CUtlMemory<CHandle<CAI_BaseNPC> > >,12>::vfunc2(void *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}
// END FUNCTION
