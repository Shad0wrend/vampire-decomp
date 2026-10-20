// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f4f40 size=0x78
#include "CWeaponLockpick.h"
struct CLockpickGlobals { char pad[0xc]; float curtime; };
struct CLockpickOwner { char pad[0xa8]; void *m_p; };
extern CLockpickGlobals *g_1070b228;

void CWeaponLockpick::vfunc292(int a)
{
    CLockpickOwner *pOwner = (CLockpickOwner *)sub_102521f0();
    if (pOwner && pOwner->m_p) {
        vfunc307(vfunc328());
        vfunc333(1, 1, 0, 0, 0, 0);
        float t = vfunc332() + g_1070b228->curtime;
        m_f730 = t;
        m_f734 = t;
        vfunc310(t);
    }
}
// END FUNCTION

// FUNCTION: 0x10409af0 size=0x1e
#include "CWeaponLockpick.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponLockpick::vfunc5
CWeaponLockpick *CWeaponLockpick::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
