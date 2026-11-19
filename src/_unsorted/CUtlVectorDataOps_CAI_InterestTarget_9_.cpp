// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102e2880 size=0xc4
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"
#include "CAI_InterestTarget.h"

struct SRDataMap;
struct SRTypeDesc {
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	void *pSaveRestoreOps;
	void *inputFunc;
	SRDataMap *td;
	int fieldSizeInBytes;
	int unk;
};
struct SRDataMap {
	SRTypeDesc *dataDesc;
	int dataNumFields;
	const char *dataClassName;
	SRDataMap *baseMap;
	bool chains_validated;
	bool packed_offsets_computed;
	int packed_size;
};
struct SRSave {
	virtual void s0();
	virtual void s1();
	virtual void WriteAll(const void *pLeaf, SRDataMap *pMap);
	virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void WriteInt(const int *pInt, int nElems);
};
extern char g_10559048[];
extern char g_10559044[];
extern SRDataMap g_1060ba18;

struct Vec24 {
	void *m_pMemory;
	int m_alloc;
	int m_grow;
	int m_Size;
};
struct Elem24 {
	char m_data[0x24];
};

template <>
void CUtlVectorDataOps<CAI_InterestTarget, 9>::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_1060ba18 };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	Vec24 *vec = (Vec24 *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRSave *save = (SRSave *)pSave;
	int n = vec->m_Size;
	save->WriteInt(&n, 1);
	for (int i = 0; i < n; i++)
		save->WriteAll(&((Elem24 *)vec->m_pMemory)[i], &dm);
}
// END FUNCTION

// FUNCTION: 0x102e2990 size=0xe9
#include "datamap.h"
#include "utlrbtree.h"
#include "CHumanoidRec.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "CAI_InterestTarget.h"
#include "CUtlVector36.h"

struct datamapFull_t {
	typedescription_t *dataDesc;
	int dataNumFields;
	const char *dataClassName;
	datamap_t *baseMap;
	bool chains_validated;
	bool packed_offsets_computed;
	int packed_size;
};
struct IRestoreStub {
	virtual void v0(); virtual void v1();
	virtual void ReadAll(void *pLeafObject, datamapFull_t *pDataMap);
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual int ReadInt();
};
struct FieldInfoStub {
	void *pField;
};
extern datamap_t g_1060ba18;

struct CInterestTargetVec : CUtlVector36 {
	CAI_InterestTarget &Element(int i) { return ((CAI_InterestTarget *)m_pMemory)[i]; }
	int InsertMultipleBefore(int elem, int num)
	{
		if (num == 0)
			return elem;
		sub_102e2b60(num);
		sub_102e2c20(elem, num);
		for (int i = 0; i < num; ++i)
			Construct(&Element(elem + i));
		return elem;
	}
	int AddMultipleToTail(int num) { return InsertMultipleBefore(m_size, num); }
	void RemoveAll() { m_size = 0; }
	void SetCount(int count) { RemoveAll(); AddMultipleToTail(count); }
};

// TARGET: CUtlVectorDataOps<CAI_InterestTarget,9>::vfunc1
void CUtlVectorDataOps<CAI_InterestTarget, 9>::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore)
{
	typedescription_t dataDesc = { 9, "elems", {0, 0}, 1, 2, 0, 0, 0, &g_1060ba18 };
	datamapFull_t dataMap = { &dataDesc, 1, "uv", 0, false, false, 0 };
	CInterestTargetVec *pVec = (CInterestTargetVec *)((FieldInfoStub *)fieldInfo)->pField;
	int nElems = ((IRestoreStub *)pRestore)->ReadInt();
	pVec->SetCount(nElems);
	for (int i = 0; i < nElems; i++)
		((IRestoreStub *)pRestore)->ReadAll(&pVec->Element(i), &dataMap);
}
// END FUNCTION

// FUNCTION: 0x102e2ac0 size=0x10
#include "utlmemory.h"
#include "utlvector.h"
#include "CAI_InterestTarget.h"
#include "CUtlVectorDataOps.h"
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CAI_InterestTarget,9>::vfunc3
template<> void CUtlVectorDataOps<CAI_InterestTarget,9>::vfunc3(SaveRestoreFieldInfo_t *pFieldData)
{
	((CUtlVector<CAI_InterestTarget, CUtlMemory<CAI_InterestTarget> > *)*(void **)pFieldData)->RemoveAll();
}
// END FUNCTION

// FUNCTION: 0x102e2ae0 size=0x13
#include "CUtlVectorDataOps.h"
#include "CAI_InterestTarget.h"

template <>
bool CUtlVectorDataOps<CAI_InterestTarget,9>::vfunc2(SaveRestoreFieldInfo_t *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}
// END FUNCTION
