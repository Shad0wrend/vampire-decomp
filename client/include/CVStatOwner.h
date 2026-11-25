// CVStatOwner: hand-made view of the object at +0 of a CVStatList_t (the stat list's owner; 0x1015e610 reads its entity at +0x1c)
#pragma once
class CVStatEffects20
{
public:
	int sub_101580c0(int a, int b, int c);
};

class CVStatOwner
{
public:
	int m_unk00;
	char m_pad04[0x1c];
	CVStatEffects20 *m_pEffects20;
	int sub_1015e610();	// the owner entity's value at +0x3f4 (0 when the entity does not resolve)
};
