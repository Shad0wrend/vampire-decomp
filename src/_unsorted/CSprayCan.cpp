// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101716b0 size=0x274
#include "CSprayCan.h"
#include "CPointEntity.h"
#include "UTIL_Trace.h"
#include "CUnknown101771f0.h"
#include "engineserver.h"
#include "QAngle.h"

inline CUnknown101771f0 *ToPlayerX(CBaseEntity *p)
{
	if (!p)
		return 0;
	return (CUnknown101771f0 *)p->m_pA8;
}

struct EntIdxV : CBaseEntity { int edict() { return m_pEdict2e0; } int entindex() { return engine->vfunc35(edict()); } };
void CSprayCan::vfunc134()
{
	CPointEntity *pBase = (CPointEntity *)this;
	CUnknown101771f0 *pPlayer = ToPlayerX(pBase->vfunc97());
	int count = pPlayer ? pPlayer->sub_101771f0() : -1;

	int index = ((EntIdxV *)pBase->vfunc97())->entindex();

	Vector fwd;
	sub_10139610(*(QAngle *)pBase->vfunc221(), &fwd, 0, 0);

	CGameTrace trace;
	UTIL_TraceLine(*(const Vector *)pBase->vfunc220(), fwd * 128.0f + *(const Vector *)pBase->vfunc220(), 0x400b, pPlayer, 0, &trace);

	if (count != -1)
	{
		sub_101d0160(&trace, index, (int)m_flSprayCount450, 1);
		count--;
		float flCount = (float)count;
		if (m_flSprayCount450++ >= flCount)
			sub_101cd940((char *)this);
	}
	else
	{
		sub_101cd940((char *)this);
	}
	pBase->m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x10172e40 size=0x6
#include "CSprayCan.h"
int CSprayCan::vfunc117()
{
    return -2147483648;
}
// END FUNCTION

// FUNCTION: 0x10184420 size=0x1e
#include "CSprayCan.h"

void sub_100aa7b0(void *p);

// TARGET: CSprayCan::vfunc5
CBaseEntity *CSprayCan::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
