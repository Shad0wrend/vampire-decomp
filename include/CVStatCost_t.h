// CVStatCost_t: a vampire stat cost made of two 0x14-byte sub costs; only the IsNull check is recovered so far.
#pragma once

struct CVStatSubCost_t
{
	char m_data[0x14];

	bool sub_101fb8f0();
};

class CVStatCost_t
{
public:
	CVStatSubCost_t m_first;
	CVStatSubCost_t m_second;

	bool sub_101fc160();	// "CVStatCost_t::IsNull"
};
