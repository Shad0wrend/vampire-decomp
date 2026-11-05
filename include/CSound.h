// CSound: the sound-ent record of one active sound (the 2004 SDK's CSound). Only what recovered code reads.
#pragma once

#include "Vector.h"

struct CSound
{
	char m_pad0000[4];
	int m_iType;	// 0x04: the sound type bits
	int m_iVolume;	// 0x08: the sound's volume (its audible radius before the sensitivity scale)
	char m_pad000c[0x18 - 0x0c];
	int m_iNext;	// 0x18: the index of the next sound of the list (-1 at the end)
	char m_pad001c[0x20 - 0x1c];
	Vector m_vecOrigin;	// 0x20: where the sound was made
	void sub_101b9a50(int a);
};
