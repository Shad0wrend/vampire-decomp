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
};
