// CTimerEntity (logic_timer): flat layout, only the members the decompiled code needs.
#pragma once

#include "inputdata_t.h"

class CTimerEntity
{
public:
	char m_pad0000[0x498];
	int m_n498;	// 0x498: nonzero while the timer is disabled
	float m_fInterval;	// 0x49c: the refire interval

	void sub_101316e0();	// re-arms the next think from the interval (stub 0x1000c1b2)
	void sub_101318e0(inputdata_t *pInput);	// input handler: sets the interval from a float variant (at least 0.01f), re-arming when it changed
};
