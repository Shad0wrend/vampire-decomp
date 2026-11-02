// CWeaponRanged_Rifle_Remington: declared by pcdecomp transplant for 0x102360e0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CWeaponRanged_Rifle_Remington : public CBaseEntity
{
public:
	CWeaponRanged_Rifle_Remington *vfunc5(unsigned int flags);
	void sub_10013a57();
	CWeaponRanged_Rifle_Remington *sub_10236070();	// as in CKeepUpright (transplant); really the constructor (0x10236070): CWeaponRanged ctor (0x1000ab0a), the two records zeroed, vptr 0x104921fc, m_flStamp91c = gpGlobals->curtime
	void sub_10238070();	// CWeaponRanged::CWeaponRanged (0x10238070, stub 0x1000ab0a), the base constructor body the constructor calls first
	char m_pad0004[0x91c - sizeof(CBaseEntity)];
	float m_flStamp91c;	// 0x91c: gpGlobals->curtime at construction
	int m_aRecs920[2][5];	// 0x920: two 0x14 byte records, zeroed by the constructor
public:
    virtual int vfunc81();
    virtual int vfunc80();
    void vfunc319();	// as in CNPC_VBach (transplant)
};
