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
};
