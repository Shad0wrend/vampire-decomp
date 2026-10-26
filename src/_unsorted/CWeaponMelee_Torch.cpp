// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e74d0 size=0x29
#include "CUnknown1070b22c.h"
#include "CUnknown1070b248.h"
#include "CBaseCombatWeapon.h"
#include "CWeaponMelee_Torch.h"
extern CUnknown1070b22c *g_1070b22c;
extern CUnknown1070b248 *g_1070b248;
// TARGET: CWeaponMelee_Torch::vfunc104
void CWeaponMelee_Torch::vfunc104()
{
    ((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc104();
    g_1070b22c->vfunc17((int)"TorchWeaponEmitter", 0);
    g_1070b248->vfunc0("Weapons/Melee/Torch/Fire_Loop.wav", 0);
}
// END FUNCTION

// FUNCTION: 0x103e7640 size=0x24
void __fastcall sub_10008512(void *pSelf);

struct CWeaponMelee_TorchCallee {
    char sub_1001428b(int a);
};

// TARGET: sub_103e7640
char __fastcall sub_103e7640(void *pSelf, int unused, int arg)
{
    if (((CWeaponMelee_TorchCallee *)pSelf)->sub_1001428b(arg)) {
        sub_10008512(pSelf);
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e7920 size=0x22
void __fastcall sub_10008512(void *p);

struct CWeaponMelee_TorchX
{
    void sub_1001089d(int a);
    void sub_103e7920(int a);
};

// TARGET: sub_103e7920
void CWeaponMelee_TorchX::sub_103e7920(int a)
{
    sub_1001089d(a);
    void (__fastcall *pfn)(void *) = (void (__fastcall *)(void *))(*(void ***)this)[0x10c / 4];
    pfn(this);
    sub_10008512(this);
}
// END FUNCTION

// FUNCTION: 0x103ecde0 size=0x1e
#include "CWeaponMelee_Torch.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Torch::vfunc5
CWeaponMelee_Torch *CWeaponMelee_Torch::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
