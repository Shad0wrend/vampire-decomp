// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c50d0 size=0x57
#include "C_TempEntsSystem.h"

extern int g_104a0d50;
extern int sub_10032250(int, int, int, int);

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

// TARGET: C_TempEntsSystem::vfunc5
void C_TempEntsSystem::vfunc5(int filter, int delay, int pos, int dir)
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

	sub_10032250(filter, delay, pos, dir);
}
// END FUNCTION

// FUNCTION: 0x100c5540 size=0x57
#include "C_TempEntsSystem.h"

extern int g_104a0d50;
extern int sub_10033f70(int, int, int, int);

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

// TARGET: C_TempEntsSystem::vfunc12
void C_TempEntsSystem::vfunc12(int filter, int delay, int pos, int dir)
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

	sub_10033f70(filter, delay, pos, dir);
}
// END FUNCTION

// FUNCTION: 0x100c59b0 size=0x57
#include "C_TempEntsSystem.h"

extern int g_104a0d50;
extern int sub_100377e0(int, int, int, int);

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

// TARGET: C_TempEntsSystem::vfunc22
void C_TempEntsSystem::vfunc22(int filter, int delay, int pos, int dir)
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

	sub_100377e0(filter, delay, pos, dir);
}
// END FUNCTION

// FUNCTION: 0x100c5bf0 size=0x52
#include "C_TempEntsSystem.h"

extern int g_104a0d50;
extern void sub_1003a430(int filter, int delay, int pos);

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

// TARGET: C_TempEntsSystem::vfunc29
void C_TempEntsSystem::vfunc29(int filter, int delay, int pos)
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

	sub_1003a430(filter, delay, pos);
}
// END FUNCTION

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

// FUNCTION: 0x100c5d80 size=0x57
#include "C_TempEntsSystem.h"

extern int g_104a0d50;
extern int sub_1003edc0(int, int, int, int);

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

// TARGET: C_TempEntsSystem::vfunc33
void C_TempEntsSystem::vfunc33(int filter, int delay, int pos, int dir)
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

	sub_1003edc0(filter, delay, pos, dir);
}
// END FUNCTION

// FUNCTION: 0x100c5fb0 size=0x57
#include "C_TempEntsSystem.h"

extern int g_104a0d50;
extern int sub_10040050(int, int, int, int);

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

// TARGET: C_TempEntsSystem::vfunc38
void C_TempEntsSystem::vfunc38(int filter, int delay, int pos, int dir)
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

	sub_10040050(filter, delay, pos, dir);
}
// END FUNCTION

// FUNCTION: 0x100c60e0 size=0x57
#include "C_TempEntsSystem.h"

extern int g_104a0d50;
extern int sub_100411c0(int, int, int, int);

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

// TARGET: C_TempEntsSystem::vfunc41
void C_TempEntsSystem::vfunc41(int filter, int delay, int pos, int dir)
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

	sub_100411c0(filter, delay, pos, dir);
}
// END FUNCTION

// FUNCTION: 0x100c6270 size=0x4b
#include "C_TempEntsSystem.h"

extern int g_104a0d50;
extern void (__cdecl *g_101e3114)(const char *, ...);

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

// TARGET: C_TempEntsSystem::vfunc2
void C_TempEntsSystem::vfunc2(int filter, int delay, int pos, int dir, int extra)
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

	g_101e3114("client temp ent TParticle not implemented\n");
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
