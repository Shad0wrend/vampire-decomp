// CVFeatList_t: list of feats (RTTI class, 6 vtable slots; base VSupportList_t<CVFeat> at +4). Only what the getters touch.
#pragma once

struct VFeatEntry_t
{
	int m_nValue;	// 0x0
	int m_unk04;
	int m_unk08;
	int m_unk0c;
	int m_unk10;
	int m_unk14;
};

class C_BaseVCombatCharacter;

class CVFeatList_t
{
public:
	float sub_1014d590(C_BaseVCombatCharacter *p);
	int m_unk04;
	char m_unk08[0x158];
	VFeatEntry_t m_aEntries[1];	// 0x160, 24 bytes each

	virtual float vfunc0(int i);
	virtual float vfunc1(int i);
	virtual int vfunc2();
	virtual float vfunc3(int i);
	virtual float vfunc4(int i);
	virtual float vfunc5(int i);
};
