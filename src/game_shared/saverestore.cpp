// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 123 blocks
#include "vampire.h"

// FUNCTION: 0x1019f7d0 size=0x71
#include "datamap.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
__declspec(dllimport) void __cdecl Msg(const char *fmt, ...);

inline bool FStrEq(const char *sz1, const char *sz2)
{
	return !_strcmpi(sz1, sz2);
}

void *sub_1019f7d0(datamap_t *pMap, const char *pName)
{
	while (pMap)
	{
		for (int i = 0; i < pMap->dataNumFields; i++)
		{
			if (pMap->dataDesc[i].flags & 0x20)
			{
				if (FStrEq(pName, pMap->dataDesc[i].fieldName))
				{
					return pMap->dataDesc[i].inputFunc;
				}
			}
		}
		pMap = pMap->baseMap;
	}
	Msg("Failed to find function %s\n", pName);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1019f870 size=0x84
#include "CSave.h"

// TARGET: ??0CSave@@QAE@PAX@Z
CSave::CSave(void *pData)
	: m_pSections(0), m_nAlloc(0), m_nGrow(0), m_nSections(0), m_pElements(0), m_pData(pData),
	  m_pEntityBlock(pData ? (char *)pData + 0x18 : 0)
{
	((CUtlVector<int> *)&m_pSections)->EnsureCapacity(0x20);
}
// END FUNCTION

// FUNCTION: 0x1019f930 size=0x13
#include "CSave.h"
namespace lifted {
int __stdcall sub_10008d4b(int, int, int);
}
void CSave::vfunc2(void * a0, const char * a1)
{
    lifted::sub_10008d4b(*(int *)&a0, *(int *)&a1, *(int *)&a1);
}
// END FUNCTION

// FUNCTION: 0x1019f960 size=0x4
#include "CSave.h"
int CSave::vfunc38()
{
    return *(int *)((char *)this + 0x1c);
}
// END FUNCTION

// FUNCTION: 0x1019f980 size=0x68
extern "C" __declspec(dllimport) void Plat_Free(void *);
extern int g_104625f4[];
struct SSave {
    void *vt;
    void *m4;
    int m8;
    int mc;
    int m10;
    void *m14;
    SSave *sub_1019f980(unsigned char flag);
};
// TARGET: SSave::sub_1019f980
SSave *SSave::sub_1019f980(unsigned char flag)
{
    m10 = 0;
    if (mc != -1) {
        if (m4) { Plat_Free(m4); m4 = 0; }
        m8 = 0;
    }
    m14 = m4;
    if (mc != -1) {
        if (m4) { Plat_Free(m4); m4 = 0; }
        m8 = 0;
    }
    vt = g_104625f4;
    if (flag & 1)
        delete this;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1019fa10 size=0x7
#include "CSave.h"
int CSave::vfunc0()
{
    return *(int *)((char *)(*(int *)((char *)this + 0x18)) + 8);
}
// END FUNCTION

// FUNCTION: 0x1019fa30 size=0x1d
#include "CSave.h"

// TARGET: CSave::vfunc1
void CSave::vfunc1(int pos)
{
	int *piVar1 = (int *)m_pData;
	if (pos >= 0 && pos < piVar1[3]) {
		piVar1[2] = pos;
		piVar1[1] = piVar1[0] + pos;
	}
}
// END FUNCTION

// FUNCTION: 0x1019fa60 size=0x10
#include "CSave.h"

// TARGET: CSave::vfunc8
bool CSave::vfunc8(const void *pData, int nBytes)
{
	return sub_1000643d(pData, nBytes * 2);
}
// END FUNCTION

// FUNCTION: 0x1019fa80 size=0x14
#include "CSave.h"

bool CSave::vfunc10(const void *pData, int nBytes)
{
	return sub_1000643d(pData, nBytes * 4);
}
// END FUNCTION

// FUNCTION: 0x1019fab0 size=0x5
#include "CSave.h"

// TARGET: CSave::vfunc12
// the game's 0x1019fab0: a tail call (jmp) of sub_1000643d (WriteData); the slot returns void here, the bool stays in eax
void CSave::vfunc12(const void *pData, int count)
{
	sub_1000643d(pData, count);
}
// END FUNCTION

// FUNCTION: 0x1019fad0 size=0x14
#include "CSave.h"

bool CSave::vfunc14(const void *pData, int nBytes)
{
	return sub_1000643d(pData, nBytes * 4);
}
// END FUNCTION

// FUNCTION: 0x1019fb00 size=0x5
#include "CSave.h"

// TARGET: CSave::vfunc16
// the game's 0x1019fb00: a tail call (jmp) of sub_1000643d (WriteData)
void CSave::vfunc16(const void *pData, int nBytes)
{
	sub_1000643d(pData, nBytes);
}
// END FUNCTION

// FUNCTION: 0x1019fb20 size=0x21
#include <string.h>
#pragma intrinsic(strlen)

struct CSaveFwd2
{
    void sub_1000643d(const char *pszName, int count);
    void sub_1019fb20(const char *pszName);
};

// TARGET: sub_1019fb20
void CSaveFwd2::sub_1019fb20(const char *pszName)
{
    sub_1000643d(pszName, strlen(pszName) + 1);
}
// END FUNCTION

// FUNCTION: 0x1019fb60 size=0x40
#include "CSave.h"
#include <string.h>

extern char g_106b8540[];

// TARGET: CSave::vfunc19
void CSave::vfunc19(const char **ppStrings, int count)
{
	for (int i = 0; i < count; i++) {
		const char *pString = ppStrings[i];
		if (!pString) {
			pString = g_106b8540;
		}
		sub_1000643d(pString, strlen(pString) + 1);
	}
}
// END FUNCTION

// FUNCTION: 0x1019fbb0 size=0xf
#include "CSave.h"

// TARGET: CSave::vfunc24
void CSave::vfunc24(const Vector &value)
{
	sub_1000643d(&value, 12);
}
// END FUNCTION

// FUNCTION: 0x1019fbd0 size=0x13
#include "vampire.h"

struct CUnknown1019fbd0
{
	void sub_101a07b0(int a, int b);
};

// TARGET: sub_1019fbd0
void __fastcall sub_1019fbd0(void *pThis, int, int a, int b)
{
	((CUnknown1019fbd0 *)pThis)->sub_101a07b0(a, b * 12);
}
// END FUNCTION

// FUNCTION: 0x1019fc00 size=0x5
#include "CSave.h"

// TARGET: CSave::vfunc15
// the game's 0x1019fc00: a tail call (jmp) of sub_101a05b0 with the same three arguments
void CSave::vfunc15(int a, int b, int c)
{
	sub_101a05b0(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x1019fc20 size=0x1a
#include "CSave.h"

void CSave::vfunc7(int a, int b, int count)
{
    sub_101a05b0(a, count * 2, b);
}
// END FUNCTION

// FUNCTION: 0x1019fc50 size=0x1e
#include "CSave.h"

void CSave::vfunc9(const char *pszName, void *pData, int count)
{
    sub_101a05b0((int)pszName, count * 4, (int)pData);
}
// END FUNCTION

// FUNCTION: 0x1019fc80 size=0x17
#include "CSave.h"
namespace lifted {
struct C10006be5 { int sub_10006be5(int, int, int); };
}
int CSave::vfunc11(int a0, int a1, int a2)
{
    return ((lifted::C10006be5 *)this)->sub_10006be5(a0, a2, a1);
}
// END FUNCTION

// FUNCTION: 0x1019fcb0 size=0x1e
#include "CSave.h"

void CSave::vfunc13(const char *pszName, void *pData, int count)
{
    sub_101a05b0((int)pszName, count * 4, (int)pData);
}
// END FUNCTION

// FUNCTION: 0x1019fce0 size=0x22
#include "CSave.h"
#include <string.h>
#pragma intrinsic(strlen)

void CSave::vfunc18(int a, const char *psz)
{
	sub_101a05b0(a, strlen(psz) + 1, (int)psz);
}
// END FUNCTION

// FUNCTION: 0x1019fd20 size=0x59
#include "CSave.h"
#include <string.h>
void CSave::vfunc17(const char *pszName, void *pData, int count)
{
	const char **ppStrings = (const char **)pData;
	int total = 0;
	for (int i = 0; i < count; i++)
		total += strlen(ppStrings[i] ? ppStrings[i] : "") + 1;
	sub_101a05f0(pszName, total);
	vfunc19(ppStrings, count);
}
// END FUNCTION

// FUNCTION: 0x1019fda0 size=0x14
#include "CSave.h"

// TARGET: CSave::vfunc22
void CSave::vfunc22(const char *pszName, const Vector &value)
{
	vfunc21(pszName, &value, 1);
}
// END FUNCTION

// FUNCTION: 0x1019fdd0 size=0x2b
#include "CSave.h"

// TARGET: CSave::vfunc21
void CSave::vfunc21(const char *pszName, const void *pData, int count)
{
	sub_101a05f0(pszName, count * sizeof(Vector));
	sub_1000643d(pData, count * sizeof(Vector));
}
// END FUNCTION

// FUNCTION: 0x1019fe10 size=0xf7
#include "datamap.h"
#include "CSave.h"

struct SaveRestoreFieldInfoX {
	void *pField;
	void *pOwner;
	typedescription_t *pTypeDesc;
};

struct ISaveRestoreOpsX {
	virtual void v0();
	virtual void v1();
	virtual bool IsEmpty(const SaveRestoreFieldInfoX &fieldInfo);
};

extern int g_10592ac8[];

bool CSave::sub_1019fe10(void *pData, typedescription_t *pField)
{
	int type;
	if ((pField->flags & 2) && (type = pField->fieldType) != 0) {
		if (type == 9) {
			void *pEmbedded = !(pField->flags & 0x40) ? pData : *(void **)pData;
			typedescription_t *pTest = pField->td->dataDesc;
			typedescription_t *pLimit = pTest + pField->td->dataNumFields;
			if (pTest < pLimit) {
				bool r;
				do {
					r = sub_10015aaf((char *)pEmbedded + pTest->fieldOffset[0], pTest);
					if (r)
						goto yes;
					pTest++;
				} while (pTest < pLimit);
				return r;
			}
		} else if (type == 10) {
			SaveRestoreFieldInfoX fieldInfo = { pData, (char *)pData - pField->fieldOffset[0], pField };
			if (!((ISaveRestoreOpsX *)pField->pSaveRestoreOps)->IsEmpty(fieldInfo))
				goto yes;
		} else if (type == 12) {
			if (!sub_101a0570(pData, (short)pField->fieldSize * 4))
				goto yes;
		} else {
			if (sub_101a0570(pData, g_10592ac8[type] * (short)pField->fieldSize))
				return false;
			goto yes;
		}
	}
	return false;
yes:
	return true;
}
// END FUNCTION

// FUNCTION: 0x1019ff50 size=0x1f0
#include "datamap.h"
#include "CSave.h"

__declspec(dllimport) void Warning(const char *pMsg, ...);

struct CSaveFieldView
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	short fieldSize;
	short flags;
	const char *externalName;
	struct COpsView *pSaveRestoreOps;
	void *inputFunc;
	datamap_t *td;
};

struct CSaveFieldInfo
{
	void *pField;
	void *pOwner;
	CSaveFieldView *pTypeDesc;
};

struct COpsView
{
	virtual void Save(CSaveFieldInfo *pInfo, void *pSave);
};

struct CSaveWriteView
{
	virtual void v0(); virtual void v1();
	virtual void WriteAll(const void *pData, datamap_t *pMap);
	virtual void v3(); virtual void v4();
	virtual void StartBlock(const char *pszName);
	virtual void EndBlock();
	virtual void v7(); virtual void v8();
	virtual void v9(const char *pszName, void *pData, int count);
	virtual void v10();
	virtual void v11(const char *pszName, void *pData, int count);
	virtual void v12();
	virtual void v13(const char *pszName, void *pData, int count);
	virtual void v14();
	virtual void v15(const char *pszName, int nBytes, void *pData);
	virtual void v16();
	virtual void v17(const char *pszName, void *pData, int count);
	virtual void v18(); virtual void v19(); virtual void v20();
	virtual void v21(const char *pszName, void *pData, int count);
};

bool CSave::sub_1019ff50(const unsigned short *pToken, void *pData, void *pRootMap, typedescription_t *pDesc)
{
	CSaveWriteView *pSave = (CSaveWriteView *)this;
	CSaveFieldView *pField = (CSaveFieldView *)pDesc;
	switch (pField->fieldType) {
	case 1:
		pSave->v13(pField->fieldName, pData, pField->fieldSize);
		break;
	case 2:
		pSave->v17(pField->fieldName, pData, pField->fieldSize);
		break;
	case 3:
		pSave->v21(pField->fieldName, pData, pField->fieldSize);
		break;
	case 4:
		pSave->v9(pField->fieldName, pData, pField->fieldSize);
		break;
	case 5:
		pSave->v11(pField->fieldName, pData, pField->fieldSize);
		break;
	case 6:
		pSave->v15(pField->fieldName, pField->fieldSize * 2, pData);
		break;
	case 7:
		pSave->v15(pField->fieldName, pField->fieldSize, pData);
		break;
	case 8:
		pSave->v15(pField->fieldName, pField->fieldSize * 4, pData);
		break;
	case 9:
		pSave->StartBlock(pField->fieldName);
		pSave->WriteAll(!(pField->flags & 0x40) ? pData : *((void **)pData), pField->td);
		pSave->EndBlock();
		break;
	case 10:
	{
		pSave->StartBlock(pField->fieldName);
		CSaveFieldInfo info = { pData, (char *)pData - pField->fieldOffset[0], pField };
		pField->pSaveRestoreOps->Save(&info, pSave);
		pSave->EndBlock();
		break;
	}
	default:
		Warning("Bad field type\n");
		return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x101a01c0 size=0x17
#include "datamap.h"
#include "CSave.h"

// TARGET: CSave::sub_101a01c0
bool CSave::sub_101a01c0(const char *pszName, void *pData, void *pRootMap, typedescription_t *pField)
{
    if (*(int *)pField <= 10)
        return sub_1019ff50((const unsigned short *)pszName, pData, pRootMap, pField);
    return sub_101a1140((int)pszName, pData, pRootMap, pField);
}
// END FUNCTION

// FUNCTION: 0x101a01f0 size=0x4c
#include "CSave.h"

class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	ISaveRestoreOps *pSaveRestoreOps;
	void *inputFunc;
	datamap_t *td;
	int fieldSizeInBytes;
	int unk;
};

int CSave::sub_101a01f0(const void *pBaseData, typedescription_t *pFields, int nFields)
{
	int nNonEmpty = 0;
	for (int i = 0; i < nFields; i++) {
		if (sub_1019fe10((char *)pBaseData + pFields[i].fieldOffset[0], &pFields[i]))
			nNonEmpty++;
	}
	return nNonEmpty;
}
// END FUNCTION

// FUNCTION: 0x101a0260 size=0x8a
#include "datamap.h"
#include "CSave.h"

struct CFieldView	// the 0x2c byte typedescription_t, only the offset
{
	char m_pad0000[8];
	int m_nOffset;
	char m_pad000c[0x2c - 0xc];
};

int CSave::vfunc3(int a, int b, int c, int d, int e)
{
	int nFieldsToSave = sub_101a01f0((const void *)b, (typedescription_t *)d, e);
	vfunc9((const char *)a, &nFieldsToSave, 1);
	for (int i = 0; i < e; i++, d += 0x2c) {
		CFieldView *pField = (CFieldView *)d;
		void *pData = (char *)b + pField->m_nOffset;
		if (!sub_1019fe10(pData, (typedescription_t *)pField))
			continue;
		if (!sub_101a01c0((const char *)a, pData, (void *)c, (typedescription_t *)pField))
			break;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101a0320 size=0x47
#include "CSave.h"
struct CSaveDesc { int m_n0, m_n4, m_n8; CSaveDesc *m_pParent; };
int CSave::sub_101a0320(int a, int b, CSaveDesc *p)
{
    if (p->m_pParent) {
        if (!sub_10008d4b(a, b, p->m_pParent))
            return 0;
    }
    return vfunc3(p->m_n8, a, b, p->m_n0, p->m_n4);
}
// END FUNCTION

// FUNCTION: 0x101a0390 size=0xb9
#include "CSave.h"
#include "CUtlVector4.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CSave::vfunc5(const void *p)
{
	sub_101a05f0(p, 0);
	int pos = vfunc0();
	CUtlVector4 *v = (CUtlVector4 *)((char *)this + 4);
	int elem = v->m_size;
	if (1 + v->m_size > v->m_allocationCount && v->m_growSize != -1) {
		int newSize = v->m_allocationCount + (1 + v->m_size - v->m_allocationCount);
		while (v->m_allocationCount < newSize) {
			if (v->m_allocationCount != 0) {
				if (v->m_growSize != 0)
					v->m_allocationCount += v->m_growSize;
				else
					v->m_allocationCount += v->m_allocationCount;
			} else {
				v->m_allocationCount = 8;
			}
		}
		if (v->m_pMemory)
			v->m_pMemory = (int *)Plat_Realloc(v->m_pMemory, v->m_allocationCount * 4);
		else
			v->m_pMemory = (int *)Plat_Alloc(v->m_allocationCount * 4);
	}
	v->m_size += 1;
	v->m_pElements = v->m_pMemory;
	int numToMove = v->m_size - elem - 1;
	if (numToMove > 0)
		memmove(v->m_pMemory + elem + 1, v->m_pMemory + elem, numToMove * 4);
	int *dst = v->m_pMemory + elem;
	if (dst)
		*dst = pos;
}
// END FUNCTION

// FUNCTION: 0x101a0480 size=0xb
#include "CSave.h"
extern char g_106b8540[];

void CSave::vfunc4()
{
	vfunc5(g_106b8540);
}
// END FUNCTION

// FUNCTION: 0x101a04a0 size=0x6d
#include "utlrbtree.h"
#include "CSave.h"

void CSave::vfunc6()
{
    CUtlVector<int> &stack = *(CUtlVector<int> *)((char *)this + 4);
    int pos = vfunc0();
    int start = (*(int **)&m_pSections)[stack.Count() - 1];
    int size = pos - start;
    stack.Remove(stack.Count() - 1);
    vfunc1(start - 4);
    sub_1000643d(&size, 2);
    vfunc1(pos);
}
// END FUNCTION

// FUNCTION: 0x101a0530 size=0x2d
struct CUnk101a0530 {
    void sub_1000643d(int a, int b);
    void sub_101a0530(int a, int b);
};

// TARGET: sub_101a0530
void CUnk101a0530::sub_101a0530(int a, int b)
{
    unsigned int local;
    *((unsigned char *)&local + 3) = 0;
    sub_1000643d(a, b);
    sub_1000643d((int)((unsigned char *)&local + 3), 1);
}
// END FUNCTION

// FUNCTION: 0x101a0570 size=0x26
// TARGET: sub_101a0570
int __stdcall sub_101a0570(const char *pBytes, int nBytes)
{
	for (int i = 0; i < nBytes; i++) {
		if (pBytes[i] != 0)
			return 0;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101a05b0 size=0x25
#include "CSave.h"

// TARGET: sub_101a05b0
void CSave::sub_101a05b0(int a, int bytes, int b)
{
    sub_101a05f0((const void *)a, bytes);
    sub_1000643d((const void *)b, bytes);
}
// END FUNCTION

// FUNCTION: 0x101a05f0 size=0x153
#include "CSave.h"
#include <string.h>
#include <stdlib.h>
#pragma intrinsic(_rotr)

extern void (*g_109f362c)(const char *fmt, ...);	// Warning

struct CSaveTokenData
{
	char m_pad[0x10];
	int m_nTokenCount;
	const char **m_pTokens;
};

struct CSaveBuf
{
	char m_pad[0x18];
	CSaveTokenData *m_pdata;

	int TokenHash(const char *pszToken)
	{
		CSaveTokenData *pdata = m_pdata;
		unsigned int hash = 0;
		for (const char *q = pszToken; *q; q++)
			hash = _rotr(hash, 4) ^ (int)*q;

		unsigned short start = (unsigned short)(hash % pdata->m_nTokenCount);
		for (int i = 0; i < pdata->m_nTokenCount; i++)
		{
			int index = start + i;
			if (index >= pdata->m_nTokenCount)
				index -= pdata->m_nTokenCount;
			if (!pdata->m_pTokens[index] || strcmp(pszToken, pdata->m_pTokens[index]) == 0)
			{
				pdata->m_pTokens[index] = pszToken;
				return index;
			}
		}
		g_109f362c("CSaveRestoreBuffer::TokenHash() is COMPLETELY FULL!");
		return 0;
	}
};

// TARGET: CSave::sub_101a05f0
void CSave::sub_101a05f0(const void *p, int a)
{
	int size = a;
	int token = ((CSaveBuf *)this)->TokenHash((const char *)p);
	if (a > 0x7fff || a < 0)
		g_109f362c("CSave::WriteHeader() size parameter exceeds 'short'!");
	sub_1000643d(&size, 2);
	sub_1000643d(&token, 2);
}
// END FUNCTION

// FUNCTION: 0x101a07b0 size=0x5f
#include "CSave.h"
#include <string.h>
#pragma warning(disable: 4716)

struct Buf
{
	int pad;
	char *m_pCur;
	int m_nUsed;
	int m_nSize;
	bool Write(const void *pData, int nBytes)
	{
		if (nBytes > m_nSize - m_nUsed)
		{
			m_nUsed = m_nSize;
			return false;
		}
		memcpy(m_pCur, pData, nBytes);
		m_pCur += nBytes;
		m_nUsed += nBytes;
		return true;
	}
};

__declspec(dllimport) void __cdecl Warning(const char *fmt, ...);

bool CSave::sub_1000643d(const void *pData, int nBytes)
{
	Buf *pBuf = (Buf *)m_pData;
	if (pBuf)
	{
		if (!pBuf->Write(pData, nBytes))
		{
			Warning("Save/Restore overflow!");
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101a0830 size=0x89
#include "CSave.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct SaveEntSlots { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void *slot4(); };
struct CSaveEdict { char m_pad[0x40]; SaveEntSlots *m_pUnk; };

int CSave::sub_101a0830(CSaveEdict *pEdict)
{
	if (!pEdict)
		return -1;
	g_109f3620[*g_109f3680].a = "CBaseEntity::Instance";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	void *ent;
	if (pEdict->m_pUnk)
		ent = pEdict->m_pUnk->slot4();
	else
		ent = 0;
	(*g_109f3680)--;
	return sub_101a08f0(ent);
}
// END FUNCTION

// FUNCTION: 0x101a08f0 size=0x70
#include "CSave.h"

struct entitytable_101a08f0
{
	int id;
	int edictindex;
	int saveentityindex;
	int restoreentityindex;
	EHANDLE hEnt;
	int m_unk14;
	int m_unk18;
	int m_unk1c;
	int m_unk20;
	int m_unk24;
	int m_unk28;
	int m_unk2c;
};

struct CSaveRestoreData_101a08f0
{
	int m_unk0;
	int m_pad[0x1318 / 4 - 1];
	int tableCount;
	entitytable_101a08f0 *pTable;
	int NumEntities() { return tableCount; }
	entitytable_101a08f0 *GetEntityInfo(int i) { return (pTable + i); }
};

int CSave::sub_101a08f0(void *pEntity)
{
	CSaveRestoreData_101a08f0 *m_pGameInfo = (CSaveRestoreData_101a08f0 *)m_pEntityBlock;
	if (!m_pGameInfo || pEntity == 0)
		return -1;

	int i;
	entitytable_101a08f0 *pTable;

	for (i = 0; i < m_pGameInfo->NumEntities(); i++)
	{
		pTable = m_pGameInfo->GetEntityInfo(i);
		if (pTable->hEnt.Get() == pEntity)
			return pTable->id;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x101a0980 size=0x5f
#include "CSave.h"
struct CSaveEntry { char pad[0x20]; unsigned __int64 m_nFlags; char pad2[8]; };
struct CSaveBlock { char pad[0x1318]; int m_nEntities; CSaveEntry *m_pEntries; };
unsigned __int64 CSave::sub_101a0980(int index, unsigned __int64 flags)
{
    CSaveBlock *pBlock = (CSaveBlock *)m_pEntityBlock;
    if (pBlock && index >= 0 && index <= pBlock->m_nEntities) {
        pBlock->m_pEntries[index].m_nFlags |= flags;
        return ((CSaveBlock *)m_pEntityBlock)->m_pEntries[index].m_nFlags;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101a0a00 size=0x53
#include "CSave.h"
struct SaveEB { char pad[0x12e8]; float flOffset; };
void CSave::vfunc26(const char *pszName, void *pData, int count)
{
    sub_101a05f0(pszName, count * 4);
    for (int i = 0; i < count; i++) {
        float off = ((SaveEB *)m_pEntityBlock)->flOffset;
        float f = ((float *)pData)[i] - off;
        vfunc16(&f, 4);
    }
}
// END FUNCTION

// FUNCTION: 0x101a0a80 size=0x3f
#include "vampire.h"
#include "CSave.h"

// TARGET: CSave::vfunc25
void CSave::vfunc25(const float *pValues, int count)
{
    for (int i = 0; i < count; i++)
    {
        float flValue;
        flValue = *(float *)((char *)m_pEntityBlock + 0x12e8);
        flValue = pValues[i] - flValue;
        vfunc16(&flValue, 4);
    }
}
// END FUNCTION

// FUNCTION: 0x101a0ad0 size=0x81
#include "CSave.h"

struct CSaveEntityBlockView {
    char pad[0x12c4];
    int m_nLandmark;
    char pad2[0x12dc - 0x12c8];
    Vector m_vecLandmark;
};
extern Vector g_1070d1b0;

void CSave::vfunc30(const char *pszName, const Vector &value)
{
    CSaveEntityBlockView *pBlock = (CSaveEntityBlockView *)m_pEntityBlock;
    const Vector *pOffset;
    if (pBlock->m_nLandmark)
        pOffset = &pBlock->m_vecLandmark;
    else
        pOffset = &g_1070d1b0;
    Vector vecOffset = *pOffset;
    Vector vecOut = value - vecOffset;
    vfunc22(pszName, vecOut);
}
// END FUNCTION

// FUNCTION: 0x101a0b90 size=0x7c
#include "CSave.h"

struct CSaveBlockX
{
	char m_pad0000[0x12c4];
	int m_bLandmark;	// 0x12c4
	char m_pad12c8[0x12dc - 0x12c8];
	Vector m_vecLandmarkOffset;	// 0x12dc
};

extern Vector g_1070d1b0;

void CSave::vfunc28(const Vector &value)
{
	CSaveBlockX *pBlock = (CSaveBlockX *)m_pEntityBlock;
	Vector vecOffset = pBlock->m_bLandmark ? pBlock->m_vecLandmarkOffset : g_1070d1b0;
	Vector vecResult = value - vecOffset;
	vfunc24(vecResult);
}
// END FUNCTION

// FUNCTION: 0x101a0c30 size=0x2d
#include "CSave.h"

// TARGET: CSave::vfunc29
void CSave::vfunc29(const char *pszName, void *pData, int count)
{
	sub_101a05f0(pszName, count * 12);
	vfunc27((const Vector *)pData, count);
}
// END FUNCTION

// FUNCTION: 0x101a0c70 size=0x8d
#include "CSave.h"

struct CSaveBlockX
{
	char m_pad0000[0x12c4];
	int m_bLandmark;	// 0x12c4
	char m_pad12c8[0x12dc - 0x12c8];
	Vector m_vecLandmarkOffset;	// 0x12dc
};

extern Vector g_1070d1b0;

inline Vector GetLandmarkOffsetX(CSaveBlockX *pBlock)
{
	return pBlock->m_bLandmark ? pBlock->m_vecLandmarkOffset : g_1070d1b0;
}

void CSave::vfunc27(const Vector *pValues, int count)
{
	for (int i = 0; i < count; i++) {
		Vector vecResult;
		vecResult = pValues[i] - GetLandmarkOffsetX((CSaveBlockX *)m_pEntityBlock);
		vfunc16(&vecResult, 12);
	}
}
// END FUNCTION

// FUNCTION: 0x101a0d30 size=0x4c
#include "CSave.h"
#include <string.h>
const char *sub_1019f760(void *pMap, int pFunc);
__declspec(dllimport) void Warning(const char *fmt, ...);
void CSave::vfunc31(void *pBase, const char *pszName, void *pData, int count)
{
    const char *pName = sub_1019f760(pBase, *(int *)pData);
    if (pName) {
        sub_101a05b0((int)pszName, strlen(pName) + 1, (int)pName);
        return;
    }
    Warning("Invalid function pointer in entity!");
}
// END FUNCTION

// FUNCTION: 0x101a0da0 size=0x61
#include "CSave.h"
void CSave::vfunc33(const char *pszName, void *pData, int count)
{
	int tmp[256];
	for (int i = 0; i < count; i++)
		tmp[i] = sub_101a08f0(((void **)pData)[i]);
	vfunc9(pszName, tmp, count);
}
// END FUNCTION

// FUNCTION: 0x101a0e30 size=0x59
#include "CSave.h"
void CSave::vfunc32(const int *pHandles, int count)
{
	int indices[256];
	for (int i = 0; i < count; i++)
		indices[i] = sub_101a08f0((void *)pHandles[i]);
	vfunc10(indices, count);
}
// END FUNCTION

// FUNCTION: 0x101a0eb0 size=0x61
#include "CSave.h"
void CSave::vfunc35(const char *pszName, void *pData, int count)
{
	int tmp[256];
	for (int i = 0; i < count; i++)
		tmp[i] = sub_101a0830(((CSaveEdict **)pData)[i]);
	vfunc9(pszName, tmp, count);
}
// END FUNCTION

// FUNCTION: 0x101a0f40 size=0x59
#include "CSave.h"
void CSave::vfunc34(CSaveEdict *const *pEdicts, int count)
{
	int indices[256];
	for (int i = 0; i < count; i++)
		indices[i] = sub_101a0830(pEdicts[i]);
	vfunc10(indices, count);
}
// END FUNCTION

// FUNCTION: 0x101a0fc0 size=0x89
#include "CSave.h"

void CSave::vfunc37(const char *pszName, void *pData, int count)
{
	int entityArray[256];
	EHANDLE *pEHandles = (EHANDLE *)pData;
	for (int i = 0; i < count; i++)
		entityArray[i] = sub_101a08f0(pEHandles[i].Get());
	vfunc9(pszName, entityArray, count);
}
// END FUNCTION

// FUNCTION: 0x101a1080 size=0x81
#include "CSave.h"

void CSave::vfunc36(const void *pData, int count)
{
    int buf[256];
    const EHANDLE *pHandles = (const EHANDLE *)pData;
    for (int i = 0; i < count; i++)
        buf[i] = sub_101a08f0(((EHANDLE *)&pHandles[i])->Get());
    vfunc10(buf, count);
}
// END FUNCTION

// FUNCTION: 0x101a1140 size=0x110
#include "CSave.h"

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
extern void (*g_109f362c)(const char *, ...);

bool CSave::sub_101a1140(int a, void *pData, void *pBase, typedescription_t *pField)
{
    switch (pField->fieldType) {
    case 0xb:
        vfunc33(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xd:
        vfunc35(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xc:
        vfunc37(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xe:
        vfunc29(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xf:
        vfunc26(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0x10:
    case 0x11:
        vfunc17(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0x13:
        vfunc31(pBase, pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    default:
        g_109f362c("Bad field type\n");
        return false;
    }
}
// END FUNCTION

// FUNCTION: 0x101a12a0 size=0x8b
#include "CRestore.h"
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

inline void CRestoreVec::EnsureCapacity(int num)
{
	if (m_allocationCount < num && m_growSize != -1) {
		m_allocationCount = num;
		if (m_pMemory)
			m_pMemory = (int *)g_109f3638(m_pMemory, num * 4);
		else
			m_pMemory = (int *)g_109f3634(num * 4);
	}
	m_pElements = m_pMemory;
}

// TARGET: CRestore::CRestore
CRestore::CRestore(void *pData) : m_pData(pData), m_pData2(pData ? (char *)pData + 0x18 : 0), m_field20(0), m_bField24(true)
{
	m_vec.EnsureCapacity(32);
}
// END FUNCTION

// FUNCTION: 0x101a1360 size=0x13
#include "CBaseEntity.h"
#include "CRestore.h"
namespace lifted {
int __stdcall sub_10004f70(int, int, int);
}
int CRestore::vfunc2(CBaseEntity * a0, int a1)
{
    return lifted::sub_10004f70(*(int *)&a0, a1, a1);
}
// END FUNCTION

// FUNCTION: 0x101a1390 size=0x16
#include "CRestore.h"

int CRestore::vfunc10()
{
	int value;
	vfunc9((unsigned short *)&value);
	return value & 0xffff;
}
// END FUNCTION

// FUNCTION: 0x101a13c0 size=0x4
#include "CRestore.h"
// TARGET: sub_101a13c0
char __fastcall sub_101a13c0(CRestore *p) { return ((unsigned char *)p)[0x24]; }
// END FUNCTION

// FUNCTION: 0x101a13e0 size=0x4
#include "CRestore.h"
int CRestore::vfunc33()
{
    return *(int *)((char *)this + 0x1c);
}
// END FUNCTION

// FUNCTION: 0x101a1400 size=0x68
extern "C" __declspec(dllimport) void Plat_Free(void *);
extern int g_104626bc[];
struct SRestore {
    void *vt;
    void *m4;
    int m8;
    int mc;
    int m10;
    void *m14;
    SRestore *sub_101a1400(unsigned char flag);
};
// TARGET: SRestore::sub_101a1400
SRestore *SRestore::sub_101a1400(unsigned char flag)
{
    m10 = 0;
    if (mc != -1) {
        if (m4) { Plat_Free(m4); m4 = 0; }
        m8 = 0;
    }
    m14 = m4;
    if (mc != -1) {
        if (m4) { Plat_Free(m4); m4 = 0; }
        m8 = 0;
    }
    vt = g_104626bc;
    if (flag & 1)
        delete this;
    return this;
}
// END FUNCTION

// FUNCTION: 0x101a1490 size=0x7
// TARGET: sub_101a1490
int __fastcall sub_101a1490(char *pThis)
{
    return *(int *)(*(int *)(pThis + 0x18) + 8);
}
// END FUNCTION

// FUNCTION: 0x101a14b0 size=0x1d
#include "CRestore.h"

// TARGET: CRestore::sub_101a14b0
void CRestore::sub_101a14b0(int pos)
{
	int *piVar1 = (int *)m_pData;
	if (pos >= 0 && pos < piVar1[3]) {
		piVar1[2] = pos;
		piVar1[1] = piVar1[0] + pos;
	}
}
// END FUNCTION

// FUNCTION: 0x101a14e0 size=0x2a
#include "CRestore.h"

extern char g_106b8540[];
extern char g_10593064[];

struct CTokenTbl {
	char pad[0x10]; int m_nCount; char **m_ppStr;
	const char *StringFromSymbol(int token)
	{
		if (token >= 0 && token < m_nCount)
			return m_ppStr[token];
		return g_10593064;
	}
};

const char *CRestore::vfunc11(int token)
{
	CTokenTbl *t = *(CTokenTbl **)((char *)this + 0x18);
	const char *s = t->StringFromSymbol(token);
	if (s)
		return s;
	return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x101a1520 size=0x1bc
#include "datamap.h"
#include "CSave.h"
#include "SaveRestoreFieldInfo_t.h"

extern void (__cdecl *g_109f362c)(const char *pMsg, ...);

struct SaveFieldDesc101a1520
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	short fieldSize;
	short flags;
	const char *externalName;
	struct SaveOps101a1520 *pSaveRestoreOps;
	void *inputFunc;
	void *td;
};

struct SaveOps101a1520
{
	virtual void v0();
	virtual void Save(SaveRestoreFieldInfo_t *pInfo, ISave *pSave);
};

#define SAVE_SLOT(n) virtual void s##n();
struct SaveWriteSlots101a1520
{
	virtual int vfunc0();
	virtual void vfunc1(int pos);
	virtual void vfunc2(void *pData, void *pMap);
	SAVE_SLOT(3) SAVE_SLOT(4) SAVE_SLOT(5) SAVE_SLOT(6) SAVE_SLOT(7) SAVE_SLOT(8) SAVE_SLOT(9) SAVE_SLOT(10) SAVE_SLOT(11)
	virtual void vfunc12(void *pData, int count, int token);
	SAVE_SLOT(13) SAVE_SLOT(14)
	virtual void vfunc15(void *pData, int count, int token);
	SAVE_SLOT(16)
	virtual void vfunc17(void *pData, int count, int token);
	virtual void vfunc18(void *pData, int count, int token);
	virtual void vfunc19(void *pData, int count, int token);
	virtual void vfunc20(void *pData, int count, int token);
	SAVE_SLOT(21)
	virtual void vfunc22(void *pData, int count, int token);
};

void CSave::sub_101a1520(const unsigned short *pToken, void *pData, void *pRootMap, typedescription_t *pDesc)
{
	SaveFieldDesc101a1520 *pField = (SaveFieldDesc101a1520 *)pDesc;
	SaveWriteSlots101a1520 *pSlots = (SaveWriteSlots101a1520 *)this;
	switch (pField->fieldType) {
	case 1:
		pSlots->vfunc18(pData, pField->fieldSize, *pToken);
		return;
	case 2:
		pSlots->vfunc20(pData, pField->fieldSize, *pToken);
		return;
	case 3:
		pSlots->vfunc22(pData, pField->fieldSize, *pToken);
		return;
	case 5:
		pSlots->vfunc17(pData, pField->fieldSize, *pToken);
		return;
	case 6:
		pSlots->vfunc12(pData, pField->fieldSize, *pToken);
		return;
	case 7:
		pSlots->vfunc19(pData, pField->fieldSize, *pToken);
		return;
	case 4:
	case 8:
		pSlots->vfunc15(pData, pField->fieldSize, *pToken);
		return;
	case 9:
		if (pField->flags & 0x40)
			pData = *(void **)pData;
		pSlots->vfunc2(pData, pField->td);
		return;
	case 10: {
		int nEnd = pSlots->vfunc0() + *pToken;
		SaveRestoreFieldInfo_t info = { pData, (char *)pData - pField->fieldOffset[0], pDesc };
		pField->pSaveRestoreOps->Save(&info, this);
		pSlots->vfunc1(nEnd);
		return;
	}
	default:
		g_109f362c("Bad field type\n");
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x101a1750 size=0x17
#include "datamap.h"
#include "CRestore.h"
#include "CSave.h"

// TARGET: CRestore::sub_101a1750
void CRestore::sub_101a1750(const char *pszName, void *pData, void *pRootMap, typedescription_t *pField)
{
	if (*(int *)pField <= 10)
	{
		((CSave *)this)->sub_101a1520((const unsigned short *)pszName, pData, pRootMap, pField);
		return;
	}
	sub_101a2820((unsigned short *)pszName, (int *)pData, pRootMap, pField);
}
// END FUNCTION

// FUNCTION: 0x101a1780 size=0x26
struct CUnknown101a1780Arg {
    char m_pad0000[0x12];
    unsigned short m_wFlags12;	// 0x12
};

struct CUnknown101a1780View {
    char m_pad0000[0x20];
    int m_n20;	// 0x20
    bool sub_101a1780(CUnknown101a1780Arg *p);
};

// TARGET: CUnknown101a1780View::sub_101a1780
bool CUnknown101a1780View::sub_101a1780(CUnknown101a1780Arg *p)
{
    unsigned short f = p->m_wFlags12;
    if ((f & 2) == 0) {
        return false;
    }
    if (m_n20 != 0 && (f & 1) != 0) {
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x101a17c0 size=0x77
#include "CRestore.h"
struct CRestoreField { int pad; const char *fieldName; char rest[0x2c - 8]; };
extern "C" int _strcmpi(const char *, const char *);
CRestoreField *CRestore::sub_101a17c0(const char *name, CRestoreField *fields, int count, int *pStart)
{
    if (name) {
        for (int i = 0; i < count; i++) {
            CRestoreField *f = &fields[(*pStart)++];
            if (*pStart == count)
                *pStart = 0;
            if (!_strcmpi(f->fieldName, name))
                return f;
        }
    }
    *pStart = 0;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101a1860 size=0x26
// TARGET: CUnknown101a1860::sub_101a1860
#include "CUnknown101a1860.h"

bool CUnknown101a1860::sub_101a1860(CUnknown101a1860_Record *pRecord)
{
	unsigned short nFlags = pRecord->m_nFlags;
	if ((nFlags & 2) == 0)
		return false;
	if (m_p20 != 0 && (nFlags & 1) != 0)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x101a18a0 size=0xbb
#include <string.h>
#include "CRestore.h"

struct SaveRestoreFieldInfo_t
{
	void *pField;
	void *pOwner;
	typedescription_t *pTypeDesc;
};

struct ISaveRestoreOpsLocal
{
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual void Empty(SaveRestoreFieldInfo_t *pFieldInfo);
};

struct datamap_t
{
	typedescription_t *dataDesc;
	int dataNumFields;
};

struct typedescription_t
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	ISaveRestoreOpsLocal *pSaveRestoreOps;
	void *inputFunc;
	datamap_t *td;
	int fieldSizeInBytes;
	int unk;
};

extern int g_10592ac8[];

// TARGET: CRestore::vfunc4
void CRestore::vfunc4(void *pBaseData, typedescription_t *pFields, int fieldCount)
{
	for (int i = 0; i < fieldCount; i++)
	{
		typedescription_t *pField = &pFields[i];
		if (!sub_101a1860(pField))
			continue;
		void *pData = (char *)pBaseData + pField->fieldOffset[0];
		if (pField->fieldType == 10)
		{
			SaveRestoreFieldInfo_t fieldInfo;
			fieldInfo.pField = pData;
			fieldInfo.pOwner = pBaseData;
			fieldInfo.pTypeDesc = pField;
			pField->pSaveRestoreOps->Empty(&fieldInfo);
		}
		else if (pField->fieldType == 9)
		{
			if (pField->flags & 0x40)
				pData = *(void **)pData;
			vfunc4(pData, pField->td->dataDesc, pField->td->dataNumFields);
		}
		else
		{
			memset(pData, 0, g_10592ac8[pField->fieldType] * (short)pField->fieldSize);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101a1990 size=0xbe
#include "CRestore.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern void *(*g_109f3634)(unsigned int);	// Plat_Alloc
extern void *(*g_109f3638)(void *, unsigned int);	// Plat_Realloc

struct RestoreSlots
{
	virtual int s0();
	virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8();
	virtual void s9(unsigned short *p);
};

void CRestore::sub_101a1990(unsigned short *pValue)
{
	((RestoreSlots *)this)->s9(pValue);
	int value = ((RestoreSlots *)this)->s0() + *pValue;
	int elem = m_vec.m_size;
	if (m_vec.m_size + 1 > m_vec.m_allocationCount) {
		if (m_vec.m_growSize != -1) {
			int num = m_vec.m_size + 1 - m_vec.m_allocationCount;
			int nAllocationRequested = m_vec.m_allocationCount + num;
			while (m_vec.m_allocationCount < nAllocationRequested) {
				if (m_vec.m_allocationCount != 0) {
					if (m_vec.m_growSize != 0)
						m_vec.m_allocationCount += m_vec.m_growSize;
					else
						m_vec.m_allocationCount += m_vec.m_allocationCount;
				} else {
					m_vec.m_allocationCount = 8;
				}
			}
			if (m_vec.m_pMemory)
				m_vec.m_pMemory = (int *)g_109f3638(m_vec.m_pMemory, m_vec.m_allocationCount * 4);
			else
				m_vec.m_pMemory = (int *)g_109f3634(m_vec.m_allocationCount * 4);
		}
	}
	m_vec.m_pElements = m_vec.m_pMemory;
	m_vec.m_size++;
	int toMove = m_vec.m_size - elem - 1;
	if (toMove > 0)
		memmove(&m_vec.m_pMemory[elem + 1], &m_vec.m_pMemory[elem], toMove * 4);
	int *p = &m_vec.m_pMemory[elem];
	if (p)
		*p = value;
}
// END FUNCTION

// FUNCTION: 0x101a1a80 size=0x3b
#include "CRestore.h"

__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int nMaxLen);

// TARGET: CRestore::vfunc6
void CRestore::vfunc6(void *pData)
{
	unsigned short value[2];
	vfunc7(value);
	Q_strncpy((char *)pData, vfunc11(value[1]), 0x20);
}
// END FUNCTION

// FUNCTION: 0x101a1ad0 size=0x11
#include "CRestore.h"

// TARGET: CRestore::vfunc5
void CRestore::vfunc5()
{
	char buf[32];
	vfunc6(buf);
}
// END FUNCTION

// FUNCTION: 0x101a1b00 size=0x42
#include "utlrbtree.h"
#include "CRestore.h"
#include "utlvector.h"

struct CRestoreSlot1 { virtual void a(); virtual void vfunc1(int v); };

// TARGET: CRestore::vfunc8
void CRestore::vfunc8()
{
	const CUtlVector<int> *pVec = (const CUtlVector<int> *)&m_vec;
	int v = pVec->Element(pVec->Count() - 1);
	((CUtlVector<int> *)&m_vec)->Remove(pVec->Count() - 1);
	((CRestoreSlot1 *)this)->vfunc1(v);
}
// END FUNCTION

// FUNCTION: 0x101a1b70 size=0x22f
#include "CRestore.h"
#include "datamap.h"
#include <string.h>
#include <stdlib.h>

struct CSaveRestoreSegment_101a1b70;

extern void (*g_109f3628)(const char *pszFormat, ...);	// Msg
extern void (*g_109f362c)(const char *pszFormat, ...);	// Warning

struct CUnknown101a1780Arg;
class CUnknown101a1780View
{
public:
	bool sub_101a1780(CUnknown101a1780Arg *pField);
};

struct SaveRestoreRecordHeader_View
{
	unsigned short size;
	unsigned short token;
};

struct CRestoreFieldView
{
	int m_pad00[2];
	int fieldOffset;
};

struct CSaveRestoreSegment_101a1b70
{
	char *pBaseData;
	char *pCurrentData;
	int size;
	int bufferSize;
	int tokenCount;
	char **pTokens;

	static unsigned int HashString(const char *pszToken)
	{
		unsigned int hash = 0;
		while (*pszToken)
			hash = _rotr(hash, 4) ^ *pszToken++;
		return hash;
	}

	unsigned short FindCreateSymbol(const char *pszToken)
	{
		unsigned short hash = (unsigned short)(HashString(pszToken) % (unsigned)tokenCount);
		for (int i = 0; i < tokenCount; i++)
		{
			int index = hash + i;
			if (index >= tokenCount)
				index -= tokenCount;
			if (!pTokens[index] || strcmp(pszToken, pTokens[index]) == 0)
			{
				pTokens[index] = (char *)pszToken;
				return index;
			}
		}
		g_109f362c("CSaveRestoreBuffer::TokenHash() is COMPLETELY FULL!");
		return 0;
	}

	const char *StringFromSymbol(int token)
	{
		if (token >= 0 && token < tokenCount)
			return pTokens[token];
		return "<<illegal>>";
	}

	void MoveCurPos(int nBytes)
	{
		pCurrentData += nBytes;
		size += nBytes;
	}

	void Rewind(int nBytes)
	{
		if (size < nBytes)
			nBytes = size;
		MoveCurPos(-nBytes);
	}
};

struct SaveRestoreRecordHeader_t
{
	unsigned short size;
	unsigned short symbol;
};

struct TypeDescV_101a1b70
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[1];
};

namespace block_101a1b70 {
#pragma auto_inline(off)
struct C1780Arg { char m_pad0000[0x12]; unsigned short m_wFlags12; };
struct C1780Unit { char m_pad0000[0x20]; int m_n20; bool sub_101a1780(C1780Arg *p); };
bool C1780Unit::sub_101a1780(C1780Arg *p)
{
    unsigned short f = p->m_wFlags12;
    if ((f & 2) == 0) {
        return false;
    }
    if (m_n20 != 0 && (f & 1) != 0) {
        return false;
    }
    return true;
}
#pragma auto_inline(on)
}
using namespace block_101a1b70;
#define SEG_101a1b70 ((CSaveRestoreSegment_101a1b70 *)m_pData)

int CRestore::vfunc3(int a, int b, int c, int d, int e)
{
	const char *pname = (const char *)a;
	vfunc13();
	short curSym = vfunc13();
	if (curSym != SEG_101a1b70->FindCreateSymbol(pname))
	{
		g_109f3628("Expected %s found %s!\n", pname, sub_101a1f70());
		SEG_101a1b70->Rewind(2 * sizeof(short));
		return 0;
	}
	vfunc4((void *)b, (typedescription_t *)d, e);

	SaveRestoreRecordHeader_t header;
	int nFieldsSaved = vfunc14();
	{
	int searchCookie = 0;
	int i;

	for (i = 0; i < nFieldsSaved; i++)
	{
		vfunc9((unsigned short *)&header);

		TypeDescV_101a1b70 *pField;
		pField = (TypeDescV_101a1b70 *)sub_101a17c0(SEG_101a1b70->StringFromSymbol(header.symbol), (CRestoreField *)d, e, &searchCookie);
		if (pField && ((C1780Unit *)this)->sub_101a1780((C1780Arg *)pField))
		{
			sub_101a1750((const char *)&header, ((char *)b + pField->fieldOffset[0]), (void *)c, (typedescription_t *)pField);
		}
		else
		{
			sub_1000910b(header.size);
		}
	}

	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101a1e30 size=0x30
#include "CRestore.h"
void CRestore::vfunc9(unsigned short *pValue)
{
	if (pValue) {
		pValue[0] = vfunc13();
		pValue[1] = vfunc13();
		return;
	}
	sub_1000910b(4);
}
// END FUNCTION

// FUNCTION: 0x101a1e70 size=0x1c
#include "CRestore.h"

// TARGET: CRestore::vfunc13
short CRestore::vfunc13()
{
	int v = 0;
	sub_101a1f90(&v, 2);
	return v;
}
// END FUNCTION

// FUNCTION: 0x101a1ea0 size=0x1b
// TARGET: CRestore::vfunc14
#include "CRestore.h"
int CRestore::vfunc14()
{
	int v = 0;
	sub_101a1f90(&v, 4);
	return v;
}
// END FUNCTION

// FUNCTION: 0x101a1ed0 size=0x18
#include "CRestore.h"
char CRestore::vfunc16()
{
	char c = 0;
	sub_101a1f90(&c, 1);
	return c;
}
// END FUNCTION

// FUNCTION: 0x101a1f00 size=0x47
#include "CRestore.h"
struct CRestoreDesc { int m_n0, m_n4, m_n8; CRestoreDesc *m_pParent; };
int CRestore::sub_101a1f00(int a, int b, CRestoreDesc *p)
{
    if (p->m_pParent) {
        if (!sub_10004f70(a, b, p->m_pParent))
            return 0;
    }
    vfunc3(p->m_n8, a, b, p->m_n0, p->m_n4);
}
// END FUNCTION

// FUNCTION: 0x101a1f70 size=0xc
#include "CUnknown101a1f70.h"
int CUnknown101a1f70::sub_101a1f70()
{
	if (m_unk18 == 0)
		return 0;
	return m_unk18->m_unk4;
}
// END FUNCTION

// FUNCTION: 0x101a1f90 size=0x6b
#include "vampire_all.h"
#include "CUnknown101a1f70.h"

extern void (*g_109f362c)(const char *, ...);

void CUnknown101a1f70::sub_101a1f90(void *dst, int size)
{
	CUnknown101a1f70_Record *r = m_unk18;
	if (r) {
		int end = *(volatile int *)&r->m_unkc;
		if (end - r->m_unk8 != 0) {
			int avail = r->m_unkc - r->m_unk8;
			if (avail != 0) {
				if (size > avail) {
					r->m_unk8 = r->m_unkc;
				} else {
					if (dst)
						memcpy(dst, (void *)r->m_unk4, size);
					r->m_unk4 += size;
					r->m_unk8 += size;
					return;
				}
			}
			g_109f362c("Restore underflow!");
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101a2020 size=0xf
namespace lifted {
int __stdcall sub_1000fe9d(int, int);
}
int __stdcall sub_101a2020(int a0)
{
    return lifted::sub_1000fe9d(0, a0);
}
// END FUNCTION

// FUNCTION: 0x101a2040 size=0x3f
#include "CRestore.h"

struct CRestoreCalleePlaceholder {
    void sub_1000fe9d(int a, int n);
    void sub_1000910b(int n);
};

// TARGET: CRestore::vfunc12
unsigned int CRestore::vfunc12(int a, int b, int c)
{
    int n = b * 2;
    if (c != 0 && n >= c) {
        n = c;
    }
    ((CRestoreCalleePlaceholder *)this)->sub_1000fe9d(a, n);
    if (n < c) {
        ((CRestoreCalleePlaceholder *)this)->sub_1000910b(c - n);
    }
    return (unsigned int)n >> 1;
}
// END FUNCTION

// FUNCTION: 0x101a2090 size=0x44
#include "CRestore.h"

int CRestore::vfunc15(int *pValues, int count, int nBytesAvailable)
{
	int n = count * 4;
	if (nBytesAvailable != 0 && n >= nBytesAvailable)
		n = nBytesAvailable;
	sub_1000fe9d((int)pValues, n);
	if (n < nBytesAvailable)
		sub_1000910b(nBytesAvailable - n);
	return (int)((unsigned int)n >> 2);
}
// END FUNCTION

// FUNCTION: 0x101a2100 size=0x3a
#include "CRestore.h"

// TARGET: CRestore::vfunc17
int CRestore::vfunc17(void *p, int count, int nBytesAvailable)
{
	int desired = count * sizeof(char);
	int actual = (nBytesAvailable == 0) ? desired : ((desired < nBytesAvailable) ? desired : nBytesAvailable);
	sub_101a1f90(p, actual);
	if (actual < nBytesAvailable)
		sub_1000910b(nBytesAvailable - actual);
	return actual / sizeof(char);
}
// END FUNCTION

// FUNCTION: 0x101a2150 size=0x44
#include "CRestore.h"

int CRestore::vfunc18(float *pValues, int count, int nBytesAvailable)
{
	int n = count * 4;
	if (nBytesAvailable != 0 && n >= nBytesAvailable)
		n = nBytesAvailable;
	sub_1000fe9d((int)pValues, n);
	if (n < nBytesAvailable)
		sub_1000910b(nBytesAvailable - n);
	return (int)((unsigned int)n >> 2);
}
// END FUNCTION

// FUNCTION: 0x101a21c0 size=0x3a
#include "CRestore.h"

// TARGET: CRestore::vfunc19
int CRestore::vfunc19(void *p, int count, int nBytesAvailable)
{
	int desired = count * sizeof(char);
	int actual = (nBytesAvailable == 0) ? desired : ((desired < nBytesAvailable) ? desired : nBytesAvailable);
	sub_101a1f90(p, actual);
	if (actual < nBytesAvailable)
		sub_1000910b(nBytesAvailable - actual);
	return actual / sizeof(char);
}
// END FUNCTION

// FUNCTION: 0x101a2210 size=0x2a
#include "CRestore.h"

extern void (*g_109f3890)(char *, const char *, int);
void __stdcall sub_1000910b(int n);

// TARGET: CRestore::vfunc21
void CRestore::vfunc21(char *pDest, int n, int a)
{
    const char *src = (const char *)sub_101a1f70();
    ::sub_1000910b(a);
    g_109f3890(pDest, src, n);
}
// END FUNCTION

// FUNCTION: 0x101a2250 size=0x7b
#include "CRestore.h"
#include "CUnknown101a1f70.h"

struct PooledString1042
{
	PooledString1042() {}
	PooledString1042(const PooledString1042 &o) : m_v(o.m_v) {}
	PooledString1042 &operator=(const PooledString1042 &o) { m_v = o.m_v; return *this; }
	int m_v;
};
PooledString1042 sub_1042bff0(const char *psz);

struct CRestoreUnit : CRestore
{
	void sub_101a2020(int nBytes);
};

// TARGET: CRestore::vfunc20
int CRestore::vfunc20(int *pValues, int count, int nBytesAvailable)
{
	const char *pString = (const char *)((CUnknown101a1f70 *)this)->sub_101a1f70();
	const char *pLimit = pString + nBytesAvailable;
	int nRead = 0;
	PooledString1042 *pDest = (PooledString1042 *)pValues;
	while (nRead < count && pString < pLimit)
	{
		if (*pString == 0)
			pDest[nRead].m_v = 0;
		else
			pDest[nRead] = sub_1042bff0(pString);
		while (*pString)
			pString++;
		pString++;
		nRead++;
	}
	((CRestoreUnit *)this)->sub_101a2020(nBytesAvailable);
	return nRead;
}
// END FUNCTION

// FUNCTION: 0x101a22f0 size=0x14
#include "CRestore.h"
namespace lifted {
int __stdcall sub_1000fe9d(int, int);
}
int CRestore::vfunc23(int a0)
{
    lifted::sub_1000fe9d(a0, 0xc);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101a2320 size=0x4c
#include "CRestore.h"

int CRestore::vfunc22(Vector *pValues, int count, int nBytesAvailable)
{
	int desired = count * 12;
	int actual;

	if (nBytesAvailable == 0)
		actual = desired;
	else
	{
		actual = ((desired < nBytesAvailable) ? desired : nBytesAvailable);
	}

	sub_101a1f90(pValues, actual);

	if (actual < nBytesAvailable)
		sub_1000910b(nBytesAvailable - actual);

	return (actual / 12u);
}
// END FUNCTION

// FUNCTION: 0x101a2390 size=0x5e
#include "CRestore.h"
#include "CBaseEntity.h"

struct SSaveEntRec2390 {
	int m_id;
	char pad[0xc];
	EHANDLE m_hEnt;
	char pad2[0x30 - 0x14];
};
struct SSaveData2390 {
	char pad[0x1318];
	int m_nEnts;
	SSaveEntRec2390 *m_pEnts;
};

CBaseEntity *CRestore::sub_101a2390(int index)
{
	SSaveData2390 *pData = (SSaveData2390 *)m_pData2;
	if (pData && index >= 0) {
		int i = 0;
		if (pData->m_nEnts > 0) {
			SSaveEntRec2390 *p = pData->m_pEnts;
			do {
				if (p->m_id == index)
					return p->m_hEnt.Get();
				i++;
				p++;
			} while (i < pData->m_nEnts);
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a2410 size=0x34
#include "CRestore.h"
struct CRestoreSaveRecord30 { int m_nId; char m_pad04[0x2c]; };
struct CRestoreSaveTable { char m_pad0000[0x1318]; int m_nRecords; CRestoreSaveRecord30 *m_pRecords; };
CRestoreSaveEnt *CRestore::sub_101a2410(int index)
{
	CRestoreSaveTable *pTable = (CRestoreSaveTable *)m_pData2;
	if (pTable && index >= 0) {
		int i = 0;
		if (pTable->m_nRecords > 0) {
			CRestoreSaveRecord30 *pRec = pTable->m_pRecords;
			do {
				if (pRec->m_nId == index)
					return (CRestoreSaveEnt *)pRec;
				i++;
				pRec++;
			} while (i < pTable->m_nRecords);
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a2460 size=0x96
#include "CBaseEntity.h"
#include "CRestore.h"
#include <string.h>

// TARGET: CRestore::vfunc28
int CRestore::vfunc28(CBaseEntity **pValues, int count, int nBytesAvailable)
{
    int ids[256];
    int nRead = vfunc15(ids, count, nBytesAvailable);
    for (int i = 0; i < nRead; i++)
        pValues[i] = sub_101a2390(ids[i]);
    if (nRead < count)
        memset(&pValues[nRead], 0, (count - nRead) * sizeof(CBaseEntity *));
    return nRead;
}
// END FUNCTION

// FUNCTION: 0x101a2530 size=0xa3
#include <string.h>
#include "CBaseEntity.h"
#include "CRestore.h"

int CRestore::vfunc29(int *pValues, int count, int nBytesAvailable)
{
    int buf[256];
    int n = vfunc15(buf, count, nBytesAvailable);
    for (int i = 0; i < n; i++) {
        CBaseEntity *pEnt = sub_101a2390(buf[i]);
        pValues[i] = pEnt ? pEnt->m_pEdict2e0 : 0;
    }
    if (n < count)
        memset(&pValues[n], 0, (count - n) * 4);
    return n;
}
// END FUNCTION

// FUNCTION: 0x101a2610 size=0xaa
#include "CRestore.h"
extern "C" void *__cdecl memset(void *, int, unsigned int);

struct HandleSrc {
	virtual void pad0();
	virtual unsigned int *GetRefEHandle();
};

int CRestore::vfunc30(unsigned int *pValues, int count, int nBytesAvailable)
{
	int buf[256];
	int n = vfunc15(buf, count, nBytesAvailable);
	for (int i = 0; i < n; i++) {
		HandleSrc *e = (HandleSrc *)sub_101a2390(buf[i]);
		if (e)
			pValues[i] = *e->GetRefEHandle();
		else
			pValues[i] = 0xffffffff;
	}
	if (n < count)
		memset(&pValues[n], 0, (count - n) * sizeof(unsigned int));
	return n;
}
// END FUNCTION

// FUNCTION: 0x101a26f0 size=0xec
#include "CRestore.h"
#include "CGlobalEntityList.h"
extern "C" void *__cdecl memset(void *, int, unsigned int);
extern CGlobalEntityList *g_10566458;
int CRestore::vfunc31(int *pValues, int count, int nBytesAvailable)
{
    int buf[256];
    int n = vfunc15(buf, count, nBytesAvailable);
    if (0 < n) {
        int *p = pValues;
        int remaining = n;
        do {
            CRestoreSaveEnt *pRec = sub_101a2410(*(int *)((char *)buf + ((char *)p - (char *)pValues)));
            *p = -1;
            if (pRec) {
                unsigned int h = pRec->m_hEntity;
                int value;
                if (h != -1) {
                    CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
                    if (s->m_Serial == (h >> 13) && s->m_pEntity) {
                        value = *(volatile int *)&pRec->m_hEntity;
                        goto store;
                    }
                }
                value = pRec->m_nIndex;
                if (value <= 0 || value >= 0xffff)
                    goto next;
                value = -value;
store:
                *p = value;
            }
next:
            p++;
            remaining--;
        } while (remaining != 0);
    }
    if (n < count)
        memset(pValues + n, 0, (count - n) * 4);
    return n;
}
// END FUNCTION

// FUNCTION: 0x101a2820 size=0x198
#include "CBaseEntity.h"
#include "datamap.h"
#include "CRestore.h"
#include "CUnknown1070b248.h"

struct RestoreFieldView
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	short fieldSize;
};
__declspec(dllimport) void Warning(const char *pMsg, ...);
extern CUnknown1070b248 *g_1070b248;

void CRestore::sub_101a2820(unsigned short *pSize, int *pValues, void *pBase, typedescription_t *pField)
{
	RestoreFieldView *pF = (RestoreFieldView *)pField;
	switch (pF->fieldType) {
	case 0xe:
		vfunc25((Vector *)pValues, pF->fieldSize, *pSize);
		return;
	case 0xf:
		vfunc24((float *)pValues, pF->fieldSize, *pSize);
		return;
	case 0x13:
		vfunc27(pBase, pValues, pF->fieldSize, *pSize);
		return;
	case 0x10:
	case 0x11: {
		int n = vfunc20(pValues, pF->fieldSize, *pSize);
		if (m_bField24) {
			for (int i = 0; i < n; i++) {
				if (pValues[i]) {
					if (pF->fieldType == 0x10)
						engine->vfunc13((const char *)pValues[i], 0);
					else if (pF->fieldType == 0x11)
						g_1070b248->vfunc0((const char *)pValues[i], 0);
				}
			}
		}
		return;
	}
	case 0xb:
		vfunc28((CBaseEntity **)pValues, pF->fieldSize, *pSize);
		return;
	case 0xd:
		vfunc29(pValues, pF->fieldSize, *pSize);
		return;
	case 0xc:
		vfunc30((unsigned int *)pValues, pF->fieldSize, *pSize);
		return;
	default:
		Warning("Bad field type\n");
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x101a2a30 size=0x3d
#include "CRestore.h"

// TARGET: CRestore::vfunc24
int CRestore::vfunc24(float *pValues, int count, int nBytesAvailable)
{
	float flAdd = *(float *)(m_pData2 + 0x12e8);
	int n = vfunc18(pValues, count, nBytesAvailable);
	for (int i = n - 1; i >= 0; i--)
		pValues[i] = flAdd + pValues[i];
	return n;
}
// END FUNCTION

// FUNCTION: 0x101a2a80 size=0x11
void __fastcall sub_101a2a80(int *p, int dummy, int a)
{
    typedef void (__fastcall *VFunc)(void *, void *, int, int, int);
    ((VFunc)(*(int **)p)[25])(p, (void *)a, a, 1, 0xc);
}
// END FUNCTION

// FUNCTION: 0x101a2ab0 size=0x7f
#include "CRestore.h"

extern Vector g_1070d1b0;

// TARGET: CRestore::vfunc25
int CRestore::vfunc25(Vector *pValues, int count, int nBytesAvailable)
{
	const Vector *pOffset;
	if (*(int *)(m_pData2 + 0x12c4))
		pOffset = (const Vector *)(m_pData2 + 0x12dc);
	else
		pOffset = &g_1070d1b0;
	Vector vecOffset = *pOffset;
	int nRead = vfunc22(pValues, count, nBytesAvailable);
	for (int i = nRead - 1; i >= 0; i--)
		VectorAdd(vecOffset, pValues[i], pValues[i]);
	return nRead;
}
// END FUNCTION

// FUNCTION: 0x101a2b50 size=0x41
#include "CRestore.h"
int sub_1019f7d0(void *, const char *);
void __stdcall sub_101a2020(int);
int CRestore::vfunc27(void *pBase, int *pValues, int count, int nBytesAvailable)
{
	const char *p = (const char *)sub_101a1f70();
	sub_101a2020(nBytesAvailable);
	if (*p == 0) {
		*pValues = 0;
		return 0;
	}
	*pValues = sub_1019f7d0(pBase, p);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a2bc0 size=0x5
int sub_101a2c00(void);
int g_1072bb40 = ((int (*)(int))sub_101a2c00)(0);
// END FUNCTION

// FUNCTION: 0x101a2c00 size=0x1a
namespace lifted {
extern int g_10592b18;
extern int g_10592b1c;
extern char g_10592b5c;
}
int sub_101a2c00()
{
    lifted::g_10592b1c = 9;
    lifted::g_10592b18 = (int)&lifted::g_10592b5c;
    return (int)&lifted::g_10592b18;
}
// END FUNCTION

// FUNCTION: 0x101a2c30 size=0xdc
#include "CUnknown101a2c30.h"
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
#include "CEntitySaveRestoreBlockHandler.h"

extern CGlobalEntityList g_106eb5d8;
struct SREnt : CBaseEntity
{
	int edict() { return m_pEdict2e0; }
	int entindex() { return engine->vfunc35(edict()); }
	int RequiredEdictIndex() { return vfunc131(); }
};

bool CEntitySaveRestoreBlockHandler::sub_101a2c30(CUnknown101a2c30 *pSaveData)
{
	int number_of_entities = g_106eb5d8.sub_100f7040();
	pSaveData->InitEntityTable((entitytable_t *)engine->vfunc47(sizeof(entitytable_t) * number_of_entities, 1), number_of_entities);

	CBaseEntity *pEnt = 0;
	int i = 0;
	while ((pEnt = g_106eb5d8.sub_100f7060(pEnt)) != 0)
	{
		entitytable_t *pEntInfo = pSaveData->GetEntityInfo(i);
		pEntInfo->id = i;
		pEntInfo->edictindex = ((SREnt *)pEnt)->RequiredEdictIndex();
		pEntInfo->restoreentityindex = -1;
		pEntInfo->saveentityindex = pEnt ? ((SREnt *)pEnt)->entindex() : -1;
		pEntInfo->hEnt = pEnt;
		pEntInfo->classname = 0;
		pEntInfo->globalname = 0;
		pEntInfo->location = 0;
		pEntInfo->size = 0;
		pEntInfo->modelname = 0;
		i++;
	}
	return i == pSaveData->NumEntities();
}
// END FUNCTION

// FUNCTION: 0x101a2d50 size=0xbd
#include "CBaseEntity.h"
#include "CEntitySaveRestoreBlockHandler.h"
#include "CGlobalEntityList.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" __declspec(dllimport) void Warning(const char *, ...);
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

static __forceinline CBaseEntity *FindEntityByGlobalName(const char *pszGlobalname)
{
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0);
	while (pEnt) {
		const char *pszArg = pszGlobalname ? pszGlobalname : g_106b8540;
		const char *pszEnt = *(const char **)((char *)pEnt + 0x120);
		if (!pszEnt)
			pszEnt = g_106b8540;
		if (_strcmpi(pszEnt, pszArg) == 0)
			return pEnt;
		pEnt = g_106eb5d8.sub_100f7060(pEnt);
	}
	return pEnt;
}

CBaseEntity *CEntitySaveRestoreBlockHandler::sub_101a2d50(const char *pszClassname, const char *pszGlobalname)
{
	CBaseEntity *pEnt = FindEntityByGlobalName(pszGlobalname);
	if (pEnt) {
		const char *pszArgClass = pszClassname ? pszClassname : g_106b8540;
		const char *pszEntClass = *(const char **)((char *)pEnt + 0x11c);
		if (!pszEntClass)
			pszEntClass = g_106b8540;
		if (_strcmpi(pszEntClass, pszArgClass) != 0) {
			const char *pszEntClass2 = *(const char **)((char *)pEnt + 0x11c);
			if (!pszEntClass2)
				pszEntClass2 = g_106b8540;
			Warning("Global entity found %s, wrong class %s [expects class %s]\n", pszGlobalname ? pszGlobalname : g_106b8540, pszEntClass2, pszClassname);
			return 0;
		}
	}
	return pEnt;
}
// END FUNCTION

// FUNCTION: 0x101a2e40 size=0x430
#define vfunc7() vfunc7(void *pRestore, char createPlayers, int unused)
#include "CEntitySaveRestoreBlockHandler.h"
#undef vfunc7
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CEntitySaveRestoreBlockHandler.h"
#include "CUnknown10057680.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"

struct CBaseEntityGN { char pad[0x120]; const char *m_iGlobalname120; };
struct SRestoreInfoV;
struct SRestoreV {
	virtual void v0();
	virtual void SetReadPos(int pos);
	virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
	virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32();
	virtual SRestoreInfoV *GetGameSaveRestoreInfo();
};
struct SEntInfoV {
	int id;
	int edictindex;
	int saveentityindex;
	int restoreentityindex;
	EHANDLE hEnt;
	int location;
	int size;
	int m1c;
	__int64 flags;
	const char *classname;
	int m2c;
};
struct SRestoreInfoV {
	char pad[0x1318];
	int m_nEntities;
	SEntInfoV *m_pEntityTable;
	int NumEntities() { return m_nEntities; }
	SEntInfoV *GetEntityInfo(int i) { return &m_pEntityTable[i]; }
};
struct SGlobalEntityV {
	char pad[0x40];
	char levelName[0x20];
	int state;
};
CBaseEntity *sub_10136580(const char *);
CBaseEntity *sub_1015d790(const char *, int);
void sub_1011a580(CBaseEntity *);
void sub_101cd970(CBaseEntity *);
__declspec(dllimport) void Warning(const char *, ...);
extern "C" int _strcmpi(const char *, const char *);
struct CGlobalStateV : CUnknown10057680 { char *sub_10057800(const char *pszName); };
extern CUnknown10057680 g_106be530;
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct gstr_t
{
	const char *pszValue;
	bool operator!() const { return (pszValue == 0); }
	bool operator!=(const gstr_t &rhs) const { return (pszValue != rhs.pszValue); }
	const char *ToCStr() const { return (pszValue) ? pszValue : g_106b8540; }
};
struct cgstr_t : gstr_t { cgstr_t() { pszValue = 0; } };
#define NULL_STRING cgstr_t()
#define STRING(s) (s).ToCStr()
struct CBaseEntityGS { char pad[0x11c]; gstr_t m_iClassname; gstr_t m_iGlobalname; };
struct CGlobalVarsGS { char pad[0x24]; gstr_t mapname; };
#define GPG ((CGlobalVarsGS *)gpGlobals)
struct CGlobalStateGS : CUnknown10057680 { SGlobalEntityV *sub_10057800(gstr_t name); void sub_10057740(gstr_t name, gstr_t map, int state); };
namespace block_101a2e40 {
inline bool FStrEq(const char *a, const char *b) { return _strcmpi(a, b) == 0; }
inline void *INDEXENT(int i) { return engine->vfunc38(i); }

struct CESRBHUnit : CEntitySaveRestoreBlockHandler {
	char sub_101a3380(CBaseEntity *pEntity, void *pRestore);
	int RestoreEntity(CBaseEntity *pEntity, SRestoreV *pRestore, SEntInfoV *pEntInfo)
	{
		if (!sub_101a3380(pEntity, pRestore))
			return 0;
		CBaseEntityGS *pE = (CBaseEntityGS *)pEntity;
		if (pE->m_iGlobalname != NULL_STRING) {
			SGlobalEntityV *pGlobal = ((CGlobalStateGS *)&g_106be530)->sub_10057800(pE->m_iGlobalname);
			if (pGlobal) {
				if (pGlobal->state == 2)
					return -1;
				else if (!FStrEq(STRING(GPG->mapname), pGlobal->levelName))
					pEntity->sub_100a8060();
			} else {
				Warning("Global Entity %s (%s) not in table!!!\n", STRING(pE->m_iGlobalname), STRING(pE->m_iClassname));
				((CGlobalStateGS *)&g_106be530)->sub_10057740(pE->m_iGlobalname, GPG->mapname, 1);
			}
		}
		return 0;
	}
};
}
using namespace block_101a2e40;

// TARGET: CEntitySaveRestoreBlockHandler::vfunc7
void CEntitySaveRestoreBlockHandler::vfunc7(void *pRestoreArg, char createPlayers, int unused)
{
	SRestoreV *pRestore = (SRestoreV *)pRestoreArg;
	SEntInfoV *pEntInfo;
	CBaseEntity *pent;
	SRestoreInfoV *pSaveData = pRestore->GetGameSaveRestoreInfo();
	int i;
	for (i = 0; i < pSaveData->NumEntities(); i++) {
		pEntInfo = pSaveData->GetEntityInfo(i);
		if (pEntInfo->classname && pEntInfo->size && !(pEntInfo->flags & 0x4000000000000000i64)) {
			if (pEntInfo->edictindex == 0) {
				pent = sub_10136580(STRINGR(pEntInfo->classname));
				pRestore->SetReadPos(pEntInfo->location);
				if (((CESRBHUnit *)this)->RestoreEntity(pent, pRestore, pEntInfo) < 0) {
					pEntInfo->hEnt = 0;
					pEntInfo->restoreentityindex = -1;
					sub_101cd970(pent);
				} else {
					sub_1011a580(pent);
				}
			} else if (pEntInfo->edictindex > 0 && pEntInfo->edictindex < gpGlobals->maxClients + 1) {
				if (!(pEntInfo->flags & 0x8000000000000000i64))
					Warning("ENTITY IS NOT A PLAYER: %d\n", i);
				int ed = (int)INDEXENT(pEntInfo->edictindex);
				if (ed && createPlayers)
					pent = sub_1015d790(STRINGR(pEntInfo->classname), ed);
				else
					pent = 0;
			} else {
				pent = sub_10136580(STRINGR(pEntInfo->classname));
			}
			pEntInfo->hEnt = pent;
			pEntInfo->restoreentityindex = pent ? engine->vfunc35(pent->m_pEdict2e0) : -1;
			if (pent && pEntInfo->restoreentityindex == 0) {
				if (_strcmpi(STRINGR(pent->m_classname11c), "worldspawn") != 0)
					pEntInfo->restoreentityindex = -1;
			}
		} else {
			pEntInfo->hEnt = 0;
			pEntInfo->restoreentityindex = -1;
		}
	}
	for (i = 0; i < pSaveData->NumEntities(); i++) {
		pEntInfo = pSaveData->GetEntityInfo(i);
		if (pEntInfo->edictindex != 0) {
			pent = pEntInfo->hEnt;
			pRestore->SetReadPos(pEntInfo->location);
			if (pent) {
				CBaseHandle h;
				h = (IHandleEntity *)pent;
				pent->vfunc127((int)pRestore);
				if (pent->vfunc117() & 4)
					pent->vfunc103();
				else
					pent->vfunc104();
				if (g_10566458->sub_100290c0((const unsigned int *)&h))
					g_10566458->sub_100290c0((const unsigned int *)&h)->sub_1009d1e0();
				if (g_10566458->sub_100290c0((const unsigned int *)&h) && ((CBaseEntityGN *)pent)->m_iGlobalname120) {
					char *pGlobal = ((CGlobalStateV *)&g_106be530)->sub_10057800(((CBaseEntityGN *)pent)->m_iGlobalname120);
					if (pGlobal && *(int *)(pGlobal + 0x60) != 2) {
						if (_strcmpi(STRINGR(gpGlobals->mapname), pGlobal + 0x40) != 0)
							pent->sub_100a8060();
					} else if (!pGlobal) {
						Warning("Global Entity %s (%s) not in table!!!\n", STRINGR(((CBaseEntityGN *)pent)->m_iGlobalname120), STRINGR(pent->m_classname11c));
						g_106be530.sub_10057740(((CBaseEntityGN *)pent)->m_iGlobalname120, gpGlobals->mapname, 1);
					} else {
						pEntInfo->hEnt = 0;
						sub_101cd970(pent);
						continue;
					}
				}
				sub_1011a580(pent);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101a3380 size=0xb3
#include "CBaseEntity.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct VEnt {
    virtual void s0();
    virtual unsigned int *GetHandle();
    V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
    virtual void sa();
    virtual void Hook103();
    virtual void Hook104();
    V10(k)
    virtual void sb0(); virtual void sb1();
    virtual int GetFlags();
    virtual void sc0(); virtual void sc1(); virtual void sc2(); virtual void sc3(); virtual void sc4(); virtual void sc5(); virtual void sc6(); virtual void sc7(); virtual void sc8();
    virtual int Set127(int a);
};
struct HandleEntry { CBaseEntity *ent; int serial; int pad; };
struct HandleTable { int pad; HandleEntry e[1]; };
extern HandleTable *g_10566458;
struct EHandle {
    unsigned int h;
    CBaseEntity *Get() const {
        if (h != 0xffffffff) {
            HandleEntry *p = &g_10566458->e[h & 0x1fff];
            if (p->serial == (int)(h >> 13))
                return p->ent;
        }
        return 0;
    }
};

bool __stdcall sub_101a3380(VEnt *ent, int arg)
{
    EHandle h;
    h.h = ent ? *ent->GetHandle() : 0xffffffff;
    ent->Set127(arg);
    if (ent->GetFlags() & 4)
        ent->Hook103();
    else
        ent->Hook104();
    if (h.Get())
        h.Get()->sub_1009d1e0();
    return h.Get() != 0;
}
// END FUNCTION

// FUNCTION: 0x101a3470 size=0x23b
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CEntitySaveRestoreBlockHandler.h"
#include "CUnknown10057680.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "CRestore.h"
#include "globalvars.h"

struct CSaveRestoreDataView { char *m_pBase; char *m_pCur; int m_nPos; int m_nSize; char m_pad10[0x12f4 - 0x10]; int m_vecLandmark[3]; char m_pad1300[4]; char m_szMap[1]; };
struct CEntityTableView { char m_pad0[0x14]; int m_nLocation; };
struct CRestoreRaw { void *m_vptr; int m_vec[5]; void *m_pData; char *m_pData2; int m_field20; bool m_bField24; };
struct CEntGN { char pad[0x11c]; const char *m_iClassname; const char *m_iGlobalname; };
struct CEntInit { CBaseEntity *sub_1009d980(char b); };
struct CGlobalStateV3 : CUnknown10057680 { char *sub_10057800(const char *pszName); };
extern CUnknown10057680 g_106be530;
extern "C" int _strcmpi(const char *, const char *);
void sub_101cd970(CBaseEntity *);
int sub_101cf600(int);
void *sub_100aa720(int);
void __fastcall sub_10003576(void *p);	// CUtlVector<int>::Purge
void __fastcall sub_10007275(void *p);	// CUtlMemory<int>::Purge
void __fastcall sub_1000a06f(void *p);	// CUtlVector<int>::~CUtlVector
extern void *g_104626bc;

// TARGET: CEntitySaveRestoreBlockHandler::sub_101a3470
int CEntitySaveRestoreBlockHandler::sub_101a3470(CBaseEntity *pEntity, CSaveRestoreDataView *pSaveData, CEntityTableView *pEntInfo)
{
	int oldOffset[3];
	if (pEntity)
		pEntity->vfunc1();
	CRestoreRaw restoreHelper;
	((CRestore *)&restoreHelper)->CRestore::CRestore(pSaveData);
	void *mem = sub_100aa720(0x450);
	CBaseEntity *tmpEnt = mem ? ((CEntInit *)mem)->sub_1009d980(0) : 0;
	CRestoreRaw tmpRestore;
	((CRestore *)&tmpRestore)->CRestore::CRestore(pSaveData);
	tmpRestore.m_bField24 = 0;
	tmpEnt->vfunc127((int)&tmpRestore);
	int loc = pEntInfo->m_nLocation;
	if (loc >= 0 && loc < pSaveData->m_nSize) {
		pSaveData->m_nPos = loc;
		pSaveData->m_pCur = pSaveData->m_pBase + loc;
	}
	const char *globalName = ((CEntGN *)tmpEnt)->m_iGlobalname;
	const char *className = ((CEntGN *)tmpEnt)->m_iClassname;
	sub_101cd970(tmpEnt);
	if (_strcmpi(pSaveData->m_szMap, ((CGlobalStateV3 *)&g_106be530)->sub_10057800(globalName) + 0x40) != 0) {
		sub_101cd970(0);
		sub_10003576(&tmpRestore.m_vec);
		sub_10007275(&tmpRestore.m_vec);
		tmpRestore.m_vptr = &g_104626bc;
		sub_10003576(&restoreHelper.m_vec);
		sub_10007275(&restoreHelper.m_vec);
		return 0;
	}
	{
		oldOffset[0] = pSaveData->m_vecLandmark[0];
		oldOffset[1] = pSaveData->m_vecLandmark[1];
		oldOffset[2] = pSaveData->m_vecLandmark[2];
		CBaseEntity *pNewEntity = sub_101a2d50(className, globalName);
		if (pNewEntity) {
			restoreHelper.m_field20 = 1;
			g_106be530.sub_100579b0(((CEntGN *)pNewEntity)->m_iGlobalname, gpGlobals->mapname);
			CBaseHandle h;
			h = (IHandleEntity *)pNewEntity;
			pNewEntity->vfunc127((int)&restoreHelper);
			if (pNewEntity->vfunc117() & 4)
				pNewEntity->vfunc103();
			else
				pNewEntity->vfunc104();
			CGlobalEntityList *pList = g_10566458;
			if (pList->sub_100290c0((const unsigned int *)&h)) {
				pList->sub_100290c0((const unsigned int *)&h)->sub_1009d1e0();
				pList = g_10566458;
			}
			if (!pList->sub_100290c0((const unsigned int *)&h))
				pNewEntity = 0;
			pSaveData->m_vecLandmark[0] = oldOffset[0];
			pSaveData->m_vecLandmark[1] = oldOffset[1];
			pSaveData->m_vecLandmark[2] = oldOffset[2];
			if (pNewEntity) {
				if (pNewEntity->m_pEdict2e0)
					sub_101cf600((int)pNewEntity);
				pNewEntity->vfunc132();
			}
			sub_10003576(&tmpRestore.m_vec);
			sub_10007275(&tmpRestore.m_vec);
			tmpRestore.m_vptr = &g_104626bc;
			sub_1000a06f(&restoreHelper.m_vec);
			return 0;
		}
	}
	sub_10003576(&tmpRestore.m_vec);
	sub_10007275(&tmpRestore.m_vec);
	tmpRestore.m_vptr = &g_104626bc;
	sub_10003576(&restoreHelper.m_vec);
	sub_10007275(&restoreHelper.m_vec);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a3740 size=0x5
#include "CEntitySaveRestoreBlockHandler.h"
CEntitySaveRestoreBlockHandler g_1072bb44;
// END FUNCTION

// FUNCTION: 0x101a3780 size=0x6
#include "CEntitySaveRestoreBlockHandler.h"
namespace lifted {
extern char g_1059317c;
}
int CEntitySaveRestoreBlockHandler::vfunc0()
{
    return (int)&lifted::g_1059317c;
}
// END FUNCTION

// FUNCTION: 0x101a37a0 size=0x5
#include "CUnknown101a2c30.h"
#include "CEntitySaveRestoreBlockHandler.h"
// TARGET: CEntitySaveRestoreBlockHandler::vfunc1
// the game's 0x101a37a0: a tail call (jmp) of CEntitySaveRestoreBlockHandler::sub_101a2c30
bool CEntitySaveRestoreBlockHandler::vfunc1(class CUnknown101a2c30 *a0)
{
	return ((CEntitySaveRestoreBlockHandler *)this)->CEntitySaveRestoreBlockHandler::sub_101a2c30(a0);
}
// END FUNCTION

// FUNCTION: 0x101a37c0 size=0x123
#include "CSave.h"
#include "CEntitySaveRestoreBlockHandler.h"
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
extern CGlobalEntityList *g_10566458;
#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
#define V64(a) V16(a##a) V16(a##b) V16(a##c) V16(a##d)
struct SaveX {
    virtual int GetTick();
    V16(p) V16(q) V4(r) virtual void m0();
    virtual void *GetBlock();
};
struct EntX {
    V64(p) V16(q) V16(r) V16(s) V4(t) virtual void m0();
    virtual int f117();
};
struct EngineX {
    V16(p) V16(q) virtual void m0(); virtual void m1(); virtual void m2();
    virtual int f35(int edict);
};
struct SaveEntry { char pad[0x10]; volatile unsigned int m_h10; int m_tick14; volatile int m_delta18; int m_f1c; unsigned __int64 m_flags20; int m_f28; int m_f2c; };
struct SaveBlock { char pad[0x1318]; int m_nEntries; SaveEntry *m_pEntries; };
extern EngineX *g_1070b22c;
static inline CGlobalEntityList_Ent *ResolveHandle(unsigned int h)
{
    if (h == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
    return s->m_Serial == (int)(h >> 13) ? s->m_pEntity : 0;
}
void CEntitySaveRestoreBlockHandler::vfunc2(CSave *pSaveArg)
{
    SaveX *pSave = (SaveX *)pSaveArg;
    SaveBlock *blk = (SaveBlock *)pSave->GetBlock();
    int i = 0;
    if (blk->m_nEntries > 0) {
        int off = 0;
        do {
            SaveEntry *e = (SaveEntry *)((char *)blk->m_pEntries + off);
            e->m_tick14 = pSave->GetTick();
            e->m_delta18 = 0;
            CBaseEntity *ent = (CBaseEntity *)ResolveHandle(e->m_h10);
            if (ent && !(((EntX *)ent)->f117() & 0x80000000)) {
                ent->vfunc126((int)pSave);
                e->m_delta18 = pSave->GetTick() - e->m_tick14;
                e->m_f28 = (int)ent->m_classname11c;
                if (ent->m_pEdict2e0 && 0 < g_1070b22c->f35(ent->m_pEdict2e0)) {
                    ent = (CBaseEntity *)ent->m_pEdict2e0;
                    if (g_1070b22c->f35((int)ent) < gpGlobals->maxClients + 1)
                        e->m_flags20 |= 0x8000000000000000ui64;
                }
            }
            i++;
            off += 0x30;
        } while (i < blk->m_nEntries);
    }
}
// END FUNCTION

// FUNCTION: 0x101a3940 size=0x73
#include "CSave.h"
#include "CEntitySaveRestoreBlockHandler.h"

struct SEntityBlock {
    char pad[0x1318];
    int m_count;
    char *m_pEntries;
};

struct ISaveOps {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void WriteFields(const char *name, void *pData, int unused, int fields, int numFields);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9();
    virtual void WriteInt(int *pData, int n);
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37();
    virtual SEntityBlock *GetEntityBlock();
};

extern int g_10592b18;
extern int g_10592b1c;

void CEntitySaveRestoreBlockHandler::vfunc3(CSave *pSave)
{
    ISaveOps *save = (ISaveOps *)pSave;
    SEntityBlock *block = save->GetEntityBlock();
    int count = block->m_count;
    save->WriteInt(&count, 1);
    for (int i = 0; i < block->m_count; i++)
        save->WriteFields("ETABLE", block->m_pEntries + i * 0x30, 0, g_10592b18, g_10592b1c);
}
// END FUNCTION

// FUNCTION: 0x101a39e0 size=0x1
#include "CEntitySaveRestoreBlockHandler.h"
void CEntitySaveRestoreBlockHandler::vfunc4()
{
}
// END FUNCTION

// FUNCTION: 0x101a3a00 size=0x1
#include "CEntitySaveRestoreBlockHandler.h"
void CEntitySaveRestoreBlockHandler::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x101a3a20 size=0x90
#include "CEntitySaveRestoreBlockHandler.h"

#define RV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

extern void *g_10592b18;
extern int g_10592b1c;

struct entitytable_view { char pad[0x30]; };

struct SSaveInfoLike
{
	char pad0[0x1318];
	int m_nEntities;
	entitytable_view *m_pEntityData;
	void InitEntityTable(entitytable_view *pNewTable, int size) { m_pEntityData = pNewTable; m_nEntities = size; }
	int NumEntities() { return m_nEntities; }
	entitytable_view *GetEntityInfo(int i) { return m_pEntityData + i; }
};

struct SRestoreSlots
{
	virtual void slot0(); virtual void slot1(); virtual void slot2();
	virtual int ReadFields(const char *name, void *pBase, int pMap, void *pFields, int nFields);
	virtual void slot4(); virtual void slot5(); virtual void slot6(); virtual void slot7(); virtual void slot8(); virtual void slot9();
	virtual void slot10(); virtual void slot11(); virtual void slot12(); virtual void slot13(); virtual void slot14();
	virtual int ReadInt(int *pValue, int count, int unused);
	virtual void slot16(); virtual void slot17(); virtual void slot18(); virtual void slot19();
	virtual void slot20(); virtual void slot21(); virtual void slot22(); virtual void slot23(); virtual void slot24();
	virtual void slot25(); virtual void slot26(); virtual void slot27(); virtual void slot28(); virtual void slot29();
	virtual void slot30(); virtual void slot31(); virtual void slot32();
	virtual SSaveInfoLike *GetSaveInfo();
};

void CEntitySaveRestoreBlockHandler::vfunc6(void *pRestoreV)
{
	SRestoreSlots *pRestore = (SRestoreSlots *)pRestoreV;
	SSaveInfoLike *pSaveData = pRestore->GetSaveInfo();
	int nEntities;
	pRestore->ReadInt(&nEntities, 1, 0);
	entitytable_view *pEntityTable = (entitytable_view *)engine->vfunc47(sizeof(entitytable_view) * nEntities, 1);
	pSaveData->InitEntityTable(pEntityTable, nEntities);
	for (int i = 0; i < pSaveData->NumEntities(); i++)
		pRestore->ReadFields("ETABLE", pSaveData->GetEntityInfo(i), 0, g_10592b18, g_10592b1c);
}
// END FUNCTION

// FUNCTION: 0x101a3ae0 size=0x1
#include "CEntitySaveRestoreBlockHandler.h"
void CEntitySaveRestoreBlockHandler::vfunc8()
{
}
// END FUNCTION

// FUNCTION: 0x101a3b00 size=0x6
namespace lifted {
extern char g_1072bb44;
}
int sub_101a3b00()
{
    return (int)&lifted::g_1072bb44;
}
// END FUNCTION

// FUNCTION: 0x101a3b20 size=0xdc
#include "CGlobalEntityList.h"
#include "CUnknown1070b22c.h"

struct S_1070b228 { char pad[0xc]; float curtime; char pad2[0x20 - 0x10]; void *m_pSaveData; };
extern S_1070b228 *g_1070b228;
extern CUnknown1070b22c *g_1070b22c;
extern CGlobalEntityList g_106eb5d8;
extern int g_1070d1b0, g_1070d1b4, g_1070d1b8;
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)

struct SaveHead
{
	char *m_pBase;	// 0x00
	char *m_pCurrent;	// 0x04
	int m_nUsed;	// 0x08
	int m_nSize;	// 0x0c
	int m_nTokens;	// 0x10
	void *m_pTokens;	// 0x14
	SaveHead() { memset(this, 0, 0x18); }
};

struct SaveBody
{
	int m_data[0x4c8];
	SaveBody() { for (int i = 0; i < 0x4c8; i++) m_data[i] = 0; }
};

struct SaveData : SaveHead
{
	SaveBody m_body;	// 0x18
	char pad1338[1];
};

inline void *operator new(unsigned int, void *p) { return p; }

SaveData *sub_101a3b20(int size)
{
	if (size <= 0)
		size = 0x400000;
	int numEnts = g_106eb5d8.sub_100f7040();
	SaveData *pSave = (SaveData *)g_1070b22c->vfunc47(numEnts * 0x30 + 0x1338 + size, 1);
	if (pSave) {
		pSave = new (pSave) SaveData;
	} else {
		pSave = 0;
	}
	pSave->m_nUsed = 0;
	pSave->m_pBase = (char *)pSave + 0x1338;
	pSave->m_pCurrent = (char *)pSave + 0x1338;
	pSave->m_nSize = size;
	void *pTokens = g_1070b22c->vfunc47(0x3fff, 4);
	pSave->m_nTokens = 0x3fff;
	pSave->m_pTokens = pTokens;
	*(float *)((char *)pSave + 0x1300) = g_1070b228->curtime;
	*(int *)((char *)pSave + 0x12f4) = g_1070d1b0;
	*(int *)((char *)pSave + 0x12f8) = g_1070d1b4;
	*(int *)((char *)pSave + 0x12fc) = g_1070d1b8;
	*(int *)((char *)pSave + 0x12dc) = 0;
	pSave->m_body.m_data[0] = 0;
	g_1070b228->m_pSaveData = pSave;
	return pSave;
}
// END FUNCTION

// FUNCTION: 0x101a3c40 size=0x8ad
#include "utlrbtree.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CBaseEntity.h"
#include "globalvars.h"
#include "engineserver.h"
#include "ehandle.h"
#include "UtlMem.h"
#include "CRestore.h"
#include "CUtlVector4.h"

extern "C" __declspec(dllimport) void Warning(const char *, ...);
extern "C" __declspec(dllimport) void DevMsg(int, const char *, ...);
CBaseEntity *sub_10136580(const char *);
CBaseEntity *sub_1015d790(const char *, void *);
void sub_1011a580(CBaseEntity *);
void sub_101cd970(CBaseEntity *);
extern "C" int __cdecl _strcmpi(const char *, const char *);

inline const char *STR(const char *const &s) { return s ? s : ""; }

extern char g_104626bc[];
struct IntVecV
{
	UtlMem m_Memory;
	int m_Size;
	int *m_pElements;
	void sub_100b4790();	// CUtlVector<int>::Purge
};
inline void SR_MemPurge(UtlMem *m)
{
	if (m->m_growSize != -1)
	{
		if (m->m_pMemory)
		{
			Plat_Free((void *)m->m_pMemory);
			m->m_pMemory = 0;
		}
		m->m_allocationCount = 0;
	}
}
struct CRestoreL
{
	void *m_vt;
	IntVecV m_vec;
	void *m_pData;
	char *m_pData2;
	int m_field20;
	bool m_bField24;
	CRestoreL(void *pData) { ((CRestore *)this)->CRestore::CRestore(pData); }
	void EndOut()
	{
		m_vec.sub_100b4790();
		m_vec.m_Memory.sub_1002cbd0();
		m_vt = (void *)g_104626bc;
	}
	void EndIn()
	{
		m_vec.m_Size = 0;
		m_vec.m_Memory.sub_1002cbd0();
		m_vec.m_pElements = m_vec.m_Memory.m_pMemory;
		SR_MemPurge(&m_vec.m_Memory);
		m_vt = (void *)g_104626bc;
	}
};

struct EntInfoV
{
	int id;
	int edictindex;
	int saveentityindex;
	int restoreentityindex;
	EHANDLE hEnt;
	int location;
	int size;
	int pad1c;
	__int64 flags;
	const char *classname;
	const char *globalname;
};

struct SRDataV
{
	char *pBaseData;
	char *pCurrentData;
	int size;
	int bufferSize;
	char pad0[0x1324 - 0x10];
	Vector modelSpaceOffset;
	int m_nEntities;
	EntInfoV *m_pEntities;

	bool Seek(int absPosition)
	{
		if (absPosition < 0 || absPosition >= bufferSize)
			return false;
		size = absPosition;
		pCurrentData = pBaseData + size;
		return true;
	}
	int NumEntities() { return m_nEntities; }
	EntInfoV *GetEntityInfo(int i) { return &m_pEntities[i]; }
};

#define FENTTABLE_PLAYER 0x8000000000000000ui64
#define FENTTABLE_REMOVED 0x4000000000000000ui64
#define FENTTABLE_GLOBAL 0x1000000000000000ui64

struct CEdictView { char pad[0x4c]; char free; };
struct GlobalEntry { char pad[0x40]; char levelName[0x20]; int state; };
struct str_t { const char *pszValue; };
struct GlobalEnts { GlobalEntry *sub_10057800(str_t); void sub_10057740(str_t, str_t, int); };
extern GlobalEnts g_106be530;
struct CGlobalEntityListV { void sub_100f6ce0(); };
extern CGlobalEntityListV g_106eb5d8;
struct EntListView { CBaseEntity *sub_100290c0(void *); };
extern EntListView *g_10566458;

struct SREnt
{
	char pad[0x11c]; str_t m_iClassname; str_t m_iGlobalname; char pad2[0x2e0 - 0x124]; int m_pEdict;
	int edict() { return m_pEdict; }
	int entindex() { return engine->vfunc35(edict()); }
	void sub_100a8060();
	CBaseEntity *sub_10335950(const char *);
};
struct SRPlayer
{
	char pad[0x14c0]; CUtlVector<EHANDLE> m_hList; char pad6[0x1c64 - 0x14d4]; EHANDLE m_hOwner;
	CBaseEntity *sub_10335950(const char *);
};

struct CSRBlockView_101a3c40
{
	bool sub_101a3380(CBaseEntity *, CRestoreL *);
	int sub_101a3470(CBaseEntity *, SRDataV *, EntInfoV *);
	int RestoreEntity(CBaseEntity *pEntity, CRestoreL *pRestore, EntInfoV *pEntInfo)
	{
		if (!sub_101a3380(pEntity, pRestore))
			return 0;
		SREnt *p = (SREnt *)pEntity;
		if (p->m_iGlobalname.pszValue != 0)
		{
			GlobalEntry *pGlobal = g_106be530.sub_10057800(p->m_iGlobalname);
			if (pGlobal)
			{
				if (pGlobal->state == 2)
					return -1;
				else if (_strcmpi(STR(gpGlobals->mapname), pGlobal->levelName) != 0)
				{
					p->sub_100a8060();
				}
			}
			else
			{
				Warning("Global Entity %s (%s) not in table!!!\n", STR(p->m_iGlobalname.pszValue), STR(p->m_iClassname.pszValue));
				g_106be530.sub_10057740(p->m_iGlobalname, *(str_t *)&gpGlobals->mapname, 1);
			}
		}
		return 0;
	}
};
extern CSRBlockView_101a3c40 g_1072bb44;

struct PlayersV
{
	UtlMem m_Memory;
	int m_Size;
	CBaseEntity **m_pElements;
	int Count() { return m_Size; }
	CBaseEntity *&operator[](int i) { return ((CBaseEntity **)m_Memory.m_pMemory)[i]; }
	void AddToTail(CBaseEntity *const &src) { ((CUtlVector4 *)this)->sub_101a55a0(m_Size, (const int *)&src); }
};

int sub_101a3c40(SRDataV *pSaveData, __int64 levelMask)
{
	int movedCount, active;
	CBaseEntity *pent;
	EntInfoV *pEntInfo;
	CBaseEntity *pPlayer;
	PlayersV players;
	players.m_Memory.sub_101a5680(0, 0);
	players.m_pElements = *(CBaseEntity **volatile *)&players.m_Memory.m_pMemory;
	players.m_Size = 0;

	movedCount = 0;

	int i;
	for (i = 0; i < pSaveData->NumEntities(); i++)
	{
		pent = 0;
		pEntInfo = pSaveData->GetEntityInfo(i);
		if (pEntInfo->size && pEntInfo->edictindex != 0)
		{
			if (pEntInfo->classname != 0)
			{
				active = (pEntInfo->flags & levelMask) ? 1 : 0;

				if ((pEntInfo->edictindex > 0) && (pEntInfo->edictindex < gpGlobals->maxClients + 1))
				{
					CEdictView *ed = (CEdictView *)engine->vfunc38(pEntInfo->edictindex);

					if (active && ed && !ed->free)
					{
						if (!(pEntInfo->flags & FENTTABLE_PLAYER))
						{
							Warning("ENTITY IS NOT A PLAYER: %d\n", i);
						}

						pPlayer = sub_1015d790(STR(pEntInfo->classname), ed);
						pent = pPlayer;
						players.AddToTail(pPlayer);
					}
				}
				else if (active)
				{
					pent = sub_10136580(STR(pEntInfo->classname));
				}
			}
			else
			{
				Warning("Entity with data saved, but with no classname\n");
			}
		}

		pEntInfo->hEnt = pent;
	}

	for (i = 0; i < pSaveData->NumEntities(); i++)
	{
		pEntInfo = pSaveData->GetEntityInfo(i);
		pent = g_10566458->sub_100290c0(&pEntInfo->hEnt);
		pSaveData->Seek(pEntInfo->location);

		pSaveData->modelSpaceOffset.Init();

		if (pent && (pEntInfo->flags & levelMask))
		{
			if (pEntInfo->flags & FENTTABLE_PLAYER)
			{
				DevMsg(2, "Transferring %s (%d)\n", STR(pEntInfo->classname), ((SREnt *)pent)->edict() ? ((SREnt *)pent)->entindex() : -1);
				CRestoreL restoreHelper(pSaveData);
				if (g_1072bb44.RestoreEntity(pent, &restoreHelper, pEntInfo) < 0)
				{
					sub_101cd970(pent);
				}
				else
				{
					pEntInfo->flags = FENTTABLE_REMOVED;
					movedCount++;
					pEntInfo->restoreentityindex = ((SREnt *)pent)->entindex();
					sub_1011a580(pent);
				}
				restoreHelper.EndOut();
			}
			g_106eb5d8.sub_100f6ce0();
		}
	}

	for (i = 0; i < pSaveData->NumEntities(); i++)
	{
		pEntInfo = pSaveData->GetEntityInfo(i);
		pent = g_10566458->sub_100290c0(&pEntInfo->hEnt);
		pSaveData->Seek(pEntInfo->location);

		pSaveData->modelSpaceOffset.Init();

		if (pent && (pEntInfo->flags & levelMask) && !(pEntInfo->flags & FENTTABLE_PLAYER))
		{
			if (pEntInfo->flags & FENTTABLE_GLOBAL)
			{
				DevMsg(2, "Merging changes for global: %s\n", STR(pEntInfo->classname));
				if (g_1072bb44.sub_101a3470(pent, pSaveData, pEntInfo) > 0)
				{
					movedCount++;
					pEntInfo->restoreentityindex = ((SREnt *)g_10566458->sub_100290c0(&pEntInfo->hEnt))->entindex();
					sub_1011a580(g_10566458->sub_100290c0(&pEntInfo->hEnt));
				}
			}
			else
			{
				DevMsg(2, "Transferring %s (%d)\n", STR(pEntInfo->classname), ((SREnt *)pent)->edict() ? ((SREnt *)pent)->entindex() : -1);
				CRestoreL restoreHelper(pSaveData);
				if (g_1072bb44.RestoreEntity(pent, &restoreHelper, pEntInfo) < 0)
				{
					sub_101cd970(pent);
				}
				else
				{
					bool found = false;
					for (int j = 0; j < players.Count(); j++)
					{
						pPlayer = players[j];
						if (!pPlayer)
							continue;
						if (pEntInfo->hEnt == ((SRPlayer *)pPlayer)->sub_10335950(STR(pEntInfo->classname)))
						{
							found = true;
							break;
						}
						if (pEntInfo->hEnt == ((SRPlayer *)pPlayer)->m_hOwner.Get())
						{
							found = true;
							break;
						}
						for (int k = 0; k < ((SRPlayer *)pPlayer)->m_hList.Count(); k++)
						{
							if (((SRPlayer *)pPlayer)->m_hList[k] == pEntInfo->hEnt.Get())
							{
								found = true;
								break;
							}
						}
					}
					if (!found)
					{
						DevMsg(2, "Suppressing %s\n", STR(pEntInfo->classname));
						sub_101cd970(pent);
					}
					else
					{
						pEntInfo->flags = FENTTABLE_REMOVED;
						movedCount++;
						DevMsg(1, "Transferred %s (%d)\n", STR(pEntInfo->classname), ((SREnt *)pent)->edict() ? ((SREnt *)pent)->entindex() : -1);
					}
				}
				restoreHelper.EndIn();
			}
			g_106eb5d8.sub_100f6ce0();
		}
		pSaveData->Seek(pEntInfo->size + pEntInfo->location);
	}

	players.m_Size = 0;
	SR_MemPurge(&players.m_Memory);
	players.m_pElements = (CBaseEntity **)players.m_Memory.m_pMemory;
	SR_MemPurge(&players.m_Memory);
	return movedCount;
}
// END FUNCTION
