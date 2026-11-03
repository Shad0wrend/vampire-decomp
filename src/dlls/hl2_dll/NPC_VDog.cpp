// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10374b00 size=0x1fc
#include <math.h>
#include "CNPC_VDog.h"
#include "CAI_BaseNPC.h"
#include "CDevFlagObj.h"

extern CDevFlagObj *g_10924a6c;
int sub_101cda50();

void CNPC_VDog::vfunc433()
{
	sub_102b27f0();
	if (*(char *)((char *)this + 0x6660))
	{
		g_10924a6c->vfunc1();
		sub_100041b0(0x7e);
	}
	if (*(int *)((char *)this + 0x6664) == 6)
		return;
	if (!sub_10014df8(0x6f) && !sub_10014df8(0x5a))
	{
		if (*(int *)((char *)this + 0xfec) != 0x6e)
			return;
		g_10924a6c->vfunc1();
		sub_100041b0(0x7c);
		return;
	}
	int nState = *(int *)((char *)this + 0x665c);
	if (nState != 2)
	{
		if (nState == 0)
		{
			int nSubState = *(int *)((char *)this + 0x6664);
			if (nSubState == 5)
			{
				*(int *)((char *)this + 0x665c) = 2;
				g_10924a6c->vfunc1();
				sub_100041b0(0x7d);
			}
			else if (nSubState == 4)
				*(int *)((char *)this + 0x665c) = 1;
		}
		Vector vecPlayerOrigin = *(Vector *)((CAI_BaseNPC *)sub_101cda50())->vfunc220();
		Vector vecMyOrigin = *(Vector *)((CAI_BaseNPC *)this)->vfunc220();
		Vector vecDelta = vecPlayerOrigin - vecMyOrigin;
		float flDist = fabs(FastSqrt(vecDelta.x * vecDelta.x + (vecDelta.y * vecDelta.y + vecDelta.z * vecDelta.z)));
		if (*(int *)((char *)this + 0xfec) == 0x6e && flDist < *(float *)((char *)this + 0x666c))
		{
			if (*(int *)((char *)this + 0x665c) == 0)
				*(int *)((char *)this + 0x665c) = 1;
			if (*(int *)((char *)this + 0x665c) == 1)
			{
				g_10924a6c->vfunc1();
				sub_100041b0(0x78);
			}
		}
		else if (flDist < *(float *)((char *)this + 0x6668))
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x2b);
		}
		else if (flDist >= *(float *)((char *)this + 0x6668))
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x7c);
		}
		*(float *)((char *)this + 0x667c) = flDist;
	}
	else
	{
		g_10924a6c->vfunc1();
		sub_100041b0(0x7d);
	}
}
// END FUNCTION

// FUNCTION: 0x10374d80 size=0x99
#include "CNPC_VDog.h"

#define VDOG_INT(off) (*(int *)((char *)this + (off)))
#define VDOG_FILE "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VDog.cpp"

int CNPC_VDog::vfunc460()
{
	if (sub_10014df8(0x78) || sub_10014df8(0x7e)) {
		sub_10374e50();
		return VDOG_INT(0x5cc4);
	}
	if (sub_10014df8(0x79)) {
		VDOG_INT(0x1b40) = 0x517;
		VDOG_INT(0x5cc4) = 3;
		*(const char **)((char *)this + 0x1b3c) = VDOG_FILE;
	} else if (sub_10014df8(0x7c) && VDOG_INT(0x5cc4) == 3) {
		VDOG_INT(0x1b40) = 0x51d;
		VDOG_INT(0x5cc4) = 1;
		*(const char **)((char *)this + 0x1b3c) = VDOG_FILE;
	}
	return sub_1000cc34();
}
// END FUNCTION

// FUNCTION: 0x10374e50 size=0xb9
#include "CBaseEntity.h"
#include "CNPC_VDog.h"
#include "CBCCSlotViews.h"

class CDogSlotView	// slots 167, 596 and 600 of the dog
{
public:
	VIEW_SLOT100(0)
	VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13) VIEW_SLOT10(14) VIEW_SLOT10(15)
	VIEW_SLOT(160) VIEW_SLOT(161) VIEW_SLOT(162) VIEW_SLOT(163) VIEW_SLOT(164) VIEW_SLOT(165) VIEW_SLOT(166)
	virtual void *vfunc167();
	VIEW_SLOT(168) VIEW_SLOT(169)
	VIEW_SLOT10(17) VIEW_SLOT10(18) VIEW_SLOT10(19)
	VIEW_SLOT100(2) VIEW_SLOT100(3) VIEW_SLOT100(4)
	VIEW_SLOT10(50) VIEW_SLOT10(51) VIEW_SLOT10(52) VIEW_SLOT10(53) VIEW_SLOT10(54) VIEW_SLOT10(55) VIEW_SLOT10(56) VIEW_SLOT10(57) VIEW_SLOT10(58)
	VIEW_SLOT(590) VIEW_SLOT(591) VIEW_SLOT(592) VIEW_SLOT(593) VIEW_SLOT(594) VIEW_SLOT(595)
	virtual void vfunc596(void *pEnt);
	VIEW_SLOT(597) VIEW_SLOT(598) VIEW_SLOT(599)
	virtual void vfunc600(void *p);
};

class CDogThing
{
public:
	void sub_103161a0(void *p);
};

struct CDogHandleEntry
{
	void *m_pEnt;
	int m_serial;
	int m_pad;
};
extern char *g_10566458;

void CNPC_VDog::sub_10374e50()
{
	char *p = (char *)this;
	CDogSlotView *view = (CDogSlotView *)this;
	unsigned int h = *(unsigned int *)(p + 0x628c);
	void *pEnt;
	if (h != 0xffffffff) {
		CDogHandleEntry *e = &((CDogHandleEntry *)(g_10566458 + 4))[h & 0x1fff];
		if (e->m_serial != (int)(h >> 13))
			pEnt = 0;
		else
			pEnt = e->m_pEnt;
	} else {
		pEnt = 0;
	}
	view->vfunc596(pEnt);
	*(const char **)(p + 0x1b3c) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VDog.cpp";
	*(int *)(p + 0x1b40) = 0x52a;
	*(int *)(p + 0x5cc4) = 2;
	view->vfunc600(view->vfunc167());
	if (*(int *)(p + 0x5bb0) <= 0 && *(int *)(p + 0x5da4) != 0 && view->vfunc167() != 0) {
		CDogThing *pThing = *(int *)(p + 0x5bb0) <= 0 ? *(CDogThing **)(p + 0x5da4) : 0;
		pThing->sub_103161a0(view->vfunc167());
	}
}
// END FUNCTION
