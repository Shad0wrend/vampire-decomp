// CVStatList_t: list of stats (no vtable). Only the members the constructor touches are declared.
#pragma once

class CVStatList_t
{
public:
	int m_pad0000;
	int m_field04;
	int m_field08;
	int m_field0c;
	int m_field10;

	CVStatList_t(int a);
	~CVStatList_t();
	int sub_10010609(int a);
	int sub_10200fc0(int stat, int amount);	// "CVStatList_t::AddBase" (called through the stub at 0x1000e66a)
	int sub_10201100(int stat, int amount);	// "CVStatList_t::SubBase": scope trace, returns AddBase(stat, -amount)
	char sub_102008b0(int stat);	// "CVStatList_t::IsValidStat": 0 <= stat < m_field04
	int sub_10200ca0(int stat);	// "CVStatList_t::GetBase": scope trace, the base value of the stat (first dword array behind m_field08), 0 when the stat is invalid
	void sub_10200730();	// called by Bind (stub 0x1000f5bf)
	void sub_102007f0(int a, int *pSource, int c);	// "CVStatList_t::Bind": scope trace, stores a at +0, the source at +0xc, its count (dword at +4) at +4 and c at +8, then sub_10200730()
	bool sub_102017b0(int a, int b);	// "CVStatList_t::IsEqual": scope trace, true when sub_10010609(a) == sub_10010609(b)
	int sub_10201980();	// "CVStatList_t::GetHighestValueIndex": scope trace, index of the first stat with the highest sub_10010609 value, -1 when empty
	char sub_10201540();	// recomputes every stat value (stored in the array behind m_field08), true when one changed (stub 0x1000a1a0)
	char sub_10200d60(int value);	// "CVStatList_t::SetValue"-like worker taking one stack argument (stub 0x10005cbd), called by the VStatGet wrapper; returns a flag byte
	void sub_102008e0(int stat, int value);	// stat setter taking (stat, value) (stub 0x10011e46)
};
