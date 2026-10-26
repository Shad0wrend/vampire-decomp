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
