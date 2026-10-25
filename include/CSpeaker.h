// CSpeaker: declared by pcdecomp transplant for 0x101af940 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CSpeaker
{
public:
	CSpeaker *vfunc5(unsigned int flags);
	void vfunc104();	// slot 104: unless the byte at +0x204 has bit 0 set, the time at +0x17c = the random float in [5, 15] (the global random stream, slot 1) + gpGlobals->curtime
	void sub_1000cb8a();

	char m_pad0000[0x17c];
	float m_flTime017c;	// 0x017c
	char m_pad0180[0x204 - 0x180];
	unsigned char m_b0204;	// 0x0204
};
