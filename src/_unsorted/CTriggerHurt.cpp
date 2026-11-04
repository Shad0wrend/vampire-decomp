// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c5950 size=0x6
#include "datamap.h"
#include "CTriggerHurt.h"
namespace lifted {
extern char g_1059d7f0;
}
datamap_t * CTriggerHurt::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059d7f0);
}
// END FUNCTION

// FUNCTION: 0x101c5d40 size=0xa0
#include "utlmemory.h"
#include "CTriggerHurt.h"
#include "UtlMem.h"

extern void (__cdecl *g_109f3624)(void *);	// Plat_Free
void sub_100aa7b0(void *pEntity);	// CBaseEntity::operator delete

struct CTriggerHurtVec	// the CUtlVector<int> of the damaged entities at +0x5f4, as its inlined destructor sees it
{
	UtlMem m_Memory;
	int m_Size;
	int *m_pElements;

	void Destruct()
	{
		m_Size = 0;
		m_Memory.sub_10185100();
		m_pElements = m_Memory.m_pMemory;
		if (m_Memory.m_growSize != -1) {
			if (m_Memory.m_pMemory) {
				g_109f3624(m_Memory.m_pMemory);
				m_Memory.m_pMemory = 0;
			}
			m_Memory.m_allocationCount = 0;
		}
	}
};

CTriggerHurt *CTriggerHurt::vfunc5(unsigned int flags)
{
	((CTriggerHurtVec *)&m_hurtEntities)->Destruct();
	m_out5dc.sub_100cd2d0();
	m_out5c4.sub_100cd2d0();
	m_out580.sub_100cd2d0();
	m_out568.sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4bc))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4a4))->sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c5e80 size=0x89
#include "CTriggerHurt.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CSlotView217
{
	SV100(a) SV100(b) SV10(c0) SV1(c10) SV1(c11) SV1(c12) SV1(c13) SV1(c14) SV1(c15) SV1(c16)
	virtual float *vfunc217();
};

void sub_1000cc89();

void CTriggerHurt::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
	sub_100ac4e0((int)sub_1000cc89, 0, 0);
	m_vecPushDir5b4 = m_vecTarget5a8 - *(Vector *)((CSlotView217 *)this)->vfunc217();
	VectorNormalize(m_vecPushDir5b4);
	m_vecPushDir5b4 *= m_flSpeed5a4;
}
// END FUNCTION

// FUNCTION: 0x101c6410 size=0xfb
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CTriggerHurt.h"
#include "utlvector.h"

extern double g_10449270;

void CTriggerHurt::vfunc176(CBaseEntity *pOther)
{
	if (sub_101c5460(pOther)) {
		EHANDLE hOther;
		hOther = pOther;
		CUtlVector<EHANDLE> *pList = (CUtlVector<EHANDLE> *)&m_hurtEntities;
		if (pList->Find(hOther) < 0)
			sub_101c5f40(pOther, (float)(m_flDamage * g_10449270));
	}
	sub_101c55d0(pOther);
}
// END FUNCTION

// FUNCTION: 0x101c6630 size=0x22
// TARGET: CTriggerHurt::vfunc175
#include "CTriggerHurt.h"
void CTriggerHurt::vfunc175(CBaseEntity *pOther)
{
    if (m_flNextThink < gpGlobals->curtime) {
        m_flNextThink = gpGlobals->curtime;
    }
}
// END FUNCTION
