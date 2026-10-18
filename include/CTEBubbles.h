// CTEBubbles: bubbles temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBubbles
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBubbles *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000e2c8();	// destructor body
	void sub_1005f7e0(int a, int b);	// "CTEBubbles::Create" (called through the stub at 0x10011897)

	char m_pad0004[8];
	int m_mins[3];	// 0x000c
	int m_maxs[3];	// 0x0018
	int m_f24;
	int m_f28;
	int m_f2c;
	int m_f30;
};
