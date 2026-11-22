// CSoundSchemeManager (RTTI .?AVCSoundSchemeManager@@): bases CAutoGameSystem / CBaseGameSystem / IGameSystem at +0x0
// (GameSystemRoot.h); primary vtable 0x1048dd00 has 9 slots. The four embedded loop tracks at +0x14, then three
// CUtlVectors: the loop tracks (+0x174), the random sounds (+0x188) and the vector at +0x19c.
#pragma once

#include "GameSystemRoot.h"
#include "utlvector.h"

struct CSoundFadeItem;

struct CSoundSchemeManager_LoopTrack	// the 0x58-byte loop-track records (+0x174)
{
	char m_data[0x58];
};

struct CSoundSchemeManager_RandomSound	// the 0x20-byte random-sound records (+0x188)
{
	char m_data[0x20];
};

struct CSoundSchemeManager_Entry19c	// the records of the vector at +0x19c (size not read yet)
{
	int m_data;
};

class CSoundSchemeManager : public CAutoGameSystem
{
public:
	virtual void vfunc2();	// 0x10228700
	virtual void vfunc5();	// 0x102287a0
	virtual void vfunc7();	// 0x10228d00, per-frame update: fades every loop track by the time since the last update (sub_10229090), drops the loop tracks that faded out (volume at most 0.01) and the random sounds whose time has passed, then draws the debug text
	CSoundSchemeManager *vfunc8(unsigned int flags);	// slot 8 (0x10228610) written out, the scalar deleting destructor: empties the three vectors (+0x19c, +0x188, +0x174), the base destructor, then delete this when bit 0 of flags is set

	void sub_102288b0();	// releases the four sounds at +0x64 (stride 0x58) and empties both lists (0x58 byte records at +0x174, count +0x180; 0x20 byte records at +0x188, count +0x194), releasing the sound of each record, when the globals' dword at +0x24 is set
	void sub_1042c2c0();	// CBaseGameSystem::~CBaseGameSystem, called directly (stub 0x1000cfbd)
	int sub_10228a80();	// stub 0x10011491: the state the scheme should be in (1 without a player, 3 / 2 by the player's sound state)
	void sub_10228e80(int state);	// stub 0x1001536b: switches to that state (volumes, then the fade of the engine's sound channels)
	void sub_10229c50();	// stub 0x10004f9d: draws the debug text of the tracks (when the byte at +0x8 is set and a player exists)
	void sub_10229090(CSoundFadeItem *pItem, float flDelta);	// stub 0x10013f8e: the fade of one track (ret 8; the object is not used)

	char m_b08;	// 0x08
	char m_pad0009[3];
	float m_f0c;	// 0x0c
	char m_pad0010[4];
	char m_buf14[0x160];	// 0x14 .. 0x173: the four embedded loop tracks (0x58 bytes each)
	CUtlVector<CSoundSchemeManager_LoopTrack> m_LoopTracks;	// 0x174 (count +0x180)
	CUtlVector<CSoundSchemeManager_RandomSound> m_RandomSounds;	// 0x188 (count +0x194)
	CUtlVector<CSoundSchemeManager_Entry19c> m_19c;	// 0x19c
};
