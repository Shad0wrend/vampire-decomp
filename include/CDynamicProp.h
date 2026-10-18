// CDynamicProp: dynamic prop entity. Declared flat (bases not recovered); only what the matched functions need.
#pragma once

#include "CCineNPC.h"

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

	char m_pad0004[0x730 - 4];
	CCineNPCSlot m_slotA;	// 0x730
	CCineNPCSlot m_slotB;	// 0x748
	char m_pad0760[0x77c - 0x760];
	CCineNPCSlot m_slotC;	// 0x77c
	CCineNPCSlot m_slotD;	// 0x794
	CCineNPCSlot m_slotE;	// 0x7ac
};
