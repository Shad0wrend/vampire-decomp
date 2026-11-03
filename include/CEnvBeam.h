// CEnvBeam: declared by pcdecomp transplant for 0x100fec10 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "datamap.h"

#include "CBeam.h"

class CEnvBeam : public CBeam
{
public:
	CEnvBeam *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	CEnvBeam *sub_100febe0();	// as in CKeepUpright (transplant)
	void vfunc104();	// slot 104 "CEnvBeam::Precache": precaches the sprite named at +0x518 (index at +0x514) and the one named at +0x520 (path into +0x524, 0x80 bytes), then CBeam::vfunc104
	void sub_10015749();	// CBeam::vfunc104 (stub 0x10015749), called directly
	void sub_100fef50();	// "CEnvBeam::TurnOn": sets the active flag (+0x4f4); a lasting beam (life +0x500 is 0, spawn flag 8 clear) is shown (effect bit 6 cleared), relinked between its ends (CBeam::sub_100bbe70) and thinks BeamUpdateThink, else it thinks TriggerThink
	void vfunc103();	// slot 103 "CEnvBeam::Spawn": without a sprite name (+0x518) the entity removes itself (think 0x10015b68), else CBeam::vfunc103 (stub 0x1001553c), the widths (+0x4b8 / +0x4bc) from the bolt width (+0x504), the beam thinks BeamUpdateThink / TriggerThink according to its life (+0x500) and spawn flags, and the start position (+0x4e8) is taken from slot 217 unless the byte at +0x5a8 is set
	void vfunc113();	// slot 113: CBaseEntity::vfunc113 called directly, then when the life (+0x500) is zero and the spawn flag 8 (+0x204) is clear, sub_10100b60 (stub 0x10004ea3)
	void sub_10100b60();	// the lasting-beam tail of vfunc113, called directly (stub 0x10004ea3)
	void sub_100ff090();	// "CEnvBeam::TriggerThink"-like: schedules the next think (the restrike time at +0x510, random in 0..restrike with spawn flag 4, from now, plus the life) when the life is set, marks the beam active, then strikes: with an end entity name (+0x4fc) through sub_100ff310, without a start name (+0x4f8) through sub_101001e0, else at the origin of the entity of that name (sub_100bbdf0) or DevMsg "env_beam: unknown entity"
	CBaseEntity *sub_100bbdf0(const char *pszName);	// finds the entity of that name (stub 0x10006faf)
	void sub_100ff020();	// "CEnvBeam::TurnOff"-like: clears the active flag (+0x4f4), hides a lasting beam (life 0, spawn flag 8 clear), clears the next think, then CBaseEntity::sub_100ac4e0(0, 0, 0)
	void sub_100ff310();	// stub 0x10009877
	void sub_101001e0();	// stub 0x100118ec
	void sub_10100860(const float *pPos);	// stub 0x100078ab: strikes between this beam and the position
	void sub_100ffce0();	// "CEnvBeam::BeamUpdateThink" (stub 0x10004bec, installed by sub_100fef50 for a lasting beam; 727 bytes): when the damage rate (+0x458) is positive and 0.1 s have passed since the time at +0x454 -- traces start->end (Ray_t::sub_1004f7a0, CTraceFilterSimple(0, 0), engine trace 0x1070b254 slot 4, mask 0x200400b), draws the trace when 0x10738960 holds, runs CBeam::sub_100bbef0(trace), and on a hit plays the beam file at +0x520 through sub_100ff1b0 at the trace end; else when the name at +0x520 is set -- traces end->start the same way (0x10738964 gate for the debug draw) and plays the file on a hit; then CBeam::sub_100bbbf0 and next think (+0x17c) = curtime (both paths)
	// sub_100ff1b0 (0x100ff1b0) plays the beam's file / sound name (+0x520, buffer +0x524) at a position:
	// it is saved as a FREE function (?sub_100ff1b0@@...), so declare `void sub_100ff1b0(Vector vecPos);` in the
	// source rather than as a member here (a member would need a different mangled name and fail to link).
	char m_pad04e4[4];
	float m_vecSavedPos[3];	// 0x4e8
	int m_nActive;	// 0x4f4
	const char *m_iszStartEntity;	// 0x4f8
	int m_iszEndEntity;	// 0x4fc
	float m_flLife;	// 0x500
	int m_nBoltWidth;	// 0x504
	int m_noiseAmplitude;	// 0x0508
	int m_speed;	// 0x050c
	float m_flRestrike;	// 0x510
	char m_pad0514[0x518 - 0x514];
	const char *m_iszSpriteName;	// 0x518
	int m_frameStart;	// 0x051c
	const char *m_iszFileName;	// 0x520: the beam's file / sound name (vfunc104 precaches it, sub_100ff1b0 plays it)
	char m_szFileName[0x80];	// 0x524: the file / sound path buffer vfunc104 fills
	float m_radius;	// 0x05a4
	char m_bFlag5a8;	// 0x5a8
public:
    virtual datamap_t * vfunc82();
};
