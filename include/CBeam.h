// CBeam: declared by pcdecomp transplant for 0x100bad80 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CGlobalEntityList.h"

class CBeam : public CBaseEntity
{
public:
	CBeam *vfunc5(unsigned int flags);
	virtual void vfunc87(void *pCheckTransmitInfo);	// "CBeam::SetTransmit"-like: unless the info's bit for this edict is set, base SetTransmit, then the same call on each of the ten attached entities (handles from +0x468)
	virtual void vfunc103();	// slot 103: move type none (slot 93(0, 0)), scope-traced SetSolid(0) on the collision property at +0x270, the dword at +0x16c = 2, then slot 104
	virtual void vfunc104();	// slot 104: hands the owner entity (slot 97) to sub_100bafc0, then the entity of the handle at +0x4e4 to sub_100bb030
	void sub_1000cb8a();
	CBeam *sub_100bac50();	// as in CKeepUpright (transplant)
	float *sub_100bb270();	// "CBeam::GetEndPos"-like: when the beam end is an entity (type 2 in the low nibble of +0x464, handle at +0x468) with a valid edict, tail calls slot 217 of that entity (via CBaseEntity::Instance), else of this
	void sub_100bb870(int a, const float *pPos);	// "CBeam::PointsInit"-like: clears the type bits above 0xff0, two beam ents, slot 62(a), end position = pPos, clears the attachment entries, then sub_100bbbf0
	void sub_100bb900(int a, const float *pPos);	// same as sub_100bb870 but sets the low type bits to 3
	void sub_100bbbf0();	// called through the stub at 0x10013c8c
	void sub_100bbb10(int nEnts, CBaseEntity **ppEnts, int *pAttach);	// "CBeam::SplineInit"-like: Msg when nEnts < 2 or > 10, type bits = 4, stores the entity handles (+0x468, -1 for null) and attachments (+0x490) of the first nEnts, count at +0x45c, then sub_100bbbf0
	void sub_100bafc0(CBaseEntity *pEnt);	// called through the stub at 0x10002568
	void sub_100bb030(CBaseEntity *pEnt);	// called through the stub at 0x1000cdc4

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
