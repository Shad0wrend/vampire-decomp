// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ed080 size=0x6
// TARGET: CWeaponIThrown::vfunc82
struct datamap_t;
extern datamap_t g_1067c9e8;

datamap_t *CWeaponIThrown::vfunc82()
{
	return &g_1067c9e8;
}
// END FUNCTION

// FUNCTION: 0x103ed160 size=0x6
#include "CWeaponIThrown.h"

// TARGET: CWeaponIThrown::vfunc360
unsigned int CWeaponIThrown::vfunc360()
{
	return 0x2000;
}
// END FUNCTION

// FUNCTION: 0x103ed180 size=0x1e
#include "CWeaponIThrown.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIThrown::vfunc5
CWeaponIThrown *CWeaponIThrown::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103ed1b0 size=0x13
#include "CWeaponIThrown.h"

// TARGET: CWeaponIThrown::vfunc328
int CWeaponIThrown::vfunc328()
{
    return (m_p86c != 0) + 0xb9;
}
// END FUNCTION
