// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c5c50 size=0x57
#include "C_TempEntsSystem.h"

extern int g_104a0d50;
extern int sub_10032230(int, int, int, int);

struct CTempEntRecipientFilter
{
	virtual void v0();
	virtual void v1();
	virtual int v2();
	bool sub_100be140();
	void sub_100bdf90(int);
};

static inline bool CanRunTempEnt(const C_TempEntsSystem *p)
{
	if (p->m_nSuppressCount > 0)
		return false;
	return !p->m_bSuppressEvent;
}

// TARGET: C_TempEntsSystem::vfunc30
void C_TempEntsSystem::vfunc30(int filter, int delay, int pos, int dir)
{
	if (!CanRunTempEnt(this))
		return;

	CTempEntRecipientFilter *pFilter = (CTempEntRecipientFilter *)filter;
	if (!pFilter->sub_100be140())
	{
		pFilter->sub_100bdf90(g_104a0d50);
	}
	if (!pFilter->v2())
		return;

	sub_10032230(filter, delay, pos, dir);
}
// END FUNCTION

// FUNCTION: 0x100c6420 size=0x20
#include "C_TempEntsSystem.h"
namespace lifted {
extern char g_10232134;
int sub_101d1296(int);
}
void * C_TempEntsSystem::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_10232134;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
