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
	bool sub_1019ee40();	// switches this rope's state off (sub_1019f1f0(false)), then switches it on (sub_1019f1f0(true)) for every other rope entity of the same name; returns true
	void sub_1019f1f0(bool bOn);	// worker (called through the stub at 0x10001da7)

	char m_padRope03e0[0x458 - 0x3e0];
	const char *m_pszName458;	// 0x0458: compared case-insensitively with the entity name by sub_1019ee40
};
