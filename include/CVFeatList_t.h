// CVFeatList_t: list of feats (VSupportList_t<CVFeat> base at +4 not modelled; records of 24 bytes start at +0x168).
#pragma once

struct CVFeatList_t_Record
{
	float m_value;
	char m_pad4[20];
};

class CVFeatList_t
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual float vfunc2(int index);
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();

	char m_pad0004[0x164];
	CVFeatList_t_Record m_records[1];
};
