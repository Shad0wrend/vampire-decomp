// CDiscipline: HUD discipline panel (from the game's RTTI)
#pragma once
#include "CManagedHudElement.h"

class CDisciplineChild { public: virtual ~CDisciplineChild(); };

struct CDisciplineEntry
{
	int m_nId;
	int m_unk4;
	bool m_b8;
	char m_pad9[3];
};

class CDiscipline : public CManagedHudElement
{
public:
	virtual ~CDiscipline();
	int sub_1004ec90(int id);
	int sub_1004ecb0(int id);
	void sub_1004ed00(int id);
	void sub_1004ed80(int id, int a, int b);
	virtual bool vfunc107();
	virtual void vfunc114(int id, int val);
	char m_pad0174[0x1a8 - 0x174];
	int m_nEntries;
	CDisciplineEntry m_Entries[6];
	CDisciplineChild *m_p1f4;
	CDisciplineChild *m_p1f8;
};
