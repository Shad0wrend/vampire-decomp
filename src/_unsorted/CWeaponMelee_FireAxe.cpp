// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e5cb0 size=0x6
#include "CWeaponMelee_FireAxe.h"
namespace lifted {
extern char g_10941834;
}
int CWeaponMelee_FireAxe::vfunc80()
{
    return (int)&lifted::g_10941834;
}
// END FUNCTION

// FUNCTION: 0x103e5cd0 size=0x3
#include "CWeaponMelee_FireAxe.h"
int CWeaponMelee_FireAxe::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e5e80 size=0x6
#include "CWeaponMelee_FireAxe.h"
namespace lifted {
extern char g_1066c788;
}
int CWeaponMelee_FireAxe::vfunc362()
{
    return (int)&lifted::g_1066c788;
}
// END FUNCTION

// FUNCTION: 0x103e5ea0 size=0x6
#include "CWeaponMelee_FireAxe.h"
int CWeaponMelee_FireAxe::vfunc363()
{
    return 0x14d;
}
// END FUNCTION

// FUNCTION: 0x103e5f30 size=0x11
#include "CWeaponMelee_FireAxe.h"

// TARGET: CWeaponMelee_FireAxe::vfunc103
void CWeaponMelee_FireAxe::vfunc103()
{
	sub_100047be();
	m_b871 = 0;
}
// END FUNCTION

// FUNCTION: 0x103e5f60 size=0x3f
#include "CWeaponMelee_FireAxe.h"

struct CUnknownWeapon103e5f60 {
    char *sub_10010ea6();
    void sub_100131ec(int a, int b);
};

struct CUnknownChar103e5f60 {
    void sub_100091a6(int a, int b);
};

// TARGET: CWeaponMelee_FireAxe::vfunc298
void CWeaponMelee_FireAxe::vfunc298(int a, int b)
{
    if (a != 0) {
        ((CUnknownChar103e5f60 *)a)->sub_100091a6(
            *(int *)(((CUnknownWeapon103e5f60 *)this)->sub_10010ea6() + 0x4fed0),
            *(int *)(((CUnknownWeapon103e5f60 *)this)->sub_10010ea6() + 0x4fec0));
    }
    ((CUnknownWeapon103e5f60 *)this)->sub_100131ec(a, b);
}
// END FUNCTION

// FUNCTION: 0x103e5fb0 size=0x35
// TARGET: CWeaponMelee_FireAxe::vfunc300
#include "CBaseCombatWeapon.h"
#include "CWeaponMelee_FireAxe.h"

void CWeaponMelee_FireAxe::vfunc300()
{
	int iVar1 = ((CBaseCombatWeapon *)this)->sub_10252240();
	if (iVar1 != 0) {
		int *pOwner = (int *)((CBaseCombatWeapon *)this)->sub_102517b0();
		*(unsigned int *)(iVar1 + 0xe38) = *(unsigned int *)(iVar1 + 0xe38) & ~(unsigned int)pOwner[0x4fed0 / 4];
	}
	((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc300();
}
// END FUNCTION

// FUNCTION: 0x103eccc0 size=0x1e
#include "CWeaponMelee_FireAxe.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_FireAxe::vfunc5
CWeaponMelee_FireAxe *CWeaponMelee_FireAxe::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
