// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10349a90 size=0xc4
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"
#include "DisciplineSrc.h"

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
extern SRDataMap g_10619d5c;

typedef CUtlVector<DisciplineSrc, CUtlMemory<DisciplineSrc> > DisciplineVec;

template <>
void CUtlVectorDataOps<DisciplineVec, 9>::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_10619d5c };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	DisciplineVec *vec = (DisciplineVec *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRSave *save = (SRSave *)pSave;
	int n = vec->m_Size;
	save->WriteInt(&n, 1);
	for (int i = 0; i < n; i++)
		save->WriteAll(&vec->m_Memory.m_pMemory[i], &dm);
}
// END FUNCTION

// FUNCTION: 0x10349ba0 size=0xe0
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "CUtlVector16.h"

struct DisciplineSrc
{
	int m_0;
	int m_id;
	int m_8;
	int m_c;
	DisciplineSrc() { m_id = -1; }
};

inline void *operator new(unsigned int, void *p) { return p; }

struct TypeDesc
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	void *pSaveRestoreOps;
	void *inputFunc;
	void *td;
	int fieldSizeInBytes;
	int unk;
};

struct DataMap
{
	TypeDesc *dataDesc;
	int dataNumFields;
	const char *dataClassName;
	DataMap *baseMap;
	bool chains_validated;
	bool packed_offsets_computed;
	int packed_size;
};

struct RestoreSlots
{
	virtual void s0(); virtual void s1();
	virtual void ReadFields(void *pElem, DataMap *pMap);
	virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8();
	virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13();
	virtual int ReadCount();
};

extern char g_10619d5c[];

template<> void CUtlVectorDataOps<CUtlVector<DisciplineSrc,CUtlMemory<DisciplineSrc> >,9>::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore)
{
	TypeDesc desc = { 9, "elems", { 0, 0 }, 1, 2, 0, 0, 0, g_10619d5c };
	DataMap map = { &desc, 1, "uv", 0, false, false, 0 };
	CUtlVector16 *pVec = *(CUtlVector16 **)fieldInfo;
	int n = ((RestoreSlots *)pRestore)->ReadCount();
	pVec->m_size = 0;
	if (n != 0) {
		pVec->sub_10349ec0(n);
		pVec->sub_10349f80(0, n);
		for (int i = 0; i < n; i++)
			new (pVec->m_pMemory + i * 16) DisciplineSrc;
		for (int j = 0; j < n; j++)
			((RestoreSlots *)pRestore)->ReadFields(pVec->m_pMemory + j * 16, &map);
	}
}
// END FUNCTION

// FUNCTION: 0x10349cc0 size=0x10
#include "DisciplineSrc.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
struct DisciplineSrc;
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<DisciplineSrc,CUtlMemory<DisciplineSrc> >,9>::vfunc3
template<> void CUtlVectorDataOps<CUtlVector<DisciplineSrc,CUtlMemory<DisciplineSrc> >,9>::vfunc3(SaveRestoreFieldInfo_t *pFieldData)
{
	((CUtlVector<DisciplineSrc,CUtlMemory<DisciplineSrc> > *)*(void **)pFieldData)->RemoveAll();
}
// END FUNCTION

// FUNCTION: 0x10349ce0 size=0x13
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "DisciplineSrc.h"

template <>
bool CUtlVectorDataOps<CUtlVector<DisciplineSrc,CUtlMemory<DisciplineSrc> >,9>::vfunc2(SaveRestoreFieldInfo_t *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}
// END FUNCTION
