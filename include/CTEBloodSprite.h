// CTEBloodSprite: blood sprite temp entity. Declared flat (base CBaseTempEntity at +0x0 not modelled); only the vtable head is modelled.
#pragma once

class CTEBloodSprite
{
public:
	CTEBloodSprite(const char *name);	// 0x1005d8f0

	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBloodSprite *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000d4b8();	// destructor body

	char m_pad0004[8];
	int m_c[3];	// 0x000c
	char m_pad0018[12];
	int m_24[7];	// 0x0024
};
