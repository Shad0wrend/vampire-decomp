// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
