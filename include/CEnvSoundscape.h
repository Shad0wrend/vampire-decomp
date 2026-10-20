// CEnvSoundscape: declared by pcdecomp transplant for 0x101ae300 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

struct CEnvSoundscapeParams
{
	float m_vecPositions[4][3];	// 0x00: origins of the (up to four) named position entities
	int m_pad30;
	int m_nPositionMask;	// 0x34: bit i set when position i was found
	int m_nEdictIndex;	// 0x38
};

class CEnvSoundscape
{
public:
	CEnvSoundscape *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void sub_101ae6c0(CEnvSoundscapeParams *pParams);	// fills the soundscape parameters: +0x30 = the dword at +0x458, +0x38 = the edict index (engine slot 35 of the edict at +0x2e0), then for each of the four position names at +0x45c finds the named entity and stores its origin (slot 217) and the found bit in +0x34
};
