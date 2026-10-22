// CUnknown101f9c70: list of ints (count then items); applies each item through a scoped trace ("CVTraitEffectList_t::Effect_Calc_Clan"); real name not yet known.
#pragma once

class CTraitOwnerX;

class CUnknown101f9c70
{
public:
	int m_count;
	int m_items[1];

	int sub_101f9c70(int a, int b, int c);
	void sub_101f9ff0(int a, int b, int c, int d);	// "CVTraitEffectList_t::Effect_ModInfo": scope trace, builds a CVModInfo_t(b, c, 0) and hands (a, info, d) to the effect group of every item
	void sub_101f9830(CTraitOwnerX *pOwner, int id);	// removes the trait id from the list (the last item takes its place) when the global trait table (0x1074df78) knows it, undoes its effects on the owner (sub_101f8e20 / sub_101f8f30) and tells the owner's player (user message 0x10726078: 0, id)
};
