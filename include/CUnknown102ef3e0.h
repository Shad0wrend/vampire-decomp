// CUnknown102ef3e0: a timed "has this target been noticed" tracker (class not known): the byte at +0x51 is the answer,
// the handle at +0x54 remembers the target, the times at +0x58 / +0x60 are re-armed by the delays at +0x5c / +0x64.
#pragma once

class CGlobalEntityList_Ent;

struct CUnknown102ef3e0Holder	// the entity behind the argument's pointer at +0x1c: the target is its object at +0x94
{
	char m_pad0000[0x94];
	CGlobalEntityList_Ent *m_pTarget;	// 0x94
};

struct CUnknown102ef3e0Arg
{
	char m_pad0000[0x1c];
	CUnknown102ef3e0Holder *m_pHolder;	// 0x1c
};

class CUnknown102ef3e0
{
public:
	char m_pad0000[0x51];
	bool m_bNoticed;	// 0x51
	char m_pad0052[2];
	unsigned int m_hTarget;	// 0x54
	float m_flTimeA;	// 0x58
	float m_flDelayA;	// 0x5c
	float m_flTimeB;	// 0x60
	float m_flDelayB;	// 0x64

	bool sub_102ef3e0(CUnknown102ef3e0Arg *pArg);	// when the argument's holder has a target: re-arms both times and remembers the target when it differs from the remembered one (or the second time lapsed), else sets the flag while the first time has not lapsed; returns the flag
};
