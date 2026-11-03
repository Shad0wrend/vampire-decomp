// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020b3e0 size=0x6
#include "CSecCamera.h"
namespace lifted {
extern char g_105aa3a4;
}
datamap_t * CSecCamera::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105aa3a4);
}
// END FUNCTION

// FUNCTION: 0x1020bf90 size=0x57
#include "CCineNPC.h"
#include "CBaseAnimating.h"

void sub_100aa7b0(void *);

struct Helper
{
	void *sub_1020bf90(unsigned int flags);
};

// TARGET: Helper::sub_1020bf90
void *Helper::sub_1020bf90(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x80c))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x7f4))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x7dc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x748))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x730))->sub_10015708();
	((CBaseAnimating *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1020c0d0 size=0x125
#include "CSecCamera.h"
#include "CEntityVSlots.h"
#include "CBreakableProp.h"
#include <math.h>
#include <stdlib.h>

void CSecCamera::vfunc103()
{
    ((CBreakableProp *)this)->vfunc103();
    m_vecMovedir[0] = 0.0f;
    m_vecMovedir[1] = 1.0f;
    m_vecMovedir[2] = 0.0f;
    sub_100b3640(0xfffbffff);
    vfunc93(8, 0);
    m_flF78c = (float)abs((int)m_flF788) / m_flF780;
    m_vecStart7a8 = *((CEntityVSlots *)this)->slot219();
    m_vecEnd7b4 = *(Vector *)m_vecMovedir * m_flF788 + *((CEntityVSlots *)this)->slot219();
    sub_1020c4f0(0);
    float flHalf = m_flF798 * 0.5f;
    m_flF798 = (float)cos(flHalf * 0.017453292f);
    m_b77c = 1;
    vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1020c250 size=0x38
// TARGET: CSecCamera::vfunc113
#include "CBreakableProp.h"
#include "CSecCamera.h"

void sub_10004c19();

void CSecCamera::vfunc113()
{
    ((CBreakableProp *)this)->vfunc113();
    m_flNextThink = gpGlobals->curtime + 0.1;
    m_flNextStateTime7a0 = 0;
    ((CBreakableProp *)this)->sub_10007fe5((void *)sub_10004c19, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1020c7f0 size=0x18
#include "CSecCamera.h"

// TARGET: CSecCamera::vfunc266
void CSecCamera::vfunc266(const float *pVelocity)
{
	sub_1020c890();
	sub_10015208(pVelocity);
}
// END FUNCTION

// FUNCTION: 0x1020c850 size=0x25
#include "CSecCamera.h"

extern int *g_1070b228;

// TARGET: vfunc133
void CSecCamera::vfunc133()
{
    sub_1020c890();
    sub_10007725();
    *(int *)&m_flNextStateTime7a0 = g_1070b228[3];
    sub_1020c3d0();
}
// END FUNCTION
