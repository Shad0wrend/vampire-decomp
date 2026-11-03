// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f4320 size=0x6
#include "CWeaponIGeneric.h"
int CWeaponIGeneric::vfunc360()
{
    return 0x2000;
}
// END FUNCTION

// FUNCTION: 0x103f4340 size=0x47
#include "CWeaponIGeneric.h"
const Vector &CWeaponIGeneric::vfunc331()
{
    static Vector s_vec(0.04362f, 0.04362f, 0.04362f);
    return s_vec;
}
// END FUNCTION

// FUNCTION: 0x103f43d0 size=0x1e
#include "CWeaponIGeneric.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIGeneric::vfunc5
CWeaponIGeneric *CWeaponIGeneric::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f4400 size=0x34
#include <string.h>
#include "CWeaponIGeneric.h"
#include "CBaseCombatWeapon.h"
extern char g_106b8540[];
void sub_1000ce23(CWeaponIGeneric *pWeapon);
// TARGET: CWeaponIGeneric::vfunc103
void CWeaponIGeneric::vfunc103()
{
	((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc103();
	char *pszName = *(char **)((char *)this + 0x11c);
	if (!pszName)
		pszName = g_106b8540;
	if (_strcmpi(pszName, "item_g_warrens4_passkey") == 0)
		sub_1000ce23(this);
}
// END FUNCTION

// FUNCTION: 0x103f4470 size=0x20
#include "CWeaponIGeneric.h"
#include "CBaseCombatWeapon.h"

void CWeaponIGeneric::vfunc370(int *pEvent, CBaseCombatWeapon *pWeapon)
{
	if (*pEvent == 0xbc6 || *pEvent == 0xc80)
		return;
	((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc370(pEvent, pWeapon);
}
// END FUNCTION

// FUNCTION: 0x103f44a0 size=0x1
#include "CWeaponIGeneric.h"
void CWeaponIGeneric::vfunc291()
{
}
// END FUNCTION

// FUNCTION: 0x103f4810 size=0x1b
#include "CWeaponIGeneric.h"

// TARGET: CWeaponIGeneric::vfunc326
void CWeaponIGeneric::vfunc326()
{
	float f = gpGlobals->curtime + 1.5f;
	m_f910 = f;
	m_f730 = f;
}
// END FUNCTION

// FUNCTION: 0x103f4840 size=0x23
#include <string.h>
#include "CWeaponIGeneric.h"

extern char g_106b8540[];

// TARGET: CWeaponIGeneric::vfunc328
int CWeaponIGeneric::vfunc328()
{
	const char *pszName = *(const char **)((char *)this + 0x11c);
	if (pszName == 0) {
		pszName = g_106b8540;
	}
	_strcmpi(pszName, "item_g_lockpick");
	return 0xbc;
}
// END FUNCTION

// FUNCTION: 0x103f4880 size=0x6
#include "CWeaponIGeneric.h"
int CWeaponIGeneric::vfunc329()
{
    return 0xbc;
}
// END FUNCTION

// FUNCTION: 0x103f48a0 size=0x70
#include "CWeaponIGeneric.h"
struct IRandom { virtual void v0(); virtual void v1(); virtual int RandomInt(int lo, int hi); };
extern IRandom *g_1070b244;

void CWeaponIGeneric::vfunc321()
{
    if (vfunc309()) {
        int *slot = (int *)((char *)this + 0x854);
        if (*slot == -1) {
            if (g_1070b244->RandomInt(0, 100) < 90) {
                vfunc307(0xb6);
                return;
            }
            vfunc307(0xb7);
            return;
        }
        sub_100138fe();
        vfunc307(*slot);
        *slot = -1;
    }
}
// END FUNCTION

// FUNCTION: 0x103f4930 size=0x3
#include "CWeaponIGeneric.h"
bool CWeaponIGeneric::vfunc325()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f4950 size=0x75
#include "CWeaponIGeneric.h"
struct Ent { bool sub_10336920(); };

bool CWeaponIGeneric::vfunc315()
{
    Ent *pEnt = (Ent *)sub_10252240();
    if (!pEnt)
        return false;
    char *pszName;
    if (!pEnt->sub_10336920())
        pszName = vfunc272();
    else
        pszName = vfunc273();
    if (*pszName)
        vfunc105(pszName);
    char r = sub_10253b70(vfunc342(0), vfunc343(), 0xb4, vfunc344());
    return r ? true : false;
}
// END FUNCTION

// FUNCTION: 0x103f49f0 size=0x65
#include "CWeaponIGeneric.h"

struct IRandomStream {
	virtual void v0();
	virtual float RandomFloat(float minVal, float maxVal);
};
extern IRandomStream *g_1070b244;
struct Vec3 {
	float x, y, z;
};

void CWeaponIGeneric::vfunc339()
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
