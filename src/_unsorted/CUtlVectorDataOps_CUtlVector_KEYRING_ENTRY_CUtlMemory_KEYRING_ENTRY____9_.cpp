// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040ad80 size=0xc7
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"

struct KEYRING_ENTRY
{
	char m_data[0xc0];
};

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
extern SRDataMap g_1067f95c;

typedef CUtlVector<KEYRING_ENTRY, CUtlMemory<KEYRING_ENTRY> > KeyringVec;

template <>
void CUtlVectorDataOps<KeyringVec, 9>::vfunc0(void *fieldInfo, void *pSave)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_1067f95c };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	KeyringVec *vec = (KeyringVec *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRSave *save = (SRSave *)pSave;
	int n = vec->m_Size;
	save->WriteInt(&n, 1);
	for (int i = 0; i < n; i++)
		save->WriteAll(&vec->m_Memory.m_pMemory[i], &dm);
}
// END FUNCTION

// FUNCTION: 0x1040afa0 size=0x10
#include "CUtlVectorDataOps.h"
struct KEYRING_ENTRY;
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<KEYRING_ENTRY,CUtlMemory<KEYRING_ENTRY> >,9>::vfunc3
template<> int CUtlVectorDataOps<CUtlVector<KEYRING_ENTRY,CUtlMemory<KEYRING_ENTRY> >,9>::vfunc3(void *pFieldData)
{
	VecHead *pVec = *(VecHead **)pFieldData;
	pVec->m_size = 0;
	return (int)pVec;
}
// END FUNCTION

// FUNCTION: 0x1040afc0 size=0x13
#include "CUtlVectorDataOps.h"

struct KEYRING_ENTRY;

template <>
bool CUtlVectorDataOps<CUtlVector<KEYRING_ENTRY,CUtlMemory<KEYRING_ENTRY> >,9>::vfunc2(void *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}
// END FUNCTION
