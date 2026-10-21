// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1023b620 size=0xd
void CWorld::vfunc130(int a)
{
	volatile int *p = &a;
	*p = *p;
	CBaseEntity::vfunc130(a);
}
// END FUNCTION

// FUNCTION: 0x1023ba00 size=0x1e
#include "CWorld.h"

void sub_100aa7b0(void *p);

// TARGET: CWorld::vfunc5
CWorld *CWorld::vfunc5(unsigned int flags)
{
	sub_1000fe98();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1023ba80 size=0xa8
#include "CWorld.h"
#include "CBroadcastRecipientFilter.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct CEngineSoundX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3)
	PV(40)
	virtual void vfunc41(CRecipientFilter *pFilter, int a, const float *pOrigin, int nSound);
};

struct CSoundTableEntryX
{
	int m_nSound;
	int m_unused;
};

extern CEngineSoundX *g_10540528;
extern CSoundTableEntryX g_105c230c[];

// TARGET: CWorld::vfunc241
void CWorld::vfunc241(void *pSource, int nSound, int unused1, int unused2)
{
	if (nSound >= 0) {
		int sound = g_105c230c[nSound].m_nSound;
		if (sound >= 0) {
			CBroadcastRecipientFilter filter;
			g_10540528->vfunc41(&filter, 0, (const float *)((char *)pSource + 0xc), sound);
		}
	}
}
// END FUNCTION
