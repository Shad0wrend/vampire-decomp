// CBaseButton: the func_button family of entities.
// Derives (through CBaseToggle) from CBaseEntity; only the vtable slots that
// decompiled code needs are given their real names, the others are placeholders
// that keep the slot indices of the game's primary vtable (0x1045293c).
#pragma once

#include "Vector.h"
#include "COutputEvent.h"

class CBaseEntity;

class CBaseButton
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CBaseButton *vfunc5(unsigned int flags);	// scalar deleting destructor
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
	virtual int vfunc35(int a);
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
	virtual void vfunc104();

	void sub_1000cb8a();	// destructor body (the CBaseToggle/CBaseEntity part)
	bool sub_100c8990(int a);	// slot 34: vfunc35(a) != 0
	void sub_100c97c0();	// \"ButtonReturn\"-like: state 3, fires the output at +0x5a8 for the activator (when flag 0x1 is set), plays the sound table entry 0x106e6f7c unless bit 13 of the flags is set, think function sub_100c98e0, then moves to position 1 (linear) or angle 1 (rotating, byte +0x55d) at the speed at +0x164
	void sub_100c98e0();	// the think function set by sub_100c97c0 (stub 0x10009764)
	void sub_100c9560();	// the button is pressed: plays the sound table entry 0x106e6f78 unless bit 13 of the flags is set, fires the output at +0x590 for the activator (when flag 0x1 is set), state 2, think function sub_100c96a0 and moves to position 2 (linear) or angle 2 (rotating, byte +0x55d); nothing while the byte at +0x5c4 is set
	void sub_100c96a0();	// the think function set by sub_100c9560 (stub 0x10008f30)
	void sub_100c9250(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// \"CBaseButton::ButtonUse\"-like: unless locked / moving (state 2 or 3) or the byte at +0x5c4 is set and the use filter passes the activator (sub_100a7bd0): remembers the activator handle at +0x53c; in state 0 (flag 0x20 set) fires the output at +0x578 and presses (sub_100c97c0), in any other state fires it and calls sub_100c9560
	void sub_100c8a20(CBaseEntity *pOther);	// \"CBaseButton::ButtonTouch\"-like: unless moving (state 2 or 3) or the byte at +0x5c4 is set and the use filter passes the stored activator (+0x53c): clears the touch function at +0x1ec, fires the output at +0x578 for the activator; state 0 -> sub_100c97c0, else sub_100c9560
	bool sub_100a7bd0(CBaseEntity *pActivator);	// CBaseEntity::PassesUseFilter (stub 0x10001032), called directly

	char m_pad0004[0x114 - 4];
	void (CBaseButton::*m_pfnThink114)();	// 0x114
	char m_pad0118[0x164 - 0x118];
	float m_flSpeed164;	// 0x164
	char m_pad0168[0x1ec - 0x168];
	void *m_pfnTouch1ec;	// 0x1ec
	char m_pad01f0[0x204 - 0x1f0];
	unsigned int m_flags204;	// 0x204
	char m_pad0208[0x4f8 - 0x208];
	int m_nState4f8;	// 0x4f8
	char m_pad04fc[0x508 - 0x4fc];
	Vector m_vec508;	// 0x508
	Vector m_vec514;	// 0x514
	Vector m_vec520;	// 0x520
	Vector m_vec52c;	// 0x52c
	char m_pad0538[0x53c - 0x538];
	unsigned int m_hActivator53c;	// 0x53c: entity handle of the activator
	char m_pad0540[0x55d - 0x540];
	char m_b55d;	// 0x55d
	char m_pad055e[0x578 - 0x55e];
	COutputEvent m_Output578;	// 0x578
	COutputEvent m_Output590;	// 0x590
	COutputEvent m_Output5a8;	// 0x5a8
	int m_n5c0;	// 0x5c0
	char m_b5c4;	// 0x5c4
};
