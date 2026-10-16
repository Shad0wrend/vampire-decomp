// CUnknown10078540: object with settable fields at +0x194, +0x334 and +0x338; real name not yet known.
#pragma once

class CUnknown10078540
{
public:
	char pad0[0x194];
	int m_unk194;
	char pad198[0x334 - 0x198];
	int m_unk334;
	int m_unk338;

	void sub_100785f0(int value);
	void sub_10078540(int value);
	void sub_10078580(int value);
};
