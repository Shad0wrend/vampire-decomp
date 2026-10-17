// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102230b0 size=0x51
#include "CMoverKeyFrame.h"
extern char g_106b8540[];
struct CEntList { void *sub_1000b4b5(int, void *, int, int); };
extern CEntList g_106eb5d8;
void *sub_10430b64(void *, int, void *, void *, int);
extern char g_10538764[], g_105b1f14[];
// TARGET: CMoverKeyFrame::vfunc113
void CMoverKeyFrame::vfunc113()
{
	CBaseEntity::vfunc113();
	void *name = m_pTargetName;
	if (!name)
		name = g_106b8540;
	m_pNext = (CMoverKeyFrame *)sub_10430b64(g_106eb5d8.sub_1000b4b5(0, name, 0, 0), 0, g_10538764, g_105b1f14, 0);
	if (m_pNext)
		m_pNext->m_pPrev = this;
}
// END FUNCTION
