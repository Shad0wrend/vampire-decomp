// CUnknown10170cb0: the owner of 0x10170cb0 (only the fields that matched code needs; the real class is not known yet).
#pragma once

class CUnknown10170cb0
{
public:
	void sub_10170cb0(int flDelta, int nLimit);	// adds flDelta to the value at +0x22e4; when nLimit is positive and the sum is above it, the sum is clamped to nLimit
	char m_pad0000[0x22e4];
	int m_unk22e4;	// +0x22e4
};
