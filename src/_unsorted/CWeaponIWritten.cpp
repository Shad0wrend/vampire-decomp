// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040b2e0 size=0x6
#include "CWeaponIWritten.h"
int CWeaponIWritten::vfunc360()
{
    return 0x2000;
}
// END FUNCTION

// FUNCTION: 0x1040b300 size=0x1e
#include "CWeaponIWritten.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIWritten::vfunc5
CWeaponIWritten *CWeaponIWritten::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1040b370 size=0x1
#include "CWeaponIWritten.h"
void CWeaponIWritten::vfunc291()
{
}
// END FUNCTION

// FUNCTION: 0x1040b390 size=0x15
#include "CWeaponIWritten.h"
#include "globalvars.h"

// TARGET: CWeaponIWritten::vfunc326
void CWeaponIWritten::vfunc326()
{
	*(float *)((char *)this + 0x910) = gpGlobals->curtime + 0.1f;
}
// END FUNCTION

// FUNCTION: 0x1040b3c0 size=0x6
#include "CWeaponIWritten.h"
int CWeaponIWritten::vfunc328()
{
    return 0xbc;
}
// END FUNCTION

// FUNCTION: 0x1040b3e0 size=0x6
#include "CWeaponIWritten.h"
int CWeaponIWritten::vfunc329()
{
    return 0xbc;
}
// END FUNCTION

// FUNCTION: 0x1040b400 size=0x20
#include "CWeaponIWritten.h"

// TARGET: CWeaponIWritten::vfunc321
void CWeaponIWritten::vfunc321()
{
	if (vfunc309())
		vfunc307(0xb6);
}
// END FUNCTION

// FUNCTION: 0x1040b430 size=0x3
#include "CWeaponIWritten.h"
bool CWeaponIWritten::vfunc325()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040b450 size=0x4e
#include "CWeaponIWritten.h"
extern char g_106b8540[];

bool CWeaponIWritten::vfunc315()
{
	CWeaponIArmor *pThis = (CWeaponIArmor *)this;
	const char *pszName = *(const char **)((char *)this + 0x754);
	pThis->vfunc105(pszName ? pszName : g_106b8540);
	return pThis->sub_10253b70(pThis->vfunc342(0), pThis->vfunc343(), 0xb4, pThis->vfunc344());
}
// END FUNCTION

// FUNCTION: 0x1040b4c0 size=0x20
#include "CWeaponIWritten.h"
#include "CBaseCombatWeapon.h"

// TARGET: CWeaponIWritten::vfunc319
void CWeaponIWritten::vfunc319()
{
	CWeaponIArmorOwner *pOwner = sub_102521f0();
	if (pOwner && *(int *)((char *)pOwner + 0xa8))
		((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc319();
}
// END FUNCTION

// FUNCTION: 0x1040b4f0 size=0x65
#include "CWeaponIWritten.h"

struct IRandomStream {
	virtual void v0();
	virtual float RandomFloat(float minVal, float maxVal);
};
extern IRandomStream *g_1070b244;
struct Vec3 {
	float x, y, z;
};

void CWeaponIWritten::sub_1040b4f0()
{
	Vec3 vec;
	CWeaponIArmorTarget *target;
	CWeaponIArmorOwner *owner = sub_102521f0();
	if (owner && (target = owner->m_pTarget) != 0) {
		vec.x = g_1070b244->RandomFloat(-2.0f, -1.0f);
		vec.y = g_1070b244->RandomFloat(0.5f, 1.0f);
		vec.z = 0.0f;
		target->vfunc169(&vec.x);
	}
}
// END FUNCTION
