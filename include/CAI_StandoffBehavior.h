// CAI_StandoffBehavior (RTTI .?AVCAI_StandoffBehavior@@): the bases (CAI_Behavior<CAI_BaseNPC,100000> ...) are not
// modelled yet; the layout below is what decompiled code needs, and the vtable slots before it are placeholders.
#pragma once

#include "CAI_Hint.h"

struct CAI_StandoffBehaviorOuter
{
	char pad0[0x1fc];
	int m_unk1fc;
	char pad1[0x5c38 - 0x200];
	int m_unk5c38;
	char pad1c[0x5cc0 - 0x5c3c];
	int m_n5cc0;	// 0x5cc0: the NPC's state
	char pad1b[0x5ddc - 0x5cc4];
	CAI_Hint *m_pHintNode;	// 0x5ddc: the hint node the NPC has locked
	char pad2[4];
	float m_unk5de4;

	int sub_102cc1f0(int a);	// stub 0x10014f6a: the NPC's activity answer for a (compared with the field at +0x5c38)
	int sub_1008dd30(int a, int b);	// CBaseAnimating::sub_1008dd30 (stub 0x10004ec1), called directly
	void *sub_1032e7b0();	// CBaseCombatCharacter::GetActiveWeapon (stub 0x10007e19), called directly
	void sub_10269f30(int a);	// stub 0x1000c39c: the NPC's call with a (the standoff's 0x54 notice)
};

// CAI_BehaviorBase (RTTI .?AVCAI_BehaviorBase@@): the behaviours' common base; only the type is needed (source type of
// the dynamic_cast to a concrete behaviour).
class CAI_BehaviorBase
{
public:
	virtual void vfunc0();
};

// The 28-byte standoff parameter block (copied by value into the behaviour at +0x20).
struct CStandoffParams
{
	int m_unk0;
	int m_unk4;
	float m_flMin;	// 8
	float m_flMax;	// 0xc
	int m_unk10;
	int m_unk14;
	int m_unk18;
};

struct CStandoffTask
{
	int m_iTask;
	float m_flData;
};

class CAI_StandoffBehavior
{
public:
	void sub_102c7e10();	// stub 0x10005515
	void sub_102c6e50(const CStandoffTask *pTask);	// the base behaviour's vfunc15, called directly (stub 0x1000a13c)
	    
	    
	    
	 
	  

	CAI_StandoffBehaviorOuter *m_pOuter;
	char pad0008[0x19 - 8];
	char m_b19;	// 0x19: set while the standoff is active
	char m_unk1a;
	char pad001b;
	int m_nState1c;
	int m_n20;
	char pad0024[0x3c - 0x24];
	float m_flTime3c;
	float m_flMin40;
	float m_flMax44;
	int m_unk48;
	char m_unk4c;
	char pad004d[3];
	float m_savedUnk50;
	unsigned char m_b54;
	char pad0055[0x58 - 0x55];
	float m_fl58;
	float m_fl5c;
	int m_n60;
	float m_fl64;
	float m_fl68;

	CAI_StandoffBehavior *sub_102c7100();	// constructor body (base constructors inlined)
	int sub_102c6f70(int a);	// tail call: slot 2 of the object at +0x14 (a base behaviour's default, stub 0x1000fa83)
	void sub_102c7360(char a);	// stores the byte at +0x19 when it changes, then runs sub_102c6ff0 (stub 0x1000d3be)
	void sub_102c73b0(const CStandoffParams *p);	// copies the block to +0x20 and sets +0x3c = -1, +0x40 = p->m_flMin, +0x44 = p->m_flMax (stub 0x10010b54)
	void sub_102c6db0();	// the base behaviour's vfunc10, called directly (stub 0x1000192e)
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual bool vfunc3();	// whether the standoff may carry on: while active (+0x19) the NPC must have bit 27 of its slot 513 flags, know sequence 8, be in state 2 and hold a weapon; otherwise the active byte is cleared
	virtual void vfunc4();
	virtual void vfunc5();
	virtual int vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15(const CStandoffTask *pTask);
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual int vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual int vfunc22(int a);	// picks the activity to use for the requested one (weapon activity translation of the standoff states)
	virtual void vfunc23();
	virtual void vfunc24();
	virtual char vfunc25(int);
	virtual void vfunc26(int a, int b);	// the standoff's start: with the int at +0x20 above 0 the parameter block's range is set (-1.0f at +0x58, 5.0f at +0x5c, 0 at +0x60); then flag byte +0x4c is set when the int at +0x20 is 2
	virtual void vfunc27();
	virtual bool vfunc28();
};
