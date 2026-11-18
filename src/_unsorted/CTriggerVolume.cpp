// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c70d0 size=0xd2
#include "CBaseEntity.h"
#include "CTriggerVolume.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct CCollisionObj { void sub_1000428c(int solid); };
struct CSlot212Arg { int v; };

struct CVolSlots
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19) EVS10(20)
	EVS(210) EVS(211)
	virtual void slot212(CSlot212Arg a);
};

void CTriggerVolume::vfunc103()
{
	CBaseEntity *e = (CBaseEntity *)this;
	{
		ScopeTrace t("CBaseEntity::SetSolid", e ? (STRINGR_F(e->m_name26c)) : g_105387dc);
		((CCollisionObj *)((char *)e + 0x270))->sub_1000428c(0);
	}
	int tmp;
	e->vfunc93(0, 0);
	const char *s = *e->vfunc9(&tmp);
	e->vfunc105(STRINGR_F(s));
	CSlot212Arg a;
	a.v = 0;
	((CVolSlots *)e)->slot212(a);
	e->vfunc10(0);
	e->sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x101cbfc0 size=0x1e
#include "CTriggerVolume.h"

void sub_100aa7b0(void *p);

// TARGET: CTriggerVolume::vfunc5
CBaseEntity *CTriggerVolume::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
