// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e8e30 size=0x6
#include "CWeaponMelee_SabbatLeaderAttack.h"
namespace lifted {
extern char g_1094181c;
}
int CWeaponMelee_SabbatLeaderAttack::vfunc80()
{
    return (int)&lifted::g_1094181c;
}
// END FUNCTION

// FUNCTION: 0x103e8e50 size=0x3
#include "CWeaponMelee_SabbatLeaderAttack.h"
int CWeaponMelee_SabbatLeaderAttack::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e9000 size=0x6
#include "CWeaponMelee_SabbatLeaderAttack.h"
namespace lifted {
extern char g_10674b50;
}
int CWeaponMelee_SabbatLeaderAttack::vfunc362()
{
    return (int)&lifted::g_10674b50;
}
// END FUNCTION

// FUNCTION: 0x103e9020 size=0x6
#include "CWeaponMelee_SabbatLeaderAttack.h"
int CWeaponMelee_SabbatLeaderAttack::vfunc363()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x103e90b0 size=0x11
#include "CWeaponMelee_SabbatLeaderAttack.h"

// TARGET: CWeaponMelee_SabbatLeaderAttack::vfunc103
void CWeaponMelee_SabbatLeaderAttack::vfunc103()
{
	sub_100047be();
	m_b871 = 1;
}
// END FUNCTION

// FUNCTION: 0x103e90e0 size=0x6
#include "CWeaponMelee_SabbatLeaderAttack.h"
int CWeaponMelee_SabbatLeaderAttack::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103eced0 size=0x1e
#include "CWeaponMelee_SabbatLeaderAttack.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_SabbatLeaderAttack::vfunc5
CWeaponMelee_SabbatLeaderAttack *CWeaponMelee_SabbatLeaderAttack::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
