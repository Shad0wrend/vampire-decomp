// CUnknown101bc140: a playing sound object (real name not yet known; "CSoundPatch"-like) that the sound envelope
// controller (CSoundControllerImp) drives.
#pragma once

class CBaseEntity;

struct CCopyRecipientFilter_101bc140	// the recipient filter object embedded at +0x44
{
	void sub_101bcef0();	// the constructor (stub 0x100124a9)
};

class CUnknown101bc140
{
public:
	float m_flVolume;	// 0x00
	int m_n04;	// 0x04
	int m_n08;	// 0x08
	char m_b0c;	// 0x0c
	char m_pad0d[3];
	float m_flPitchScale;	// 0x10
	int m_n14;	// 0x14
	int m_n18;	// 0x18
	char m_b1c;	// 0x1c
	char m_pad1d[3];
	int m_nSoundLevel;	// 0x20
	char m_pad24[0x2c - 0x24];
	const char *m_pszSample;	// 0x2c
	unsigned int m_hEntity;	// 0x30: entity handle the sound plays from
	int m_nChannel;	// 0x34
	int m_n38;	// 0x38
	void *m_pEmitter;	// 0x3c
	float m_flScale;	// 0x40
	char m_Filter[4];	// 0x44: the recipient filter object
	unsigned int m_nFlags;	// 0x48

	float sub_101bbcf0();	// m_flPitchScale * m_flScale (stub 0x10007851)
	void sub_101bc140();	// when the sound is set up and playing (bit 0 of the flags) emits it through the engine sound object (sub_101b14d0) from its entity
	void sub_101bc020();	// clears +0x38; when bit 0 of the flags is set emits the sound through the engine (sub_100126cf: filter, entity index of the entity behind the handle at +0x30 or -1, channel, sample, volume = sub_101bbcf0(), sound level, 1, (int)m_flVolume, 0, 0, 0); then sets the dword at +0x3c to 1
	void sub_101bbbf0(float flValue, int unused);	// member setter taking a value and a flag (stub 0x10014713), called by the controller
	void sub_101bb990(void *pFilter, CBaseEntity *pEntity, int nChannel, const char *pszSample, int nSoundLevel);	// sets the sound up (stub 0x1001358e)
};
