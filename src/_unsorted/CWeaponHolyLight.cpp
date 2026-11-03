// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f2990 size=0x6
#include "CWeaponHolyLight.h"
namespace lifted {
extern char g_1067e788;
}
int CWeaponHolyLight::vfunc362()
{
    return (int)&lifted::g_1067e788;
}
// END FUNCTION

// FUNCTION: 0x103f29b0 size=0x6
#include "CWeaponHolyLight.h"
int CWeaponHolyLight::vfunc363()
{
    return 0xc;
}
// END FUNCTION

// FUNCTION: 0x103f2a40 size=0x1e
#include "CWeaponHolyLight.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponHolyLight::vfunc5
CWeaponHolyLight *CWeaponHolyLight::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f2ae0 size=0x120
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CWeaponHolyLight.h"
#include "CDisciplineWeapon.h"
#include "CBaseCombatCharacter.h"
#include "CVStatList_t.h"
#include <math.h>

struct S103f2ae0Ent
{
	char m_pad[0x9c];
	CBaseCombatCharacter *m_pCharacter;
};

struct S103f2ae0Char
{
	char m_pad[0x13d4];
	float m_flStamp;
};

extern struct S103f2ae0Globals { char m_pad[0xc]; float curtime; } *g_1070b228;
S103f2ae0Ent *sub_101d1d10(void *pOwner, S103f2ae0Ent *pPrev);

void CWeaponHolyLight::vfunc326()
{
	CDisciplineWeapon *pWeapon = (CDisciplineWeapon *)this;
	void *pOwner = (void *)pWeapon->sub_10252240();
	if (!pOwner)
		return;
	int nLevel = CVStatListSet::Of(pOwner)->Find(3)->sub_10010609(pWeapon->m_nStatType);
	if (nLevel < 1)
		return;
	float flTime = (float)(pow((double)nLevel, 1.43) + g_1070b228->curtime);
	for (S103f2ae0Ent *pEnt = sub_101d1d10(pOwner, 0); pEnt; pEnt = sub_101d1d10(pOwner, pEnt)) {
		CBaseCombatCharacter *pChar = pEnt->m_pCharacter;
		if (pChar && pChar->sub_10337f30()) {
			S103f2ae0Char *pView = (S103f2ae0Char *)pChar;
			if (flTime > pView->m_flStamp)
				pView->m_flStamp = flTime;
		}
	}
	pWeapon->CDisciplineWeapon::vfunc326();
}
// END FUNCTION

// FUNCTION: 0x103f2c50 size=0x3
#include "CWeaponHolyLight.h"
int CWeaponHolyLight::vfunc285()
{
    return 0;
}
// END FUNCTION
