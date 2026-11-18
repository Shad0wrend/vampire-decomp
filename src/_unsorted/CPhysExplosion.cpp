// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004ea30 size=0x8
unsigned char sub_10001109();
// TARGET: sub_1004ea30
unsigned char sub_1004ea30()
{
    unsigned char r = sub_10001109();
    r &= 0xfd;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1004ea50 size=0x6
#include "datamap.h"
#include "CPhysExplosion.h"
namespace lifted {
extern char g_1053d12c;
}
datamap_t *CPhysExplosion::vfunc82()
{
    return (datamap_t *)&lifted::g_1053d12c;
}
// END FUNCTION

// FUNCTION: 0x1004eae0 size=0x91
#include "CPhysExplosion.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct PodString { const char *pszValue; };
struct CastableNullString : public PodString { CastableNullString() { pszValue = 0; } };
struct CSlot212View
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS(210) EVS(211)
	virtual void SetModelName(PodString name);
};

void CPhysExplosion::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	pEnt->vfunc93(0, 0);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", STRINGR_F(pEnt->m_name26c));
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	((CSlot212View *)this)->SetModelName(CastableNullString());
}
// END FUNCTION

// FUNCTION: 0x10050550 size=0x1e
#include "CPhysExplosion.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysExplosion::vfunc5
CBaseEntity *CPhysExplosion::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
