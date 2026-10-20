// CTEUserTracer: user tracer temp entity. Declared flat (bases not recovered).
#pragma once

class CTEUserTracer
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEUserTracer *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000b2b7();	// destructor body
	void sub_1006aad0(int a, int b);	// slot 4 (the Create/Send step), called directly with the filter and delay

	char m_pad04[0x8];
	float m_vOrigin[3];	// 0x0c
	float m_vEnd[3];	// 0x18
	int m_nField24;	// 0x24
	char m_bField28;	// 0x28
	char m_pad29[3];
	int m_nField2c;	// 0x2c
};
