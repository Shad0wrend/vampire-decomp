// CSound: the sound-ent record of one active sound (the 2004 SDK's CSound). Only what recovered code reads.
#pragma once

#include "Vector.h"

struct CSound
{
	char m_pad0000[8];
	int m_iVolume;	// 0x08: the sound's volume (its audible radius before the sensitivity scale)
	char m_pad000c[0x20 - 0x0c];
	Vector m_vecOrigin;	// 0x20: where the sound was made
};
