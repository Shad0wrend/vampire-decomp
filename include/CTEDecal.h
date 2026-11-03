// CTEDecal: decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "ServerClass.h"

class CTEDecal
{
public:
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100038eb();	// destructor body
	void sub_100606c0(int a, int b);	// called through the stub at 0x1000b03c
	CTEDecal *sub_10060380(int a);	// 0x10060380: the base temp entity's constructor (0x10015334), then the vtable and the zeroed fields at +0xc, +0x10, +0x14, +0x24, +0x2c

	char m_pad0004[8];
	int m_mins[3];	// 0x000c
	int m_maxs[3];	// 0x0018
	int m_f24;
	int m_f28;
	int m_f2c;
	char m_f30;
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
};
