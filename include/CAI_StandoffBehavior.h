// CAI_StandoffBehavior (RTTI .?AVCAI_StandoffBehavior@@): the bases (CAI_Behavior<CAI_BaseNPC,100000> ...) are not
// modelled yet; the layout below is what decompiled code needs, and the vtable slots before it are placeholders.
#pragma once

struct CAI_StandoffBehaviorOuter
{
	char pad0[0x1fc];
	int m_unk1fc;
	char pad1[0x5de4 - 0x200];
	float m_unk5de4;
};

class CAI_StandoffBehavior
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();

	CAI_StandoffBehaviorOuter *m_pOuter;
	char pad0008[0x1a - 8];
	char m_unk1a;
	char pad001b[0x3c - 0x1b];
	float m_flTime3c;
	float m_flMin40;
	float m_flMax44;
	int m_unk48;
	char m_unk4c;
	char pad004d[3];
	float m_savedUnk50;

	CAI_StandoffBehavior *sub_102c7100();	// constructor body (base constructors inlined)
};
