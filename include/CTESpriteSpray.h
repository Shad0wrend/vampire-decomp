// CTESpriteSpray: sprite spray temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTESpriteSpray
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTESpriteSpray *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000bc7b();	// destructor body
	void sub_100686b0(int a, int b);	// "CTESpriteSpray::Create" (called through the stub at 0x100014b5)

	char m_pad0004[8];
	int m_mins[3];	// 0x000c
	int m_maxs[3];	// 0x0018
	int m_f24;
	int m_f28;
	int m_f2c;
	int m_f30;
};
