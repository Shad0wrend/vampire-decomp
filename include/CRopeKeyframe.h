// CRopeKeyframe: declared by pcdecomp transplant for 0x1019dd90 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CRopeKeyframe : public CBaseEntity
{
public:
	CRopeKeyframe *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	CRopeKeyframe *sub_1019dc80();	// as in CKeepUpright (transplant)
	virtual void vfunc104();	// slot 104 "Precache": appends ".vmt" to the material name at +0x488 when it lacks it, then precaches it (index at +0x46c)
};
