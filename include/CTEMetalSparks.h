// CTEMetalSparks: metal sparks temp entity. Declared flat (bases not recovered).
#pragma once

class CTEMetalSparks
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEMetalSparks *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000e340();	// destructor body
	void sub_10059fe0(int a, int b);	// "CTEMetalSparks::Create" (called through the stub at 0x10004fa7)

	char m_pad0004[8];
	int m_pos[3];	// 0x000c
	int m_dir[3];	// 0x0018
};
