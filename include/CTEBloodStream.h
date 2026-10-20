// CTEBloodStream: blood stream temp entity. Declared flat (bases not recovered).
#pragma once

class CTEBloodStream
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBloodStream *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100141d2();	// destructor body
	void vfunc4(int pFilter, int delay);	// "CTEBloodStream::Test"-like: sends the effect with the fields below (called directly through the stub at 0x10002ff9)

	char m_pad0004[8];
	int m_vecOrigin[3];	// 0x0c
	int m_vecDirection[3];	// 0x18
	int m_n24;	// 0x24
	int m_n28;	// 0x28
	int m_n2c;	// 0x2c
	int m_n30;	// 0x30
	int m_n34;	// 0x34
};
