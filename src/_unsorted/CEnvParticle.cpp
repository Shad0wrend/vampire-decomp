// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fae40 size=0x1e
#include "CEnvParticle.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvParticle::vfunc5
CEnvParticle *CEnvParticle::vfunc5(unsigned int flags)
{
	sub_10011ac7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100fb7d0 size=0xb
void CEnvParticle::vfunc242()
{
	m_unk484 = 0;
}
// END FUNCTION

// FUNCTION: 0x100fbdc0 size=0xcf
#include "CEnvParticle.h"
#include "CEntityVSlots.h"

struct EntInfo { void *pEnt; unsigned int serial; int pad; };
struct EntList { int hdr; EntInfo e[1]; };
extern EntList *g_10566458;

struct EHandle
{
	volatile unsigned int m_Index;

	void *Get() const
	{
		unsigned int h = m_Index;
		if (h != 0xffffffff) {
			EntInfo *e = &g_10566458->e[h & 0x1fff];
			if (e->serial == (h >> 13))
				return e->pEnt;
		}
		return 0;
	}
};

char CEnvParticle::vfunc86(int a, int b, int c, int d, int e)
{
	if (((CEntityVSlots *)this)->slot94() == 11) {
		EHandle *pHandle = (EHandle *)((char *)this + 0x254);
		if (pHandle->Get()) {
			CEntityVSlots *pAttach = (CEntityVSlots *)pHandle->Get();
			if (pAttach->slot86(0, b, c, d, e))
				return 1;
		}
	}
	int type = *(int *)((char *)this + 0x458);
	if (type == 10 || type == 11 || type == 12 || type == 13)
		return 1;
	return sub_100ab020(a, b, c, d, e);
}
// END FUNCTION
