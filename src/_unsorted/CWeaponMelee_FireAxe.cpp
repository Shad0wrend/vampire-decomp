// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
