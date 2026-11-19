// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042b370 size=0x6
#include "CBaseParticleEntity.h"
namespace lifted {
extern char g_109ee828;
}
int CBaseParticleEntity::vfunc80()
{
    return (int)&lifted::g_109ee828;
}
// END FUNCTION

// FUNCTION: 0x1042b390 size=0x3
#include "CBaseParticleEntity.h"
int CBaseParticleEntity::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1042b540 size=0x6
#include "CBaseParticleEntity.h"
namespace lifted {
extern char g_106ad4e8;
}
int CBaseParticleEntity::vfunc79()
{
    return (int)&lifted::g_106ad4e8;
}
// END FUNCTION

// FUNCTION: 0x1042b560 size=0x14
#include "vampire_all.h"
#include "CBaseParticleEntity.h"

CBaseParticleEntity::CBaseParticleEntity() : CBaseEntity(0)
{
}
// END FUNCTION

// FUNCTION: 0x1042b590 size=0x1e
#include "CBaseParticleEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseParticleEntity::vfunc5
CBaseEntity *CBaseParticleEntity::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1042b5c0 size=0x83
#include "CBaseParticleEntity.h"

struct IPartBar
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6();
	virtual int vfunc7();
};
struct IPartFoo
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual IPartBar *vfunc3();
};
struct CParticleEdict_t
{
	char m_pad0000[0x40];
	IPartFoo *m_pObj40;

	int GetValue()
	{
		if (!m_pObj40)
			return 0;
		return m_pObj40->vfunc3()->vfunc7();
	}
};
struct CParticleTransmitInfo_t
{
	char m_pad0000[0x40];
	int m_n40;
	unsigned char m_b44;
};

#define GLOBAL_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define GLOBAL_SLOTS100(p) GLOBAL_SLOTS10(p##0) GLOBAL_SLOTS10(p##1) GLOBAL_SLOTS10(p##2) GLOBAL_SLOTS10(p##3) GLOBAL_SLOTS10(p##4) \
	GLOBAL_SLOTS10(p##5) GLOBAL_SLOTS10(p##6) GLOBAL_SLOTS10(p##7) GLOBAL_SLOTS10(p##8) GLOBAL_SLOTS10(p##9)

struct GlobalObj_t
{
	GLOBAL_SLOTS100(a)	// slots 0..99
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();	// slots 100..104
	virtual int vfunc105(int a, int b);
};

extern GlobalObj_t *g_1070b22c;
char sub_101d1a90(int a, CBaseParticleEntity *pEnt);

bool CBaseParticleEntity::vfunc241(int a, CParticleTransmitInfo_t *pInfo, int c, int d)
{
	if (m_nEffectFlags & 0x40)
		return false;
	if (!g_1070b22c->vfunc105(d, ((CParticleEdict_t *)m_pEdict2e0)->GetValue()))
		return false;
	bool bResult = sub_101d1a90(pInfo->m_b44 ? pInfo->m_n40 : 0, this) == 0;
	return bResult;
}
// END FUNCTION

// FUNCTION: 0x1042b680 size=0x14
#include "CBaseParticleEntity.h"
#include "CBaseEntity.h"

int sub_10008c5b(int);

void CBaseParticleEntity::vfunc113()
{
	sub_10008c5b((int)this);
	((CBaseEntity *)this)->CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x1042b6b0 size=0x5
#include "CBaseParticleEntity.h"
#include "CBaseEntity.h"
// TARGET: CBaseParticleEntity::vfunc134
// the game's 0x1042b6b0: a tail call (jmp) of CBaseEntity::sub_100ae150
void CBaseParticleEntity::vfunc134()
{
	((CBaseEntity *)this)->CBaseEntity::sub_100ae150();
}
// END FUNCTION
