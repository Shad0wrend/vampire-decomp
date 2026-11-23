// CDiscipline: HUD discipline panel (from the game's RTTI)
#pragma once
#include "CManagedHudElement.h"

class CDisciplineChild { public: virtual ~CDisciplineChild(); };

struct CDisciplineEntry
{
	int m_nId;
	int m_unk4;
	int m_unk8;
};

class CDiscipline : public CManagedHudElement
{
public:
	virtual ~CDiscipline();
	void sub_1004ed00(int id);
	char m_pad0174[0x1a8 - 0x174];
	int m_nEntries;
	CDisciplineEntry m_Entries[1];
};
