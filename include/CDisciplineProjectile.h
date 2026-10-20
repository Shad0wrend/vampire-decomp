// CDisciplineProjectile: declared by pcdecomp transplant for 0x101d9f30 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CDisciplineProjectile : public CBaseEntity
{
public:
	CDisciplineProjectile *vfunc5(unsigned int flags);
	void sub_1000d800();
	CDisciplineProjectile *sub_101d9e20();	// as in CKeepUpright (transplant)
	void vfunc269();	// hands the entity of the handle at +0x778, the dword at +0x9c of the entity of the handle at +0x8a8 and the dword at +0x8bc to the global effect manager at 0x10739a4c
};
