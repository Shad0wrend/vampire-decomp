// CUnknown102d8bc0: a timed interest record of the AI motor (CAI_InterestTarget-like; real name not yet known):
// start time at +0x14, end time at +0x18, the ramp fraction at +0x1c and the full interest at +0x20.
#pragma once

class CUnknown102d8bc0
{
public:
	char m_pad0000[0x14];
	float m_flStart;	// 0x14
	float m_flEnd;	// 0x18
	float m_flRamp;	// 0x1c
	float m_flInterest;	// 0x20

	float sub_102d8bc0();	// "Interest": the interest at the current time: 0 outside the start / end window, an exponential rise (ln 0.2 / ramp) over the first 1 - ramp of it, a spline fall-off in the last ramp fraction, else the full interest
};
