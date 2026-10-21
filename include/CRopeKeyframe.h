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
	void sub_1019e310();	// "Spawn"-like: CBaseEntity::sub_100b3b00, sub_1019e5d0, clamps the segment count at +0x468 to 2..10, sub_1019e8b0(1), remembers whether the start / end point handles (+0x490 / +0x494) resolve in the bytes at +0x48c / +0x48d, sets the flag object at +0x1b0, the byte at +0x1b1, installs the think function (stub 0x10012247) and the next think time 0.1f
	void sub_1019e5d0();	// stub 0x1000cb03
	void sub_1019e8b0(int a);	// stub 0x1000f9ed
	bool sub_1019e110(float slack);	// measures the rope between the start and end entities (their origin, or their attachment when the attachment index is set) and stores the two values it gets back at +0x474 and +0x45c (marking the entity changed, byte +0x1b1); false when either entity is missing

	char m_padRope03e0[0x458 - 0x3e0];
	const char *m_pszName458;	// 0x0458: compared case-insensitively with the entity name by sub_1019ee40
	int m_n45c;	// 0x045c
	char m_padRope0460[0x474 - 0x460];
	int m_n474;	// 0x0474
	char m_padRope0478[0x490 - 0x478];
	unsigned int m_hStartPoint;	// 0x0490
	unsigned int m_hEndPoint;	// 0x0494
	short m_iStartAttachment;	// 0x0498
	short m_iEndAttachment;	// 0x049a
};
