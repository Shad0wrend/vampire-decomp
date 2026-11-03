// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103eb600 size=0x6
#include "CWeaponMelee_Tzimisce3Claw.h"
namespace lifted {
extern char g_10940e44;
}
int CWeaponMelee_Tzimisce3Claw::vfunc80()
{
    return (int)&lifted::g_10940e44;
}
// END FUNCTION

// FUNCTION: 0x103eb620 size=0x3
#include "CWeaponMelee_Tzimisce3Claw.h"
int CWeaponMelee_Tzimisce3Claw::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103eb7d0 size=0x6
#include "CWeaponMelee_Tzimisce3Claw.h"
namespace lifted {
extern char g_10678040;
}
int CWeaponMelee_Tzimisce3Claw::vfunc362()
{
    return (int)&lifted::g_10678040;
}
// END FUNCTION

// FUNCTION: 0x103eb7f0 size=0x6
#include "CWeaponMelee_Tzimisce3Claw.h"
int CWeaponMelee_Tzimisce3Claw::vfunc363()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x103eb880 size=0x11
#include "CWeaponMelee_Tzimisce3Claw.h"

// TARGET: CWeaponMelee_Tzimisce3Claw::vfunc103
void CWeaponMelee_Tzimisce3Claw::vfunc103()
{
	sub_100047be();
	m_b871 = 1;
}
// END FUNCTION

// FUNCTION: 0x103eb8b0 size=0x59
#include "CWeaponMelee.h"
#include "CWeaponMelee_Tzimisce3Claw.h"
struct COwnerInfoView { char pad[0x5f2c]; char m_b5f2c; };
struct COwnerView { char pad[0x94]; COwnerInfoView *m_pInfo; };
char CWeaponMelee_Tzimisce3Claw::vfunc372(int a, int b, int c)
{
	CWeaponMelee *pBase = (CWeaponMelee *)this;
	if (a == 0x4b) {
		COwnerView *pOwner = (COwnerView *)sub_102521f0();
		if (pOwner && pOwner->m_pInfo && !pOwner->m_pInfo->m_b5f2c)
			return pBase->CWeaponMelee::vfunc372(0x4e, b, c);
	}
	return pBase->CWeaponMelee::vfunc372(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x103eb930 size=0x6
#include "CWeaponMelee_Tzimisce3Claw.h"
int CWeaponMelee_Tzimisce3Claw::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecff0 size=0x1e
#include "CWeaponMelee_Tzimisce3Claw.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Tzimisce3Claw::vfunc5
CWeaponMelee_Tzimisce3Claw *CWeaponMelee_Tzimisce3Claw::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
