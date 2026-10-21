// CWeaponMelee_MingXiaoTentacle: declared by pcdecomp transplant for 0x103ec8e0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CWeaponMelee_MingXiaoTentacle : public CBaseEntity
{
public:
	CWeaponMelee_MingXiaoTentacle *vfunc5(unsigned int flags);
	void sub_10013a57();
	CWeaponMelee_MingXiaoTentacle *sub_103ec870();	// as in CKeepUpright (transplant)
	int vfunc367(int a, float b, float c);	// slot 367: its own (0x103ec910)
	void *sub_102521f0();	// owner getter (thunk 0x10014fab)
};
