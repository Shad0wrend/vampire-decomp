// CTimerEntity (logic_timer): flat layout, only the members the decompiled code needs.
#pragma once

#include "inputdata_t.h"

class CTimerEntity
{
public:
	char m_pad0000[0x17c];
	float m_flNextThink17c;	// 0x17c: time of the next think
	char m_pad0180[0x498 - 0x180];
	int m_n498;	// 0x498: nonzero while the timer is disabled
	float m_fInterval;	// 0x49c: the refire interval
	char m_pad04a0[4];
	int m_n4a4;	// 0x4a4: nonzero for a random-interval timer (the interval is a range)
	float m_fLowerRandomBound;	// 0x4a8
	float m_fUpperRandomBound;	// 0x4ac

	void vfunc103();	// slot 103 "CTimerEntity::Spawn": clamps the interval to 0.01f unless random, then arms the timer (sub_10131750) or leaves it disabled (sub_10131770)
	void sub_10131750();	// stub 0x1001385e
	void sub_10131770();	// stub 0x1000ce28

	void sub_101316e0();	// re-arms the next think from the interval (stub 0x1000c1b2)
	void sub_101318e0(inputdata_t *pInput);	// input handler: sets the interval from a float variant (at least 0.01f), re-arming when it changed
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
