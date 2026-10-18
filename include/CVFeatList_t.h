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
	virtual float vfunc0(int index);	// the integer at +0x160 + index * 0x18, as a float
	virtual float vfunc1(int index);
	virtual float vfunc2(int index);
	virtual float vfunc3(int index);
	virtual float vfunc4(int index);
	virtual void vfunc5();

	char m_pad0004[0x164];
	CVFeatList_t_Record m_records[1];
};
