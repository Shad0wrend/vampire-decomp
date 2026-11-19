// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e4f20 size=0x6
#include "CWeaponMelee_Claws_Protean4.h"
namespace lifted {
extern char g_10942560;
}
int CWeaponMelee_Claws_Protean4::vfunc80()
{
    return (int)&lifted::g_10942560;
}
// END FUNCTION

// FUNCTION: 0x103e4f40 size=0x3
#include "CWeaponMelee_Claws_Protean4.h"
int CWeaponMelee_Claws_Protean4::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e50f0 size=0x6
#include "CWeaponMelee_Claws_Protean4.h"
namespace lifted {
extern char g_10669d28;
}
CWeaponActivityRecord *CWeaponMelee_Claws_Protean4::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_10669d28);
}
// END FUNCTION

// FUNCTION: 0x103e5110 size=0x6
#include "CWeaponMelee_Claws_Protean4.h"
int CWeaponMelee_Claws_Protean4::vfunc363()
{
    return 0xe0;
}
// END FUNCTION

// FUNCTION: 0x103e51a0 size=0x6
#include "CWeaponMelee_Claws_Protean4.h"
int CWeaponMelee_Claws_Protean4::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecc00 size=0x1e
#include "CWeaponMelee_Claws_Protean4.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Claws_Protean4::vfunc5
CBaseEntity  *CWeaponMelee_Claws_Protean4::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
