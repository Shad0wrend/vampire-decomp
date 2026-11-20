// CFloatUnit: a float that moves toward a target value (the members the recovered code uses).
#pragma once

class CFloatUnit
{
public:
	void sub_10133560(float flValue, float flTime);	// sets the target: when the value differs from the current one and time is positive, the rate is the change over time (at least the minimum), else the value is set at once (sub_101bb6f0)
	void sub_101335e0(float flValue);	// sets the value and the previous value, clears the rate, and flags the change when the previous value differed

	float m_flValue;	// 0x00
	float m_flPrev;	// 0x04
	float m_flRate;	// 0x08
	unsigned char m_bChanged;	// 0x0c
};
