// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a5330 size=0xc4
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"

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
extern SRDataMap g_10592ce8;

typedef CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t> > BlockHeaderVec;

template <>
void CUtlVectorDataOps<BlockHeaderVec, 9>::vfunc0(void *fieldInfo, void *pSave)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_10592ce8 };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	BlockHeaderVec *vec = (BlockHeaderVec *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRSave *save = (SRSave *)pSave;
	int n = vec->m_Size;
	save->WriteInt(&n, 1);
	for (int i = 0; i < n; i++)
		save->WriteAll(&vec->m_Memory.m_pMemory[i], &dm);
}
// END FUNCTION

// FUNCTION: 0x101a5440 size=0xc4
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"
#include "CUtlVector40.h"
#include "UtlVec40.h"

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
extern SRDataMap g_10592ce8;

typedef CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t> > BlockHeaderVec;

template <>
void CUtlVectorDataOps<BlockHeaderVec, 9>::vfunc1(void *fieldInfo, void *pRestore)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_10592ce8 };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	CUtlVector40 *vec = (CUtlVector40 *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRRestore *restore = (SRRestore *)pRestore;
	int n = restore->ReadInt();
	vec->m_size = 0;
	if (n != 0) {
		vec->sub_101a58e0(n);
		((UtlVec40 *)vec)->sub_101a59a0(0, n);
	}
	for (int i = 0; i < n; i++)
		restore->ReadAll(vec->m_pMemory + i * 0x28, &dm);
}
// END FUNCTION

// FUNCTION: 0x101a5550 size=0x10
#include "CUtlVectorDataOps.h"
struct SaveRestoreBlockHeader_t;
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc3
template<> int CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc3(void *pFieldData)
{
	VecHead *pVec = *(VecHead **)pFieldData;
	pVec->m_size = 0;
	return (int)pVec;
}
// END FUNCTION

// FUNCTION: 0x101a5570 size=0x13
#include "CUtlVectorDataOps.h"
#include "SaveRestoreBlockHeader_t.h"

// TARGET: CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>::vfunc2
template <class VEC, int N>
bool CUtlVectorDataOps<VEC, N>::vfunc2(void *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}

template class CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t> >,9>;
// END FUNCTION
