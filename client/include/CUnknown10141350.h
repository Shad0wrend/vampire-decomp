// CUnknown10141350: unnamed class (placeholder), no vtable. Only the members the small helpers touch.
#pragma once

class CUnknown10141350
{
public:
	int m_unk00;
	int m_unk04;
	int m_unk08;
	int m_unk0c;
	int m_unk10;

	int sub_10141350();	// returns m_unk08
	bool sub_101412e0();	// m_unk10 >= sub_10141350()
};
