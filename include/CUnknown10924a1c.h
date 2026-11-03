// CUnknown10924a1c: the global at 0x10924a1c (a pointer to a difficulty / time-scale object: slot 1 answers
// a boolean and +0x28 is a float; CAI_BaseNPCTroika::vfunc604 doubles it and compares it with +0x6268).
#pragma once

class CUnknown10924a1c
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();	// slot 1 (+0x4)
	char m_pad0004[0x28 - 4];
	float m_fl28;	// 0x28
};

extern CUnknown10924a1c *g_10924a1c;
