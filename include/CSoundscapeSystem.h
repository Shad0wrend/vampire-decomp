// CSoundscapeSystem: soundscape game system (base chain simplified). Only what decompiled code needs.
#pragma once

struct CSoundscapeSystemMember8
{
	~CSoundscapeSystemMember8();
	int m_data[8];
};

class CSoundscapeSystem : public CBaseGameSystem
{
public:
	virtual ~CSoundscapeSystem();
	CSoundscapeSystemMember8 m_member;
};
