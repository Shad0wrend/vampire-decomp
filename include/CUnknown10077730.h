// CUnknown10077730: object with byte flags at +0x198, +0x320 and +0x33c (set from 0x1007a5b0, 0x1007ab40 and CBaseFlex::vfunc289); real name not yet known.
#pragma once

class CUnknown10077730
{
public:
	char pad0[0x18c];
	float m_flSequenceDuration;
	char pad190[8];
	char m_bFlag198;
	char pad199[0x187];
	char m_bFlag320;
	char pad321[0x1b];
	char m_bFlag33c;

	void sub_10077730(char value);
	void sub_10075ce0(char value);
	void sub_10076ad0(char value);
	void sub_100784b0(float value);
};
