// CSoundEnt: declared by pcdecomp transplant for 0x101bb580 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

struct CSound;

class CSoundEnt
{
public:
	CSoundEnt *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	static CSound *sub_101bb150(int index);	// "CSoundEnt::SoundPointerForIndex": scope trace, the sound at +0x464 + index * 0x2c of the global sound entity (null, with a message, when out of range)
	static void sub_101ba9d0(int iSound, int iPrevious);	// "CSoundEnt::FreeSound": with the global sound entity (0x1072c464) set: reports the sound (DevMsg "Freeing sound id(%d) ...") when the debug console variable allows, then unlinks iSound from the active list (after iPrevious, or the head when -1) and pushes it on the free list (+0x450)
};
