// CWeaponRanged_MingXiao_Spit: declared by pcdecomp transplant for 0x1023a590 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CWeaponRanged.h"

class CWeaponRanged_MingXiao_Spit : public CWeaponRanged
{
public:
	CBaseEntity *vfunc5(unsigned int flags);
	void sub_10013a57();
public:
	int vfunc80();
	virtual void vfunc104();	// 0x102379e0 (matched as sub_102379e0)
	int vfunc81();
	CWeaponActivityRecord *vfunc362();
	int vfunc363();
	char m_pad898[0x91c - 0x898];
};
