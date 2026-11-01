// CTEBeamLaser: beam laser temp entity. Declared flat (bases not recovered).
#pragma once

#include "ServerClass.h"
#include "CTEBaseBeam.h"

class CTEBeamLaser
{
public:
	CTEBeamLaser(const char *name);	// 0x1005b940: base CTEBaseBeam constructor call, vtable, +0x44/+0x48 cleared
	virtual ServerClass *vfunc0();	// GetServerClass
	virtual int vfunc1();
	virtual CTEBeamLaser *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(int a, int b);	// "CTEBeamLaser::Test": fills the fields with test values and fires it to a broadcast recipient filter (the two stack arguments are unused)
	virtual void vfunc4(int pFilter, int delay);	// "CTEBeamLaser::Create": fires the temp entity with the fields below to the recipient filter

	void sub_100051c8();	// destructor body

	char m_pad0004[0x0c - 4];
	int m_n0c;
	int m_n10;
	int m_n14;
	int m_n18;
	int m_n1c;
	float m_f20;
	float m_f24;
	int m_n28;
	float m_f2c;
	int m_n30;
	int m_n34;
	int m_n38;
	int m_n3c;
	int m_n40;
	int m_n44;
	int m_n48;
};
