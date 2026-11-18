// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a4830 size=0x4
#include "CSaveRestoreBlockSet.h"
char * CSaveRestoreBlockSet::vfunc0()
{
    return (char *)this + 4;
}
// END FUNCTION

// FUNCTION: 0x101a4850 size=0x61
#include "CSaveRestoreBlockSet.h"
#include "CUnknown101a5800.h"
struct IHandlerView {
	virtual const char *GetBlockName() = 0;
	virtual void Slot1(void *) = 0;
};
__declspec(dllimport) char *__cdecl Q_strncpy(char *, const char *, int);
// TARGET: CSaveRestoreBlockSet::vfunc1
void CSaveRestoreBlockSet::vfunc1(void *pSave)
{
	CUnknown101a5800 *p = (CUnknown101a5800 *)&m_pEntries;
	int n = m_nHandlers;
	p->sub_101a5800(p->m_size = 0, n, 0);
	for (int i = 0; i < m_nHandlers; i++) {
		char *base = m_pEntries;
		Q_strncpy(base + i * 0x28, ((IHandlerView *)m_pHandlers[i])->GetBlockName(), 0x20);
		((IHandlerView *)m_pHandlers[i])->Slot1(pSave);
	}
}
// END FUNCTION

// FUNCTION: 0x101a48e0 size=0x67
#include "CSaveRestoreBlockSet.h"
struct SaveStream { virtual int vfunc0(); };
struct BlockHandler { virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(SaveStream *s); };

void CSaveRestoreBlockSet::vfunc2(void *pSave)
{
	SaveStream *s = (SaveStream *)pSave;
	int start = s->vfunc0();
	for (int i = 0; i < m_nHandlers; i++) {
		char *e = m_pEntries;
		*(int *)(e + i * 0x28 + 0x24) = s->vfunc0() - start;
		((BlockHandler *)m_pHandlers[i])->vfunc2(s);
	}
	m_nSize = s->vfunc0() - start;
}
// END FUNCTION

// FUNCTION: 0x101a4970 size=0x1f5
#include "CSaveRestoreBlockSet.h"
#include "Vector.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"
#include "CUtlMemory40.h"
#include <string.h>

struct SBSave
{
	virtual int Tell();
	virtual void Seek(int pos);
	virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void WriteInt(const int *pValues, int nCount);
};

struct SBHandler
{
	virtual char *GetName();
	virtual void h1(); virtual void h2();
	virtual void Save(SBSave *pSave);
};

typedef CUtlVector<SaveRestoreBlockHeader_t> HeaderVec;
typedef CUtlVectorDataOps<HeaderVec, 9> HeaderOps;

// the guarded static Save and Restore share (one guard in the game: both are in one unit)
inline HeaderOps *HeaderOpsOf()
{
	static HeaderOps s_ops;
	return &s_ops;
}

struct LocalHeaders
{
	CUtlMemory40 m_Memory;
	int m_size;
	char *m_pElements;
	LocalHeaders(int growSize = 0, int initSize = 0)
	{
		m_Memory.sub_101a57b0(growSize, initSize);
		m_size = 0;
		ResetDbgInfo();
	}
	~LocalHeaders()
	{
		((HeaderVec *)this)->~HeaderVec();
	}
	char *Base() { return m_Memory.m_pMemory; }
	void ResetDbgInfo() { m_pElements = Base(); }
	int Count() const { return m_size; }
	void sub_101a56d0(int num, const void *pToCopy);
	void RemoveAll() { for (int i = m_size; --i >= 0; ) ; m_size = 0; }
	void SetCount(int count) { RemoveAll(); sub_101a56d0(count, 0); }
	SaveRestoreBlockHeader_t &operator[](int i) { return ((SaveRestoreBlockHeader_t *)m_Memory.m_pMemory)[i]; }
};

#define pad38I (*(int *)pad38)

void CSaveRestoreBlockSet::vfunc3(void *pSaveArg)
{
	SBSave *pSave = (SBSave *)pSaveArg;
	int start = pSave->Tell();
	int nTemp = -1;
	LocalHeaders headers;
	headers.SetCount(BlockHeaders().Count());
	memset(&headers[0], 0xff, headers.Count() * sizeof(SaveRestoreBlockHeader_t));
	pSave->WriteInt(&nTemp, 1);
	pSave->WriteInt(&nTemp, 1);
	SaveRestoreFieldInfo_t info;
	HeaderOps *ops = HeaderOpsOf();
	info.pField = &headers;
	info.pOwner = 0;
	info.pTypeDesc = 0;
	ops->vfunc0(&info, pSave);
	for (int i = 0; i < m_nHandlers; i++) {
		BlockHeaders()[i].m_nLocHeader = pSave->Tell() - start;
		((SBHandler *)m_pHandlers[i])->Save(pSave);
	}
	pad38I = pSave->Tell() - start;
	int end = pSave->Tell();
	pSave->Seek(start);
	pSave->WriteInt(&pad38I, 1);
	pSave->WriteInt(&m_nSize, 1);
	ops = HeaderOpsOf();
	info.pField = &BlockHeaders();
	info.pOwner = 0;
	info.pTypeDesc = 0;
	ops->vfunc0(&info, pSave);
	pSave->Seek(end);
}
// END FUNCTION

// FUNCTION: 0x101a4bf0 size=0x60
#include "CSaveRestoreBlockSet.h"

struct sub_BlockHandler4
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void vfunc4();
};
extern "C" __declspec(dllimport) void Plat_Free(void *);

// TARGET: CSaveRestoreBlockSet::vfunc4
void CSaveRestoreBlockSet::vfunc4()
{
	for (int i = 0; i < m_nHandlers; i++)
		((sub_BlockHandler4 *)m_pHandlers[i])->vfunc4();
	m_nEntries = 0;
	if (m_nEntriesGrow != -1)
	{
		if (m_pEntries)
		{
			Plat_Free(m_pEntries);
			m_pEntries = 0;
		}
		m_nEntriesAlloc = 0;
	}
	m_pEntryElements = m_pEntries;
}
// END FUNCTION

// FUNCTION: 0x101a4c70 size=0x23
#include "CSaveRestoreBlockSet.h"

struct CSaveRestoreBlockHandlerSlots {
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual void s3();
	virtual void s4();
	virtual void vfunc5();
};

// TARGET: CSaveRestoreBlockSet::vfunc5
void CSaveRestoreBlockSet::vfunc5()
{
	for (int i = 0; i < m_nHandlers; i++) {
		((CSaveRestoreBlockHandlerSlots *)m_pHandlers[i])->vfunc5();
	}
}
// END FUNCTION

// FUNCTION: 0x101a4cb0 size=0x15b
#include "CSaveRestoreBlockSet.h"
#include "CUtlVectorDataOps.h"

extern "C" int __cdecl strcmp(const char *, const char *);
#pragma intrinsic(strcmp)

struct SaveRestoreBlockHeader_t;

struct SaveView	// the save/restore stream passed in (CSave)
{
    virtual int vfunc0();	// current position
    virtual void vfunc1(int pos);	// seek
    virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4(); virtual void vfunc5();
    virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
    virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13();
    virtual void vfunc14();
    virtual void vfunc15(void *pData, int count, int size);	// reads or writes an int
};

struct HandlerView	// a block handler
{
    virtual const char *vfunc0();	// the block name
    virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4(); virtual void vfunc5();
    virtual void vfunc6(SaveView *pSave);
};

struct FieldInfoView
{
    void *m_pField;
    void *m_pOwner;
    void *m_pTypeDesc;
};

typedef CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t> >, 9> HeaderOps;

// the guarded static Save and Restore share (one guard in the game: both are in one unit)
inline HeaderOps *HeaderOpsOf()
{
	static HeaderOps s_ops;
	return &s_ops;
}

struct BlockSetView : public CSaveRestoreBlockSet
{
    void sub_101a4cb0(SaveView *pSave);
};

void BlockSetView::sub_101a4cb0(SaveView *pSave)
{
    int base = pSave->vfunc0();
    int *pVersion = (int *)pad38;
    pSave->vfunc15(pVersion, 1, 0);
    pSave->vfunc15(&m_nSize, 1, 0);
    HeaderOps *pOps = HeaderOpsOf();
    FieldInfoView info;
    info.m_pField = &m_pEntries;
    info.m_pOwner = 0;
    info.m_pTypeDesc = 0;
    pOps->vfunc1(&info, pSave);
    for (int i = 0; i < m_nHandlers; i++) {
        const char *pName = ((HandlerView *)m_pHandlers[i])->vfunc0();
        for (int j = 0; j < m_nEntries; j++) {
            char *pEntry = m_pEntries + j * 0x28;
            if (strcmp(pEntry, pName) == 0) {
                int offset = *(int *)(m_pEntries + j * 0x28 + 0x20);
                if (offset != -1) {
                    pSave->vfunc1(offset + base);
                    ((HandlerView *)m_pHandlers[i])->vfunc6(pSave);
                }
                break;
            }
        }
    }
    pSave->vfunc1(*pVersion + base);
}
// END FUNCTION

// FUNCTION: 0x101a4e70 size=0xe8
#include "CSaveRestoreBlockSet.h"

extern "C" int strcmp(const char *, const char *);

struct SSaveStream
{
    virtual int GetBase();
    virtual void Seek(int pos);
};

struct SBlockHandler
{
    virtual const char *GetBlockName();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void Process(SSaveStream *pSave, int a, int b);	// slot 7
};

// TARGET: CSaveRestoreBlockSet::vfunc7
void CSaveRestoreBlockSet::vfunc7(void *pSave, int a, int b)
{
    SSaveStream *stream = (SSaveStream *)pSave;
    int base = stream->GetBase();
    for (int i = 0; i < m_nHandlers; i++) {
        const char *name = ((SBlockHandler *)m_pHandlers[i])->GetBlockName();
        for (int j = 0; j < m_nEntries; j++) {
            if (strcmp(m_pEntries + j * 0x28, name) == 0) {
                int off = *(int *)(m_pEntries + j * 0x28 + 0x24);
                if (off != -1) {
                    stream->Seek(off + base);
                    ((SBlockHandler *)m_pHandlers[i])->Process(stream, a, b);
                }
                break;
            }
        }
    }
    stream->Seek(m_nSize + base);
}
// END FUNCTION

// FUNCTION: 0x101a4fa0 size=0x60
#include "CSaveRestoreBlockSet.h"

struct sub_BlockHandler8
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void vfunc8();
};
extern "C" __declspec(dllimport) void Plat_Free(void *);

// TARGET: CSaveRestoreBlockSet::vfunc8
void CSaveRestoreBlockSet::vfunc8()
{
	for (int i = 0; i < m_nHandlers; i++)
		((sub_BlockHandler8 *)m_pHandlers[i])->vfunc8();
	m_nEntries = 0;
	if (m_nEntriesGrow != -1)
	{
		if (m_pEntries)
		{
			Plat_Free(m_pEntries);
			m_pEntries = 0;
		}
		m_nEntriesAlloc = 0;
	}
	m_pEntryElements = m_pEntries;
}
// END FUNCTION

// FUNCTION: 0x101a5020 size=0xa7
#include "CSaveRestoreBlockSet.h"
void CSaveRestoreBlockSet::vfunc9(void *pHandler)
{
	int idx = m_nHandlers;
	GrowVector();
	ShiftElementsRight(idx);
	void **p = &m_pHandlers[idx];
	if (p)
		*p = pHandler;
}
// END FUNCTION

// FUNCTION: 0x101a5100 size=0x53
#include <string.h>
#include "utlvector.h"

struct SBlockSetView {
	char m_pad[0x24];
	CUtlVector<int> m_List;

	void sub_101a5100(int elem);
};

void SBlockSetView::sub_101a5100(int elem)
{
	m_List.FindAndRemove(elem);
}
// END FUNCTION
