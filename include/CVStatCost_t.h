// CVStatCost_t: a vampire stat cost made of two 0x14-byte sub costs; only the IsNull check is recovered so far.
#pragma once

struct CVStatSubCost_t
{
	char m_data[0x14];	// dword fields: limit (10000 when null) at +0, 1 at +4, 0 at +8 / +0xc, heap pointer at +0x10

	bool sub_101fb8f0();
	void sub_101fb830();	// "CVStatSubCost_t::Null": scope trace, resets the fields and frees the heap pointer
};

class CVStatCost_t
{
public:
	CVStatSubCost_t m_first;
	CVStatSubCost_t m_second;

	bool sub_101fc160();	// "CVStatCost_t::IsNull"
	void sub_101fc0d0();	// "CVStatCost_t::Null": scope trace, nulls both sub costs
};
