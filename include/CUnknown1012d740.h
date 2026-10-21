// CUnknown1012d740: an entity with an output list at +0x450, a float timer pair at +0x47c / +0x480 and a state value at +0x488
// (the functions around 0x1012d4b0 .. 0x1012d7d6); real name not yet known.
#pragma once

#include "CBaseEntity.h"
#include "CSceneEntity.h"

class CUnknown1012d740 : public CBaseEntity
{
public:
	char m_pad03e0[0x450 - sizeof(CBaseEntity)];
	CSceneOutputList m_Output450;	// 0x450
	char m_pad0468[0x47c - 0x468];
	float m_flLastTime;	// 0x47c
	float m_flTimeLeft;	// 0x480
	char m_pad0484[4];
	int m_nState488;	// 0x488

	void sub_1012d740();	// the countdown think: subtracts the time since the last think from the time left (+0x480); once it is used up fires the output (sub_100cd660) and runs sub_1012d550(0x82), else refreshes the state (sub_1012d5e0); thinks again 0.01 seconds later
	void sub_1012d550(unsigned int flags);	// stub 0x100125f8
	void sub_1012d5e0(int nState);	// stub 0x10015366
};
