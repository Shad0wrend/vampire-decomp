// CSoundscapeSystem: soundscape game system (base chain simplified). Only what decompiled code needs.
#pragma once

struct CSoundscapeSystemMember8
{
	void sub_100100ff();
	int m_data[8];
};

class CSoundscapeSystem : public CBaseGameSystem
{
public:
	// Slot 8, the deleting destructor.
	CSoundscapeSystem *vfunc8(unsigned int flags);
	CSoundscapeSystemMember8 m_member;

	int sub_102297a0();	// picks a free looping channel id (1..6) not used by the vector of 0x58-byte channels at +0x174 (count at +0x180) nor by the four embedded ones at +0x14; when all are used it stops and removes the vector entry with the smallest time (+0x44) and returns that entry's id
};
