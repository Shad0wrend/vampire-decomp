// CTEDecal: decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEDecal
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100038eb();	// destructor body
	void sub_100606c0(int a, int b);	// called through the stub at 0x1000b03c

	char m_pad0004[8];
	int m_mins[3];	// 0x000c
	int m_maxs[3];	// 0x0018
	int m_f24;
	int m_f28;
	int m_f2c;
	char m_f30;
};
