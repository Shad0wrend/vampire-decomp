// CUnknown101bc140: a playing sound object (real name not yet known; "CSoundPatch"-like) that the sound envelope
// controller (CSoundControllerImp) drives.
#pragma once

class CUnknown101bc140
{
public:
	float m_flVolume;	// 0x00
	char m_pad04[0x10 - 4];
	float m_flPitchScale;	// 0x10
	char m_pad14[0x20 - 0x14];
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
};
