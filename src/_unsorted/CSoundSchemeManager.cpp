// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10228610 size=0xb2
#include "CSoundSchemeManager.h"
#include "UtlMem.h"
extern void (*g_109f3624)(void *);

struct SoundVec
{
	UtlMem m_mem;
	int m_size;
	int *m_pElements;
};

CSoundSchemeManager *CSoundSchemeManager::vfunc8(unsigned int flags)
{
	SoundVec *v = (SoundVec *)((char *)this + 0x19c);
	v->m_size = 0;
	v->m_mem.sub_1022d090();
	void (*pfnFree)(void *) = g_109f3624;
	v->m_pElements = v->m_mem.m_pMemory;
	if (v->m_mem.m_growSize != -1) {
		if (v->m_mem.m_pMemory) {
			pfnFree(v->m_mem.m_pMemory);
			v->m_mem.m_pMemory = 0;
		}
		v->m_mem.m_allocationCount = 0;
	}
	v = (SoundVec *)((char *)this + 0x188);
	v->m_size = 0;
	v->m_mem.sub_1022d050();
	v->m_pElements = v->m_mem.m_pMemory;
	if (v->m_mem.m_growSize != -1) {
		if (v->m_mem.m_pMemory) {
			pfnFree(v->m_mem.m_pMemory);
			v->m_mem.m_pMemory = 0;
		}
		v->m_mem.m_allocationCount = 0;
	}
	v = (SoundVec *)((char *)this + 0x174);
	v->m_size = 0;
	v->m_mem.sub_1022d010();
	v->m_pElements = v->m_mem.m_pMemory;
	if (v->m_mem.m_growSize != -1) {
		if (v->m_mem.m_pMemory) {
			pfnFree(v->m_mem.m_pMemory);
			v->m_mem.m_pMemory = 0;
		}
		v->m_mem.m_allocationCount = 0;
	}
	sub_1042c2c0();
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10228700 size=0x74
#include "CSoundSchemeManager.h"
extern "C" void *memset(void *, int, unsigned int);
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct Globals { char pad[0xc]; int curtime; };
extern Globals *g_1070b228;

void CSoundSchemeManager::vfunc2()
{
    memset(m_buf14, 0, sizeof(m_buf14));
    if (m_nAllocationCount < 2 && m_nGrowSize != -1) {
        m_nAllocationCount = 2;
        if (m_pMemory)
            m_pMemory = g_109f3638(m_pMemory, 2 * 0x20);
        else
            m_pMemory = g_109f3634(2 * 0x20);
    }
    m_pElements = m_pMemory;
    *(int *)&m_f0c = g_1070b228->curtime;
    m_b08 = 0;
}
// END FUNCTION

// FUNCTION: 0x102287a0 size=0xce
#include "CSoundSchemeManager.h"

extern void (*g_109f3624)(void *);

struct SoundSchemeVec
{
	void *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	void *m_pElements;
};

// TARGET: CSoundSchemeManager::vfunc5
void CSoundSchemeManager::vfunc5()
{
	sub_102288b0();
	void (*pfnFree)(void *) = g_109f3624;
	m_b08 = 0;
	SoundSchemeVec *v;
	v = (SoundSchemeVec *)((char *)this + 0x188);
	v->m_size = 0;
	if (v->m_growSize != -1)
	{
		if (v->m_pMemory)
		{
			pfnFree(v->m_pMemory);
			v->m_pMemory = 0;
		}
		v->m_allocationCount = 0;
	}
	v->m_pElements = v->m_pMemory;
	v = (SoundSchemeVec *)((char *)this + 0x174);
	v->m_size = 0;
	if (v->m_growSize != -1)
	{
		if (v->m_pMemory)
		{
			pfnFree(v->m_pMemory);
			v->m_pMemory = 0;
		}
		v->m_allocationCount = 0;
	}
	v->m_pElements = v->m_pMemory;
	v = (SoundSchemeVec *)((char *)this + 0x19c);
	v->m_size = 0;
	if (v->m_growSize != -1)
	{
		if (v->m_pMemory)
		{
			pfnFree(v->m_pMemory);
			v->m_pMemory = 0;
		}
		v->m_allocationCount = 0;
	}
	v->m_pElements = v->m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10228d00 size=0x123
#include "utlrbtree.h"
#include "CSoundSchemeManager.h"
#include "utlvector.h"

struct CSoundLoopRec { char m_pad[0x44]; float m_flVolume; char m_pad48[0x58 - 0x48]; };
struct CSoundRandRec { char m_pad[0x1c]; float m_flEnd; };

struct CSoundSchemeManagerView
{
	char m_pad[0x174];
	CUtlVector<CSoundLoopRec> m_Loops;
	CUtlVector<CSoundRandRec> m_Rands;
};

void CSoundSchemeManager::vfunc7()
{
	CSoundSchemeManagerView *p = (CSoundSchemeManagerView *)this;
	float flDelta = gpGlobals->curtime - m_f0c;
	m_f0c = gpGlobals->curtime;
	sub_10228e80(sub_10228a80());
	CSoundFadeItem *pTrack = (CSoundFadeItem *)m_buf14;
	for (int i = 0; i < 4; i++) {
		sub_10229090(pTrack, flDelta);
		pTrack = (CSoundFadeItem *)((char *)pTrack + 0x58);
	}
	for (int j = 0; j < p->m_Loops.Count(); ) {
		sub_10229090((CSoundFadeItem *)&p->m_Loops[j], flDelta);
		if (p->m_Loops[j].m_flVolume <= 0.01)
			p->m_Loops.Remove(j);
		else
			j++;
	}
	for (int k = 0; k < p->m_Rands.Count(); ) {
		float flEnd = p->m_Rands[k].m_flEnd;
		if (flEnd <= gpGlobals->curtime)
			p->m_Rands.Remove(k);
		else
			k++;
	}
	sub_10229c50();
}
// END FUNCTION
