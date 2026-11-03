// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10070a80 size=0x6
#include "CCameraAnimated.h"
#include "datamap.h"
namespace lifted {
extern char g_10546654;
}
datamap_t *CCameraAnimated::vfunc82()
{
    return (datamap_t *)&lifted::g_10546654;
}
// END FUNCTION

// FUNCTION: 0x10071000 size=0x6
#include "CCameraAnimated.h"
namespace lifted {
extern char g_106c7f88;
}
int CCameraAnimated::vfunc80()
{
    return (int)&lifted::g_106c7f88;
}
// END FUNCTION

// FUNCTION: 0x10071020 size=0x3
#include "CCameraAnimated.h"
int CCameraAnimated::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100712b0 size=0x52
#include "CCameraAnimated.h"
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

extern char g_106b8540[];

void CCameraAnimated::vfunc104()
{
	int unused;
	const char *name = *((CBaseEntity *)this)->vfunc9(&unused);
	if (!name)
		name = g_106b8540;
	engine->vfunc13(name, 0);
}
// END FUNCTION

// FUNCTION: 0x10071900 size=0x46
#include <stdlib.h>
#include "CCameraAnimated.h"
#include "COutputEvent.h"

struct CCameraAnimEvent
{
	int m_nEvent;
	const char *m_pszOptions;
};

void CCameraAnimated::vfunc259(void *pEvent)
{
	CCameraAnimEvent *pAnimEvent = (CCameraAnimEvent *)pEvent;
	if (pAnimEvent->m_nEvent != 0x3eb) {
		sub_10091da0(pEvent);
		return;
	}
	int nOutput = atoi(pAnimEvent->m_pszOptions) - 1;
	if (nOutput >= 0 && nOutput < 8)
		((COutputEvent *)&m_items730[nOutput])->sub_100cd660(this, this, 0);
}
// END FUNCTION
