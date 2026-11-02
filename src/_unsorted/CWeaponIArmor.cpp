// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f2f40 size=0x6
#include "CWeaponIArmor.h"
namespace lifted {
extern char g_1067ea10;
}
CWeaponActivityRecord * CWeaponIArmor::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_1067ea10);
}
// END FUNCTION

// FUNCTION: 0x103f2f60 size=0x6
#include "CWeaponIArmor.h"
int CWeaponIArmor::vfunc363()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103f3fc0 size=0x1
#include "CWeaponIArmor.h"
void CWeaponIArmor::vfunc291()
{
}
// END FUNCTION

// FUNCTION: 0x103f3fe0 size=0x1
#include "CWeaponIArmor.h"
void CWeaponIArmor::vfunc326()
{
}
// END FUNCTION

// FUNCTION: 0x103f4000 size=0x6
#include "CWeaponIArmor.h"
int CWeaponIArmor::vfunc328()
{
    return 0xbc;
}
// END FUNCTION

// FUNCTION: 0x103f4090 size=0x4e
#include "CWeaponIArmor.h"
extern char g_106b8540[];

bool CWeaponIArmor::vfunc315()
{
	const char *pszName = *(const char **)((char *)this + 0x754);
	vfunc105(pszName ? pszName : g_106b8540);
	return sub_10253b70(vfunc342(0), vfunc343(), 0xb4, vfunc344());
}
// END FUNCTION

// FUNCTION: 0x103f4100 size=0x20
#include "CWeaponIArmor.h"
#include "CBaseCombatWeapon.h"

// TARGET: CWeaponIArmor::vfunc319
void CWeaponIArmor::vfunc319()
{
	CWeaponIArmorOwner *pOwner = sub_102521f0();
	if (pOwner && *(int *)((char *)pOwner + 0xa8))
		((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc319();
}
// END FUNCTION

// FUNCTION: 0x103f4130 size=0x65
#include "CWeaponIWritten.h"

struct IRandomStream {
	virtual void v0();
	virtual float RandomFloat(float minVal, float maxVal);
};
extern IRandomStream *g_1070b244;
struct Vec3 {
	float x, y, z;
};

void CWeaponIArmor::vfunc339()
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
