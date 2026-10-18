// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100712b0 size=0x52
void sub_100aa7b0(void *p);

CCameraAnimated *CCameraAnimated::vfunc5(unsigned char flags)
{
	m_item810.sub_100cd2d0();
	m_item7f8.sub_100cd2d0();
	CCameraAnimatedItem *p = &m_items730[8];
	int n = 8;
	do {
		--p;
		p->sub_100cd2d0();
	} while (--n);
	sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10071400 size=0x26
#include "CCameraAnimated.h"
#include "CBaseEntity.h"
#include "IVEngineServerFull.h"

extern IVEngineServerFull *g_1070b22c;
extern char g_106b8540[];

void CCameraAnimated::vfunc104()
{
	int unused;
	const char *name = *((CBaseEntity *)this)->vfunc9(&unused);
	if (!name)
		name = g_106b8540;
	g_1070b22c->PrecacheModel(name, 0);
}
// END FUNCTION
