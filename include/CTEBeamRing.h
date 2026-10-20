// CTEBeamRing: beam ring temp entity. Declared flat (bases not recovered).
#pragma once

class CTEBeamRing
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamRing *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3();
	virtual void vfunc4(int filter, int delay);	// "CTEBeamRing::Create"-like: sends the effect described by the fields below

	void sub_10002667();	// destructor body

	int m_pad04[2];
	int m_n0c;	// 0x0c
	int m_n10;	// 0x10
	int m_n14;	// 0x14
	int m_n18;	// 0x18
	int m_n1c;	// 0x1c
	float m_f20;	// 0x20
	float m_f24;	// 0x24
	int m_n28;	// 0x28
	float m_f2c;	// 0x2c
	int m_n30;	// 0x30
	int m_n34;	// 0x34
	int m_n38;	// 0x38
	int m_n3c;	// 0x3c
	int m_n40;	// 0x40
	int m_n44;	// 0x44
	int m_n48;	// 0x48
};
