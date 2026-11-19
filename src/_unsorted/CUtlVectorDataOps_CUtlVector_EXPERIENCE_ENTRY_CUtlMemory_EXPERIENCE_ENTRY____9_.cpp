// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10184750 size=0xc4
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"
#include "EXPERIENCE_ENTRY.h"

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
extern SRDataMap g_10580cd8;

typedef CUtlVector<EXPERIENCE_ENTRY, CUtlMemory<EXPERIENCE_ENTRY> > ExpVec;

template <>
void CUtlVectorDataOps<ExpVec, 9>::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_10580cd8 };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	ExpVec *vec = (ExpVec *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRSave *save = (SRSave *)pSave;
	int n = vec->m_Size;
	save->WriteInt(&n, 1);
	for (int i = 0; i < n; i++)
		save->WriteAll(&vec->m_Memory.m_pMemory[i], &dm);
}
// END FUNCTION

// FUNCTION: 0x10184860 size=0xc4
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"
#include "EXPERIENCE_ENTRY.h"
#include "CUtlVector52.h"
#include "CUtlVector88.h"

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
struct SRRestore {
	virtual void s0();
	virtual void s1();
	virtual void ReadAll(void *pLeaf, SRDataMap *pMap);
	virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13();
	virtual int ReadInt();
};
extern char g_10559048[];
extern char g_10559044[];
extern SRDataMap g_10580cd8;

typedef CUtlVector<EXPERIENCE_ENTRY, CUtlMemory<EXPERIENCE_ENTRY> > ExpVec;

template <>
void CUtlVectorDataOps<ExpVec, 9>::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_10580cd8 };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	CUtlVector52 *vec = (CUtlVector52 *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRRestore *restore = (SRRestore *)pRestore;
	int n = restore->ReadInt();
	vec->m_size = 0;
	if (n != 0) {
		vec->sub_10185310(n);
		((CUtlVector88 *)vec)->sub_101853e0(0, n);
	}
	for (int i = 0; i < n; i++)
		restore->ReadAll(vec->m_pMemory + i * 0x34, &dm);
}
// END FUNCTION

// FUNCTION: 0x10184970 size=0x10
#include "EXPERIENCE_ENTRY.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
struct EXPERIENCE_ENTRY;
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<EXPERIENCE_ENTRY,CUtlMemory<EXPERIENCE_ENTRY> >,9>::vfunc3
template<> void CUtlVectorDataOps<CUtlVector<EXPERIENCE_ENTRY,CUtlMemory<EXPERIENCE_ENTRY> >,9>::vfunc3(SaveRestoreFieldInfo_t *pFieldData)
{
	((CUtlVector<EXPERIENCE_ENTRY,CUtlMemory<EXPERIENCE_ENTRY> > *)*(void **)pFieldData)->RemoveAll();
}
// END FUNCTION

// FUNCTION: 0x10184990 size=0x13
#include "EXPERIENCE_ENTRY.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"

struct EXPERIENCE_ENTRY;

// TARGET: CUtlVectorDataOps<CUtlVector<EXPERIENCE_ENTRY,CUtlMemory<EXPERIENCE_ENTRY> >,9>::vfunc2
template <class VEC, int N>
bool CUtlVectorDataOps<VEC, N>::vfunc2(SaveRestoreFieldInfo_t *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}

template class CUtlVectorDataOps<CUtlVector<EXPERIENCE_ENTRY,CUtlMemory<EXPERIENCE_ENTRY> >,9>;
// END FUNCTION
