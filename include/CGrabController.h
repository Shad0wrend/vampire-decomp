// CGrabController (RTTI .?AVCGrabController@@): base IMotionEvent at +0x0 is not modelled;
// primary vtable 0x10514edc has 1 slot.
#pragma once

struct CGrabHandle
{
	int m_Index;
	CGrabHandle() { m_Index = -1; }
};

class CGrabController
{
public:
	CGrabController();

	virtual void vfunc0();

	char m_pad0004[0x18];		// 0x0004 .. 0x001B
	float m_f1c;
	float m_f20;
	float m_f24;
	float m_f28;
	float m_f2c;
	float m_f30;
	char m_pad0034[4];
	float m_f38;
	float m_f3c;
	char m_pad0040[0x10c];		// 0x0040 .. 0x014B
	CGrabHandle m_h14c;
	float m_v150[3];
	char m_b15c;
};
