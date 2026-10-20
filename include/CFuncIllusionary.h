// CFuncIllusionary: declared by pcdecomp transplant for 0x100c0df0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CFuncIllusionary : public CBaseEntity
{
public:
	CFuncIllusionary *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	virtual void vfunc103();	// slot 103 "CFuncIllusionary::Spawn": slot 64(angles), slot 93(0, 0), inlined SetSolid(0) with scope trace, then SetModel(the model name from slot 9) and the bool object at +0x1b0 set to 1
};
