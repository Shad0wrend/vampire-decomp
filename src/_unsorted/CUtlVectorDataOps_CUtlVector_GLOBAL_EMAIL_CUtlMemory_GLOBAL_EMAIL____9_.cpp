// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10184c30 size=0xc7
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"
#include "CGlobalEmailRec.h"

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
extern SRDataMap g_10580e40;

typedef CUtlVector<GLOBAL_EMAIL, CUtlMemory<GLOBAL_EMAIL> > EmailVec;

template <>
void CUtlVectorDataOps<EmailVec, 9>::vfunc0(void *fieldInfo, void *pSave)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_10580e40 };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	EmailVec *vec = (EmailVec *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRSave *save = (SRSave *)pSave;
	int n = vec->m_Size;
	save->WriteInt(&n, 1);
	for (int i = 0; i < n; i++)
		save->WriteAll(&vec->m_Memory.m_pMemory[i], &dm);
}
// END FUNCTION

// FUNCTION: 0x10184d40 size=0xc7
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"
#include "CGlobalEmailRec.h"

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
struct Vec576 {
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;
	void sub_10185620(int num);
	void sub_101856e0(int elem, int num);
};
extern char g_10559048[];
extern char g_10559044[];
extern SRDataMap g_10580e40;

typedef CUtlVector<GLOBAL_EMAIL, CUtlMemory<GLOBAL_EMAIL> > EmailVec;

template <>
void CUtlVectorDataOps<EmailVec, 9>::vfunc1(void *fieldInfo, void *pRestore)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_10580e40 };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	Vec576 *vec = (Vec576 *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRRestore *restore = (SRRestore *)pRestore;
	int n = restore->ReadInt();
	vec->m_size = 0;
	if (n != 0) {
		vec->sub_10185620(n);
		vec->sub_101856e0(0, n);
	}
	for (int i = 0; i < n; i++)
		restore->ReadAll(vec->m_pMemory + i * 0x240, &dm);
}
// END FUNCTION

// FUNCTION: 0x10184e50 size=0x10
#include "CUtlVectorDataOps.h"
struct GLOBAL_EMAIL;
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<GLOBAL_EMAIL,CUtlMemory<GLOBAL_EMAIL> >,9>::vfunc3
template<> int CUtlVectorDataOps<CUtlVector<GLOBAL_EMAIL,CUtlMemory<GLOBAL_EMAIL> >,9>::vfunc3(void *pFieldData)
{
	VecHead *pVec = *(VecHead **)pFieldData;
	pVec->m_size = 0;
	return (int)pVec;
}
// END FUNCTION

// FUNCTION: 0x10184e70 size=0x13
#include "CUtlVectorDataOps.h"

struct GLOBAL_EMAIL;

// TARGET: CUtlVectorDataOps<CUtlVector<GLOBAL_EMAIL,CUtlMemory<GLOBAL_EMAIL> >,9>::vfunc2
template <class VEC, int N>
bool CUtlVectorDataOps<VEC, N>::vfunc2(void *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}

template class CUtlVectorDataOps<CUtlVector<GLOBAL_EMAIL,CUtlMemory<GLOBAL_EMAIL> >,9>;
// END FUNCTION
