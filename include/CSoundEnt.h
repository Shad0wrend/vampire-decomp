// CSoundEnt: declared by pcdecomp transplant for 0x101bb580 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "Vector.h"

struct CSound;

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
};
