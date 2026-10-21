// CDynamicProp: dynamic prop entity. Declared flat (bases not recovered); only what the matched functions need.
#pragma once

#include "CCineNPC.h"

struct inputdata_t;

class CDynamicProp
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CDynamicProp *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1008b3c0();	// base-class destructor body
	void vfunc103();	// slot 103 "CDynamicProp::Spawn": CBreakableProp::vfunc103, classname "prop_dynamic" (slot 122), AddFlag(0x40000) ..., and with the byte at +0x7c4 set a think function and the next think time
	void sub_10190a00(inputdata_t *pInput);	// "CDynamicProp::InputSetAnimation": looks the input's string up as a sequence name; when found sets it (cycle 0), resets the sequence info, runs sub_100963d0, fires the output at +0x77c (caller this), removes flag 0x40000, sets a think function and the next think time (curtime + 0.1); else prints "Dynamic prop no sequence named:%s" and clears the sequence

	char m_pad0004[0x6f0 - 4];
	int m_nSequence;	// 0x6f0
	char m_pad06f4[4];
	float m_flCycle;	// 0x6f8
	char m_pad06fc[0x730 - 0x6fc];
	CCineNPCSlot m_slotA;	// 0x730
	CCineNPCSlot m_slotB;	// 0x748
	char m_pad0760[0x77c - 0x760];
	CCineNPCSlot m_slotC;	// 0x77c
	CCineNPCSlot m_slotD;	// 0x794
	CCineNPCSlot m_slotE;	// 0x7ac
	char m_bRandomAnimate;	// 0x7c4
	char m_pad07c5[0x7c8 - 0x7c5];
	float m_flNextAnimTime;	// 0x7c8
	float m_flAnimDelayMin;	// 0x7cc
	float m_flAnimDelayMax;	// 0x7d0
	char m_pad07d4[0x7d8 - 0x7d4];
	int m_n07d8;	// 0x7d8
};
