// CTEBeamRingPoint: beam ring temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "ServerClass.h"

class CTEBeamRingPoint
{
public:
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEBeamRingPoint *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const float *pCenter, int unused);	// "CTEBeamRingPoint::Test": fills the fields with test values around pCenter and fires it to a broadcast recipient filter (the second stack argument is unused)
	virtual void vfunc4(int a, int b);	// "Create": fires the temp entity with the fields below to the recipient filter

	void sub_10008404();	// destructor body
	void sub_10009b6a(int a, int b);	// slot 4 (stub 0x10009b6a): sends the temp entity, called directly on the global instance after its fields are filled
	CTEBeamRingPoint *sub_1005cbc0(int a);	// constructor body: base constructor (0x1000b1a4), vtable, fields 0x44..0x54; returns this

	char m_pad0004[0x0c - 4];
	int m_n0c;
	char m_pad10[0x14 - 0x10];
	int m_n14;
	int m_n18;
	float m_f1c;
	float m_f20;
	char m_pad24[0x2c - 0x24];
	float m_f2c;
	int m_n30;
	int m_n34;
	int m_n38;
	int m_n3c;
	int m_n40;
	float m_vecCenter[3];	// 0x44
	float m_flStartRadius;	// 0x50
	float m_flEndRadius;	// 0x54
};
