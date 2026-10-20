// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e9b40 size=0x1e
#include "CWeaponMelee_TzimisceMelee.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee::vfunc5
CBaseCombatWeapon *CWeaponMelee::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103ea5b0 size=0xd5
#include "CWeaponMelee.h"

extern "C" int atoi(const char *);

// TARGET: CWeaponMelee::vfunc370
void CWeaponMelee::vfunc370(int *event, CBaseCombatWeapon *other)
{
	switch (event[0])
	{
	case 0xbb9:
	case 0xbd6: case 0xbd7: case 0xbd8: case 0xbd9: case 0xbda: case 0xbdb: case 0xbdc: case 0xbdd:
	case 0xbdf: case 0xbe0: case 0xbe1: case 0xbe2: case 0xbe3: case 0xbe4:
	case 0xbe7:
		if (*(int *)((char *)other + 0xa8) == 0)
			vfunc326();
		return;
	case 0xbbb:
		return;
	case 0xfa1:
		sub_10093b10(atoi((const char *)event[1]), 1);
		return;
	case 0xfa2:
		sub_10093b10(atoi((const char *)event[1]), 0);
		return;
	}
	CBaseCombatWeapon::vfunc370(event, other);
}
// END FUNCTION

// FUNCTION: 0x103eac30 size=0x19
#include "CWeaponMelee_TzimisceMelee.h"

void CWeaponMelee::vfunc367(int a, int b, int c)
{
	sub_103ea7e0(0x4b, a, b, c);
}
// END FUNCTION
