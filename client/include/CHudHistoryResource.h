// CHudHistoryResource: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CHudElement.h"

class CHudHistoryResource : public CHudElement
{
public:
	bool sub_100f0430();
	CHudHistoryResource(int a);
	void sub_100f0250(int iType, int iId, int iCount);
	int m_unk10; int m_unk14; int m_unk18; int m_unk1c;
	struct HistItem_t { int m_iType; int m_unk4; int m_unk8; int m_unkc; int m_unk10; int m_unk14; HistItem_t() : m_iType(-1) {} } m_Items[12];
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CHudHistoryResource's own function
	virtual void vfunc1();
	virtual void vfunc5(int);
	virtual void vfunc7();
	virtual bool vfunc9();
};
