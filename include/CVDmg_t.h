// CVDmg_t: damage record (no vtable known). Only what decompiled code needs.
#pragma once

class CVDmg_t
{
public:
	int m_pad0000;
	int m_field04;
	int m_field08;

	int sub_101faa70();	// "CVDmg_t::GetDmg"
	int sub_101fb200(int a, int b);	// "CVDmg_t::Apply": forwards to the global apply callback
	bool sub_101fb340(int target);	// "CVDmg_t::EvadeCheck": forwards to the global evade callback
};
