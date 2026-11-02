// CBeam: declared by pcdecomp transplant for 0x100bad80 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CGlobalEntityList.h"

struct CGameTrace;

class CBeam : public CBaseEntity
{
public:
	CBeam();	// 0x100bac50: base constructor (0), the ten beam entity handles at +0x468 and the one at +0x4e4 set to -1
	CBeam *vfunc5(unsigned int flags);
	virtual void vfunc87(void *pCheckTransmitInfo);	// "CBeam::SetTransmit"-like: unless the info's bit for this edict is set, base SetTransmit, then the same call on each of the ten attached entities (handles from +0x468)
	virtual void vfunc103();	// slot 103: move type none (slot 93(0, 0)), scope-traced SetSolid(0) on the collision property at +0x270, the dword at +0x16c = 2, then slot 104
	virtual void vfunc104();	// slot 104: hands the owner entity (slot 97) to sub_100bafc0, then the entity of the handle at +0x4e4 to sub_100bb030
	virtual void vfunc105(const char *pszModelName);	// slot 105 \"CBeam::SetModel\"-like: warns \"Setting CBeam to non-sprite model %s\" when the model is not a sprite (type 2), then sub_101cf4a0(this, name)
	virtual int vfunc124();	// "CBeam::DrawDebugTextOverlays": the base lines, then (text overlay bit 0 of the byte at +0x224) the "start:" and "end  :" lines
	Vector *vfunc215();	// slot 215 "CBeam::WorldSpaceCenter"-like: half the sum of the start (sub_100bb440) and end (sub_100bb270) positions, in a temporary vector
	void sub_1000cb8a();
	void sub_100bc080(inputdata_t &data);	// "CBeam::InputWidth"-like: the width (+0x4b8) and the end width (+0x4bc) from the input's float
	CBeam *sub_100bac50();	// as in CKeepUpright (transplant)
	float *sub_100bb440();	// start position getter (stub 0x10005c45)
	float *sub_100bb270();	// "CBeam::GetEndPos"-like: when the beam end is an entity (type 2 in the low nibble of +0x464, handle at +0x468) with a valid edict, tail calls slot 217 of that entity (via CBaseEntity::Instance), else of this
	void sub_100bb870(int a, const float *pPos);	// "CBeam::PointsInit"-like: clears the type bits above 0xff0, two beam ents, slot 62(a), end position = pPos, clears the attachment entries, then sub_100bbbf0
	void sub_100bb900(int a, const float *pPos);	// same as sub_100bb870 but sets the low type bits to 3
	void sub_100bbe70(int a, int b);
	void sub_100bb990(const float *pPos, CBaseEntity *pEnt);	// "CBeam::PointEntInit"-like: type bits = 1 (above 0xff0 kept), count 2, slot 62(pPos), the entity handed to sub_100bb030, attachments 1 and [count] cleared, then sub_100bbbf0
	void sub_100bba90(CBaseEntity *pStart, CBaseEntity *pEnd);	// as sub_100bba10 with the type bits = 5
	void sub_100bba10(CBaseEntity *pStart, CBaseEntity *pEnd);	// \"CBeam::EntsInit\"-like: two beam ents (count 2, type bits = 2), the entities handed to sub_100bafc0 / sub_100bb030, attachments 1 and 2 cleared, then sub_100bbbf0
	void sub_100bbbf0();	// called through the stub at 0x10013c8c
	void sub_100bbb10(int nEnts, CBaseEntity **ppEnts, int *pAttach);	// "CBeam::SplineInit"-like: Msg when nEnts < 2 or > 10, type bits = 4, stores the entity handles (+0x468, -1 for null) and attachments (+0x490) of the first nEnts, count at +0x45c, then sub_100bbbf0
	void sub_100bafc0(CBaseEntity *pEnt);	// called through the stub at 0x10002568
	void sub_100bb030(CBaseEntity *pEnt);	// called through the stub at 0x1000cdc4
	void sub_100bb0b0(const float *pPos);	// "CBeam::SetAbsStartPos"-like: without a (live) move parent at +0x25c hands pPos to slot 62; else brings the world position into the parent's space first (recalculating the absolute transform when dirty)
	void sub_100bbef0(CGameTrace *pTrace);	// "CBeam::DoDamage"-like: refreshes the beam (sub_100bbbf0); when the trace hit something (fraction below 1, or started / stuck in a solid) and its entity takes damage, applies a damage record of (time since +0x454) * the rate at +0x458 (at least 1) along the trace direction; then stamps the current time at +0x454

	char m_pad03e0[0x454 - 0x3e0];
	float m_flStartTime;	// 0x454: stamped with the current time by CEnvBeam::Spawn
	float m_flDamageRate;	// 0x458
	int m_nNumBeamEnts;	// 0x45c
	char m_pad0460[4];
	unsigned int m_nBeamType;	// 0x464, low nibble is the end type
	unsigned int m_hEndEntity;	// 0x468
	char m_pad046c[0x48c - 0x46c];
	int m_nAttach[3];	// 0x48c
	char m_pad0498[0x4b8 - 0x498];
	union {
		float m_fWidth;	// 0x4b8
		float m_flWidth;	// CEnvLaser's name for it
	};
	float m_fEndWidth;	// 0x4bc
	char m_pad04c0[0x4c8 - 0x4c0];
	float m_flNoiseAmplitude;	// 0x4c8 (CEnvLaser / CEnvBeam KeyValue)
	char m_pad04cc[0x4d0 - 0x4cc];
	float m_flTextureScroll;	// 0x4d0 (CEnvLaser KeyValue)
	char m_pad04d4[0x4d8 - 0x4d4];
	float m_vecEndPos[3];	// 0x4d8
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
};
