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
};
