// CSoundEnt: declared by pcdecomp transplant for 0x101bb580 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

#include "Vector.h"
#include "CPointEntity.h"

struct CSound;
class CBaseEntity;

int sub_10228350(float flDistance);	// 0x10228350: sound attenuation level from a distance (int)(20*log10(flDistance/36.0) + 40.0f); 0 when flDistance <= 0

struct CSoundEntSlot	// one 0x2c byte entry of the sound pool at +0x464
{
	int m_dw0000;	// 0x00: -1 when constructed
	char m_pad0004[0x10 - 4];
	int m_flExpireTime;	// 0x10: a float, compared by its bits against SOUND_NEVER_EXPIRE (-1.0f)
	char m_pad0014[4];
	int m_iNext;	// 0x18
	char m_pad001c[0x2c - 0x1c];

	CSoundEntSlot() { m_dw0000 = -1; }

	void sub_101b9840();	// the entry's constructor (stub 0x10008d46), run for every pool entry by CSoundEnt::vfunc126
	void sub_1000a493();	// stub 0x1000a493, called for every pool entry by CSoundEnt::vfunc127
};

class CSoundEnt : public CPointEntity
{
public:
	CSoundEnt() {}
	CPointEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (VC6 has no covariant returns)
	void sub_1000cb8a();
	int sub_101bab50();	// "CSoundEnt::IAllocSound": pops the first sound of the free list (+0x450) onto the active list (+0x454) and returns its index; -1 with a message when the free list is empty
	void sub_101baf80();	// "CSoundEnt::Initialize" (stub 0x10004985)
	static CSound *sub_101bb150(int index);	// "CSoundEnt::SoundPointerForIndex": scope trace, the sound at +0x464 + index * 0x2c of the global sound entity (null, with a message, when out of range)
	static int sub_101bb0f0();	// "CSoundEnt::ActiveList" (stub 0x10012120): the index of the first active sound, -1 without the global sound entity
	static CSound *sub_101bb370(int iType, const Vector *pOrigin);	// the active sound of the type closest to pOrigin (squared distance below 2^28 start value), null when none
	static void sub_101ba9d0(int iSound, int iPrevious);	// "CSoundEnt::FreeSound": with the global sound entity (0x1072c464) set: reports the sound (DevMsg "Freeing sound id(%d) ...") when the debug console variable allows, then unlinks iSound from the active list (after iPrevious, or the head when -1) and pushes it on the free list (+0x450)
	static void sub_101babc0(int iType, const Vector *pOrigin, int iVolume, float flDuration, char bFlag);	// "CSoundEnt::InsertSound": with the global sound entity set, allocates a sound (DevMsg when none is free), fills it (origin, type, volume, time stamp, expiry time = curtime + duration, flag) and, when the debug bits 0..1 of +0x460 are set, reports it
	static void sub_101bac90(int iType, const Vector *pOrigin, int iVolume, float flDuration, char bFlag, CBaseEntity *pOwner);	// "CSoundEnt::InsertSound" with an owner (stub 0x1000bca8, cdecl): like sub_101babc0 plus the owning entity, whose handle is stored in the sound
	void vfunc134();	// slot 134 "CSoundEnt::Think": next think 0.3 s ahead (+0x17c), frees the expired sounds of the active list, reports the sound counts when the report flag is set, then CBaseEntity::Think (sub_101bb350, stub 0x1001138d)
	int sub_101bb070(int nList);	// the number of sounds in a list (stub 0x1000d300): 1 = free, 2 = active
	void sub_101bb350();	// CBaseEntity::Think-like base (stub 0x1001138d), tail called
	int vfunc127(int a);	// slot 127 "CSoundEnt::vfunc127": CBaseEntity::vfunc127 (sub_1000961a) with a, then sub_1000a493 on each of the 0x40 pool entries; returns the base's result
	int sub_1000961a(int a);	// CBaseEntity::vfunc127 (stub 0x1000961a), called directly
	int vfunc126(int a);	// slot 126: constructs the 0x40 pool entries (sub_101b9840), CBaseEntity::vfunc126 (sub_100a9f70) with a, then sub_1000a493 on each of the 0x40 entries; returns the base's result
	int sub_100a9f70(int a);	// CBaseEntity::vfunc126 (stub 0x100065d2), called directly

	int m_iFreeSound;	// 0x450
	int m_iActiveSound;	// 0x454
	int m_cLastActiveSounds;	// 0x458
	char m_bShowReport;	// 0x45c
	char m_pad045d[0x464 - 0x45d];
	CSoundEntSlot m_SoundPool[0x40];	// 0x464
public:
	virtual datamap_t * vfunc82();
	virtual void vfunc103();	// "CSoundEnt::Spawn": SetSolid(0) (inlined), CBaseEntity::sub_100b3b00, InitSoundList, then the first think a second from now
	virtual void vfunc104();
	virtual int vfunc117();
};
