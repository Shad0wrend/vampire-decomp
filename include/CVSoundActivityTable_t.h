// CVSoundActivityTable_t: per activity (0x118d of them, 12 bytes each) the list of sound objects to start / stop when a
// character changes its activity ("not a bug perhaps but this table doesn't go past LAST_SHARED_ACTIVITY").
#pragma once

class CBaseCombatCharacter;

struct CVActivitySound	// one sound of the table
{
	void sub_101f5b60(int hControl, int nSound, int nMode);	// stops the sound (stub 0x1000c851)
	void sub_101f5950(int hControl, int nSound, int nMode, float flVolume, float flPitch);	// starts the sound (stub 0x100119fa)
};

struct CVSoundActivityRecord_t
{
	int m_nSounds;	// 0x0
	CVActivitySound **m_pSounds;	// 0x4
	int *m_pIds;	// 0x8
};

class CVSoundActivityTable_t
{
public:
	CVSoundActivityRecord_t m_Records[0x118d];

	void sub_101f6010(CBaseCombatCharacter *pCharacter, int nNewActivity, int nOldActivity);	// "CVSoundActivityTable_t::Play": stops the sounds of the old activity and starts those of the new one for the character's sound control object (+0x9c)
};
