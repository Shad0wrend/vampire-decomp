// CDynamicProp: dynamic prop entity. Declared flat (bases not recovered); only what the matched functions need.
#pragma once

struct datamap_t;

#include "CCineNPC.h"

struct inputdata_t;

class CDynamicProp
{
public:

	CDynamicProp *sub_10190510();	// 0x10190510 (stub: called by dynamic_prop / prop_dynamic / prop_dynamic_ornament): the constructor, as a plain member: CBreakableProp::sub_1018f1c0 (stub 0x100039bd), the three COutputEvents at +0x77c / +0x794 / +0x7ac (stub 0x10002ddd), the vftable 0x10474234 by hand, then sub_1008b490
	void sub_1008b490();	// stub 0x1000bed8: run by the constructor after the vftable store
	void sub_1008b3c0();	// base-class destructor body
	void vfunc103();	// slot 103 "CDynamicProp::Spawn": CBreakableProp::vfunc103, classname "prop_dynamic" (slot 122), AddFlag(0x40000) ..., and with the byte at +0x7c4 set a think function and the next think time
	void sub_10190a00(inputdata_t *pInput);	// "CDynamicProp::InputSetAnimation": looks the input's string up as a sequence name; when found sets it (cycle 0), resets the sequence info, runs sub_100963d0, fires the output at +0x77c (caller this), removes flag 0x40000, sets a think function and the next think time (curtime + 0.1); else prints "Dynamic prop no sequence named:%s" and clears the sequence

	void sub_10190750();	// the animation think: with a sequence set (+0x7d8 not negative) applies it, fires the output at +0x77c, removes flag 0x40000, sets the next think function and the next think time (curtime + 0.1)
	void sub_10090950();	// CBaseAnimating member (stub 0x100117b1), called directly
	void sub_100963d0();	// CBaseAnimating member (stub 0x100024b9), called directly
	void sub_100b3640(int flags);	// stub 0x1001457e: removes flags
	int sub_100ac4e0(void *pfnThink, int a, int b);	// CBaseEntity::ThinkSet (stub 0x10007fe5)

	char m_pad0004[0x17c - 4];
	float m_flNextThink17c;	// 0x17c
	char m_pad0180[0x6f0 - 0x180];
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
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CDynamicProp *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual int vfunc80();
	virtual int vfunc81();
	virtual datamap_t * vfunc82();
};
