// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b43a0 size=0xc4
#include "utlvector.h"
#include "CUtlVectorDataOps.h"

struct thinkfunc_t;
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
struct FieldInfo {
	void *pField;
};
extern char g_10559048[];
extern char g_10559044[];
extern SRDataMap g_10552d50;

struct Elem16 { char d[16]; };
struct Vec16 {
	Elem16 *m_pMemory;
	int m_alloc;
	int m_grow;
	int m_Size;
};

// TARGET: CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>::vfunc0
template <>
void CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>::vfunc0(void *fieldInfo, void *pSave)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_10552d50 };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	Vec16 *vec = (Vec16 *)((FieldInfo *)fieldInfo)->pField;
	SRSave *save = (SRSave *)pSave;
	int n = vec->m_Size;
	save->WriteInt(&n, 1);
	for (int i = 0; i < n; i++)
		save->WriteAll(&vec->m_pMemory[i], &dm);
}
// END FUNCTION

// FUNCTION: 0x100b44b0 size=0xc4
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"
#include "CUtlVector16.h"

struct thinkfunc_t;
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
extern SRDataMap g_10552d50;

// TARGET: CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>::vfunc1
template <>
void CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>::vfunc1(void *fieldInfo, void *pRestore)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_10552d50 };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	CUtlVector16 *vec = (CUtlVector16 *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRRestore *restore = (SRRestore *)pRestore;
	int n = restore->ReadInt();
	vec->m_size = 0;
	if (n != 0) {
		vec->sub_100b4800(n);
		vec->sub_100b48c0(0, n);
	}
	for (int i = 0; i < n; i++)
		restore->ReadAll(vec->m_pMemory + i * 0x10, &dm);
}
// END FUNCTION

// FUNCTION: 0x100b45c0 size=0x10
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>::vfunc3
template<> int CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>::vfunc3(void *pFieldData)
{
	VecHead *pVec = *(VecHead **)pFieldData;
	pVec->m_size = 0;
	return (int)pVec;
}
// END FUNCTION

// FUNCTION: 0x100b45e0 size=0x13
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"

struct thinkfunc_t;

// TARGET: CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>::vfunc2
template <class VEC, int N>
bool CUtlVectorDataOps<VEC, N>::vfunc2(void *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}

template class CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>;
// END FUNCTION
