// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004ee90 size=0x8
unsigned char sub_10001109();
// TARGET: sub_1004ee90
unsigned char sub_1004ee90()
{
    unsigned char r = sub_10001109();
    r &= 0xfd;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1004eeb0 size=0x6
#include "datamap.h"
#include "CPhysImpact.h"
namespace lifted {
extern char g_1053d224;
}
datamap_t *CPhysImpact::vfunc82()
{
    return (datamap_t *)&lifted::g_1053d224;
}
// END FUNCTION

// FUNCTION: 0x1004ef40 size=0x5
#include "CPhysImpact.h"
#include "CBaseEntity.h"

// TARGET: CPhysImpact::vfunc113
// the game's 0x1004ef40: a tail call (jmp) of CBaseEntity::vfunc113
void CPhysImpact::vfunc113()
{
	((CBaseEntity *)this)->CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x1004ef60 size=0x91
#include "CEntityVSlots.h"
#include "CPhysImpact.h"
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

void CPhysImpact::vfunc103()
{
	vfunc93(0, 0);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", STRINGR_F(m_name26c));
		m_Collision.sub_100dc480(0);
	}
	((CSlot212View *)this)->SetModelName(CastableNullString());
}
// END FUNCTION

// FUNCTION: 0x10050580 size=0x1e
#include "CPhysImpact.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysImpact::vfunc5
CPhysImpact *CPhysImpact::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
