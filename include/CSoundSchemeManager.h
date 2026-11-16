// CSoundSchemeManager (RTTI .?AVCSoundSchemeManager@@): bases CAutoGameSystem / CBaseGameSystem / IGameSystem
// at +0x0 are not modelled; primary vtable 0x1048dd00 has 9 slots.
#pragma once

struct CSoundFadeItem;

#ifdef PCD_INITIALIZERS	// the initializer units: Source's CAutoGameSystem base and the three CUtlVectors
#include "GameSystemRoot.h"
#include "utlvector.h"

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
	char m_pad0008[0x174 - 8];
	CUtlVector<CSoundSchemeManager_LoopTrack> m_LoopTracks;	// 0x174
	CUtlVector<CSoundSchemeManager_RandomSound> m_RandomSounds;	// 0x188
	CUtlVector<CSoundSchemeManager_Entry19c> m_19c;	// 0x19c
};
#else
class CSoundSchemeManager
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();	// per-frame update: fades every loop track by the time since the last update (sub_10229090), drops the loop tracks that faded out (volume at most 0.01) and the random sounds whose time has passed, then draws the debug text
	virtual CSoundSchemeManager *vfunc8(unsigned int flags);	// scalar deleting destructor: empties the three vectors (+0x19c, +0x188, +0x174), the base destructor, then delete this when bit 0 of flags is set

	void sub_102288b0();	// releases the four sounds at +0x64 (stride 0x58) and empties both lists (0x58 byte records at +0x174, count +0x180; 0x20 byte records at +0x188, count +0x194), releasing the sound of each record, when the globals' dword at +0x24 is set
	void sub_1042c2c0();	// CBaseGameSystem::~CBaseGameSystem, called directly (stub 0x1000cfbd)
	int sub_10228a80();	// stub 0x10011491: the state the scheme should be in (1 without a player, 3 / 2 by the player's sound state)
	void sub_10228e80(int state);	// stub 0x1001536b: switches to that state (volumes, then the fade of the engine's sound channels)
	void sub_10229c50();	// stub 0x10004f9d: draws the debug text of the tracks (when the byte at +0x8 is set and a player exists)
	void sub_10229090(CSoundFadeItem *pItem, float flDelta);	// stub 0x10013f8e: the fade of one track (ret 8; the object is not used)

	char m_pad0004[4];	// 0x0004 .. 0x0007
	char m_b08;
	char m_pad0009[3];
	float m_f0c;
	char m_pad0010[4];
	char m_buf14[0x160];	// 0x0014 .. 0x0173
	// The two lists the debug dump walks (memory, alloc count, grow size, element count, element pointer).
	void *m_pLoopTracks;	// 0x0174: the 0x58 byte loop-track records
	int m_nLoopAlloc;	// 0x0178
	int m_nLoopGrow;	// 0x017c
	int m_nLoopCount;	// 0x0180: number of loop tracks
	void *m_pLoopElements;	// 0x0184
	void *m_pMemory;	// 0x0188: the 0x20 byte random-sound records (the matched vfunc2/vfunc5 name)
	int m_nAllocationCount;	// 0x018c
	int m_nGrowSize;	// 0x0190
	int m_nRandomCount;	// 0x0194: number of random sounds
	void *m_pElements;	// 0x0198
};
#endif
