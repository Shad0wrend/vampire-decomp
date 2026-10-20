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
