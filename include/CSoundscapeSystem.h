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
};
