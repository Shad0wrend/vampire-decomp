// CEnvBeam: declared by pcdecomp transplant for 0x100fec10 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

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

	char m_pad04e4[4];
	float m_vecSavedPos[3];	// 0x4e8
	int m_nActive;	// 0x4f4
	char m_pad04f8[0x500 - 0x4f8];
	float m_flLife;	// 0x500
	int m_nBoltWidth;	// 0x504
	char m_pad0508[0x518 - 0x508];
	const char *m_iszSpriteName;	// 0x518
	char m_pad051c[0x5a8 - 0x51c];
	char m_bFlag5a8;	// 0x5a8
};
