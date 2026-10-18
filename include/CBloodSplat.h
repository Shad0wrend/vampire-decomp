// CBloodSplat: point entity that traces forward and leaves a blood decal.
#pragma once

class CBloodSplat : public CBaseEntity
{
public:
	void vfunc134();
	CBloodSplat *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
};
