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
