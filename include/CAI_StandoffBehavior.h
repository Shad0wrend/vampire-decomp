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
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21();
	virtual int vfunc22(int a);	// picks the activity to use for the requested one (weapon activity translation of the standoff states)

	CAI_StandoffBehaviorOuter *m_pOuter;
	char pad0008[0x1a - 8];
	char m_unk1a;
	char pad001b;
	int m_nState1c;
	char pad0020[0x3c - 0x20];
	float m_flTime3c;
	float m_flMin40;
	float m_flMax44;
	int m_unk48;
	char m_unk4c;
	char pad004d[3];
	float m_savedUnk50;

	CAI_StandoffBehavior *sub_102c7100();	// constructor body (base constructors inlined)
};
