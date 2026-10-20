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
	void sub_100bb870(int a, const float *pPos);	// "CBeam::PointsInit"-like: clears the type bits above 0xff0, two beam ents, slot 62(a), end position = pPos, clears the attachment entries, then sub_100bbbf0
	void sub_100bbbf0();	// called through the stub at 0x10013c8c

	char m_pad03e0[0x45c - 0x3e0];
	int m_nNumBeamEnts;	// 0x45c
	char m_pad0460[4];
	unsigned int m_nBeamType;	// 0x464, low nibble is the end type
	unsigned int m_hEndEntity;	// 0x468
	char m_pad046c[0x48c - 0x46c];
	int m_nAttach[3];	// 0x48c
	char m_pad0498[0x4d8 - 0x498];
	float m_vecEndPos[3];	// 0x4d8
};
