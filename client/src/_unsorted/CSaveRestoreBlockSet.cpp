// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1012ba50 size=0x67
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

// FUNCTION: 0x1012bcd0 size=0x60
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

// FUNCTION: 0x1012bd30 size=0x23
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

// FUNCTION: 0x1012bec0 size=0xe8
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
