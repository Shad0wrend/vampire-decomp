// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f10e0 size=0x133
#include "CWeaponThrown_Chang_Ghost.h"
#include "CUnknown1070b244.h"

struct CGlobalVarsView { char pad[0xc]; float curtime; };
extern CGlobalVarsView *g_1070b228;
extern CUnknown1070b244 *g_1070b244;
extern float g_104e1614;
extern float g_104e1624;
void sub_10002130();
void sub_10011a04();

// TARGET: CWeaponThrown_Chang_Ghost::vfunc372
void CWeaponThrown_Chang_Ghost::vfunc372(int a, const Vector *pDir)
{
    m_nTakeDamage = 2;
    m_iHealth = 1;
    m_nSequence = sub_1008dc40(0x22, -1);
    m_n08a8 = 0x22;
    m_n06f8 = 0;
    sub_10090950();
    m_n0914 = a;
    g_1070b244->vfunc2(-30, 30);
    g_1070b244->vfunc2(-30, 30);
    g_1070b244->vfunc2(-30, 30);
    m_flThrowSpeed = g_104e1614;
    Vector vecDir = *pDir;
    if (VectorNormalize(vecDir) > 0.000001f)
        vecDir *= m_flThrowSpeed;
    sub_100b2770(&vecDir.x);
    m_pfnTouch = (void *)sub_10002130;
    sub_100ac4e0((int)sub_10011a04, 0, 0);
    m_flNextThink = g_1070b228->curtime + 0.1f;
    m_flExpireTime = g_104e1624 + g_1070b228->curtime;
}
// END FUNCTION

// FUNCTION: 0x103f1410 size=0x1e
#include "CWeaponThrown_Chang_Ghost.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponThrown_Chang_Ghost::vfunc5
CWeaponThrown_Chang_Ghost *CWeaponThrown_Chang_Ghost::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
