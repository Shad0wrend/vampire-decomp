// CVDmg_t: damage record (no vtable known). Only what decompiled code needs.
#pragma once

struct CVDmgBlock20_t
{
	int m_a, m_b, m_c, m_d, m_e;
};

struct CVDmgBlock16_t
{
	int m_a, m_b, m_c, m_d;
};

class CVDmg_t
{
public:
	int m_pad0000;
	int m_field04;
	int m_field08;

	int sub_101faa70();	// "CVDmg_t::GetDmg"
	int sub_101fb200(int a, int b);	// "CVDmg_t::Apply": forwards to the global apply callback
	bool sub_101fb340(int target);	// "CVDmg_t::EvadeCheck": forwards to the global evade callback
	void sub_101fa700(CVDmg_t *pOther);	// "CVDmg_t::Copy": scope trace, copies the fields 0x00..0x34 and 0x40 of pOther (blocks of 20, 16 and 16 bytes, then two dwords)
};
