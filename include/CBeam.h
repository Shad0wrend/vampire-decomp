// CBeam: declared by pcdecomp transplant for 0x100bad80 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CBeam : public CBaseEntity
{
public:
	CBeam *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	CBeam *sub_100bac50();	// as in CKeepUpright (transplant)
	float *sub_100bb270();	// "CBeam::GetEndPos"-like: when the beam end is an entity (type 2 in the low nibble of +0x464, handle at +0x468) with a valid edict, tail calls slot 217 of that entity (via CBaseEntity::Instance), else of this

	char m_pad03e0[0x464 - 0x3e0];
	unsigned int m_nBeamType;	// 0x464, low nibble is the end type
	unsigned int m_hEndEntity;	// 0x468
};
