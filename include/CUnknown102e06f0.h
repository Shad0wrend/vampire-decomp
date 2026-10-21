// CUnknown102e06f0: the 0x14 byte object embedded at +0x8 of an NPC squad (CUnknown103164c0); real name not yet known.
// Its initialiser (0x102e06f0, stub 0x10011955) zeroes the first fields and stores a tuning float at +0x10.
#pragma once

struct CUnknown102e06f0
{
	char m_pad00[0x14];

	void sub_102e06f0();	// initialiser: returns this in eax like a constructor (stub 0x10011955)
};
