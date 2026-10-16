// CAI_Behavior<NPC_CLASS, ID>: an AI behaviour bolted onto an NPC.
// The instantiation the game uses is CAI_Behavior<CAI_BaseNPC, 100000> (the ID
// is the base of the behaviour's schedule/task id range).
// Only the slots up to the ones decompiled code needs are declared; the
// others are placeholders that keep the slot numbers right.
#pragma once

#include "CAI_BaseNPC.h"

template <class NPC_CLASS, int ID>
class CAI_Behavior
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13();
	virtual int vfunc14(int a, int b, int c);
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23();
	virtual char vfunc24(int a);
	virtual char vfunc25(int a);

	char m_pad0004[0xc];	// 0x0004 .. 0x000F
	char m_flag10;	// 0x0010
	char m_pad0011[3];
	NPC_CLASS *m_pOuter;	// 0x0014
};
