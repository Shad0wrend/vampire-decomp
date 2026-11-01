// CWeaponMelee_Torch: declared by pcdecomp transplant for 0x103ecde0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

#include "ehandle.h"

class CWeaponMelee_Torch
{
public:
	char m_pad0000[0x910];
	EHANDLE m_hEmitter910;	// 0x910: the "TorchWeaponEmitter" particle entity
	void vfunc130(void *pArg);	// slot 130: plays the fire loop while the emitter lives, then the base weapon's slot 130
	void sub_10258440(void *pArg);	// CBaseCombatWeapon::vfunc130 (stub 0x10013593), called directly
	CWeaponMelee_Torch *vfunc5(unsigned int flags);
	void vfunc104();	// slot 104: the base weapon's slot 104, then the \"TorchWeaponEmitter\" and \"Fire_Loop\" sounds
	void sub_10010230();
	void sub_10013a57();
	void sub_103e7580();
	void sub_103e78b0();	// destroys the emitter whose handle is at +0x910
	void sub_103e77f0(); // \"CWeaponMelee_Torch::CreateEmitter\"-like: when the emitter handle at +0x910 no longer resolves, creates a \"TorchWeaponEmitter\" particle entity at slot 217(slot 219(-1.0)), attaches it to this weapon and stores its handle at +0x910
	void sub_103e7680(); // emits the \"Fire_Loop\" sample on channel 4 from the weapon to a CPASAttenuationFilter(this, ATTN_NONE)
public:
	int vfunc80();
	int vfunc81();
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
	int vfunc362();
	int vfunc363();
	void vfunc180();	// as in CNPC_VBach (transplant)
	void vfunc66();	// as in CNPC_VBach (transplant)
	void vfunc67();	// as in CNPC_VBach (transplant)
};
