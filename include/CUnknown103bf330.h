// CUnknown103bf330: NPC-like object with a timer vector embedded at +0x6690 (same element layout as CNPC_VHengeyokai); real name not yet known.
#pragma once

#include "CNPC_VHengeyokai.h"

class CUnknown103bf330
{
public:
	char pad0[0x6690];
	CNPC_VHengeyokaiTimerVec m_Timers;	// 0x6690

	int sub_103bf3c0(int key);
	bool sub_103bf330(int key);
};
