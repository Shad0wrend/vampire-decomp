// CVDmg_t: damage record (no vtable known). Only what decompiled code needs.
#pragma once

struct CVDmgBlock20_t
{
	int m_a, m_b, m_c, m_d, m_e;
};

struct CVDmgBlock16_t
{
	int m_a, m_b, m_c, m_d;

	CVDmgBlock16_t();	// calls sub_10204270 (stub 0x10004b7e, body at 0x10205380)
	void sub_10204270();	// reset: m_a = m_b = -1, m_d = 1 (stub 0x10010573)
	void sub_102042a0(int a, int b);	// stores a / b in the first two fields and sets m_d to 1 (stub 0x10014290)
};

class CVDmg_t
{
public:
	int m_pad0000;
	int m_field04;
	int m_field08;
	int m_field0c;
	int m_field10;
	CVDmgBlock16_t m_block14;	// 0x14
	CVDmgBlock16_t m_block24;	// 0x24
	int m_field34;
	int m_field38;
	float m_field3c;
	int m_field40;

	CVDmg_t();	// "CVDmg_t::CVDmg_t": constructs the two blocks, scope trace, then sets the fields to their defaults
	int sub_101faa70();	// "CVDmg_t::GetDmg"
	int sub_101fb200(int a, int b);	// "CVDmg_t::Apply": forwards to the global apply callback
	bool sub_101fb340(int target);	// "CVDmg_t::EvadeCheck": forwards to the global evade callback
	void sub_101fa700(CVDmg_t *pOther);	// "CVDmg_t::Copy": scope trace, copies the fields 0x00..0x34 and 0x40 of pOther (blocks of 20, 16 and 16 bytes, then two dwords)
	void sub_101fa810();	// "CVDmg_t::Null": scope trace, resets the fields (the two 16 byte blocks at +0x14 / +0x24 through sub_10204270)
};
