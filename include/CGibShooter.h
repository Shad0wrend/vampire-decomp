// CGibShooter: gib shooter entity. Declared standalone: only the members the matched functions touch.
#pragma once

class CGibShooter
{
public:
	char m_pad0000[0x17c];
	int m_nNextThink;	// 0x17c (raw bits of the float)

	void sub_100f4730(int a, int b, int c, int d);	// slot 173: SetThink(stub 0x1000913d), then the next think time = curtime
	void sub_1000913d();	// think function
	void sub_100ac4e0(void (CGibShooter::*pfn)(), int a, int b);	// SetThink
	CGibShooter *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
};
