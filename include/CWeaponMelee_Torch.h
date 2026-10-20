// CWeaponMelee_Torch: declared by pcdecomp transplant for 0x103ecde0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CWeaponMelee_Torch
{
public:
	CWeaponMelee_Torch *vfunc5(unsigned int flags);
	void sub_10013a57();
	void sub_103e77f0();	// "CWeaponMelee_Torch::CreateEmitter"-like: when the emitter handle at +0x910 no longer resolves, creates a "TorchWeaponEmitter" particle entity at slot 217(slot 219(-1.0)), attaches it to this weapon and stores its handle at +0x910
};
