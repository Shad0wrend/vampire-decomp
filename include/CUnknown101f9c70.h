// CUnknown101f9c70: list of ints (count then items); applies each item through a scoped trace ("CVTraitEffectList_t::Effect_Calc_Clan"); real name not yet known.
#pragma once

class CUnknown101f9c70
{
public:
	int m_count;
	int m_items[1];

	int sub_101f9c70(int a, int b, int c);
	void sub_101f9ff0(int a, int b, int c, int d);	// "CVTraitEffectList_t::Effect_ModInfo": scope trace, builds a CVModInfo_t(b, c, 0) and hands (a, info, d) to the effect group of every item
};
