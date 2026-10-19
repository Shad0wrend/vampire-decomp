// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a48e0 size=0x67
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
