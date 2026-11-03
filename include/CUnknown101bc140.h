// CUnknown101bc140: a playing sound object (real name not yet known; "CSoundPatch"-like) that the sound envelope
// controller (CSoundControllerImp) drives.
#pragma once
#include "utlvector.h"

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
	float m_fl24;	// 0x24: the volume offset set by sub_101bbc70 (the slot 9 value of the engine plus the argument)
	char m_pad28[0x2c - 0x28];
	const char *m_pszSample;	// 0x2c
	unsigned int m_hEntity;	// 0x30: entity handle the sound plays from
	int m_nChannel;	// 0x34
	int m_n38;	// 0x38
	void *m_pEmitter;	// 0x3c
	float m_flScale;	// 0x40
	char m_Filter[4];	// 0x44: the recipient filter object
	unsigned int m_nFlags;	// 0x48: bit 0 set up, bit 1 filter is reliable (filter slot 1), bit 2 filter slot 7
	CUtlVector<int> m_Recipients;	// 0x4c: entity indices of the filter's recipients (memory +0x4c, alloc +0x50, grow +0x54, size +0x58, elements +0x5c); sub_101bb990 AddToTail()s each non-negative filter slot 3(i), i < slot 2()

	bool sub_101bbde0(float flTime, float flDelta);	// "CSoundPatch::Update": the sound expires (sub_101bbd10, false) once its time at +0x24 has passed; a sound whose entity is gone is removed with a warning (false); else steps its two envelopes (+0x00 volume, +0x10 pitch) by flDelta and, when one of them is active and the sound is playing (bit 0 of +0x48), emits it through the engine; true
	void sub_101bbc70(float flValue);	// sets m_fl24 to the engine's slot 9 value plus flValue (after sub_100139e4(0, flValue))
	float sub_101bbcf0();	// m_flPitchScale * m_flScale (stub 0x10007851)
	void sub_101bbc20(float flTarget, float flTime);	// "CSoundPatch::ChangeVolume" (stub 0x100139e4, called first by sub_101bbc70 with (0, duration)): sets bit 0 of m_n38, clamps flTarget to 1.0 and hands it to the CFloatUnit at +0x10 (the volume envelope, see m_flPitchScale; the unit at +0x00 is the pitch) as its target over flTime (CFloatUnit::sub_101bb650, tail call)
	void sub_101bc140();	// when the sound is set up and playing (bit 0 of the flags) emits it through the engine sound object (sub_101b14d0) from its entity
	void sub_101bc020();	// clears +0x38; when bit 0 of the flags is set emits the sound through the engine (sub_100126cf: filter, entity index of the entity behind the handle at +0x30 or -1, channel, sample, volume = sub_101bbcf0(), sound level, 1, (int)m_flVolume, 0, 0, 0); then sets the dword at +0x3c to 1
	void sub_101bc260(void *pPlayer);	// like sub_101bc020 for one player: when the sound is set up (bit 0 of the flags) and its filter (slot 8) includes the player, emits it to a single user filter holding the player
	void sub_101bbbf0(float flValue, int unused);	// member setter taking a value and a flag (stub 0x10014713), called by the controller
	void sub_101bb990(void *pFilter, CBaseEntity *pEntity, int nChannel, const char *pszSample, int nSoundLevel);	// sets the sound up (stub 0x1001358e)
};
