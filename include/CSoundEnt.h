// CSoundEnt: declared by pcdecomp transplant for 0x101bb580 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "Vector.h"

struct CSound;

struct CSoundEntSlot	// one 0x2c byte entry of the sound pool at +0x464
{
	char m_pad0000[0x10];
	int m_flExpireTime;	// 0x10: a float, compared by its bits against SOUND_NEVER_EXPIRE (-1.0f)
	char m_pad0014[4];
	int m_iNext;	// 0x18
	char m_pad001c[0x2c - 0x1c];
};

class CSoundEnt
{
public:
	CSoundEnt *vfunc5(unsigned int flags);
	virtual void vfunc103();	// "CSoundEnt::Spawn": SetSolid(0) (inlined), CBaseEntity::sub_100b3b00, InitSoundList, then the first think a second from now
	void sub_1000cb8a();
	void sub_101baf80();	// "CSoundEnt::Initialize" (stub 0x10004985)
	static CSound *sub_101bb150(int index);	// "CSoundEnt::SoundPointerForIndex": scope trace, the sound at +0x464 + index * 0x2c of the global sound entity (null, with a message, when out of range)
	static void sub_101ba9d0(int iSound, int iPrevious);	// "CSoundEnt::FreeSound": with the global sound entity (0x1072c464) set: reports the sound (DevMsg "Freeing sound id(%d) ...") when the debug console variable allows, then unlinks iSound from the active list (after iPrevious, or the head when -1) and pushes it on the free list (+0x450)
	static void sub_101babc0(int iType, const Vector *pOrigin, int iVolume, float flDuration, char bFlag);	// "CSoundEnt::InsertSound": with the global sound entity set, allocates a sound (DevMsg when none is free), fills it (origin, type, volume, time stamp, expiry time = curtime + duration, flag) and, when the debug bits 0..1 of +0x460 are set, reports it
	void vfunc134();	// slot 134 "CSoundEnt::Think": next think 0.3 s ahead (+0x17c), frees the expired sounds of the active list, reports the sound counts when the report flag is set, then CBaseEntity::Think (sub_101bb350, stub 0x1001138d)
	int sub_101bb070(int nList);	// the number of sounds in a list (stub 0x1000d300): 1 = free, 2 = active
	void sub_101bb350();	// CBaseEntity::Think-like base (stub 0x1001138d), tail called

	char m_pad0004[0x17c - 4];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x450 - 0x180];
	int m_iFreeSound;	// 0x450
	int m_iActiveSound;	// 0x454
	int m_cLastActiveSounds;	// 0x458
	char m_bShowReport;	// 0x45c
	char m_pad045d[0x464 - 0x45d];
	CSoundEntSlot m_SoundPool[1];	// 0x464
};
