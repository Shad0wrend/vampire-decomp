// CBaseButton: the func_button family of entities.
// Derives (through CBaseToggle) from CBaseEntity; only the vtable slots that
// decompiled code needs are given their real names, the others are placeholders
// that keep the slot indices of the game's primary vtable (0x1045293c).
#pragma once

#include "COutputEvent.h"

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
	void sub_100c9560();	// the button is pressed: plays the sound, fires the output at +0x590 (activator: the entity of the handle at +0x53c), state 2, think function sub_100c96a0 and moves to position 1 (or turns to angle 1 when the byte at +0x55d is set)

	char m_pad0004[0x114 - 4];
	void *m_pfnThink;	// 0x114
	char m_pad0118[0x164 - 0x118];
	float m_flWait;	// 0x164
	char m_pad0168[0x204 - 0x168];
	unsigned int m_spawnflags;	// 0x204
	char m_pad0208[0x4f8 - 0x208];
	int m_nState;	// 0x4f8
	char m_pad04fc[0x514 - 0x4fc];
	float m_vecPosition1[3];	// 0x514
	float m_vecAngle1[3];	// 0x520
	float m_vecPosition2[3];	// 0x52c
	unsigned int m_hActivator;	// 0x53c
	char m_pad0540[0x55d - 0x540];
	char m_bUseAngles;	// 0x55d
	char m_pad055e[0x590 - 0x55e];
	COutputEvent m_OnPressed;	// 0x590
	char m_pad05a8[0x5c4 - 0x5a8];
	char m_bLocked;	// 0x5c4
};
