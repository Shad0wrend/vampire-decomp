// CUnknown10074a30: object with a byte flag at +9 (set from 0x1007a5b0); real name not yet known.
#pragma once

class CUnknown10074a30
{
public:
	char pad0[9];
	char m_bFlag;

	void sub_10074a30(char value);
	float sub_100745b0(float flValue);	// stub 0x1000ac5e, returns a float in st0
	float sub_100745d0(float flValue);	// stub 0x100015c8, returns a float in st0
	char sub_10074a50();	// stub 0x1000aa97
	float sub_10074610(float flValue, int nMode);	// a weight (sub_100745b0) scaled by a ramp of sub_100745d0: with the flag set, mode 0 gives twice (1 - x) when x is above one half, mode 1 twice x when x is below one half; else 1
};
