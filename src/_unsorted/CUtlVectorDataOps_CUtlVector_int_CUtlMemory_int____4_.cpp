// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bdb90 size=0xc0
#include "CBaseEntity.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"

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

// TARGET: CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int> >,4>::vfunc0
void CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int> >, 4>::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	typedescription_t td = { 4, "elems", {0, 0}, 1, 2, 0, 0, 0, 0 };
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

// FUNCTION: 0x101bdc80 size=0xc7
#include "utlrbtree.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "CUtlVector4.h"
#include "UtlVec8.h"

struct UVDataMap;
struct UVTypeDesc {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    void *pSaveRestoreOps;
    void *inputFunc;
    UVDataMap *td;
    int fieldSizeInBytes;
    int unk;
};
struct UVDataMap {
    UVTypeDesc *dataDesc;
    int dataNumFields;
    const char *dataClassName;
    UVDataMap *baseMap;
    bool chains_validated;
    bool packed_offsets_computed;
    int packed_size;
};
struct IRestoreView {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void ReadFields(const char *pname, void *pBaseData, UVDataMap *pMap, UVTypeDesc *pFields, int fieldCount);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual int ReadInt();
};

template <>
void CUtlVectorDataOps<CUtlVector<int, CUtlMemory<int> >, 4>::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestoreV)
{
    IRestoreView *pRestore = (IRestoreView *)pRestoreV;
    UVTypeDesc dataDesc = { 4, "elems", { 0, 0 }, 1, 2, 0, 0, 0, 0 };
    UVDataMap dataMap = { &dataDesc, 1, "uv", 0, false, false, 0 };
    CUtlVector<int, CUtlMemory<int> > *pUtlVector = *(CUtlVector<int, CUtlMemory<int> > **)fieldInfo;
    int nElems = pRestore->ReadInt();
    pUtlVector->RemoveAll();
    if (nElems != 0) {
        ((CUtlVector4 *)pUtlVector)->sub_10071ae0(nElems);
        ((UtlVec8 *)pUtlVector)->sub_10071ba0(0, nElems);
        dataDesc.fieldSize = nElems;
        pRestore->ReadFields("elems", &((*pUtlVector)[0]), &dataMap, &dataDesc, 1);
    }
}
// END FUNCTION

// FUNCTION: 0x101bdd90 size=0x10
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int> >,4>::vfunc3
template<> void CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int> >,4>::vfunc3(SaveRestoreFieldInfo_t *pFieldData)
{
	((CUtlVector<int,CUtlMemory<int> > *)*(void **)pFieldData)->RemoveAll();
}
// END FUNCTION

// FUNCTION: 0x101bddb0 size=0x13
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"

// TARGET: CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int> >,4>::vfunc2
template <class VEC, int N>
bool CUtlVectorDataOps<VEC, N>::vfunc2(SaveRestoreFieldInfo_t *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}

template class CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int> >,4>;
// END FUNCTION
